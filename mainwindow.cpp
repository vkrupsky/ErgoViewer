#include "mainwindow.h"

#include <QtGui>
#include "galleryview.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //QPushButton * b = new QPushButton("click", this);
    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    //mainLayout->addWidget(b);
    mainLayout->addWidget(new QLabel("someText", this));
    setCentralWidget(new QFrame(this));
    centralWidget()->setLayout(mainLayout);
    GalleryView * view = new GalleryView(this);
    mainLayout->addWidget(view);
}

MainWindow::~MainWindow()
{
    
}

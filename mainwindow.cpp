#include "mainwindow.h"

#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton * b = new QPushButton("click", this);
    QVBoxLayout * mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(b);
    mainLayout->addWidget(new QLabel("someText", this));
    setCentralWidget(new QFrame(this));
    centralWidget()->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
    
}

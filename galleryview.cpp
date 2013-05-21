#include "galleryview.h"

#include <QtCore>

GalleryView::GalleryView(QWidget *parent) :
    QWidget(parent)
{
}

void GalleryView::open(const QString & filePath) {
    QFileInfo fInfo(filePath);
    QFile file(filePath);
    //file.
    if(fInfo.isDir()) {
        dir.setPath(fInfo.path());
    } else {
        dir = fInfo.absoluteDir();
    }
    qDebug() << "dir.path = " << dir.path();
}


void GalleryView::keyReleaseEvent(QKeyEvent * e) {
    if(e->key() == Qt::Key_Space) {
        open("./testGallery/AMX-10.jpg");
    }

}

void GalleryView::paintEvent(QPaintEvent * e) {
    QPainter p(this);
    p.drawRect(rect().adjusted(0,0,-1,-1));
}

void GalleryView::mouseReleaseEvent(QMouseEvent * e) {
    open("./testGallery/AMX-10.jpg");
}

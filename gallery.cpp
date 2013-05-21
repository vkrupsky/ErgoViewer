#include "gallery.h"

#include <QtCore>

Gallery::Gallery(QObject *parent) :
    QObject(parent)
{
}

bool Gallery::open(const QString & path) {
    QDir dir(path);
    dir.setFilter(QDir::Files);

}

QPixmap & Gallery::getIconOfCurrentPixmap() {

}

#ifndef GALLERY_H
#define GALLERY_H

#include <QObject>
#include <QPixmap>

class Gallery : public QObject
{
    Q_OBJECT
public:
    explicit Gallery(QObject *parent = 0);
    bool open(const QString & path);

    QPixmap & getIconOfCurrentPixmap();

signals:
    
public slots:
    
};

#endif // GALLERY_H

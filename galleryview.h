#ifndef GALLERYVIEW_H
#define GALLERYVIEW_H

#include <QtGui>

class GalleryView : public QWidget
{
    Q_OBJECT
public:
    explicit GalleryView(QWidget *parent = 0);
    
signals:
    
public slots:
    void open(const QString & filePath);

protected:
    void keyReleaseEvent(QKeyEvent *);
    void paintEvent(QPaintEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    QDir dir;
};

#endif // GALLERYVIEW_H

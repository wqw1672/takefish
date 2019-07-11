#ifndef QGUN_H
#define QGUN_H
#include <QGraphicsItem>
#include <QWidget>
#include <QPixmap>
#include <QPainter>
#include "qpixmapitem.h"

class QGun:public Qpixmapitem
{
public:
    int my_type;//2ΪGUN
    QGun(const QString & fileName,QGraphicsScene *scence);
//    virtual QRectF boundingRect() const;
//    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
private:
//    QPixmap *pixmap;
};

#endif // QGUN_H

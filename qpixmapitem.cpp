#include "qpixmapitem.h"

Qpixmapitem::Qpixmapitem(const QString & fileName,QGraphicsScene *scence)
{
    pixmap.load(fileName);
    scence->addItem(this);
}

QRectF Qpixmapitem::boundingRect() const//����һ�����ο�
{
    return QRectF(-pixmap.width()/2,-pixmap.height(),pixmap.width(),pixmap.height());
}
void Qpixmapitem::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);//���»���
}


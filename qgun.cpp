#include "qgun.h"

QGun::QGun(const QString & fileName,QGraphicsScene *scence):Qpixmapitem(fileName,scence)
{
my_type=2;
}
//QRectF QGun::boundingRect() const//返回一个矩形框
//{
//    return QRectF(-pixmap->width(),-pixmap->height(),pixmap->width(),pixmap->height());
//}
//void QGun::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
//{
//    painter->drawPixmap(-pixmap->width(),-pixmap->height(),*pixmap);//重新绘制
//}

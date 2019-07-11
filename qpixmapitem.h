#ifndef QPIXMAPITEM_H
#define QPIXMAPITEM_H
#include <QGraphicsItem>
#include <QWidget>
#include <QPixmap>
#include <QPainter>
#include <QGraphicsScene>
class Qpixmapitem:public QGraphicsItem
{
public:
    Qpixmapitem(const QString & fileName,QGraphicsScene *scence);
    QRectF boundingRect() const; //重写返回item大概的区域
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//重写用来绘制item内容
    protected:
        QPixmap pixmap;
};

#endif // QPIXMAPITEM_H

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
    QRectF boundingRect() const; //��д����item��ŵ�����
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//��д��������item����
    protected:
        QPixmap pixmap;
};

#endif // QPIXMAPITEM_H

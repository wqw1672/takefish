#ifndef QBULLET_H
#define QBULLET_H
#include "qpixmapitem.h"
#include <QtGui>
#include "qfish.h"
#include "qfishnet.h"
#include <QGraphicsScene>
class qbullet:public Qpixmapitem
{
public:
    qbullet(const QString & fileName,QGraphicsScene *scence,qreal angle);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//重写用来绘制item内容
    void advance(int phase);
    void docolliding();

private:
    QGraphicsScene *scence;
};

#endif // QBULLET_H

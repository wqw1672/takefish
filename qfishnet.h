#ifndef QFISHNET_H
#define QFISHNET_H
#include"qpixmapitem.h"
#include "qfish.h"
class Qfishnet:public Qpixmapitem
{
public:
    int my_type;//3为网
    Qfishnet(const QString & fileName,QGraphicsScene *scence);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//重写用来绘制item内容
    void advance(int phase);
};

#endif // QFISHNET_H

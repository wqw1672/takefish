#ifndef QFISHNET_H
#define QFISHNET_H
#include"qpixmapitem.h"
#include "qfish.h"
class Qfishnet:public Qpixmapitem
{
public:
    int my_type;//3Ϊ��
    Qfishnet(const QString & fileName,QGraphicsScene *scence);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//��д��������item����
    void advance(int phase);
};

#endif // QFISHNET_H

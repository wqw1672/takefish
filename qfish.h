#ifndef QFISH_H
#define QFISH_H
#include"qpixmapitem.h"
#include <stdio.h>
#include <QDebug>

class Qfish:public Qpixmapitem
{
public:
    int my_type;//1 Ϊfish
    Qfish(const QString & fileName,QGraphicsScene *scence);
    void advance(int phase);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);//��д��������item����
private:
    QPixmap pixmap;
};

#endif // QFISH_H

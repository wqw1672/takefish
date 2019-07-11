#include "qfishnet.h"

Qfishnet::Qfishnet(const QString & fileName,QGraphicsScene *scence):Qpixmapitem(fileName,scence)
{
my_type=3;
}
void Qfishnet::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)//��д��������item����
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);//���»���

    if(this->collidingItems().count()>0)
    {
    QList<QGraphicsItem *>list=this->collidingItems();
    QList<QGraphicsItem *>::Iterator p;
    Qfish *fish;
    p=list.begin();
    while(p!=list.end())
    {
        fish=(Qfish *)(*p);
        if(fish->my_type==1)
        fish->setPos(-130,100+qrand()%400);
        p++;
    }
    }
}

void Qfishnet::advance(int phase)//ֻҪ����Ҫ���ȫ�����ó������advance �����Ⱥ�˳�����
{
    //    this->hide();

    delete this;
}

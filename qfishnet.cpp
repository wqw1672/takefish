#include "qfishnet.h"

Qfishnet::Qfishnet(const QString & fileName,QGraphicsScene *scence):Qpixmapitem(fileName,scence)
{
my_type=3;
}
void Qfishnet::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)//重写用来绘制item内容
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);//重新绘制

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

void Qfishnet::advance(int phase)//只要符合要求会全部调用场景里的advance 并且先后顺序随机
{
    //    this->hide();

    delete this;
}

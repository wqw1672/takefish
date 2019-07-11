#include "qbullet.h"

qbullet::qbullet(const QString & fileName,QGraphicsScene *scence,qreal angle):Qpixmapitem(fileName,scence)
{
    qreal dx,dy;
    //angle是一个值 要把它转化为角度
    qreal rad;
    rad=angle*3.14/180;
    dx=70*cos(rad);
    dy=70*sin(rad);
    this->scence=scence;
    this->setPos(scence->width()/2+dx,scence->height()-dy);
    this->setRotation(90-angle);
}
void qbullet::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)//重写用来绘制item内容
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);//重新绘制
    if(this->collidingItems().count()>0)
    {
        Qfish *fish;
        fish=(Qfish *)(collidingItems().first());
        if(fish->my_type==1)
           docolliding();
    }
}

void qbullet::advance(int phase)
{
    if(mapToScene(0,0).x()<=0||mapToScene(0,0).x()>=800)
    {
        delete this;
    }

    else
    {
        this->setPos(mapToScene(0,-20));

    }
}
void qbullet::docolliding()
{
    Qfishnet *net=new Qfishnet("IMAGE/net2.png",this->scence);
    net->setPos(mapToScene(0,0));
    delete this;
}
//用来做判断是否碰到的是鱼
template<class T>
qreal found_type(T t)
{
    return 1;
}
qreal found_type(Qfish *T)
{
   return 0;
}

#include "qfish.h"

Qfish::Qfish(const QString & fileName,QGraphicsScene *scence):Qpixmapitem(fileName,scence)
{
    my_type=1;
    setPos(-130,100+qrand()%400);
}
void Qfish::advance(int phase)
{

   static int speed_xpos=5;
    int speed_ypos=0;
    if(mapToScene(0,0).y()<=0||mapToScene(0,0).x()>=800)
    {
        setPos(-130,100+qrand()%400);
        speed_xpos=5+qrand()%5;
    }
    this->setPos(mapToScene(speed_xpos,speed_ypos));//mapToScene(0,0)����Ŀ�굱ǰ��λ�� ÿ����ʱ��ʱ����X��Y�ƶ��ľ���

}
void Qfish::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)//��д��������item����
{
    static int i=2;
    char filename[50]="0";
    if(i>4)
     {  i=1;}
    sprintf(filename,"IMAGE/shark_r%d.png",i);
    i+=1;
    pixmap.load(filename);
//    qDebug() << "1" ;
            painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);//���»���
}

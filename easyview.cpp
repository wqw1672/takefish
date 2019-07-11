#include "easyview.h"

Easyview::Easyview(QGraphicsView *parent) :
    QGraphicsView(parent)
{


    this->setFixedSize(800,533);
    this->setWindowTitle("�������");
    this->setWindowIcon(QIcon("IMAGE/Fish_Icon.png"));//���ô���ͼ��
    this->setAutoFillBackground(true);//��ԭ���Ĵ�������
    this->setMouseTracking(true);//���òŻ�ִ��mouseMoveEvent
//    QPalette palette;
//    palette.setColor(QPalette::Background,Qt::blue);
//    palette.setBrush(QPalette::Background,QBrush(QPixmap("IMAGE/seaworld1.png")));//�ñ�ˢ�����ñ���
    this->setBackgroundBrush(QBrush(QPixmap("IMAGE/seaworld1.png")));
    scence = new QGraphicsScene;
    scence->setSceneRect(0,0,this->width()-10,this->height()-20);//���ó���
    this->setScene(scence);

    gun=new QGun("IMAGE/pao5.png",scence);
    gun->setPos(this->width()/2,this->height());
//    scence->addItem(gun);//��������ӽ�����



    fish1=new Qfish("IMAGE/shark_r1.png",scence);
//    fish1->setPos(-130,100);
//    scence->addItem(fish1);

    fish2=new Qfish("IMAGE/shark_r1.png",scence);
//    fish2->setPos(-80,150);
//    scence->addItem(fish2);

    fish3=new Qfish("IMAGE/shark_r1.png",scence);
//    fish3->setPos(-50,200);
//    scence->addItem(fish3);

    fish4=new Qfish("IMAGE/shark_r1.png",scence);
//    fish4->setPos(-100,300);
//    scence->addItem(fish4);

    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),scence,SLOT(advance()));
    timer->start(100);

}
void Easyview::resizeEvent(QResizeEvent *event)
{
    this->setBackgroundBrush(QBrush(QPixmap("IMAGE/seaworld1.png").scaled(event->size())));//����ͼƬ����
}
void Easyview::mouseMoveEvent(QMouseEvent *event)
{
    QPoint p;
    p=event->pos();

    //����
    QLine line(this->width()/2,this->height(),p.x(),p.y());

    QLineF linef(line);
    gun->setRotation(-linef.angle()+90);

    qDebug("angle:%f\n",linef.angle());
}
void Easyview::mousePressEvent(QMouseEvent *event)
{
    QPoint p=event->pos();
    QLineF linef(this->width()/2,this->height(),p.x(),p.y());

    qbullet *bullet=new qbullet("IMAGE/B5.png",scence,linef.angle());
//    bullet->setPos(this->width()/2,this->height());

//    bullet->setRotation(-linef.angle()+90);
}

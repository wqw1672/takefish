#include "widget.h"



Widget::Widget(QWidget *parent):QWidget(parent)
{
    dia= new login_dialog(this);

//    this->setFixedSize(800,533);
//    this->setWindowTitle("捕鱼达人");
//    this->setWindowIcon(QIcon("IMAGE/Fish_Icon.png"));//设置窗口图标
//    login_dialog dialog(this);

//    QPalette palette;
//    palette.setBrush(QPalette::Background,QBrush(QPixmap("IMAGE/aboutus.png")));//用笔刷来设置背景
//    this->setPalette(palette);

//    label=new QLabel(this);
//    label->setPixmap(QPixmap("IMAGE/logo.png"));

//    startbtn=new QPushButton(this);
//    startbtn->setIcon(QIcon("IMAGE/start.png"));
//    startbtn->setIconSize(QSize(220,56));
//    startbtn->setFlat(true); //背景白框去除
//    startbtn->setFocusPolicy(Qt::NoFocus);//去除黑虚框
//    connect(startbtn,SIGNAL(clicked()),this,SLOT(startbtn_click()));
//    helpbtn=new QPushButton(this);
//    helpbtn->setIcon(QIcon("IMAGE/help.png"));
//    helpbtn->setIconSize(QSize(140,50));
//    helpbtn->setFlat(true);

//    setbtn=new QPushButton(this);
//    setbtn->setIcon(QIcon("IMAGE/set.png"));
//    setbtn->setIconSize(QSize(180,58));
//    setbtn->setFlat(true);

//    quitbtn=new QPushButton(this);
//    quitbtn->setIcon(QIcon("IMAGE/exit.png"));
//    quitbtn->setIconSize(QSize(60,32));
//    quitbtn->setFlat(true);
//    connect(quitbtn,SIGNAL(clicked()),this,SLOT(quitbtn_click()));

//    vboxlayout=new QVBoxLayout(this);
//    vboxlayout->addWidget(label);
//    vboxlayout->addWidget(startbtn);
//    vboxlayout->addWidget(helpbtn);
//    vboxlayout->addWidget(setbtn);
//    vboxlayout->addWidget(quitbtn);
//    vboxlayout->setAlignment(Qt::AlignHCenter);
}

Widget::~Widget()
{
//    delete this->label;
//    delete this->startbtn;
//    delete this->setbtn;
//    delete this->helpbtn;
//    delete this->quitbtn;
//    delete this->w;
//    delete this->vboxlayout;
}
//void Widget::startbtn_click()
//{
//    w=new gamewidget(this);
//    w->show();
//}
//void Widget::quitbtn_click()
//{
//    if(QMessageBox::Yes==QMessageBox::question(this,"提示","你确定要退出游戏吗？",QMessageBox::Yes,QMessageBox::No))
//    {
//        this->close();
//    }

//}


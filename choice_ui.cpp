#include "choice_ui.h"

choice_ui::choice_ui(QWidget *parent):QWidget(parent)
{
    this->setFixedSize(800,533);
    this->setWindowTitle("�������");
    this->setWindowIcon(QIcon("IMAGE/Fish_Icon.png"));//���ô���ͼ��

    QPalette palette;
//    palette.setColor(QPalette::Background,Qt::blue);
    palette.setBrush(QPalette::Background,QBrush(QPixmap("IMAGE/aboutus.png")));//�ñ�ˢ�����ñ���
    this->setPalette(palette);

    label=new QLabel(this);
    label->setPixmap(QPixmap("IMAGE/logo.png"));

    startbtn=new QPushButton(this);
    startbtn->setIcon(QIcon("IMAGE/start.png"));
    startbtn->setIconSize(QSize(220,56));
    startbtn->setFlat(true); //�����׿�ȥ��
    startbtn->setFocusPolicy(Qt::NoFocus);//ȥ�������
    connect(startbtn,SIGNAL(clicked()),this,SLOT(startbtn_click()));
    helpbtn=new QPushButton(this);
    helpbtn->setIcon(QIcon("IMAGE/help.png"));
    helpbtn->setIconSize(QSize(140,50));
    helpbtn->setFlat(true);

    setbtn=new QPushButton(this);
    setbtn->setIcon(QIcon("IMAGE/set.png"));
    setbtn->setIconSize(QSize(180,58));
    setbtn->setFlat(true);

    quitbtn=new QPushButton(this);
    quitbtn->setIcon(QIcon("IMAGE/exit.png"));
    quitbtn->setIconSize(QSize(60,32));
    quitbtn->setFlat(true);
    connect(quitbtn,SIGNAL(clicked()),this,SLOT(quitbtn_click()));

    vboxlayout=new QVBoxLayout(this);
    vboxlayout->addWidget(label);
    vboxlayout->addWidget(startbtn);
    vboxlayout->addWidget(helpbtn);
    vboxlayout->addWidget(setbtn);
    vboxlayout->addWidget(quitbtn);
    vboxlayout->setAlignment(Qt::AlignHCenter);
}

choice_ui::~choice_ui()
{
    delete this->label;
    delete this->startbtn;
    delete this->setbtn;
    delete this->helpbtn;
    delete this->quitbtn;
    delete this->w;
    delete this->vboxlayout;
}
void
choice_ui::startbtn_click()
{
    w=new gamewidget(this);
    w->show();
}
void
choice_ui::quitbtn_click()
{
    if(QMessageBox::Yes==QMessageBox::question(this,"��ʾ","��ȷ��Ҫ�˳���Ϸ��",QMessageBox::Yes,QMessageBox::No))
    {
        this->close();
    }

}


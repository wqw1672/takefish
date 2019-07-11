#include "gamewidget.h"

gamewidget::gamewidget(QWidget *parent) :
    QWidget(parent)
{
    this->parent=parent;
    this->setFixedSize(800,533);
    this->setAutoFillBackground(true);//½«Ô­À´µÄ´°¿ÚÆÌÂú
    QPalette palette;
//    palette.setColor(QPalette::Background,Qt::blue);
    palette.setBrush(QPalette::Background,QBrush(QPixmap("IMAGE/aboutus.png")));//ÓÃ±ÊË¢À´ÉèÖÃ±³¾°
    this->setPalette(palette);


    easybtn=new QPushButton(this);
    easybtn->setIcon(QIcon("IMAGE/easy.png"));
    easybtn->setIconSize(QSize(120,52));
    easybtn->setFlat(true); //±³¾°°×¿òÈ¥³ý
    easybtn->setFocusPolicy(Qt::NoFocus);//È¥³ýºÚÐé¿ò
    connect(easybtn,SIGNAL(clicked()),this,SLOT(easy_click()));

    commonbtn=new QPushButton(this);
    commonbtn->setIcon(QIcon("IMAGE/normal.png"));
    commonbtn->setIconSize(QSize(120,52));
    commonbtn->setFlat(true);

    hardbtn=new QPushButton(this);
    hardbtn->setIcon(QIcon("IMAGE/hard.png"));
    hardbtn->setIconSize(QSize(120,52));
    hardbtn->setFlat(true);

    returnbtn=new QPushButton(this);
    returnbtn->setIcon(QIcon("IMAGE/back.png"));
    returnbtn->setIconSize(QSize(120,52));
    returnbtn->setFlat(true);
    connect(returnbtn,SIGNAL(clicked()),this,SLOT(return_main()));
    gamelayout=new QVBoxLayout(this);
    gamelayout->addWidget(easybtn);
    gamelayout->addWidget(commonbtn);
    gamelayout->addWidget(hardbtn);
    gamelayout->addWidget(returnbtn);
    gamelayout->setAlignment(Qt::AlignHCenter);
}
void gamewidget::return_main()
{
     this->hide();
}
void gamewidget::easy_click()
{
    this->parent->hide();
    easyview=new Easyview;
    easyview->show();
}

void gamewidget::common_click()
{

}

void gamewidget::hard_click()
{

}
gamewidget::~gamewidget()
{
    delete this->easybtn;
    delete this->commonbtn;
    delete this->commonbtn;
    delete this->hardbtn;
    delete this->returnbtn;
    delete this->gamelayout;
}


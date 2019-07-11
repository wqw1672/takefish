#include "login_ui.h"
#include <QPushButton>
#include <QWidget>

login_dialog::login_dialog(QWidget *parent):QDialog(parent)
{

    frame = new QFrame(this);
    frame->resize(800,533);
    this->setFixedSize(800,533);
    frame->setObjectName("myframe");
    frame->setStyleSheet("QFrame#myframe{border-image:url(IMAGE/mainwindows.png)}" );
    frame->setParent(parent);

    user_label=new QLabel(this);
    user_label->move(70,80);
    user_label->setText("username");
    user_label->setParent(parent);

    user_edit=new QLineEdit(this);
    user_edit->move(140,80);
    user_edit->setPlaceholderText("please input username");
    user_edit->setParent(parent);


    pwd_label=new QLabel(this);
    pwd_label->move(70,130);
    pwd_label->setText("passwd");
    pwd_label->setParent(parent);


    pwd_edit=new QLineEdit(this);
    pwd_edit->move(140,130);
    pwd_edit->setPlaceholderText("please input passwd");
    pwd_edit->setParent(parent);


    login_btn=new QPushButton(this);
    login_btn->move(70,200);
    login_btn->setText("login");
    login_btn->setParent(parent);


    exit_btn=new QPushButton(this);
    exit_btn->move(220,200);
    exit_btn->setText("back");
    exit_btn->setParent(parent);

    connect(login_btn,SIGNAL(clicked()),this,SLOT(login_judge()));


}
login_dialog::~login_dialog()
{

}
void login_dialog::login_judge()
{
    if(this->user_edit->text()!="root")
    {
        QMessageBox msgBox;
        msgBox.setText("дЦйДхК╣дук╨еспнС");
        msgBox.exec();
    }
}

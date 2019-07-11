#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui/QWidget>
#include <QIcon>
#include <QPalette>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "gamewidget.h"
#include <QMessageBox>
#include <QResizeEvent>
#include "login_ui.h"

class Widget:public QWidget
{
   Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
login_dialog *dia;
//public slots:
//    void startbtn_click();
//    void quitbtn_click();
//private:
//    QLabel *label;
//    QPushButton *startbtn;
//    QPushButton *setbtn;
//    QPushButton *helpbtn;
//    QPushButton *quitbtn;
//    QVBoxLayout *vboxlayout;
//    gamewidget *w;
};

#endif // CHOICE_UI_H

#ifndef CHOICE_UI_H
#define CHOICE_UI_H
#include <QtGui/QWidget>
#include <QIcon>
#include <QPalette>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "gamewidget.h"
#include <QMessageBox>
#include <QResizeEvent>
class choice_ui:public QWidget
{
   Q_OBJECT
public:
   explicit choice_ui(QWidget *parent = 0);
    ~choice_ui();

public slots:
    void startbtn_click();
    void quitbtn_click();
private:
    QLabel *label;
    QPushButton *startbtn;
    QPushButton *setbtn;
    QPushButton *helpbtn;
    QPushButton *quitbtn;
    QVBoxLayout *vboxlayout;
    gamewidget *w;
};

#endif // CHOICE_UI_H

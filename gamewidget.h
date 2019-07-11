#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "easyview.h"
class gamewidget : public QWidget
{
    Q_OBJECT
public:
    explicit gamewidget(QWidget *parent = 0);
    ~gamewidget();

signals:

private:
    QPushButton *easybtn;
    QPushButton *commonbtn;
    QPushButton *hardbtn;
    QPushButton *returnbtn;
    QVBoxLayout *gamelayout;
    Easyview *easyview;
    QWidget *parent;
public slots:
    void return_main();
    void easy_click();
    void common_click();
    void hard_click();
};

#endif // GAMEWIDGET_H

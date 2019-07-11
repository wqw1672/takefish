#ifndef EASYVIEW_H
#define EASYVIEW_H

#include <QGraphicsView>
#include <QIcon>
#include <QPalette>
#include <QGraphicsScene>
#include <QResizeEvent>
#include "qgun.h"
#include "qfish.h"
#include <QTimer>
#include <QPoint>
#include <QLine>
#include <QLineF>
#include<QDebug>
#include "qbullet.h"

class Easyview : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Easyview(QGraphicsView *parent = 0);
    void mouseMoveEvent(QMouseEvent *event);

    void mousePressEvent(QMouseEvent *event);
private:
    QGraphicsScene *scence;
    QGun *gun;
    Qfish *fish1;
    Qfish *fish2;
    Qfish *fish3;
    Qfish *fish4;
    QTimer *timer;
    void resizeEvent(QResizeEvent *event);//��д��ͼ�¼����麯��,��ͼ�¼��ڲ����ã������ػ��ʱ���Զ�����

signals:

public slots:

};

#endif // EASYVIEW_H

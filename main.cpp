#include <QtGui/QApplication>
#include "widget.h"
#include <QTextCodec>
#include "gamewidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
//    gamewidget w;
//    w.show();
       Widget w;

//    login_dialog dlg(&w);
        w.show();

    return a.exec();
}

#ifndef LOGIN_UI_H
#define LOGIN_UI_H
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>

class login_dialog:public QDialog
{
    Q_OBJECT
public:
    login_dialog(QWidget *parent=0);
    ~login_dialog();
private:
    QFrame *frame;
    QLabel *user_label;
    QLabel *pwd_label;
    QLineEdit *user_edit;
    QLineEdit *pwd_edit;
    QPushButton *login_btn;
    QPushButton *exit_btn;
private slots:
    void login_judge();
};


#endif // LOGIN_UI_H

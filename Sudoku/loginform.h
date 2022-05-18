#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include "signupform.h"
#include <qstring.h>
namespace Ui {
class LoginForm;
}

class LoginForm : public QMainWindow
{
    Q_OBJECT



public:
    explicit LoginForm(QWidget *parent = nullptr);

    ~LoginForm();


private slots:
    void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
    Ui::LoginForm *ui;
	QString FName , LName , UserName , Password;
};

#endif // LOGINFORM_H

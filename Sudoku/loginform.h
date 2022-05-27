#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QMainWindow>
#include "signupform.h"
#include <qstring.h>
#include <user.h>
namespace Ui {
class LoginForm;
}

class LoginForm : public QMainWindow
{

	friend class Menu;
    Q_OBJECT



public:
    explicit LoginForm(QWidget *parent = nullptr);

    ~LoginForm();

	void SetUser(User const & User)
	{
		this->U = User;
	}

	User & getUser()
	{
		return U;
	}

private slots:
    void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	User U;
    Ui::LoginForm *ui;
	//QString FName , LName , UserName , Password;
};

#endif // LOGINFORM_H

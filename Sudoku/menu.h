#ifndef MENU_H
#define MENU_H
#include <user.h>
#include <QMainWindow>
#include "ui_menu.h"

using namespace std;
namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
	Q_OBJECT

	friend class LoginForm;

public:
	explicit Menu(QWidget *parent = nullptr);

	~Menu();

	void SetUser(User const & User)
	{
		this->User = User;
	}

	User & getUser()
	{
		return User;
	}


	void Welcome()
	{
		ui->WelcomeLB->clear ();
		ui->WelcomeLB->setText (" " + User.getFName () + " " + User.getLName () + " , Welcome!");
	}

private slots:
	void on_ExitBtn_clicked();

	void on_LogOutBtn_clicked();

	void on_PlayBtn_clicked();

private:
	User User;
	Ui::Menu *ui;
};

#endif // MENU_H

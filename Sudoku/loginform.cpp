#include "loginform.h"
#include "ui_loginform.h"
#include "signupform.h"
#include <cstring>
#include <qstring.h>
#include <fstream>
#include <QMessageBox>
#include <iostream>
#include <menu.h>
#include "ui_menu.h"
using namespace std;

LoginForm::LoginForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_clicked() //for sign up now !!
{
    SignUpForm *S = new SignUpForm;

    this->hide ();
    S->show ();
}

// ToShow message
int ShowMessage(QString Message)
{
	QMessageBox msgBox;
	msgBox.setInformativeText(Message);
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 300px;font:  10pt \"Rockwell Extra Bold\";");
	msgBox.setDefaultButton(QMessageBox::Ok);
	int R = msgBox.exec();
	return R;
}


//to check that the entry username password is valid or not
bool FindData(string EntryUsername , string EntryPassword)
{
	string Username, Password , FName , LName;
	int id;

	int Check = 0; //must be 2 to be true

	ifstream File("UserData.txt" , ios::in | ios::app);

	if (!File)
	{
		ShowMessage("The username or password is incorrect.");
	}

	while (File.is_open())
	{
		File >> Username;
		//File >> Password;

		if(Username == EntryUsername)
		{
			Check++;
			break;
		}
		if(File.eof())
			File.close();
	}

	while (File.is_open())
	{
		//File >> Username;
		File >> Password;

		if(Password == EntryPassword)
		{
			Check++;
			break;
		}
		if(File.eof())
			File.close();
	}
	if(Check == 2)
	{
		File >> FName >> LName >> id;
		return 1;
	}

	return 0;


}





void LoginForm::on_pushButton_2_clicked()
{
	if(User.LoadData(ui->UsernameTB->text ().toStdString() , ui->PasswordTB->text ().toStdString())) // Username and Password were found
	{
		Menu *F = new Menu();
		F->SetUser (User);
		F->Welcome ();
		this->close ();
		F->show ();
	}
	else
	{
		ShowMessage("The username or password is incorrect.");

		ui->UsernameTB->clear();
		ui->PasswordTB->clear();
	}

}

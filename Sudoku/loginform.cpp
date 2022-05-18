#include "loginform.h"
#include "ui_loginform.h"
#include "signupform.h"
#include <cstring>
#include <qstring.h>
#include <fstream>
#include <QMessageBox>
#include <iostream>

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

int ShowFailMessage()
{
	QMessageBox msgBox;
	msgBox.setInformativeText("The username or password is incorrect.");
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 300px;font:  10pt \"Rockwell Extra Bold\";");
	msgBox.setDefaultButton(QMessageBox::Ok);
	int R = msgBox.exec();
	return R;
}


bool FindData(string EntryUsername , string EntryPassword)
{
	string Username, Password;
	int Check = 0; //must be 2 to be true

	ifstream File("UserData.txt" , ios::in | ios::app);

	if (!File)
	{
		ShowFailMessage ();
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
		return 1;
	return 0;


}





void LoginForm::on_pushButton_2_clicked()
{
	if(FindData(ui->UsernameTB->text ().toStdString() , ui->PasswordTB->text ().toStdString()))
	{
		cerr  << "OK";
	}
	else
	{
		ShowFailMessage();

		ui->UsernameTB->clear();
		ui->PasswordTB->clear();
	}

}

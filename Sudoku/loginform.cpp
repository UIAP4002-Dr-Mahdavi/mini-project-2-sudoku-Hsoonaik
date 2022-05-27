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




void LoginForm::on_pushButton_2_clicked()
{
	if(U.LoadData(ui->UsernameTB->text ().toStdString() , ui->PasswordTB->text ().toStdString())) // Username and Password were found
	{
		Menu *F = new Menu();
		F->SetUser (U);
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

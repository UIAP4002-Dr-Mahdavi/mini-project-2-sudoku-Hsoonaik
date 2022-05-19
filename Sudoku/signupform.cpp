#include "signupform.h"
#include "ui_signupform.h"
#include "loginform.h"
#include <qstring.h>
#include <fstream>
#include <cstring>
#include <QMessageBox>
#include <user.h>

using namespace std;


SignUpForm::SignUpForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUpForm)
{
    ui->setupUi(this);
}


SignUpForm::~SignUpForm()
{
    delete ui;
}


void SaveId(int id)
{
	ofstream File("Maxid.dat" , ios::out);

	if (!File)
	{
	cerr << "some thing wrong during opening file!" << endl;
	exit(1);
	}
	File << id;

}

int FindId()
{
	int id;
	ifstream File("Maxid.dat" , ios::in | ios::app);

	if (!File)
		return 0;

	File >> id;
	return id + 1;

}


string find_username(string tmp)
{
	 string Username;

	 ifstream File("UserData.txt" , ios::in | ios::app);

	 if (!File)
	 {
	 cerr << "some thing wrong during opening file!" << endl;
	 exit(1);
	 }

	 while (File.is_open ())
	 {
		 File >> Username;
		 if(Username == tmp)
			 return Username;

		 if(File.eof())
			 File.close();
	 }
	 return "#";
}

bool duplicate_username_check(string Username)
{
	if(find_username(Username) != "#") // Error
		return 0;
	return 1;
}

int ShowMessage1(QString Message)
{
	QMessageBox msgBox;
	msgBox.setInformativeText(Message);
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 300px;font:  10pt \"Rockwell Extra Bold\";");
	msgBox.setDefaultButton(QMessageBox::Ok);
	int R = msgBox.exec();
	return R;
}


void SignUpForm::on_Register_clicked()
{
	User User;

	User.SetData (FindId() , ui->FNamTB->text () , ui->LNameTB->text () , ui->UserNameTB->text()  , ui->PasswordTB->text ());


	if(duplicate_username_check(User.getUsename ().toStdString()))
	{
		User.SaveData ();
		SaveId(User.getId ());
		ShowMessage1 ("Your registration was successfully completed.");

		LoginForm *F = new LoginForm;
		F->SetUser(&User);
		this->close();
		F->show();
	}
	else
	{
		ShowMessage1 ("Username already exists");

		User.ClearData();

		ui->FNamTB->clear();
		ui->LNameTB->clear();
		ui->UserNameTB->clear();
		ui->PasswordTB->clear();
	}
}






void SignUpForm::on_Register_2_clicked() //back click
{
	LoginForm *F = new LoginForm;
	this->close();
	F->show();
}

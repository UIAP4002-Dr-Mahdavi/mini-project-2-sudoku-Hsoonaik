#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>
#include <loginform.h>
#include <maingame.h>
Menu::Menu(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::Menu)
{
	ui->setupUi(this);
}


Menu::~Menu()
{
	delete ui;
}

int ShowExitMessage()
{
	QMessageBox msgBox;
	msgBox.setInformativeText("Are you sure you want to exit?");
	msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 130px;font:  10pt \"Rockwell Extra Bold\";");
	msgBox.setDefaultButton(QMessageBox::No);
	int R = msgBox.exec();
	return R;
}

void Menu::on_ExitBtn_clicked()
{
	int R = ShowExitMessage ();

	switch (R)
	{
	case QMessageBox::No :
		break;
	case QMessageBox::Yes:
		exit(0);
	}
}

void Menu::on_LogOutBtn_clicked()
{
	this->getUser ().ClearData ();
	LoginForm *F = new LoginForm();
	this->close ();
	F->show ();
}

void Menu::on_PlayBtn_clicked()
{
	MainGame *F = new MainGame(User);

	this->close ();
	F->show ();
}

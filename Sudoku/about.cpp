#include "about.h"
#include "ui_about.h"
#include <menu.h>

About::About(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::About)
{
	ui->setupUi(this);
}

About::~About()
{
	delete ui;
}

void About::on_Register_2_clicked()
{
	Menu *F = new Menu();
	this->close ();
	F->show ();
}

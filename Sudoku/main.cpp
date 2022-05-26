#include "mainwindow.h"
#include "loginform.h"
#include <table.h>
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	LoginForm *F = new LoginForm(); // Login form obj


	//Showing splash form
	{
//	w.setWindowOpacity (0.0);
//	w.show();
//	w.SplashEffect ();
	}

	w.close ();
	F->show ();

	return a.exec();


}

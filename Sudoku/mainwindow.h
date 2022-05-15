#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windows.h>
#include <ctime>
#include <chrono>
#include <time.h>
#include <conio.h>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

	//Wroten by ME!
	//for effect
	void SplashEffect()
	{
		chrono::steady_clock::time_point tend = chrono::steady_clock::now()
            + chrono::milliseconds(800);
		// for timer

		this->setWindowOpacity (0.0);
		double Value = 0.000065;


        while (chrono::steady_clock::now() < tend) // timer loop :)
		{
			this->setWindowOpacity (Value);
			Value += 0.000065;
		}
        Sleep(5000);
	}

private slots:

private:
	Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

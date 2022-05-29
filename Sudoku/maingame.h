#ifndef MAINGAME_H
#define MAINGAME_H

#include <QMainWindow>
#include <ui_maingame.h>
#include <table.h>
#include <string>
#include <qstring.h>
#include <table.h>
#include <user.h>
using namespace std;
namespace Ui {
class MainGame;
}

class MainGame : public QMainWindow
{
	Q_OBJECT

public:

	//to set the text center of each cell
	void setAlignmentCenter(int row, int column)
	{
		ui->tableWidget->item (row , column)->setTextAlignment (Qt::AlignCenter);
	}

	//#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#

	void setTableWidget(Table Table)
	{

		for(int i = 0 ; i < 9 ; i ++)
			for(int j = 0 ; j < 9; j++)
			{
				string tmp = to_string (Table.getValue (i , j));
				if(tmp == "0")
					continue;

				QTableWidgetItem * Item = new QTableWidgetItem();
				Item->setText (QString::fromStdString (tmp));
				ui->tableWidget->setItem (i , j , Item);
			}

	}

	//#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#

	void setNewItem(int r , int c , int Value)
	{
		ui->tableWidget->setItem( r, c, new QTableWidgetItem(QString::number (Value)));
	}

	//#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#

	void setTable(Table const & T)
	{
		this->T = T;
	}

	void setUser(User const &U)
	{
		this->U = U;
	}

	User & getUser()
	{
		return U;
	}



	explicit MainGame(User U ,  QWidget *parent = nullptr);
	~MainGame();

private slots:
	void on_tableWidget_cellChanged(int row, int column);

	void on_Register_2_clicked();

private:
	Table T;
	User U;
	Ui::MainGame *ui;
};

#endif // MAINGAME_H

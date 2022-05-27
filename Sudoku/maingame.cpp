#include "maingame.h"
#include "ui_maingame.h"
#include <QTableWidget>
#include <iostream>
#include <string>
#include <QMessageBox>
#include <menu.h>
MainGame::MainGame(User U , QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainGame)
{
	ui->setupUi(this);

	this->U = U;
	Table tmp;
	setTable (tmp);


	T.setRandomDatas ();
	int value;
	for(int i = 0 ; i < 9 ; i ++)
		for(int j = 0 ; j < 9; j++)
		{
			value = T.getValue(i , j);
			if(value == 0)
				continue;
			setNewItem (i , j , value);
		}
	T.setRandomDone = true;
}

MainGame::~MainGame()
{


	delete ui;
}



int ShowMessage_MainGame(QString Message)
{
	QMessageBox msgBox;
	msgBox.setInformativeText(Message);
	msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
	msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 130px;font:  10pt \"Rockwell Extra Bold\";");
	msgBox.setDefaultButton(QMessageBox::Yes);
	int R = msgBox.exec();
	return R;
}

void MainGame::on_tableWidget_cellChanged(int row, int column) // Change text
{
	//to set the alignment in center
	setAlignmentCenter (row , column);
	// only for when user enters a nums
	if(T.setRandomDone)
	{
		int value = ui->tableWidget->item (row , column)->text ().toInt ();

		if(value == -1)
		{
			ui->tableWidget->item (row , column)->setText ("!");
			T.Cells[row][column] = value;
		}

		else if(!T.RepitedValueCheck (row , column , value) || !T.RepitedInSquareCheck(row , column , value) || value > 9 || value < 1)
			ui->tableWidget->item (row , column)->setText ("!");

		else
			T.Cells[row][column] = value;

		QColor Green (255, 255, 0);
		ui->tableWidget->item (row , column)->setBackgroundColor (Green);
		ui->tableWidget->item (row , column)->setTextColor (Qt:: black) ;
	}

	//for random nums
	else
	{
		QColor Purple(170, 0, 91);
		ui->tableWidget->item (row , column)->setBackgroundColor (Purple);
	}

	if(T.isFull ()) // check if game is over or not
	{
		U.SaveSolvedTableCount ();
		U.LoadSolvedTableCount ();
		U.SolvedTables += 1;
		U.SaveSolvedTableCount ();



		int R = ShowMessage_MainGame("You win.\nWanna play another round");


		if(R == QMessageBox :: No)
		{
			Menu *F1 = new Menu();
			this->close ();
			F1->show ();
		}
		else if (R == QMessageBox :: Yes)
		{
			MainGame *F2 = new MainGame(U);
			this->close ();
			F2->show ();
		}
	}


}

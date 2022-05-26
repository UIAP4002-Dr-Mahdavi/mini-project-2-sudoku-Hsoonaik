#include "maingame.h"
#include "ui_maingame.h"
#include <QTableWidget>
#include <iostream>
#include <string>
MainGame::MainGame(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainGame)
{
	ui->setupUi(this);

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


void MainGame::on_tableWidget_cellChanged(int row, int column) // Change text
{
	//to set the alignment in center
	setAlignmentCenter (row , column);
	if(T.setRandomDone)
	{
	int value = ui->tableWidget->item (row , column)->text ().toInt ();

	if(!T.RepitedValueCheck (row , column , value) || !T.RepitedInSquareCheck(row , column , value) || value > 9 || value < 1)
		ui->tableWidget->item (row , column)->setText ("!");

	else
		T.Cells[row][column] = value;
	}

	else
	{
		QColor tmp(170, 0, 91);
		ui->tableWidget->item (row , column)->setBackgroundColor (tmp);
	}
}





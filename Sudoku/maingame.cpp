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

	Table T;


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
}

MainGame::~MainGame()
{


	delete ui;
}


void MainGame::on_tableWidget_cellChanged(int row, int column) // Change text
{
	//to set the alignment in center
	setAlignmentCenter (row , column);
}

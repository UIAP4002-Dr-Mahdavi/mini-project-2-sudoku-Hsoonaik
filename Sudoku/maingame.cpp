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

	Table Table;

	ui->tableWidget->clear ();
	ui->tableWidget->setRowCount (9);
	ui->tableWidget->setColumnCount (9);

	setNewItem (1 , 1 , 54);
}

MainGame::~MainGame()
{


	delete ui;
}


void setRandomDatas(Table Table)
{
	for(int i ; i = 0 ; i < 9)
		for(int j ; j = 0 ; j < 9)
		{
			int tmpI , tmpJ;
		}
}


void MainGame::on_tableWidget_cellChanged(int row, int column) // Change text
{
	//to set the alignment in center
	setAlignmentCenter (row , column);
}

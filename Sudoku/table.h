#ifndef TABLE_H
#define TABLE_H
#include <QString>
#include <iostream>
#include<time.h>

class Table
{
public:
	Table()
	{
		for(int i = 0 ; i < 9 ; i++)
			for(int j = 0 ; j < 9 ; j++)
				Cells[i][j] = 0;
	}

	void setValue(int i , int j , int Data)
	{
		Cells[i][j] = Data;
	}

	int getValue(int i , int j)
	{
		return Cells[i][j];
	}

	void setRandomDatas()
	{
		srand(time(0));
		int tmpI = rand() % 9;
		int tmpJ = rand() % 9; // to use for checking that the index is unique
		int tmpValue = rand() % 9 + 1;
		Cells[tmpI][tmpJ] = tmpValue;


		int r  , c , value ; // for value

		r = rand() % 9;
		c = rand() % 9;
		value = rand() % 9 + 1;

		for(int i = 0 ; i < 45 ; i++)
		{
			while(r == tmpI && c == tmpJ) // to avoid to select a repited index
			{
				r = rand() % 9;
				c = rand() % 9;
			}

			while(!RepitedValueCheck (r , c , value))
				value = rand() % 9 + 1;

			Cells[r][c] = value; // set the value

			tmpI = r;
			tmpJ = c; // for next round of loop
		}

	}

	bool RowCheck(int r , int c , int value)
	{
		for(int i = 0 ; i < 9; i++) // for columns
			if(i != c && Cells[r][i] == value) // if any cell rxept the value cell equals the value when row  = r return false
				return 0;
		return 1; //else true
	}
	bool Columncheck(int r , int c , int value)
	{
		for(int i = 0 ; i < 9 ; i++)
			if(i != r && Cells[i][c] == value)
				return 0;
		return 1;
	}
	bool RepitedValueCheck(int r , int c , int value) // returns true if its not repited
	{
		 if(RowCheck (r , c , value) && Columncheck (r , c , value))
			 return 1;
		 return 0;
	}



private:
	int Cells[9][9];

};

#endif // TABLE_H

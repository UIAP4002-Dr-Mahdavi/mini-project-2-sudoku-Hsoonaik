#ifndef TABLE_H
#define TABLE_H
#include <QString>
#include <iostream>
#include<time.h>

class Table
{
public:
	Table();

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
		int tmp = rand() % 9 + 1; // to use for checking that the index is unique
		int tmp2; // for value
		for(int i = 0 ; i < 45 ; i++)
		{

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

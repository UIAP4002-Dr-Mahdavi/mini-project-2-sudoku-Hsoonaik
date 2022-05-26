#ifndef TABLE_H
#define TABLE_H
#include <QString>
#include <iostream>
#include<time.h>

class Table
{

	friend class MainGame;
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

			while(!RepitedValueCheck (r , c , value) || !RepitedInSquareCheck (r , c , value))
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

	bool RepitedInSquareCheck(int r , int c , int value)// returns true if its not repited
	{
		int Area = FindArea(r , c);
		switch (Area)
		{
		case 1 :
			return CheckBox (0 , 0 , r , c , value);
			break;
		case 2 :
			return CheckBox (0 , 3 , r , c , value);
			break;
		case 3 :
			return CheckBox (0 , 6 , r , c , value);
			break;
		case 4 :
			return CheckBox (3 , 0 , r , c , value);
			break;
		case 5 :
			return CheckBox (3 , 3 , r , c , value);
			break;
		case 6 :
			return CheckBox (3 , 6 , r , c , value);
			break;
		case 7 :
			return CheckBox (6 , 0 , r , c , value);
			break;
		case 8 :
			return CheckBox (6 , 3 , r , c , value);
			break;
		case 9 :
			return CheckBox (6 , 6 , r , c , value);
			break;
		}
		return 0;
	}

	bool CheckBox(int r , int c , int Vr , int Vc , int value)
	{

		for(int i = r ; i < r + 3; i++)
			for(int j = c ; j < c + 3 ; j++)
				if(i != Vr && j != Vc && Cells[i][j] == value)
					return 0;
		return 1;
	}

	bool isBetween(int value , int frst , int lst )
	{
		if(value <= lst && value >= frst)
			return 1 ;
		return 0;
	}

	int FindArea(int r , int c)
	{
		if(isBetween (r , 0 , 2) && isBetween(c , 0 , 2))
			return 1;
		if(isBetween (r , 0 , 2) && isBetween(c , 3 , 5))
			return 2;
		if(isBetween (r , 0 , 2) && isBetween(c , 6 , 8))
			return 3;
		if(isBetween (r , 3 , 5) && isBetween(c , 0 , 2))
			return 4;
		if(isBetween (r , 3 , 5) && isBetween(c , 3 , 5))
			return 5;
		if(isBetween (r , 3 , 5) && isBetween(c , 6 , 8))
			return 6;
		if(isBetween (r , 6 , 8) && isBetween(c , 0 , 2))
			return 7;
		if(isBetween (r , 6 , 8) && isBetween(c , 3 , 5))
			return 8;
		if(isBetween (r , 6 , 8) && isBetween(c , 6 , 8))
			return 9;

		return 0 ;
	}




private:
	int Cells[9][9];
	bool setRandomDone;

};

#endif // TABLE_H

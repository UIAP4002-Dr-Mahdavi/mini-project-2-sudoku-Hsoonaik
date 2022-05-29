#ifndef USER_H
#define USER_H
#include <QString>
#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <cstring>
#include <QFile>
using namespace std;
class User
{
public:
	User();
	friend class MainGame;

	void SetData(int id , QString FName , QString LName , QString Username , QString Password , bool ExistOrNot = 1)
	{
		this->id = id;
		this->FName = FName;
		this->LName = LName;
		this->Username = Username;
		this->Password = Password;
		this->ExistOrNot = ExistOrNot;
	}

	QString getFName()
	{
		return FName;
	}
	QString getLName()
	{
		return LName;
	}
	QString getUsename()
	{
		return Username;
	}
	QString getPassword()
	{
		return Password;
	}
	int getId()
	{
		return id;
	}

	bool getExistOrNot()
	{
		return ExistOrNot;
	}

	void ClearData()
	{
		FName.clear();
		LName.clear();
		Username.clear();
		Password.clear();
	}

	void SaveData()
	{
		ofstream File("UserDataToShow.dat" , ios::out | ios::app);
		if (!File)
		{
			cerr << "some thing wrong during opening file!" << endl;
			exit(1);
		}
		File << "id : " << id << endl;
		File << "Name : " << FName.toStdString () << " " << LName.toStdString () << endl;
		File << "Username : " << Username.toStdString () << endl;
		File << "Password : " << Password.toStdString () << endl;
		File << "###############################" << endl;
		File.close ();



	}

	void SaveSolvedTableCount()
	{
		ofstream File("User.txt" , ios::out | ios::app);

		if (!File)
		{
			cerr << "some thing wrong during opening file!" << endl;
			exit(1);
		}
		File << Username.toStdString () << " " << SolvedTables << endl;
		File.close ();
	}
	void LoadSolvedTableCount()
	{
		string tmpUsrnm;
		int tmpSlvdTbles;
		ifstream File;
		File.open ("User.txt" , ios::in | ios::app);
		if (!File)
		{
			cerr << "some thing wrong during opening file!" << endl;
			exit(1);
		}
		while(File.is_open())
		{
			File >> tmpUsrnm;
			if(tmpUsrnm == this->Username.toStdString ())
				File >> tmpSlvdTbles;
			this->SolvedTables = tmpSlvdTbles;
			if(File.eof())
				File.close();
		}
	}

	void Sort ()
	{
		int c = 0  , NumArray[200];
		string UsrArray[200];

		string tmpUsrnm;
		int tmpSlvdTbles;

		ifstream File;
		File.open ("User.txt" , ios::in | ios::app);

		if (!File)
		{
			cerr << "some thing wrong during opening file!" << endl;
			exit(1);
		}

		while(File.is_open())
		{
			File >> tmpUsrnm;
			File >> tmpSlvdTbles;
			NumArray[c] = tmpSlvdTbles;
			UsrArray[c] = tmpUsrnm;
			c++;

			if(File.eof())
				File.close();
		}


		for(int i = 0; i < c - 1 ; i++)
		{
			int min = NumArray[i];
			int imin = i;
			for(int j = i + 1; j < c; j++)
			{
				if(NumArray[j] < min)
				{
					min = NumArray[j];
					imin = j;
				}
			}
			NumArray[imin] = NumArray[i];
			NumArray[i] = min;

			string tmp = UsrArray[imin];
			UsrArray[imin] = UsrArray[i];
			UsrArray[i] = tmp;


		}
		ClrFile();
		fstream File2;
		File2.open("User.txt" , ios::out | ios::app );

		if (!File2)
		{
			cerr << "some thing wrong during opening file!" << endl;
			exit(1);
		}
		for(int i = 0; i < c; i++)
		{
			if(UsrArray[i] == UsrArray[i + 1])
				continue;
			else
				File2 << UsrArray[i] << " " << NumArray[i] << endl;

		}

	}

	void ClrFile()
	{
		ofstream file("User.txt" , ios::out);
		file<<"";
	}



	bool LoadData(string EntryUsername , string EntryPassword)
	{
		string Username, Password ;
		int Check = 0; //must be 2 to be true

		ifstream File("UserDataToShow.dat" , ios::in | ios::app );

		if (!File)
		{
			QMessageBox msgBox;
			msgBox.setInformativeText("The username or password is incorrect.");
			msgBox.setStandardButtons(QMessageBox::Ok);
			msgBox.setStyleSheet ("background-color : #0a0e1a; color : #FFFFFF; width : 300px;font:  10pt \"Rockwell Extra Bold\";");
			msgBox.setDefaultButton(QMessageBox::Ok);
			msgBox.exec();
		}

		while (File.is_open())
		{
			File >> Username;
			//File >> Password;

			if(Username == EntryUsername)
			{
				Check++;
				break;
			}
			if(File.eof())
				File.close();
		}

		while (File.is_open())
		{
			//File >> Username;
			File >> Password;

			if(Password == EntryPassword)
			{
				Check++;
				break;
			}
			if(File.eof())
				File.close();
		}
		if(Check == 2)
		{
			this->Username = QString::fromStdString(Username);
			this->Password = QString::fromStdString (Password);

			cerr << this->Username.toStdString ();
			return 1;
		}
		return 0;
	}

private :
	int id;
	QString FName;
	QString LName;
	QString Username;
	QString Password;
	int SolvedTables = 0;
	bool ExistOrNot;

};

#endif // USER_H

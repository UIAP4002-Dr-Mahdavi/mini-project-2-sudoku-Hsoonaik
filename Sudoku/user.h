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
		ofstream File("UserData.txt" , ios::out | ios::app);
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



	bool LoadData(string EntryUsername , string EntryPassword)
	{
		string Username, Password , FName , LName;
		int id;
		int Check = 0; //must be 2 to be true

		ifstream File("UserData.txt" , ios::in | ios::app);

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
			return 1;
		return 0;
	}

private :
	int id;
	QString FName;
	QString LName;
	QString Username;
	QString Password;
	bool ExistOrNot;

};

#endif // USER_H

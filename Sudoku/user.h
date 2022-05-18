#ifndef USER_H
#define USER_H
#include <QString>
#include <fstream>
#include <iostream>
using namespace std;
class User
{
public:
	User();

	void SetData(int id , QString FName , QString LName , QString Username , QString Password)
	{
		this->id = id;
		this->FName = FName;
		this->LName = LName;
		this->Username = Username;
		this->Password = Password;
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


private :
	int id;
	QString FName;
	QString LName;
	QString Username;
	QString Password;

};

#endif // USER_H

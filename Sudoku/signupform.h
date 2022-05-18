#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

#include <QMainWindow>
#include "loginform.h"
#include <fstream>
#include <iostream>


namespace Ui {
class SignUpForm;
}


class SignUpForm : public QMainWindow
{

    Q_OBJECT

public:



    explicit SignUpForm(QWidget *parent = nullptr);

    ~SignUpForm();



private slots:
	void on_Register_clicked();

	void on_Register_2_clicked();

private:

    Ui::SignUpForm *ui;
};

#endif // SIGNUPFORM_H

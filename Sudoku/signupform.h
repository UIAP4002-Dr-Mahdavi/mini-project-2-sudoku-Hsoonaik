#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

#include <QMainWindow>

namespace Ui {
class SignUpForm;
}

class SignUpForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUpForm(QWidget *parent = nullptr);
    ~SignUpForm();

private:
    Ui::SignUpForm *ui;
};

#endif // SIGNUPFORM_H

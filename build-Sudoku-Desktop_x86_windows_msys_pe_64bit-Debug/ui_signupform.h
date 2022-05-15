/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpForm
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUpForm)
    {
        if (SignUpForm->objectName().isEmpty())
            SignUpForm->setObjectName(QString::fromUtf8("SignUpForm"));
        SignUpForm->resize(800, 600);
        menubar = new QMenuBar(SignUpForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        SignUpForm->setMenuBar(menubar);
        centralwidget = new QWidget(SignUpForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SignUpForm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SignUpForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SignUpForm->setStatusBar(statusbar);

        retranslateUi(SignUpForm);

        QMetaObject::connectSlotsByName(SignUpForm);
    } // setupUi

    void retranslateUi(QMainWindow *SignUpForm)
    {
        SignUpForm->setWindowTitle(QCoreApplication::translate("SignUpForm", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpForm: public Ui_SignUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H

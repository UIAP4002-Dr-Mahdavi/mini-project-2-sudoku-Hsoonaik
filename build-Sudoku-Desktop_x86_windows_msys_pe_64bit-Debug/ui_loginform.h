/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(360, 300);
        LoginForm->setStyleSheet(QString::fromUtf8("background : #353d60\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(LoginForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, -10, 141, 51));
        label->setStyleSheet(QString::fromUtf8("font:  30pt \"Rockwell Extra Bold\";\n"
""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
<<<<<<< HEAD
        verticalLayoutWidget->setEnabled(true);
        verticalLayoutWidget->setGeometry(QRect(30, 80, 351, 117));
=======
        verticalLayoutWidget->setGeometry(QRect(110, 70, 231, 71));
>>>>>>> parent of f703069 (Login form ui is complited now !)
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(verticalLayoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"font: 25 8pt \"Calibri Light\";"));

        verticalLayout->addWidget(textEdit_2);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"font: 25 8pt \"Calibri Light\";"));

        verticalLayout->addWidget(textEdit);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 70, 101, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font:  10pt \"Rockwell Extra Bold\";\n"
""));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font:  10pt \"Rockwell Extra Bold\";\n"
""));

        verticalLayout_2->addWidget(label_3);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 140, 224, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"Calibri Light\";"));

        horizontalLayout->addWidget(label_4);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 11pt \"Calibri Light\";\n"
"background-color : #1d243d;\n"
"\n"
"padding : 5px;\n"
"border-radius : 10px;"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 200, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #1d243d;\n"
"\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        LoginForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 20));
        LoginForm->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginForm->setStatusBar(statusbar);

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QMainWindow *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Username : ", nullptr));
        label_3->setText(QCoreApplication::translate("LoginForm", "Password  : ", nullptr));
        label_4->setText(QCoreApplication::translate("LoginForm", "Don't have an account?", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginForm", "Sign up!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginForm", "OK !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H

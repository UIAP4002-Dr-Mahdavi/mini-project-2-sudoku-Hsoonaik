/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *UsernameTB;
    QLineEdit *PasswordTB;
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
        LoginForm->resize(410, 300);
        LoginForm->setMinimumSize(QSize(410, 300));
        LoginForm->setMaximumSize(QSize(410, 300));
        LoginForm->setCursor(QCursor(Qt::ArrowCursor));
        LoginForm->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(LoginForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 411, 51));
        label->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  30pt \"Rockwell Extra Bold\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setEnabled(true);
        verticalLayoutWidget->setGeometry(QRect(30, 80, 351, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        UsernameTB = new QLineEdit(verticalLayoutWidget);
        UsernameTB->setObjectName(QString::fromUtf8("UsernameTB"));
        UsernameTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"border : 0px;\n"
"color : rgb(255, 255, 255);\n"
""));
        UsernameTB->setMaxLength(20);

        gridLayout->addWidget(UsernameTB, 0, 1, 1, 1);

        PasswordTB = new QLineEdit(verticalLayoutWidget);
        PasswordTB->setObjectName(QString::fromUtf8("PasswordTB"));
        PasswordTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"color : rgb(255, 255, 255);\n"
"border : 0px;\n"
""));
        PasswordTB->setMaxLength(15);
        PasswordTB->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordTB, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font: 11pt \"Calibri Light\";"));

        horizontalLayout->addWidget(label_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 11pt \"Calibri Light\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 10px;"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 220, 111, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        LoginForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 410, 20));
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
        label_5->setText(QCoreApplication::translate("LoginForm", "Username : ", nullptr));
        label_6->setText(QCoreApplication::translate("LoginForm", "Password : ", nullptr));
        label_4->setText(QCoreApplication::translate("LoginForm", "                                         Don't have an account?", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginForm", "Sign up!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginForm", "OK !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H

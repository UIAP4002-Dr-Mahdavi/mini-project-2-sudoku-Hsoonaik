/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpForm
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *UserNameTB;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *FNamTB;
    QLineEdit *PasswordTB;
    QLabel *label_7;
    QLineEdit *LNameTB;
    QLabel *label_8;
    QPushButton *Register;
    QLabel *label;
    QPushButton *Register_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUpForm)
    {
        if (SignUpForm->objectName().isEmpty())
            SignUpForm->setObjectName(QString::fromUtf8("SignUpForm"));
        SignUpForm->resize(410, 340);
        SignUpForm->setMinimumSize(QSize(410, 340));
        SignUpForm->setMaximumSize(QSize(410, 340));
        SignUpForm->setCursor(QCursor(Qt::ArrowCursor));
        SignUpForm->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(SignUpForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setEnabled(true);
        verticalLayoutWidget->setGeometry(QRect(30, 80, 351, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        UserNameTB = new QLineEdit(verticalLayoutWidget);
        UserNameTB->setObjectName(QString::fromUtf8("UserNameTB"));
        UserNameTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"color : rgb(255, 255, 255);\n"
"border : 0px;\n"
""));
        UserNameTB->setMaxLength(15);
        UserNameTB->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(UserNameTB, 3, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        FNamTB = new QLineEdit(verticalLayoutWidget);
        FNamTB->setObjectName(QString::fromUtf8("FNamTB"));
        FNamTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"border : 0px;\n"
"color : rgb(255, 255, 255);\n"
""));
        FNamTB->setMaxLength(20);

        gridLayout->addWidget(FNamTB, 0, 1, 1, 1);

        PasswordTB = new QLineEdit(verticalLayoutWidget);
        PasswordTB->setObjectName(QString::fromUtf8("PasswordTB"));
        PasswordTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"color : rgb(255, 255, 255);\n"
"border : 0px;\n"
""));
        PasswordTB->setMaxLength(15);
        PasswordTB->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordTB, 4, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7->setTextInteractionFlags(Qt::TextBrowserInteraction);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        LNameTB = new QLineEdit(verticalLayoutWidget);
        LNameTB->setObjectName(QString::fromUtf8("LNameTB"));
        LNameTB->setStyleSheet(QString::fromUtf8("background-color: #515a82;\n"
"font: 15pt \"Calibri Light\";\n"
"border : 0px;\n"
"color : rgb(255, 255, 255);\n"
""));
        LNameTB->setMaxLength(20);

        gridLayout->addWidget(LNameTB, 1, 1, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  12pt \"Rockwell Extra Bold\";\n"
""));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Register = new QPushButton(centralwidget);
        Register->setObjectName(QString::fromUtf8("Register"));
        Register->setGeometry(QRect(150, 260, 111, 51));
        Register->setCursor(QCursor(Qt::PointingHandCursor));
        Register->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 411, 51));
        label->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  30pt \"Rockwell Extra Bold\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        Register_2 = new QPushButton(centralwidget);
        Register_2->setObjectName(QString::fromUtf8("Register_2"));
        Register_2->setGeometry(QRect(330, 280, 71, 31));
        Register_2->setCursor(QCursor(Qt::PointingHandCursor));
        Register_2->setStyleSheet(QString::fromUtf8("font:  12pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        SignUpForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignUpForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 410, 20));
        SignUpForm->setMenuBar(menubar);
        statusbar = new QStatusBar(SignUpForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SignUpForm->setStatusBar(statusbar);
        QWidget::setTabOrder(FNamTB, LNameTB);
        QWidget::setTabOrder(LNameTB, UserNameTB);
        QWidget::setTabOrder(UserNameTB, PasswordTB);
        QWidget::setTabOrder(PasswordTB, Register);

        retranslateUi(SignUpForm);

        QMetaObject::connectSlotsByName(SignUpForm);
    } // setupUi

    void retranslateUi(QMainWindow *SignUpForm)
    {
        SignUpForm->setWindowTitle(QCoreApplication::translate("SignUpForm", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("SignUpForm", "First Name : ", nullptr));
        label_6->setText(QCoreApplication::translate("SignUpForm", "Username : ", nullptr));
        label_7->setText(QCoreApplication::translate("SignUpForm", "Password : ", nullptr));
        label_8->setText(QCoreApplication::translate("SignUpForm", "Last Name : ", nullptr));
        Register->setText(QCoreApplication::translate("SignUpForm", "OK !", nullptr));
        label->setText(QCoreApplication::translate("SignUpForm", "Sign up", nullptr));
        Register_2->setText(QCoreApplication::translate("SignUpForm", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpForm: public Ui_SignUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H

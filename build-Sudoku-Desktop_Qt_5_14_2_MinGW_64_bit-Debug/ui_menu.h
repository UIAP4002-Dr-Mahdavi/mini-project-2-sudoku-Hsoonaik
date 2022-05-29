/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *SolvedTablesBtn;
    QPushButton *LogOutBtn;
    QPushButton *PlayBtn;
    QPushButton *ExitBtn;
    QLabel *WelcomeLB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(410, 440);
        Menu->setMinimumSize(QSize(410, 440));
        Menu->setMaximumSize(QSize(410, 440));
        Menu->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 411, 51));
        label->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  30pt \"Rockwell Extra Bold\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 100, 274, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SolvedTablesBtn = new QPushButton(gridLayoutWidget);
        SolvedTablesBtn->setObjectName(QString::fromUtf8("SolvedTablesBtn"));
        SolvedTablesBtn->setCursor(QCursor(Qt::PointingHandCursor));
        SolvedTablesBtn->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));

        gridLayout->addWidget(SolvedTablesBtn, 1, 0, 1, 1);

        LogOutBtn = new QPushButton(gridLayoutWidget);
        LogOutBtn->setObjectName(QString::fromUtf8("LogOutBtn"));
        LogOutBtn->setCursor(QCursor(Qt::PointingHandCursor));
        LogOutBtn->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));

        gridLayout->addWidget(LogOutBtn, 2, 0, 1, 1);

        PlayBtn = new QPushButton(gridLayoutWidget);
        PlayBtn->setObjectName(QString::fromUtf8("PlayBtn"));
        PlayBtn->setCursor(QCursor(Qt::PointingHandCursor));
        PlayBtn->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));

        gridLayout->addWidget(PlayBtn, 0, 0, 1, 1);

        ExitBtn = new QPushButton(gridLayoutWidget);
        ExitBtn->setObjectName(QString::fromUtf8("ExitBtn"));
        ExitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        ExitBtn->setStyleSheet(QString::fromUtf8("font:  20pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));

        gridLayout->addWidget(ExitBtn, 3, 0, 1, 1);

        WelcomeLB = new QLabel(centralwidget);
        WelcomeLB->setObjectName(QString::fromUtf8("WelcomeLB"));
        WelcomeLB->setGeometry(QRect(0, 0, 181, 21));
        WelcomeLB->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  8pt \"Rockwell Extra Bold\";\n"
""));
        WelcomeLB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 410, 20));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Menu", "Menu", nullptr));
        SolvedTablesBtn->setText(QCoreApplication::translate("Menu", "About", nullptr));
        LogOutBtn->setText(QCoreApplication::translate("Menu", "Log out", nullptr));
        PlayBtn->setText(QCoreApplication::translate("Menu", "Play", nullptr));
        ExitBtn->setText(QCoreApplication::translate("Menu", "Exit", nullptr));
        WelcomeLB->setText(QCoreApplication::translate("Menu", "User name , Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

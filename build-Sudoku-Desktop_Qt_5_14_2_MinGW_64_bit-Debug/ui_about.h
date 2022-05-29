/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *Register_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(410, 287);
        About->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
""));
        centralwidget = new QWidget(About);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 391, 221));
        plainTextEdit->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font: 13pt \"Rockwell Extra Bold\";\n"
""));
        plainTextEdit->setFrameShape(QFrame::StyledPanel);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);
        plainTextEdit->setCenterOnScroll(false);
        Register_2 = new QPushButton(centralwidget);
        Register_2->setObjectName(QString::fromUtf8("Register_2"));
        Register_2->setGeometry(QRect(30, 210, 101, 41));
        Register_2->setCursor(QCursor(Qt::PointingHandCursor));
        Register_2->setStyleSheet(QString::fromUtf8("font:  12pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        About->setCentralWidget(centralwidget);
        menubar = new QMenuBar(About);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 410, 20));
        About->setMenuBar(menubar);
        statusbar = new QStatusBar(About);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        About->setStatusBar(statusbar);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QMainWindow *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "MainWindow", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("About", "Made by Kianoosh Vadaei\n"
"\n"
"On 22/05/29\n"
"\n"
"For sec AP Mini-Progect of\n"
"University of Isfahan", nullptr));
        Register_2->setText(QCoreApplication::translate("About", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

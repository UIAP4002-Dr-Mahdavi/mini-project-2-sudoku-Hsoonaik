/********************************************************************************
** Form generated from reading UI file 'SplashForm.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHFORM_H
#define UI_SPLASHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(360, 460);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background : #353d60\n"
"\n"
""));
        MainWindow->setWindowFilePath(QString::fromUtf8(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 30, 141, 141));
        frame->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"image: url(:/Logo/Logo.png);\n"
"border-radius : 50%;	\n"
"display : flex;\n"
"justify-content : center;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 180, 341, 121));
        label->setCursor(QCursor(Qt::BusyCursor));
        label->setStyleSheet(QString::fromUtf8("font: 45pt \"Dast Nevis\";\n"
"padding-top : 10px;\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 400, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 7pt \"Calibri\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 280, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("font:  15pt \"Rockwell Extra Bold\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 380, 171, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Calibri\";\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 20));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\330\250\330\247\330\262\333\214 \330\263\331\210\330\257\331\210\332\251\331\210", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ap mini-project of UI", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "sudoku", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Made by Kianoosh Vadaei", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHFORM_H

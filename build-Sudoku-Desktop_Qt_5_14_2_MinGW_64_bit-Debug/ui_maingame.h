/********************************************************************************
** Form generated from reading UI file 'maingame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGAME_H
#define UI_MAINGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainGame
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QTableWidget *tableWidget;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QPushButton *Register_2;
    QLabel *SolvedNumLbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainGame)
    {
        if (MainGame->objectName().isEmpty())
            MainGame->setObjectName(QString::fromUtf8("MainGame"));
        MainGame->resize(600, 600);
        MainGame->setMinimumSize(QSize(600, 600));
        MainGame->setMaximumSize(QSize(600, 600));
        MainGame->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
""));
        centralwidget = new QWidget(MainGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(597, 558));
        centralwidget->setMaximumSize(QSize(597, 558));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(193, -3, 16, 463));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(392, -3, 16, 463));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(-5, 145, 610, 16));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(-5, 295, 610, 16));
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(brush1);
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(2, 3, 600, 600));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #0a0e1a;\n"
"     gridline-color: #ffffff; \n"
"color : #ffffff;\n"
"font: 24pt \"MV Boli\";\n"
"align-item : center;\n"
""));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setRowCount(9);
        tableWidget->setColumnCount(9);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->horizontalHeader()->setDefaultSectionSize(66);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(50);
        tableWidget->verticalHeader()->setHighlightSections(true);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(-5, 448, 610, 16));
        line_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(-5, -4, 610, 16));
        line_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(-5, -3, 16, 463));
        line_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_7->setLineWidth(2);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(587, -3, 16, 463));
        line_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);\n"
"margin  : 5px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        Register_2 = new QPushButton(centralwidget);
        Register_2->setObjectName(QString::fromUtf8("Register_2"));
        Register_2->setGeometry(QRect(490, 510, 101, 41));
        Register_2->setCursor(QCursor(Qt::PointingHandCursor));
        Register_2->setStyleSheet(QString::fromUtf8("font:  12pt \"Rockwell Extra Bold\";\n"
"background-color : #9aa0c6;\n"
"color : rgb(0, 0, 0);\n"
"padding : 5px;\n"
"border-radius : 15px;"));
        SolvedNumLbl = new QLabel(centralwidget);
        SolvedNumLbl->setObjectName(QString::fromUtf8("SolvedNumLbl"));
        SolvedNumLbl->setGeometry(QRect(10, 490, 321, 21));
        SolvedNumLbl->setStyleSheet(QString::fromUtf8("color : rgb(255, 255, 255);\n"
"font:  15pt \"Rockwell Extra Bold\";\n"
""));
        SolvedNumLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainGame->setCentralWidget(centralwidget);
        tableWidget->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        line_8->raise();
        Register_2->raise();
        SolvedNumLbl->raise();
        menubar = new QMenuBar(MainGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 20));
        MainGame->setMenuBar(menubar);
        statusbar = new QStatusBar(MainGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainGame->setStatusBar(statusbar);

        retranslateUi(MainGame);

        QMetaObject::connectSlotsByName(MainGame);
    } // setupUi

    void retranslateUi(QMainWindow *MainGame)
    {
        MainGame->setWindowTitle(QCoreApplication::translate("MainGame", "MainWindow", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        Register_2->setText(QCoreApplication::translate("MainGame", "Back", nullptr));
        SolvedNumLbl->setText(QCoreApplication::translate("MainGame", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainGame: public Ui_MainGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGAME_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *graph;
    QAction *action;
    QAction *graph_2;
    QAction *action_2;
    QAction *graph_3;
    QAction *action_3;
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QStatusBar *statusbar_2;
    QCustomPlot *widget;
    QPushButton *pushButtonDot;
    QPushButton *pushButton0;
    QPushButton *pushButtonSin;
    QPushButton *pushButtonLn;
    QPushButton *pushButtonRavno;
    QPushButton *pushButton7;
    QPushButton *pushButtonAcos;
    QPushButton *pushButtonDiv;
    QPushButton *pushButtonLog;
    QPushButton *pushButtonStepeni;
    QPushButton *pushButton5;
    QSpinBox *spinBox_7;
    QDoubleSpinBox *doubleSpinBox_7;
    QPushButton *pushButton8;
    QPushButton *pushButtonCos;
    QPushButton *pushButtonX;
    QPushButton *pushButton1;
    QPushButton *pushButtonAtan;
    QLineEdit *lineEdit;
    QPushButton *pushButtonSkobka2;
    QPushButton *pushButtonSkobka1;
    QPushButton *pushButton6;
    QPushButton *pushButton2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_13;
    QPushButton *pushButton4;
    QPushButton *pushButtonAC;
    QPushButton *pushButtonTan;
    QPushButton *pushButtonSub;
    QPushButton *pushButtonSqrt;
    QPushButton *pushButton9;
    QPushButton *pushButtonAsin;
    QPushButton *pushButton3;
    QPushButton *pushButtonMod;
    QPushButton *pushButtonMul;
    QPushButton *pushButtonAdd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1262, 582);
        graph = new QAction(MainWindow);
        graph->setObjectName(QString::fromUtf8("graph"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        graph_2 = new QAction(MainWindow);
        graph_2->setObjectName(QString::fromUtf8("graph_2"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        graph_3 = new QAction(MainWindow);
        graph_3->setObjectName(QString::fromUtf8("graph_3"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName(QString::fromUtf8("centralwidget_2"));
        centralwidget_2->setGeometry(QRect(20, 0, 1111, 481));
        statusbar_2 = new QStatusBar(centralwidget_2);
        statusbar_2->setObjectName(QString::fromUtf8("statusbar_2"));
        statusbar_2->setGeometry(QRect(460, 250, 3, 27));
        widget = new QCustomPlot(centralwidget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(450, 10, 641, 461));
        pushButtonDot = new QPushButton(centralwidget_2);
        pushButtonDot->setObjectName(QString::fromUtf8("pushButtonDot"));
        pushButtonDot->setGeometry(QRect(360, 200, 51, 51));
        pushButtonDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButton0 = new QPushButton(centralwidget_2);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        pushButton0->setGeometry(QRect(210, 250, 151, 51));
        pushButton0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"    background-position: center;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonSin = new QPushButton(centralwidget_2);
        pushButtonSin->setObjectName(QString::fromUtf8("pushButtonSin"));
        pushButtonSin->setGeometry(QRect(60, 100, 51, 51));
        pushButtonSin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonLn = new QPushButton(centralwidget_2);
        pushButtonLn->setObjectName(QString::fromUtf8("pushButtonLn"));
        pushButtonLn->setGeometry(QRect(60, 250, 151, 51));
        pushButtonLn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"    background-position: center;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonRavno = new QPushButton(centralwidget_2);
        pushButtonRavno->setObjectName(QString::fromUtf8("pushButtonRavno"));
        pushButtonRavno->setGeometry(QRect(360, 250, 51, 51));
        pushButtonRavno->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButton7 = new QPushButton(centralwidget_2);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        pushButton7->setGeometry(QRect(210, 100, 51, 51));
        pushButton7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonAcos = new QPushButton(centralwidget_2);
        pushButtonAcos->setObjectName(QString::fromUtf8("pushButtonAcos"));
        pushButtonAcos->setGeometry(QRect(110, 150, 51, 51));
        pushButtonAcos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonDiv = new QPushButton(centralwidget_2);
        pushButtonDiv->setObjectName(QString::fromUtf8("pushButtonDiv"));
        pushButtonDiv->setGeometry(QRect(310, 50, 51, 51));
        pushButtonDiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButtonLog = new QPushButton(centralwidget_2);
        pushButtonLog->setObjectName(QString::fromUtf8("pushButtonLog"));
        pushButtonLog->setGeometry(QRect(60, 200, 51, 51));
        pushButtonLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonStepeni = new QPushButton(centralwidget_2);
        pushButtonStepeni->setObjectName(QString::fromUtf8("pushButtonStepeni"));
        pushButtonStepeni->setGeometry(QRect(260, 50, 51, 51));
        pushButtonStepeni->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButton5 = new QPushButton(centralwidget_2);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setGeometry(QRect(260, 150, 51, 51));
        pushButton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        spinBox_7 = new QSpinBox(centralwidget_2);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(160, 370, 91, 31));
        spinBox_7->setAccelerated(false);
        spinBox_7->setMinimum(1);
        spinBox_7->setMaximum(1000000);
        spinBox_7->setSingleStep(1);
        spinBox_7->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        spinBox_7->setValue(1);
        spinBox_7->setDisplayIntegerBase(10);
        doubleSpinBox_7 = new QDoubleSpinBox(centralwidget_2);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setGeometry(QRect(160, 330, 91, 31));
        doubleSpinBox_7->setDecimals(7);
        doubleSpinBox_7->setMaximum(9999999.990000000223517);
        pushButton8 = new QPushButton(centralwidget_2);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        pushButton8->setGeometry(QRect(260, 100, 51, 51));
        pushButton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonCos = new QPushButton(centralwidget_2);
        pushButtonCos->setObjectName(QString::fromUtf8("pushButtonCos"));
        pushButtonCos->setGeometry(QRect(110, 100, 51, 51));
        pushButtonCos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonX = new QPushButton(centralwidget_2);
        pushButtonX->setObjectName(QString::fromUtf8("pushButtonX"));
        pushButtonX->setGeometry(QRect(160, 50, 51, 51));
        pushButtonX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButton1 = new QPushButton(centralwidget_2);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(210, 200, 51, 51));
        pushButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonAtan = new QPushButton(centralwidget_2);
        pushButtonAtan->setObjectName(QString::fromUtf8("pushButtonAtan"));
        pushButtonAtan->setGeometry(QRect(60, 150, 51, 51));
        pushButtonAtan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        lineEdit = new QLineEdit(centralwidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 0, 351, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  qproperty-alignment: 'AlignVCenter | AlignHCenter';\n"
"  border: 1px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"background-color : white;\n"
""));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonSkobka2 = new QPushButton(centralwidget_2);
        pushButtonSkobka2->setObjectName(QString::fromUtf8("pushButtonSkobka2"));
        pushButtonSkobka2->setGeometry(QRect(110, 50, 51, 51));
        pushButtonSkobka2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButtonSkobka1 = new QPushButton(centralwidget_2);
        pushButtonSkobka1->setObjectName(QString::fromUtf8("pushButtonSkobka1"));
        pushButtonSkobka1->setGeometry(QRect(60, 50, 51, 51));
        pushButtonSkobka1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButton6 = new QPushButton(centralwidget_2);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        pushButton6->setGeometry(QRect(310, 150, 51, 51));
        pushButton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButton2 = new QPushButton(centralwidget_2);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(260, 200, 51, 51));
        pushButton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        layoutWidget_2 = new QWidget(centralwidget_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(70, 320, 91, 91));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_14 = new QRadioButton(layoutWidget_2);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));

        verticalLayout->addWidget(radioButton_14);

        radioButton_13 = new QRadioButton(layoutWidget_2);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setChecked(true);

        verticalLayout->addWidget(radioButton_13);

        pushButton4 = new QPushButton(centralwidget_2);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(210, 150, 51, 51));
        pushButton4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonAC = new QPushButton(centralwidget_2);
        pushButtonAC->setObjectName(QString::fromUtf8("pushButtonAC"));
        pushButtonAC->setGeometry(QRect(210, 50, 51, 51));
        pushButtonAC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButtonTan = new QPushButton(centralwidget_2);
        pushButtonTan->setObjectName(QString::fromUtf8("pushButtonTan"));
        pushButtonTan->setGeometry(QRect(160, 100, 51, 51));
        pushButtonTan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonSub = new QPushButton(centralwidget_2);
        pushButtonSub->setObjectName(QString::fromUtf8("pushButtonSub"));
        pushButtonSub->setGeometry(QRect(360, 100, 51, 51));
        pushButtonSub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButtonSqrt = new QPushButton(centralwidget_2);
        pushButtonSqrt->setObjectName(QString::fromUtf8("pushButtonSqrt"));
        pushButtonSqrt->setGeometry(QRect(110, 200, 51, 51));
        pushButtonSqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"}\n"
""));
        pushButton9 = new QPushButton(centralwidget_2);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        pushButton9->setGeometry(QRect(310, 100, 51, 51));
        pushButton9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonAsin = new QPushButton(centralwidget_2);
        pushButtonAsin->setObjectName(QString::fromUtf8("pushButtonAsin"));
        pushButtonAsin->setGeometry(QRect(160, 150, 51, 51));
        pushButtonAsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButton3 = new QPushButton(centralwidget_2);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(310, 200, 51, 51));
        pushButton3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"\n"
" \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"\n"
"}\n"
""));
        pushButtonMod = new QPushButton(centralwidget_2);
        pushButtonMod->setObjectName(QString::fromUtf8("pushButtonMod"));
        pushButtonMod->setGeometry(QRect(160, 200, 51, 51));
        pushButtonMod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 2px solid gray;\n"
"border-radius: 15px;   \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;  \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #7d7968, stop: 1 #bfbeb8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #69665c, stop: 1 #69665a);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}\n"
""));
        pushButtonMul = new QPushButton(centralwidget_2);
        pushButtonMul->setObjectName(QString::fromUtf8("pushButtonMul"));
        pushButtonMul->setGeometry(QRect(360, 50, 51, 51));
        pushButtonMul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        pushButtonAdd = new QPushButton(centralwidget_2);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(360, 150, 51, 51));
        pushButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(240, 210, 81);\n"
"  color: white; \n"
"  border: 2px solid gray;\n"
"border-radius: 15px;     \n"
"  	border-style: outset;\n"
"     border-width: 4px;\n"
"	border-color: #919191;\n"
"  	color: white;\n"
"  	text-align: center;\n"
"  	text-decoration: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"\n"
"    background-position: center;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bda128, stop: 1 #826d0d);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"	border-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #919191, stop: 1 #919193);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1262, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        graph->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        graph_2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        graph_3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButtonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonSin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButtonLn->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButtonRavno->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButtonAcos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButtonDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonLog->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButtonStepeni->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButtonCos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButtonX->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonAtan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        lineEdit->setText(QString());
        pushButtonSkobka2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButtonSkobka1->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        radioButton_14->setText(QCoreApplication::translate("MainWindow", "X const =", nullptr));
        radioButton_13->setText(QCoreApplication::translate("MainWindow", "X range \302\261", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButtonAC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonTan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButtonSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButtonAsin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButtonMod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButtonMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

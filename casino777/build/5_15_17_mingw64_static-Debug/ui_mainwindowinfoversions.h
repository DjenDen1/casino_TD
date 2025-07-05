/********************************************************************************
** Form generated from reading UI file 'mainwindowinfoversions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWINFOVERSIONS_H
#define UI_MAINWINDOWINFOVERSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowinfoversions
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowinfoversions)
    {
        if (MainWindowinfoversions->objectName().isEmpty())
            MainWindowinfoversions->setObjectName(QString::fromUtf8("MainWindowinfoversions"));
        MainWindowinfoversions->resize(539, 409);
        centralwidget = new QWidget(MainWindowinfoversions);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 171, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"border-radius:30px;\n"
"font: 800 18pt \"Liberation Serif\";\n"
"position: absolute;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"    background-color:rgb(255,145,0);\n"
"	border-radius:30px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(0,12,0);\n"
"	color:rgb(0,255,0);\n"
"	border-radius:30px;\n"
"\n"
"\n"
"}\n"
"\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 60, 201, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        MainWindowinfoversions->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowinfoversions);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 539, 21));
        MainWindowinfoversions->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowinfoversions);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowinfoversions->setStatusBar(statusbar);

        retranslateUi(MainWindowinfoversions);

        QMetaObject::connectSlotsByName(MainWindowinfoversions);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowinfoversions)
    {
        MainWindowinfoversions->setWindowTitle(QCoreApplication::translate("MainWindowinfoversions", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindowinfoversions", "OPTION1", nullptr));
        label->setText(QCoreApplication::translate("MainWindowinfoversions", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\262\320\265\321\200\321\201\320\270\320\270  #1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowinfoversions: public Ui_MainWindowinfoversions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWINFOVERSIONS_H

/********************************************************************************
** Form generated from reading UI file 'mainwindowblackjack.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBLACKJACK_H
#define UI_MAINWINDOWBLACKJACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowblackjack
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowblackjack)
    {
        if (MainWindowblackjack->objectName().isEmpty())
            MainWindowblackjack->setObjectName(QString::fromUtf8("MainWindowblackjack"));
        MainWindowblackjack->resize(800, 600);
        MainWindowblackjack->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
" \n"
"	background-image: url(:/resource/resource/blackjack.jpg);\n"
"}"));
        centralwidget = new QWidget(MainWindowblackjack);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 211, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"font: 600 10.5pt \"Liberation Serif\";\n"
"position: absolute;\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"    background-color:rgb(255,145,0);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(0,12,0);\n"
"	color:rgb(0,255,0);\n"
"	border-radius: 10px;\n"
"	\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 220, 291, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"color:white;\n"
"background-color:rgb(48, 48, 50);\n"
"font: 600 8t \"Liberation Serif\";\n"
"position: absolute;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"    background-color:rgb(255,145,0);\n"
"	border-radius:50px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(0,12,0);\n"
"	color:rgb(0,255,0);\n"
"}"));
        MainWindowblackjack->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowblackjack);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindowblackjack->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowblackjack);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowblackjack->setStatusBar(statusbar);

        retranslateUi(MainWindowblackjack);

        QMetaObject::connectSlotsByName(MainWindowblackjack);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowblackjack)
    {
        MainWindowblackjack->setWindowTitle(QCoreApplication::translate("MainWindowblackjack", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindowblackjack", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260 \320\277\321\200\320\276\321\210\320\273\321\213\320\271 \321\215\320\272\321\200\320\260\320\275", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindowblackjack", "\320\227\320\224\320\225\320\241\320\254 \320\237\320\236\320\232\320\220 \320\235\320\230\320\247\320\225\320\223\320\236 \320\235\320\225\320\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowblackjack: public Ui_MainWindowblackjack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBLACKJACK_H

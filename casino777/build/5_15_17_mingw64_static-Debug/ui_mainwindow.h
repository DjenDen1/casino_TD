/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1023, 692);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-image: url(:/resource/resource/3212da26973781.5635e97d9ff95.jpg);\n"
"	background-posion: center;\n"
"	background-size: auto;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 21, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"\n"
"	flat: true;\n"
"\n"
"/*\n"
"border:none;\n"
"color:white;\n"
"background-color: rgb(255,130,90);\n"
"font: 800 15pt  \"Liberation Serif\";\n"
"border-radius:5px;\n"
"position: absolute;\n"
"left: 50%;\n"
"top:50%;\n"
"margin-left: -40px;\n"
"margin-top: -15px;\n"
"*/\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"color:white;\n"
"background-color: rgb(255,140,100);\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/resource/1693109236_grizly-club-p-kartinki-znachok-nastroek-bez-fona-40.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));
        pushButton->setAutoRepeat(false);
        pushButton->setAutoDefault(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 260, 391, 111));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setSizeIncrement(QSize(2, 2));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border:none;\n"
"color:white;\n"
"background-color:orange;\n"
"border-radius:50px;\n"
"font: 800 36pt \"Liberation Serif\";\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
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
"\n"
"\n"
"}\n"
"\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 10, 21, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:Hover\n"
"{\n"
"color:white;\n"
"background-color: rgb(255,140,100);\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/resource/408-20220208_234837-768x769.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(24, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 10, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/resource/vnedrenie.png.pagespeed.ce.rntvjoGJ6p.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(24, 24));
        MainWindow->setCentralWidget(centralwidget);
        pushButton->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1023, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(slot1()));

        pushButton->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\220\320\231\320\242\320\230", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(800, 600);
        settings->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"\n"
"	background-image: url(:/source/resource/luxury-black-poker-card-symbols-background-illustration-free-vector.jpg);\n"
"}\n"
""));
        centralwidget = new QWidget(settings);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        settings->setCentralWidget(centralwidget);
        menubar = new QMenuBar(settings);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        settings->setMenuBar(menubar);
        statusbar = new QStatusBar(settings);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        settings->setStatusBar(statusbar);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QMainWindow *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

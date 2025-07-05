#ifndef MAINWINDOWROULLETE_H
#define MAINWINDOWROULLETE_H

#include "mainwindowgame1.h"
#include "ui_mainwindowgame1.h"


#include <QMainWindow>
class MainWindowGAME1;
namespace Ui
{

class MainWindowroullete;
class MainWindowGAME1;

}

class MainWindowroullete : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowroullete(QWidget *parent = nullptr);
    ~MainWindowroullete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowroullete *ui;
    MainWindowGAME1 *MainWindowGAME1;
};

#endif // MAINWINDOWROULLETE_H

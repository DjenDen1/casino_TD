#include "mainwindowroullete.h"
#include "ui_mainwindowroullete.h"


#include "mainwindowgame1.h"
#include "ui_mainwindowgame1.h"

class MainWindowGAME1;

MainWindowroullete::MainWindowroullete(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowroullete) , MainWindowGAME1(nullptr)
{
    ui->setupUi(this);
}

MainWindowroullete::~MainWindowroullete()
{
    delete ui;
}

void MainWindowroullete::on_pushButton_clicked()
{
    this -> hide();
    MainWindowGAME1 = new class MainWindowGAME1(this);
    if(!MainWindowGAME1)
    {
        MainWindowGAME1 = new class MainWindowGAME1(this);

    }

    MainWindowGAME1 -> show();
    MainWindowGAME1 -> setWindowTitle("GAME1");
}


#include "mainwindowthreecardpoker.h"
#include "mainwindowgame1.h"
#include "ui_mainwindowthreecardpoker.h"

class MainWindowGAME1;

MainWindowthreecardpoker::MainWindowthreecardpoker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowthreecardpoker) , MainWindowGAME1(nullptr)
{
    ui->setupUi(this);
}

MainWindowthreecardpoker::~MainWindowthreecardpoker()
{
    delete ui;
}

void MainWindowthreecardpoker::on_pushButton_clicked()
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


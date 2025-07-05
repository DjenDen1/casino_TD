#include "mainwindowblackjack.h"
#include "mainwindowgame1.h"
#include "ui_mainwindowblackjack.h"

class MainWindowGAME1;

MainWindowblackjack::MainWindowblackjack(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowblackjack) , MainWindowGAME1(nullptr)
{
    ui->setupUi(this);
}

MainWindowblackjack::~MainWindowblackjack()
{
    delete ui;
}

void MainWindowblackjack::on_pushButton_clicked()
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


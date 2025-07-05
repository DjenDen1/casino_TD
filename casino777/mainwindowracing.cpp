#include "mainwindowracing.h"
#include "mainwindowgame1.h"
#include "ui_mainwindowracing.h"

class MainWindowGAME1;

MainWindowracing::MainWindowracing(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowracing) , MainWindowGAME1(nullptr)
{
    ui->setupUi(this);
}

MainWindowracing::~MainWindowracing()
{
    delete ui;
}

void MainWindowracing::on_pushButton_clicked()
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


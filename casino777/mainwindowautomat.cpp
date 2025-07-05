#include "mainwindowautomat.h"
#include "ui_mainwindowautomat.h"

class MainWindowGAME1;

MainWindowautomat::MainWindowautomat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowautomat) , MainWindowGAME1(nullptr)
{
    ui->setupUi(this);
}

MainWindowautomat::~MainWindowautomat()
{
    delete ui;
}

void MainWindowautomat::on_pushButton_clicked()
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


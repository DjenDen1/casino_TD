#include "mainwindowgame1.h"
#include "ui_mainwindowgame1.h"


#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mainwindowroullete.h"
#include "ui_mainwindowroullete.h"

#include "mainwindowthreecardpoker.h"
#include "ui_mainwindowthreecardpoker.h"


#include "mainwindowblackjack.h"
#include "ui_mainwindowblackjack.h"


#include "mainwindowautomat.h"
#include "ui_mainwindowautomat.h"


#include "mainwindowracing.h"
#include "ui_mainwindowracing.h"


class MainWindow;
class MainWindowGAME1;
class MainWindowroullete;
class MainWindowthreecardpoker;
class MainWindowautomat;

MainWindowGAME1::MainWindowGAME1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowGAME1) , MainWindow(nullptr) , MainWindowroulette(nullptr) , MainWindowthreecardpoker(nullptr) , MainWindowblackjack(nullptr) , MainWindowracing(nullptr)
{
    ui->setupUi(this);
}

MainWindowGAME1::~MainWindowGAME1()
{
    delete ui;
}

void MainWindowGAME1::on_MainWindowGAME1_iconSizeChanged(const QSize &iconSize)
{

}



void MainWindowGAME1::on_pushButton_clicked()
{
    this -> hide();
    MainWindow = new class MainWindow(this);
    if(!MainWindow)
    {
        MainWindow = new class MainWindow(this);

    }

    MainWindow -> setWindowTitle("CASINO");
    MainWindow -> show();




}



void MainWindowGAME1::on_pushButton_2_clicked()
{
    this -> hide();
    MainWindowroullete *roulette = new MainWindowroullete(this);
    roulette -> show();
    roulette -> setWindowTitle("РУЛЕТКА");


}


void MainWindowGAME1::on_pushButton_3_clicked()
{
    this -> hide();
    MainWindowthreecardpoker = new  class MainWindowthreecardpoker(this);

    MainWindowthreecardpoker -> setWindowTitle("ТРЁХКАРТОЧНЫЙ ПОКЕР");
    MainWindowthreecardpoker -> show();

}


void MainWindowGAME1::on_pushButton_4_clicked()
{

    this -> hide();
    MainWindowblackjack  = new class MainWindowblackjack(this);

    MainWindowblackjack -> setWindowTitle("БЛЭКДЖЭК");
    MainWindowblackjack -> show();


}


void MainWindowGAME1::on_pushButton_5_clicked()
{
    this -> hide();
    MainWindowautomat = new class MainWindowautomat(this);
    MainWindowautomat -> setWindowTitle("АВТОМАТ");
    MainWindowautomat -> show();
}


void MainWindowGAME1::on_pushButton_6_clicked()
{
    this -> hide();
    MainWindowracing = new class MainWindowracing(this);
    MainWindowracing -> setWindowTitle("СКАЧКИ");
    MainWindowracing -> show();

}


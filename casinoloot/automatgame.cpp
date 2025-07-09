#include "automatgame.h"
#include "ui_automatgame.h"

#include "mainwindowlootgames.h"
#include "ui_mainwindowlootgames.h"

class MainWindowlootgames;

AutomatGame::AutomatGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutomatGame) , mainwindowlootgames(nullptr)
{
    ui->setupUi(this);
     setWindowTitle("Автомат");
}

AutomatGame::~AutomatGame()
{
    delete ui;
}

void AutomatGame::on_pushButton_clicked()
{
    if(!mainwindowlootgames)
    {
        this -> hide();
        mainwindowlootgames = new class MainWindowlootgames(this);
        mainwindowlootgames -> show();
    }
}


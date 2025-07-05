#include "mainwindowinfoversions.h"
#include "ui_mainwindowinfoversions.h"

MainWindowinfoversions::MainWindowinfoversions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowinfoversions)
{
    ui->setupUi(this);
}

MainWindowinfoversions::~MainWindowinfoversions()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "mainwindowgame1.h"
#include "ui_mainwindowgame1.h"


#include "settings.h"
#include "ui_settings.h"



#include "mainwindowinfoversions.h"
#include "ui_mainwindowinfoversions.h"


class MainWindowGAME1;
class settings;
class MainWindowinfoversions;


#include <QFile>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QDebug>
#include <QApplication>

#include <QUrl>

#include <QAudioOutput>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QMediaContent>


#include <QVBoxLayout>
#include <QPushButton>
#include <Qt>


#include <QScreen>
#include <QGuiApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) , MainWindowGAME1(nullptr) , settings(nullptr) , MainWindowinfoversions(nullptr)
{
    ui->setupUi(this);

}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    if(!settings)
    {
        settings = new class settings(this);

    }

    settings -> show();
    settings -> setWindowTitle("SETTINGS");


}


void MainWindow::on_pushButton_2_clicked()
{




    if(!MainWindowGAME1)
    {
        MainWindowGAME1 = new class MainWindowGAME1(this);

    }

    MainWindowGAME1 -> show();
    MainWindowGAME1 -> setWindowTitle("GAME1");



    QMediaPlayer *player = new QMediaPlayer(this);

    QString path2 = "qrc:resource/sounds/casino-slots-3_fk_6ygn_.mp3";
    QMediaContent content((QUrl(path2)));
    player -> setMedia(content);

    player -> setVolume(10);
    player -> play();

    if(MainWindowGAME1)
    {
        this -> hide();
        MainWindowGAME1 = new class MainWindowGAME1(this);

    }


}



void MainWindow::on_pushButton_3_clicked()
{
    QLabel *label_1 = new QLabel();
    label_1 -> show();
    label_1 -> resize(821,236);

    QString path1 = ":/resource/resource/practice.png";
    QPixmap pix(path1);

    label_1 -> setPixmap(pix);

}


void MainWindow::on_pushButton_4_clicked()
{
    if(!MainWindowinfoversions)
    {
        MainWindowinfoversions = new class MainWindowinfoversions(this);

    }

    MainWindowinfoversions -> show();
    MainWindowinfoversions -> setWindowTitle("ИНФОРМАЦИЯ О ВЕРСИЯХ");

}


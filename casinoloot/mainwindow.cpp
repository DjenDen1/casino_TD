#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "mainwindowlootgames.h"
#include "ui_mainwindowlootgames.h"


#include "settings.h"
#include "ui_settings.h"


#include "reference.h"
#include "ui_reference.h"


#include <QFile>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QDebug>
#include <QApplication>
#include <QLabel>

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




// classes

class MainWindowlootgames;
class settings;
class RefeRence;


QString path2 = "qrc:/source/sounds/casino-slots-3_fk_6ygn_.mp3";
QMediaContent content  = QUrl(path2) ;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) , mainwindowlootgames(nullptr) , Settings(nullptr)  , reference(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("главное меню");



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{

    if(!mainwindowlootgames)
    {
    this -> hide();

    mainwindowlootgames = new class MainWindowlootgames(this);

    mainwindowlootgames -> show();
    }


    QMediaPlayer *player = new QMediaPlayer(this);

    player -> setMedia(content);
    player -> setVolume(12);
    player -> play();
}


void MainWindow::on_pushButton_clicked()
{

    if(!Settings)
    {
        Settings = new class settings(this);
        Settings -> show();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QLabel *label1 = new QLabel();
    QString path1 = ":/source/resource/practice.png";
    QPixmap pix(path1);
    label1 -> setPixmap(pix);
    label1 -> show();

}


void MainWindow::on_pushButton_4_clicked()
{
    if(!reference)
    {
        reference = new class RefeRence(this);
        reference -> show();
    }
}


#include <QOpenGLTexture>
#include <QGLWidget>
#include <QImage>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QTimer>

#include <QMediaPlayer>
#include <QUrl>
#include <QMediaContent>
#include <QAudioOutput>
#include <QString>

#include "roulettegame.h"
#include "ui_roulettegame.h"

#include "roulette.h"

#include "mainwindowlootgames.h" // окно для выборв одного из пяти игр



#include <QVBoxLayout>


class MainWindowlootgames;
class Roulette;

QString path3 = ":/source/sounds/0001186.mp3";
QMediaContent content1  = QUrl(path3);

RouletteGame::RouletteGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RouletteGame) , mainwindowlootgames(nullptr) , roulette(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("рулетка");



    roulette = new  Roulette(this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout -> addWidget(roulette);
    roulette -> show();






}

RouletteGame::~RouletteGame()
{
    delete ui;


}

void RouletteGame::on_pushButton_clicked()
{
    if(!mainwindowlootgames)
    {
    this -> hide();
    mainwindowlootgames = new class MainWindowlootgames(this);
    mainwindowlootgames -> show();
    }

}


void RouletteGame::on_pushButton_2_clicked()
{



    QMediaPlayer *player = new QMediaPlayer(this);
    player -> setMedia(content1);
    player -> setVolume(12);
    player -> play();
    roulette -> startSpin();
    //player -> stop();

}


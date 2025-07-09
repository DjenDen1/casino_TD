#include "roulette.h"
#include "ui_roulette.h"


#include <QDebug>
#include <QtOpenGL>
#include <QImage>
#include <QOpenGLTexture>
#include <QGLFormat>
#include <QOpenGLFunctions>
#include <QDebug>
#include <QTimer>
#include <QPalette>

#include <gl/GL.h>
#include <gl/GLU.h>

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GLU32.lib")


Roulette:: Roulette(QWidget *parent) : QOpenGLWidget(parent)
{

    setGeometry(400,100,1000,900);
    /*
    setAttribute(Qt::WA_OpaquePaintEvent , false);


*/



    qsrand(QTime::currentTime().msec());
    connect(&timer , &QTimer::timeout,this,&Roulette::updateRotation);



}

void Roulette::initializeGL()
{
    rouletteimage = QImage(":/source/resource/wheel2.png").convertToFormat(QImage::Format_RGBA8888);
    initializeOpenGLFunctions();
    glClearColor(1.0f,1.0f,1.0f,0);




}

void Roulette::resizeGL(int w, int h)
{

    glViewport(0,0,w,h);

}



void Roulette::paintGL()
{


    glClear(GL_COLOR_BUFFER_BIT  | GL_DEPTH_BUFFER_BIT);

    QPainter painter(this);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    painter.setRenderHint(QPainter::Antialiasing,true);
    //painter.fillRect(rect(),Qt::white);


    int cx = width() / 2;
    int cy = height()/ 2;

    painter.translate(cx,cy);
    painter.rotate(angle);

    int iw = rouletteimage.width();
    int ih = rouletteimage.height();



    painter.drawImage(QRect(-iw/2 , -ih/2 , iw, ih),rouletteimage);
    painter.end();



}


void Roulette::startSpin()
{
    if(!spining)
    {
        speed = 10.0f + qrand() % 10;
        spining = true;
        timer.start(16);
    }
}

void Roulette::updateRotation()
{

    if(speed > 0.1f)
    {
        angle += speed;

        speed -= deceleration;

        if (angle >= 360.0f) angle -= 360.0f;

        update();
    }
    else
    {
        spining = false;
        timer.stop();
    }

}



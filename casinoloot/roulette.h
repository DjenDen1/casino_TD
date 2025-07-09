#pragma once
#include <QSurfaceFormat>
#include <QtWidgets>
#include <QtOpenGL>
#include <QOpenGLTexture>
#include <ui_roulette.h>
#include <QGLWidget>
#include <gl/GL.h>
#include <gl/GLU.h>


#include <QTimer>
#include <QtMath>
#include <QPainter>

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GLU32.lib")

class Roulette : public QOpenGLWidget , protected QOpenGLFunctions
{
    Q_OBJECT
public:
    Roulette(QWidget *parent = Q_NULLPTR);
    //  ~Roulette();

    void startSpin();
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private slots:
    void updateRotation();
private:


    QOpenGLTexture *tabletexture;
    QOpenGLTexture *chiptexture;
    QOpenGLTexture *wheel;
    QOpenGLTexture *texturephone;
    QSurfaceFormat *format;

    QImage rouletteimage;
    QTimer timer;
    float angle = 0.0f;
    float speed = 10.0f;
    bool spining = false;
    float deceleration = 0.05f;



protected:


};

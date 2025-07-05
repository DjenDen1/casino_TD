#include "mainwindowgame1.h"
#include "mainwindow.h"

#include <QLabel>

#include <QApplication>

#include <Qt>
#include <QtMultimedia>

#include <QMediaPlayer>
#include <QAUdioOutput>

#include <QUrl>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("CASINO");
    w.show();

    return a.exec();
}

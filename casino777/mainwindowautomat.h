#ifndef MAINWINDOWAUTOMAT_H
#define MAINWINDOWAUTOMAT_H

#include "mainwindowgame1.h"
#include <QMainWindow>

namespace Ui {
class MainWindowautomat;
}

class MainWindowautomat : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowautomat(QWidget *parent = nullptr);
    ~MainWindowautomat();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowautomat *ui;
    MainWindowGAME1 *MainWindowGAME1;
};

#endif // MAINWINDOWAUTOMAT_H

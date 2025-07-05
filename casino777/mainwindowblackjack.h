#ifndef MAINWINDOWBLACKJACK_H
#define MAINWINDOWBLACKJACK_H

#include <QMainWindow>

class MainWindowGAME1;

namespace Ui {
class MainWindowblackjack;
class MainWindowGAME1;
}

class MainWindowblackjack : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowblackjack(QWidget *parent = nullptr);
    ~MainWindowblackjack();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowblackjack *ui;
    MainWindowGAME1 *MainWindowGAME1;
};

#endif // MAINWINDOWBLACKJACK_H

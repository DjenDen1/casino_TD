#ifndef MAINWINDOWTHREECARDPOKER_H
#define MAINWINDOWTHREECARDPOKER_H

#include <QMainWindow>

class MainWindowGAME1;

namespace Ui {
class MainWindowthreecardpoker;
class MainWindowGAME1;
}

class MainWindowthreecardpoker : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowthreecardpoker(QWidget *parent = nullptr);
    ~MainWindowthreecardpoker();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowthreecardpoker *ui;
    MainWindowGAME1 *MainWindowGAME1;
};

#endif // MAINWINDOWTHREECARDPOKER_H

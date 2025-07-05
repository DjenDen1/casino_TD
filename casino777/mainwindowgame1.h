#ifndef MAINWINDOWGAME1_H
#define MAINWINDOWGAME1_H

#include <QMainWindow>


class MainWindow;
class MainWindowroullete;
class MainWindowthreecardpoker;
class MainWindowblackjack;
class MainWindowautomat;
class MainWindowracing;


namespace Ui {

class MainWindowGAME1;
class MainWindow;
class MainWindowroullete;
class MainWindowthreecardpoker;
class MainWindowblackjack;
class MainWindowautomat;
class MainWindowracing;

}

class MainWindowGAME1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowGAME1(QWidget *parent = nullptr);
    ~MainWindowGAME1();

private slots:
    void on_MainWindowGAME1_iconSizeChanged(const QSize &iconSize);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindowGAME1 *ui;
    MainWindow *MainWindow;
    MainWindowroullete *MainWindowroulette = nullptr;
    MainWindowthreecardpoker *MainWindowthreecardpoker = nullptr;
    MainWindowblackjack *MainWindowblackjack = nullptr;
    MainWindowautomat *MainWindowautomat = nullptr;
    MainWindowracing *MainWindowracing = nullptr;
};

#endif // MAINWINDOWGAME1_H

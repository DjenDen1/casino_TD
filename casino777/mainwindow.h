#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class MainWindowGAME1;
class settings;
class MainWindowinfoversions;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class settings;
class MainWindowinfoversions;

}
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    MainWindowGAME1 *MainWindowGAME1;
    settings *settings;
    MainWindowinfoversions *MainWindowinfoversions;


};
#endif // MAINWINDOW_H

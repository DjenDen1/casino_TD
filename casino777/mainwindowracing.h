#ifndef MAINWINDOWRACING_H
#define MAINWINDOWRACING_H

#include <QMainWindow>

class MainWindowGAME1;

namespace Ui {
class MainWindowracing;
class MainWindowGAME1;
}

class MainWindowracing : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowracing(QWidget *parent = nullptr);
    ~MainWindowracing();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindowracing *ui;
    MainWindowGAME1 *MainWindowGAME1;
};

#endif // MAINWINDOWRACING_H

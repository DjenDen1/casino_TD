#ifndef MAINWINDOWINFOVERSIONS_H
#define MAINWINDOWINFOVERSIONS_H

#include <QMainWindow>

namespace Ui {
class MainWindowinfoversions;
}

class MainWindowinfoversions : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowinfoversions(QWidget *parent = nullptr);
    ~MainWindowinfoversions();

private:
    Ui::MainWindowinfoversions *ui;
};

#endif // MAINWINDOWINFOVERSIONS_H

#ifndef AUTOMATGAME_H
#define AUTOMATGAME_H

#include <QMainWindow>

class MainWindowlootgames;

namespace Ui {
class AutomatGame;
class MainWindowlootgames;
}

class AutomatGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit AutomatGame(QWidget *parent = nullptr);
    ~AutomatGame();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AutomatGame *ui;
    MainWindowlootgames *mainwindowlootgames;
};

#endif // AUTOMATGAME_H

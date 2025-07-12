#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::settings)
{
    ui->setupUi(this);
    setWindowTitle("Настройки");
}

settings::~settings()
{
    delete ui;
}

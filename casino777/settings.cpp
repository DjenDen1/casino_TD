#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

#include "holam.h"
#include "ui_holam.h"

HolaM::HolaM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HolaM)
{
    ui->setupUi(this);
}

HolaM::~HolaM()
{
    delete ui;
}

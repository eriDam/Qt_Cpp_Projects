#include "holaqt.h"
#include "ui_holaqt.h"

HolaQt::HolaQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HolaQt)
{
    ui->setupUi(this);
}

HolaQt::~HolaQt()
{
    delete ui;
}

void HolaQt::on_pushButton_2_clicked()
{
    this->close();
}

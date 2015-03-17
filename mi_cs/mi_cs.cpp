#include "mi_cs.h"
#include "ui_mi_cs.h"

mi_cs::mi_cs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mi_cs)
{
    ui->setupUi(this);
}

mi_cs::~mi_cs()
{
    delete ui;
}

#include "holamundo.h"
#include "ui_holamundo.h"

HolaMundo::HolaMundo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HolaMundo)
{
    ui->setupUi(this);
}

HolaMundo::~HolaMundo()
{
    delete ui;
}

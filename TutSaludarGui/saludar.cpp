/* begin : lun marzo 9 2015

email : erika.c.caballero@gmail.com
*/
#include "saludar.h"
#include "ui_Frm_saludar.h"
#include"QLineEdit.h"
#include "qtextedit.h"
#include "qpushbutton.h"

Saludar::Saludar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Saludar)
{
    ui->setupUi(this);
}

Saludar::~Saludar()
{
    delete ui;
}

void Saludar::on_pushButton_saludar_clicked()
{
    ui->textEdit_saludarA->setText(ui->lineEdit_entrada->text());
}

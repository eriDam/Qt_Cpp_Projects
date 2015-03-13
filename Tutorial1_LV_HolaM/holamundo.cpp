/*Tut 1 Luis V
 * https://www.youtube.com/watch?v=x0nawWho99c&list=PLkMd51xTELZLS4NQl71uOPvMPRveD9C1o&index=3
*/
#include "holamundo.h"
#include "ui_holamundo.h"

//Constructor
HolaMundo::HolaMundo(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::HolaMundo)
{
    //construye una nueva ventana, utilizando la funcion ui setupUi
    ui->setupUi(this);
}

HolaMundo::~HolaMundo()
{
    delete ui;
}

//Evento botón, cuando se apulsado cambiaremos el texto del label
void HolaMundo::on_pushButton_clickMe_clicked()
{
    ui->label->setText("Hola Mundo!");
    //Para que se  ajuste el label al texto que se ha introducido
    ui->label->adjustSize();
}

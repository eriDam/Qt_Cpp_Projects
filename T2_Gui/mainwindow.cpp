#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    //en la implementacion de nuestra clase inicializa el puntero a la interfaz grafica
    ui(new Ui::MainWindow)
{
    //muestra o acomoda toda la interfaz grafica
    ui->setupUi(this);
    //en el puntero ui estan todas lass referencias que le ponemos a la interfaz graf
    //Si apretamos . se genera la flecha y utilizamos setText para ponerle un texto al label
    ui->label->setText("Mi primera Interfaz");
    //lo mismo para el pushbutton (para ver todas las funciones dejar el mouse encima del objeto
    //y apretar F1 sca la documentacion
    ui->pushButton->setText("Cerrar");

}

//En el destructor se destruye nuestro puntero
MainWindow::~MainWindow()
{
    delete ui;
}

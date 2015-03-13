#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Método generado para botón cerrar
void MainWindow::on_pushButton_2_clicked()
{
//Definimos que va a cerrar la ventana utilizando el método close(),
//Como va a ser la venatan padre de todo el programa utilizamos un puntero para this
    this->close();
}

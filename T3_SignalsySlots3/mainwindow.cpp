#include "mainwindow.h"
#include "ui_mainwindow.h"

//En el constructor inicializamos y conectamos
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    //en la implementacion de nuestra clase inicializa el puntero a la interfaz grafica
    ui(new Ui::MainWindow)
{
    //muestra o acomoda toda la interfaz grafica
    ui->setupUi(this);
    //Inicializamos mi_proceso con 0
    mi_proceso.setNum(0);

    //conectamos, como parámetro con el signo & y mi_proceso, SIGNAL y como parametro la señal creada
    //
    connect(&mi_proceso,SIGNAL(my_signal(int)),this,SLOT(slot_signal(int)));
}
//En el destructor se destruye nuestro puntero
MainWindow::~MainWindow()
{
    delete ui;
}

//Implementamos el SLOT
void MainWindow::slot_signal(int n)
{
    /*En la interfaz gráfica, en el statusBar (parte abajo), vamos a mostrar
    * un mensaje, tenemos que pasarle un QString y un tiempo de contable, para estar
    * mostrandose el mensaje, lo que mostraremos será un entero, hay que convertirlo
    * a QString, y el tiempo se le pasa en milisegundos, seg*1000*/
    ui->statusBar->showMessage(QString::number(n),2000);

}

void MainWindow::on_pushButton_Sumar_clicked()
{
   // Iniciaba en 0, cada vez que presiono emite la señal y  al ser mayor de 5 sale
    //el contador abajo en la statusBar 2 seg
    ++mi_proceso;
}

void MainWindow::on_pushButton_Restar_clicked()
{
    //Al restar y ser menos de 5 saldrá en la statusBar
    --mi_proceso;
}

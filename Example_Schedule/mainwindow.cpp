#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>//incluyo la libreria para poder utilizar cuadros de dialogo

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    //fFile("C:/schedule.xml")
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_abrir_clicked()
{
    //QString nombre;
     //nombre= QFileDialog::getOpenFileName(this, "Abrir archivo de vídeo"
     //,"", tr("Archivos AVI (*.avi);; Otros vídeos (*.mpg *.mov
     //*.wmv);;Todos los archivos (*.*)"));

}


void MainWindow::on_toolButton_explorer_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Abrir archivo"),"/home/documentos/schedule", tr("Files (*.*)"));

    if (filename.isEmpty())
        return;
    //fFile = filename;

}

void MainWindow::on_toolButton_explorer_pressed()
{

}

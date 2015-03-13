#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//1º Incluimos la clase proceso
#include "proceso.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //Creamos unos Slots, es importante que los Slots reciban los mismos
    //parámetros que las señales, si no, no coincidirian y no se podran conectar, daría error.
private slots:
    void slot_signal(int);

    void on_pushButton_Sumar_clicked();

    void on_pushButton_Restar_clicked();

private:
    Ui::MainWindow *ui;

    //2º Ponemos un atributo de proceso
    Proceso mi_proceso;
};

#endif // MAINWINDOW_H

//Descripción de la clase, generado al crear el proyecto
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    //la clase MainWindow tiene 1 macro q le añade ciertos parametros
    Q_OBJECT

public:
    //como público se encuentra el constructor y el destructor
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    //como privado se encuentra un puntero a main window que es otra clase
    //y maneja toda la interfaz grafica
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

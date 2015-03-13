#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
//la clase MainWindow tiene 1 macro q le añade ciertos parametros
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     //como público se encuentra el constructor y el destructor
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//Como privado, Ha creado una descripcion a esta función
private slots:
    void on_pushButton_2_clicked();
    //Creamos nuetsro propio Slot e implementamos esta función en mainwindow.cpp
    void mi_Slot();


private:
    //como privado se encuentra un puntero a main window que es otra clase
    //y maneja toda la interfaz grafica
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

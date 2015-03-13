#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
// Dentro del constructor, se especificará las funciones a las que se puede acceder, y los parámetros que se
// esperan.
    //gsoap ns service name: funciones
    //gsoap ns service style: rpc
    //gsoap ns service encoding: encoded
    //gsoap ns service namespace: -
    //gsoap ns service location: -
    //gsoap ns schema namespace: urn:func
    //En este ejemplo solo están permitidos dos tipos de acceso al servidor
    //para enviar un nuevo valor y para recibirlo
    int ns__enviar (unsigned nodo, std::string cadena, std::string &resultado);
    int ns__recibir(unsigned nodo, std::string &resultado);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H

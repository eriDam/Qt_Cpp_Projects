//Es la clase que corre cuando ejecutamos el programa
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Crea un objeto de QApplication y
    QApplication a(argc, argv);

    //Se crea un objeto de MainWindow
    MainWindow w;
    w.show();//Llamamos al metodo Show para mostrar la ventana

    //Espera a que se termine
    return a.exec();
}

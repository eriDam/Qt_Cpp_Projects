#include "holamundo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //Creo aplicacion de Qt
    HolaMundo w; //Creo la ventana
    w.show();//La muestro

    return a.exec();
}

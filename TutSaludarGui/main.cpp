#include "saludar.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//Secrea aplicacion de QT
    Saludar w; //Creo form a partir de clase
    w.show(); //Muestro form
   // w.setCaption("Nombres para Saludar"); //Asigno caption al form

    return a.exec();
}

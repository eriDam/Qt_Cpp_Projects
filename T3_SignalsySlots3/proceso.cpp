#include "proceso.h"

//Clase que va a emitir la Señal

Proceso::Proceso(QObject *parent) :
    QObject(parent)
{  
}
//En la descripcion de nuestro método colocaremos que numero aumente
//Estos métodos van a aemitir también la señal y vamos a poner una condición

Proceso & Proceso::operator ++()
{
    num++;
    //Si el número es mayor que 5, vamos a emitir la señal, pasamos el param num
    if(num > 5)
        emit my_signal(num);
    return *this;
}
//En la descripcion de nuestro método colocaremos que numero disminuya
Proceso & Proceso::operator --()
{
    num--;

    if(num < 5)
        emit my_signal(num);
    return *this;
}

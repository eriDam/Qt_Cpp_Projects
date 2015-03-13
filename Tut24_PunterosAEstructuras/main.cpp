/*
 * Tut24_Punteros a Estructuras
 * https://www.youtube.com/watch?v=_g84Uq0vyXQ
 *
 * */

#include <iostream>

//Creamos Estructura
struct miestructura
{
    int a;
}miEstructura, *puntero; //Creamos objeto de la estructura y un puntero para esta estructura.

int main()
{
    //Asignamos valor a estructura
    miEstructura.a = 12;
    puntero = &miEstructura;//Ya tiene la direccion de memoria de la estructura

    //Imprimo cual es la direccion de memoria
    std::cout << "La direccion de memoria de esta estructura es: " << puntero << std::endl;

    //Como conocer el valor de la variable a través del puntero, colocamos -> (si pulsa
     //mos . sale la coloca la flecha directamente y nos saca las opciones de que disponemos
     std::cout << "El valor de int a es:  " << puntero->a << std::endl;

    return 0;
}

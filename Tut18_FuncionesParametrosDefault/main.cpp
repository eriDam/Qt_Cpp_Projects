/*
 *
 * Tut18_Funciones con parametros por defecto, las funciones son un conjunto de intrucciones
 *
 *
 *https://www.youtube.com/watch?v=_kWZjya6agU
 *
 * Definir función:
 *  1º Tipo de dato
 *  2º Nombre funcion
 *  3º () con argumentos o vacío
 *  4º Se abren {} y se coloca el code que realizará la función
 *  5º Siempre se termina con un valor de retorno
 *
 *  Se pueden crear antes del main o despues,
 *  siempre y cuando se llamen dentro del main
 *
 * Si llamamos a la función y no le pasamos los argumentos necesarios,, esta tomará los parámetros
 * por defecto el cual le vamos a asignar
 */
#include <iostream>

using namespace std;

//Prototipo de la funcion, es como la declaracion pero sin el bloque de code, aquí asignamos un valor
void funcion(int num = 2); //Parámetro de la funcion el valor que le asignamos quedará por defecto



int main()
{

    //Llamamos a la funcion escribiendo su nombre, parentesis sin argumentos y ;
    funcion();
    //pasamos valor 12 a la funcion con lo cual sumará 12 a la variable
    //num que ya vale 2por num + el 3 que le hemos sumado
    funcion(12);
    cin.get();
    return 0;
}

//FUNCIONES/METODOS
void funcion (int num)
{
    //Sumará 3 a num que es el parámetro por default que hemos puesto
    cout << (num + 3) << endl;
}

/*
 *
 * Tut17_Funciones, las funciones son un conjunto de intrucciones
 * https://www.youtube.com/watch?v=ZYCTqYvDEI8
 *
 * Definir función:
 *  1º Tipo de dato
 *  2º Nombre funcion
 *  3º () con argumentos o vacío
 *  4º Se abren {} y se coloca el code que realizará la función
 *  5º Siempre se termina con un valor de retorno
 *
 *  Se pueden crear antes del main o despues,
 *  siempre y cuando se llamen dentro del main!!
 */

#include <iostream>

//Declaro variables:
int num1 = 2;
int num2 = 4;
int suma;
using namespace std;


//Creo Método o función suma
int sumar(int a, int b)
{
    return(a) + (b);
}

//Creo Método o función sin valor de retorno
void funcion()
{
  cout << "Funcion sin valor de retorno" << endl;
}

//La funcion main como es la principal, no se llama
int main()
{
    suma = sumar(num1, num2);
    cout << suma << endl;

    return 0;
}

/*
 * Tut23_Punteros 2 - Arrays
 *
 * Los punteros tienen mucho que  ver con lo arrays
 *
 * Los arrays son conjuntos de elementos de un mismo tipo que estan en la memoria
 * ordenados consecutivamente, en la dirección siguiente uno del otro.
 *
 *
 *
 *
 *
*/
#include <iostream>
//Declaramos un array que ocupa 5 espacios en memoria
int array[5];
int *p;

int main()
{
    //esto es lo mismo que decir que p = &array[0]
    //Un array es tambien un puntero, que apunta siempre hacia el primer elemento del array
    p = array;
    std::cout << "Direccion array[0] " << &array << std::endl;
    //Va a sacar la misma dirección que el anterior
    std::cout << "Puntero " << p << std::endl;

    //Si queremos que apunte a la posición 1 del array tenemos que incrementeasr
    p++;
    //Va a sacar otra dirección
    std::cout << "Puntero " << p << std::endl;

    return 0;
}

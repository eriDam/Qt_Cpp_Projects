/*
 * Tut_25: TypeDef
 *
 * Damos a los tipos de datos (int, char, float) un sobrenombre, ya que algunos son
 * bastante largos ej. unsigned int
 *
 * */

#include <iostream>

//Indicamos a la máquina que este tipo de dato se va a llamar ahora uint
typedef unsigned int uint;

//Defino que int ahora se va a llamar entero
typedef int entero;

entero main()
{

    uint numero  = -10; //Da error ya que unsigned es para números sin signo
    uint numero2  =  10;
    std::cout << "El valor de numero es: " << numero << std::endl;
    std::cout << "El valor de numero2 es: " << numero2 << std::endl;

    return 0;
}

/*
 * Tut22_Punteros
 * https://www.youtube.com/watch?v=3ILkValvhyI
 *
 * Los punteros son muy importantes: Son una herramienta muy util para manejar la memoria
 * solo son variables que guardan la dirección en memoria.
 *
 * La memoria de nuestro equipo tiene como unidad basica el bit ó 0 ó 1, el
 * conjunto de 8 bytes son 1 bit
 *
*/

#include <iostream>

/*Declaro una variable que se va a almacenar en memoria y va  atener como valor 12
*Pero esta variable es guardada en un lugar de la memoria que tiene su direccion,
*la direccion de memoria como nuestra dir de casa, damos la direccion no el nombre
*las variables se guardan con una direccion*/
int numero = 12;

//Creamos un puntero, que guardará la elección de memoria, tenemos que declararlo
//antes de su nombre con un * y será igual a la direccion de numero.
int *puntero = &numero;


int main()
{
    /*Para imprimir en pantalla, colocamos el operador de referencia y luego
     *el nombre de la variable lo que hace el operador es decirnos que direccion
     *va a tener esta variable en la memoria, en la consola nos saca un número hexadecimal
     *esta será la direccion de memoria donde esta esta variable.*/
    std::cout << &numero << std::endl;

    //Accede a la misma dirección de memoria, al igual que la anterior
    std::cout << puntero << std::endl;

    //Accede a la direccion de memoria cambiando la direccion por el valor que tiene esa var
     std::cout << *puntero << std::endl;

    //Vemos lo que vale numero en este momento
    std::cout <<"Vemos lo que vale numero en este momento:" << numero << std::endl;

    //Accedo al puntero y cambio el valor
    *puntero=3;
    std::cout <<"Vemos lo que vale numero despues de cambiarlo:" << numero << std::endl;

    //Si colocamos el * delante del puntero, se toma como operador de indirecion, cambia
    //la direccion de memoria por el valor que este almacenado en ella
    std::cin.get();
    return 0;
}

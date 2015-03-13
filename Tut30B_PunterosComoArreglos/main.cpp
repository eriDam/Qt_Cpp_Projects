/*
* Tut30B Arrays como punteros
* C++ - #2 Punteros Nombre de arreglos como apuntadores
* Deividcoptero Chann
*
* https://www.youtube.com/watch?v=NFgtCfd-UT0
*
*/
#include <stdio.h>
#define TAM 10

int main()
{
    //Declaramos una cadena con 5 enteros guardados
    int lista [TAM] = {10,20,30,40,50};

    //Visualizamos el primer elemento de la lista
    //colocamos el * delante de lista  para q sea un puntero de referenciado
    //printf  ("%d", *lista[0]); //Con notación de subindices

    //Visualizaremos lo mismo colocandolo así
    printf  ("%d Con notacion de apuntador ", *(lista+0),"\n"); //Con notación de apuntador
    printf  ( "\n");

    //Ejemplo de array tipo char guardaremos la vocales
    char ABC[6] = "AEIOU";

    //Declaramos un puntero q apunte a una variable char
    char *p;
    //Establecemos que el puntero apunte a la direccion del primer elemento de la cadena,
    // pasandole directamente la direccion de ABC con indice 0
    //Asi solo ABC con indice 0 es un valor en este caso
    // p =  &ABC[0];

    //Este caso es correcto por que el nombre de la cadena es un puntero, apunta al
    //indice 0, si ponemos ABC+1 apuntaria al 1
    p = ABC;
    //si mandamos a imprimir el puntero de referenciado veremos la A
    printf  ("%c  Apuntamos a la posicion 0\n", *p);



    return 0;
}

/*
 *  C++ - #1 Punteros Inicialización e indireción de apuntadores
 *  Deividcoptero Chann  https://www.youtube.com/watch?v=fFLXyirjjIA&list=PLCA51839EE3D3E7D6&index=3
*/
//libreria para las funciones de entrada y salida
#include <stdio.h>

int main( )
{
    //Creamos una variable int con un valor de 75
    //Cada vez que se declara una variable, el compilador reserva un espacio de memoria para
    //almacenar el contenido de la variable,e sta variable tiene una direccion
    int n = 75;
    //Utilizamos la funcion printf y ponemos que le ponemos que nos imprima un entero %d y el entero es n
    //en la salida del programa veremos 75.
    printf("%d es el valor\n", n);

    //Para acceder a la direccion de memoria indicamos que va a ser una direccion con p en lugar de d(entero)
    //pasamos el parametro n, pero por referencia a la direccion
    printf("%p es la direccion\n", &n);

    //Un puntero es la direccion donde vive la variable,
    //Para declarar un puntero, cuyo valor sea la direccion en memoria
    //Especifico el valor al que va a apuntar, operador de indireccion *antes del nombre
    //guardamos en el puntero p la direccion de n , por referencia &n
    int *p = &n;
    printf("n vale %d,\n", n);
    printf("La direccion en memoria de n es  %p,\n", &n);
    printf("P es igual a %p \n", p);
    //Podemos acceder a la direccion de mejoria que tiene p
    printf("La direccion en memoria de P es  %p \n", &p);


    //EJEMPLO cambio de valor a través de puntero
    int edad;
    //Creo el puntero que apuntara a la variable entera
    int *p_edad;//el puntero es la direccion donde vive la var edad y a parte tiene la llave de la casa
    //Podemos modificar el valor de la variable edad con el puntero
    p_edad = &edad;
    //Cambio el puntero, se le llama desreferenciar el apuntador,dejar de ver el puntero como una direccion
    //y empezar a verlo como el valor guardado en esa direccion
    *p_edad = 34;

    //Para acceder a la direccion de memoria indicamos que va a ser una direccion con p en lugar de d(entero)
    //pasamos el parametro n, pero por referencia a la direccion
    printf("\nEl valor de edad es %d \n", edad);
    printf("\nEl valor de edad es %d \n \n", *p_edad);

    //EJEMPLO muestra el abecedario con punteros
    char c;
    //Creo un puntero que apunta a una variable de tipo char
    char *p_c;
    //Le paso la direccion de c
    p_c = &c;
    //Realizo un for para recorrer
    for (c = 'A'; c <= 'Z'; c++)
        printf("%c ", *p_c);

    printf("\n\n");
    //Realizo un for para recorrer de la misma forma pero imprimiendo c
    for (c = 'A'; c <= 'Z'; c++)
        printf("%c ", c);



    return 0;
}

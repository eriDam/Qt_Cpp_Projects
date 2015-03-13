#include <stdio.h>
/*
* Tut32 Arrays como punteros Long cadena
* C++ - #2 Punteros Nombre de arreglos como apuntadores
* Deividcoptero Chann
*
* https://www.youtube.com/watch?v=NFgtCfd-UT0
*
*/
//Creo una funcion de tipo entero que me va a devolver la long d la cadena
int longitud(char cad[])
{
    int posicion = 0;//esta variable va a ser para el control de los indices de la cadena
    //Mientras cadena, con indice posicion, sea distinto de el espacio vacio que es 0, el compilador
    //le asigna 0 al ultimo espacio y termina la cadena
    while (cad[posicion] != '\0')
    {
        posicion++;//Va contando las posiciones y cuando llegue al final de la cadena, termina

    }
    return posicion;//Devolvemos lo que vale posicion

}//Fin funcion

//Misma funcion pero implentando punteros
//En lugar de pasarle a la func como param una cadena, le pasamos un puntero de tipo char llamdo cadena
int longitud2(char *cadena){
    //Esta variable va a ser para el control de la direccion de memoria a la que va a puntar el puntero
    int cuenta = 0;

    //al while, le pasamos el puntero de referenciado, While verifica que cadena el valor que apunta
    //el puntero sea distinto de 0 y
    //mete un incremento, este tambien se le puede pasar en la condicion, a continuacion realizo cuenta++ para que aumente
    while(*cadena++)cuenta++;
    return cuenta;
    }





int main()
{

    //EJEMPLO de programa que calcula la longitud de una cadena de caracteres
    //Realizaremos una funcion que primero va a tener como parametros una cadena
    //y vamos a medir la longitud y despues realizo la misma fucnion pero declarando punteros
    char cad[] = "cadena caracteres";
    printf("La longitud de %s es de %d caracteres \n", cad,longitud(cad));

    char cadena[] = "cadena caracteres fvsdfdf";
    printf("La longitud de %s es de %d caracteres \n", cadena,longitud(cadena));

    return 0;
}

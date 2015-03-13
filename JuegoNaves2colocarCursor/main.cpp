/*
 * Primer juego realizado en c++ Naves
 * Programación de Juegos C++ - Parte 2: Manipular coordenadas de la consola
 * Se debe realizar bajo el windows x que utilizaremos el API de Windows
 **/

/* 1º-Colocar la funcion main y colocar las librerias que vamos a usar
 *
 * Utilizaré la bibilioteca standar input ouput de C, aunque voy a usar c++, uso por que permite con la funcion
 * printf indicar cada carater que vamos a introducir
 * y hay caracteres mas chulos que con cout en la de iostream de c++, para dibujar la nave */
#include <stdio.h>
//Utilizamos la biblioteca de windows, permite dar unaPOSICION con la funcion setConsoleCursorPosition
#include <windows.h>




int main()
{
     //Para imprimir un asterisco
    printf("*");//Saldrá en el punto de origen esq sup izqda

    /*Método o función para posicionar el asterisco en las coordenadas que desee y
     * mover el asterisco con las flechas del teclado
     *
     *Esta función setConsoleCursorPosition tiene 2 parametros,
     *  el 1º un identificador llamado handle y el 2º una estructura de datos
     *
     * Handle (ej.tenemos varias ventanas cada 1 se id con un handle el nombre
     *  que da el sistema a la ventana,
     *  en el int del nucleo windows mantiene 1 tabla de todos los objetos
     * (ventanas, punteros de ratosn..) de los cuales el kernel es responsable,
     * cada entrada en la tabla tiene un id que se conoce como handle para
     *  poder hacer uso del
     *   setConsoleCursorPosition primero tenemos que saber que handle
     * (identificador de la ventana al que se quiere manipular)
     * en este caso la consola de ejecución.
     *
     * Crearemos un handle y le daremos un nombre
     * */
    HANDLE hConsola;
    //con este hanle lo que haremos es recuperar el id que aparece cuando corremos
    //un programa en la consola con GetConsoleCursorPosition
    //con este parámetro "TOMAMOS EN CONTROL DE SALIDA" en la consola
    //tomamos la salida por que la accion de dar posicion a un caracater en la
    //pantalla es una accion de salida, se va a visualizar
    hConsola = GetStdHandle(STD_OUTPUT_HANDLE);

    //Creo objeto de la libreria windows.h para pasarle los parametros
    //al setConsoleCursorPosition - Llamamos con el objeto a sus atributos y creamos la estructura
    COORD dwPos;
    //Utilizamos los atributos y asignamos las coordenadas
    dwPos.X = 4;//Punto de horigen en horizontal 4 espacios a dcha
    dwPos.Y = 5;//La Y está invertida si queremos que baje num mas alto si queremos que suba mas bajo el num

    /*Cuando ya tenemos el control de salida: Podemos poner el cursor
     * en cualquier posición para mandar a imprimir lo que queramos.
     *
     * -Primer parámetro el id de la consola
     * -Segundo una estructura de datos q tiene 2 atributos(o variables x e y)
     *  cuyas variables son las coordenadas donde queremos situar el CURSOR
     *  No sirve cualquier estructura. Este parámetro nos pide la estructura coord que viene definida en
     *  la libreria windows.h. Crearemos un objeto de esta estructura y le damos un nombre. (arriba de este comentario)
     */

    SetConsoleCursorPosition(hConsola,dwPos );
    printf("*");

    //Utilizamos el objetos, los atributos y asignamos las coordenadas
    dwPos.X = 8;//Punto de horigen en horizontal 4 espacios a dcha
    dwPos.Y = 18;//La Y está invertida si queremos que baje num mas alto si queremos que suba mas bajo el num
    SetConsoleCursorPosition(hConsola,dwPos );
    printf("*");

    printf("\n \n \n");


    return 0;
}

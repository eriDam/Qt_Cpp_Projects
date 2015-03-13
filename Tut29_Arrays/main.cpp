/*Tut29_Arrays
 * Deividcoptero Chann:
 * https://www.youtube.com/watch?v=gCBpGyKyaGU&list=
 * PL6hPvfzEEMDZ4kSON-OUZ70MFYNyTLUVK&index=17
 *
 *   Ejemplo de uso de arrays:
 *  Un arreglo, array, vector es una secuencia de datos del mismo
 *  tipo. Con una variable almacenamos todo
 *  Se debe declarar 1 con el tipo y el tamaño
 *
 */
#include <iostream>
//Defino una CONSTANTE  para tener bien controlado el tamaño, así lo puedo
//cambiar desde aquí no desde otro sitio.
#define TAM 10


int main()
{
    /*Declaro el array que contendrá 10 numeros enteros
     * y lo relleno inicializando algunos indices*/
     int array[TAM];
     array[0] = 5;
     array[1] = 2;
     array[9] = 7;

     std::cout <<"Posicion 0 tiene asignado: " << array[0] << "\nPosicion 1 tiene asignado: " << array[1]
              <<"\nPosicion 9 tiene asignado: " << array[9] << std::endl;


    //Para dar valores a todos ellos con un for
     int array2[TAM];
     //Rellenamos con un for
     for (int i = 0; i < TAM ; i++){
        //Array con indice i será igual a 0 todos valdrán 0
         //array[i] = 0;
         array[i] = i+1;//rellenamos de 1 a 10
         std::cout <<"Posicion " << i << " tiene asignado un valor de: " << array[i] << std::endl;
     }

     //Para realizar operaciones con los enteros que contiene el array
     //Creo una variable int suma con un valor inicial de 0
     int array3[TAM], suma = 0;
     for (int i = 0; i < TAM; i++){
         array[i] = 1+1;
         //Sumamos lo que vale suma 0, a lo q tiene el array en el indice i
         suma = suma+array[i];
     }
     std::cout << "\nTotal suma de todos los valores " << suma << std::endl;
    // std::cout <<"\nPosicion " << i << " tiene asignado un valor de: " << suma << std::endl;
     return 0;
}

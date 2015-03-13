/*
 * Tut14 Código facilito:
 *
 * Bucles-Loops FOR : En estos bucles se utilizan normalmente los arrays
 *
 * ARRAYS :
 *
 * https://www.youtube.com/watch?v=Rl9xQ-B__1U
 */

#include <iostream>

using namespace std;

int main()
{
    //Creamos una variable char que será un array (colocamos corchetes)
    //con un tamaño de 4 caracteres que le pasamos por parametro en los corchetes
    //Comienza en posición 0
     char c[4];
     //Asignamos valor a cada posición
     c[0] = 'H'; //Posición 0
     c[1] = 'o'; //Posición 1
     c[2] = 'l'; //Posición 2
     c[3] = 'a'; //Posición 3

     cout << "Estamos recorriendo el array, el contenido del array de caracteres es: \n "<<  endl;
     //Creo el loop/bucle/ciclo igual q JAVA, iterador - condicion - aumento
     for(int i=0; i<4; i++)
     {
         cout << c[i];
     }
      cout << endl;//colocamos el final de linea endl fuera para que no salga cada posicion del array en una linea

      cin.get();
      return 0;
}

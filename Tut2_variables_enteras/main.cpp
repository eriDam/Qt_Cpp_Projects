//*****************************************************************************
//*              Tut_2    Variables enteras: Código facilito                  *
//*                                                                           *
//*                                                                           *
//*****************************************************************************

#include <iostream> //libreria que se importa para entrada y salida de datos por pantalla
#include <stdlib.h> //librería que se importa para que no se cierre nuestro programa y colocamos .h por que es un header

/*Definir variables:
 * 1º escribir el tipo de dato de la variable, que va a aguardar esa variable.
 * 2º nombre.
 * 3º acabar en ; para finalizar la sentencia.
*/
int num = 34;
//Creo otra variable para sumar después
int num2 = 5;
//Creo otro entero para realizar la operación
int suma = num * num2;


using namespace std;//Cuando estamos utilizando la libreria iostream,presentar algo en la consola es distinto, hay que colocar using namespace
//se verá mas adelante std(es como un puntero inteligente, sustituye a los punteros).

//Función principal
int main()
{
    //Función que  permite mostrar salida de datos por pantalla
    cout << suma << "\n\n" << endl; // endl hace que termine la función cout, \n es para un salto de linea(como presionar enter)


    //para que se pare nuestro programa
    //system("PAUSE");
    return 0;
}

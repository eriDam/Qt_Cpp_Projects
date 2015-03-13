
//*****************************************************************************
//*              Tut_3    Variables Bool y Char: Código facilito              *
//*                https://www.youtube.com/watch?v=eoOhncKQdoM                *                                                   *
//*                                                                           *
//*****************************************************************************
#include <iostream>
#include <stdlib.h>

//Mejor no utilizar pero se utiliza para no tener que poner std:: delante de cout
using namespace std;

/*Tipo de variable CHAR Creamos una variable y guardamos en memoria un tipo char que contiene un solo
*caracter que se coloca entre comilla simple*/
char letra = 'd';

/*Tipo de variable CHAR con una cadena de caracteres:
 * Esto no se debe realizar, pero si queremos  escribir mas caracteres
 * el compilador de c++ nos cogerá el último carácter que tenemos escrito, en caso
 * de que contenga una cadena de caracteres, escribimos el * y le añadimos comilla doble*/
char* letra2 = "codigoFacil";

/*Tipo de variable Boolean:
 * Va a devolver verdadero o falso, 0 o 1, 0=false 1=true
 *
 */
bool variableBool  =false; //si ponemos un numero distinto de 0 lo tomará como true

//Función principal
int main()
{
    //Se imprime en pantalla la letra d
    cout << letra << "\n\n" << endl;
    //Se imprime en pantalla el ultimo caracter
    cout << letra2 << "\n\n" << endl;
    //system("PAUSE");
    //Se imprime la variable bool
    cout << variableBool << "\n\n" << endl; //como es false imprimirá 0

    return 0;
}

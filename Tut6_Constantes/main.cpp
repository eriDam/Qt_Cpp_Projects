//******************************************************************************
//*              Tut_6    Constantes: Código facilito                          *
//*            https://www.youtube.com/watch?v=mp6zjTlSDXs                     *
//*                                                                            *
//*   Las constantes son como las variables pero que no pueden ser modificadas *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//******************************************************************************
#include <iostream>
#include <conio.h>

using namespace std;
//Creo una variable y la inicializo.
int num = 30;
//Creo una variable que no cambiará, una   CONSTANTE tipo de dato nombre = valor;
// El valor se lo indicamos en la misma declaración de la constante, x que luego no se puede cambiar
const int numConst = 25;

int main()
{
    //Cambiamos el valor a la variable de tipo int num (aun no es una constante)
    num = 33;
    //Imprimo el valor de la variable int
    // endl hace que termine la función cout, \n es para un salto de linea(como presionar enter)
    cout << num << "\n\n" <<  endl;
    //Imprimo el valor de la constante
    cout << numConst << endl;
    getch();
    return 0;

}

/*
* Tut9: Operadores Lógicos, código facilito
*   Sirven para los condicionales if , swicth, for
*
* https://www.youtube.com/watch?v=4Y0MRHHkHXM
*
*/
#include <iostream>

using namespace std;

bool comprobador;
//el operador , sirve para declarar varias variables del mismo tipo
int num1, num2, num3, num4;



int main()
{
    //Hay que asignar dentro del main los valores
    num1 = 12;
    num2 = 20;
    num3 = 4;
    num4 = 13;
    //Cómo hacer comparaciones  para darle un valor a comprobador
    //Operador AND : pasamos entre parentesis las condiciones, ha de devolver true
    comprobador = (num4 > num1 && num3 < num2 );
    cout << comprobador << endl;

    //Operador OR || :una de las 2 se ha de cumplir
    comprobador = (num4 > num1 || num3 < num2 );
    cout << comprobador << endl;

    //AntiOperador ! : invierte el resultado
    comprobador = !(num4 > num1); //Si es verdadero da false, si es false da true
    cout << comprobador << endl;


    cin.get();//es para que no se cierre nuestra pantalla
    return 0;
}

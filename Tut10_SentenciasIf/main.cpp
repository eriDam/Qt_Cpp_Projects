/*
 * Tut10 Sentencias if: CONDICIONALES
 *
 *https://www.youtube.com/watch?v=2y11TNNlIPs
 */
#include <iostream>

using namespace std;
//Declaro 2 variables
int numero1 = 12;
int numero2 = 14;

bool booleaa = true;

int main()
{
    if (numero1<numero2){//si se cumple la condición realizará el siguiente codigo
        cout << "Es menor" << endl;
    }
    else if (numero1 == numero2) //evaluará esta condición
    {
        cout << "Son iguales" << endl;
    }
    else //en caso contrario rfealiza este
    {
         cout << "No es menor" << endl;
    }


    cin.get();
    return 0;
}

/*
 * Tut13 Bucles While Do While:
 *
 * https://www.youtube.com/watch?v=MRiBUpgn-Z0
 */
#include <iostream>

using namespace std;

int main()
{
    //Declaro variable para contador del bucle o iterador
    int iterad = 0;
    //Inicialización del bucle, mientras se cumpla condición, iterará/ejecutará el bucle
    while(iterad <= 5){
        cout << "Estamos en el ciclo iterac. numero: " << iterad << endl;
        //Aumentamos el iterador (contador)
        iterad++;
    }


    //Bucle Do While, diferencia: Ejecuta y luego evalua la condición,
    //realiza lo mismo un contador de 0 hasta que sea menor o igual 5
    do
    {
        cout << "Estamos en el ciclo iterac. numero: " << iterad << endl;
        //Aumentamos el iterador (contador)
        iterad++;
    }while(iterad <= 5);
    cin.get();
    return 0;

}

//*****************************************************************************
//*              Tut_7    OperadoresBasicos: Código facilito              *
//*                https://www.youtube.com/watch?v=eoOhncKQdoM                *                                                   *
//*                                                                           *
//*****************************************************************************
#include <iostream>
#include <conio.h>

//Mejor no utilizarlo,  pero se emplea para no tener que poner std:: delante de cout
using namespace std;

//Declaro variables para operadores básicos con y sin asignación
int num = 12;
int num2 = 10;
int suma;
int resta;
int multiplicar ,dividir, restoDivision; //Se pueden declarar así también
int operacion;//De esta forma podría utilizarla para la  suma, resta..solo cambio operador

//Función principal
int main()
{
    //Suma
    suma =  num + num2;
    //Se imprime en pantalla el resultado
    cout << "El resultado de la suma es: " << suma << "\n\n" << endl;

    //Resta
    resta =  num - num2;
    //Se imprime en pantalla el resultado
    cout << "El resultado de la resta es: " << resta << "\n\n" << endl;

    //Multiplicar
    multiplicar =  num * num2;
    //Se imprime en pantalla el resultado
    cout << "El resultado de multiplicar es: " << multiplicar << "\n\n" << endl;

    //Dividir
    dividir =  num / num2;
    //Se imprime en pantalla el resultado
    cout << "El resultado de dividir es: " <<dividir << "\n\n" << endl;

    //Para obtener el resto de la división restoDivision
    dividir =  num % num2;
    //Se imprime en pantalla el resultado
    cout << "El resultado de dividir es: " <<dividir << "\n\n" << endl;


    //Operadores asignación: += , -= , *=
    operacion = 12; //operación asigno que vale 12
    cout << "Asigno valor a operacion, es: " <<operacion << "\n" << endl;

    operacion += 3; //operación suma 3 al valor anterior ahora operación == 15
    cout << "Sumo 3 con += \nEl resultado es: " <<operacion << "\n" << endl;

    operacion -= 3; //operación resta 3 al valor anterior ahora operación == 12
    cout << "Resto 3 con -= \nEl resultado es: " <<operacion << "\n" << endl;

    operacion *= 3; //operación multiplica 3 al valor anterior ahora operación == 12
    cout << "Multiplico 3 con *= \nEl resultado es: " <<operacion << "\n" << endl;

    getch();
    return 0;
}

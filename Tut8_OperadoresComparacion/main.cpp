//******************************************************************************
//*              Tut_8    Operadores de Comparación: Código facilito
//*
//*                Los operadores se suelen utilizar con los if
//*            https://www.youtube.com/watch?v=s9jL3dFyKQM
//*
//******************************************************************************

//Incluimos las librerias predefinidas por el programa, código ya predefinido
#include <iostream>
#include <conio.h>//incluimos esta librería para que el programa no se cierre solo

//Mejor no utilizarlo,  pero se emplea para no tener que poner std:: delante de cout
using namespace std;

//Declaro 1 variable que será la que compruebe 2 variables,
bool comprobator;

int numero1 = 11;
int numero2 = 12;


int main()
{

//damos valor a comprobator, entre parentesis usamos el oprador de comparacion

    //Igualdad
    comprobator = (numero1 == numero2);//False 0, true 1
    cout << "El resultado es false: " << comprobator << endl;

    //Desigualdad
    comprobator = (numero1 != numero2);//False 0, true 1
    cout << "El resultado es true: " << comprobator << endl;

    //< Menor que, tambien <=
    comprobator = (numero1 < numero2);//False 0, true 1
    cout << "El resultado es true: " << comprobator << endl;

    //> Mayor que,  tambien >=
    comprobator = (numero1 > numero2);//False 0, true 1
    cout << "El resultado es false: " << comprobator << endl;

    getch();
    //Hay que colocar lo que devuelve la función y como es un int
     return 0;

}//Fin main

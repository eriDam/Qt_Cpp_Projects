/*
 *
 * Tut28_Funciones con parámetros por referencia
 * https://www.youtube.com/watch?v=zMiNHqYQ9vw&list=PL6hPvfzEEMDZ4kSON-OUZ70MFYNyTLUVK&index=16
*/
#include <iostream>

//Declaramos la funcion que nos devolverá una suma
//1º Tipo de dato  int;  2º nombre suma ; 3º parametros o no van separados por ,
int suma(int a, int b){
    return a+b;
}

//Defino la funcion tipo void por que no va a tener un tipo de retorno
//realiza algo en este caso iguala el valor de a lo toma b, tiene 2 param pero
//el 2 va con & lo estamos pasando por referencia,
//al hacer esto puedo modificar el valor de la variable accediendo a la memoria y cambiarla
void igualar(int a, int &b){
    b = a;
}


int main()
{
    std::cout << "Ejemplo de funciones" << std::endl;
    std::cout << "Introduce 2 numeros: " << std::endl;
    int a,b;
    std::cin >> a >> b;
    std::cout << "valores dados "  << a << " y " << b << std::endl;
    igualar(a,b);

    std::cout << "nuevos valores "  << a << " y " << b << std::endl;


    return 0;
}

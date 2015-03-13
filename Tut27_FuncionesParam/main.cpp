/*
 *
 * Tut27_Funciones con parámetros
 * https://www.youtube.com/watch?v=zMiNHqYQ9vw&list=PL6hPvfzEEMDZ4kSON-OUZ70MFYNyTLUVK&index=16
*/
#include <iostream>

//Declaramos la funcion que nos devolverá una suma
//1º Tipo de dato  int;  2º nombre suma ; 3º parametros o no van separados por ,
int suma(int a, int b){
    return a+b;
}


int main()
{
    std::cout << "Ejemplo de funciones" << std::endl;
    std::cout << "Suma 2 numeros" << std::endl;
    int a,b;
    std::cin >> a >> b;
    suma(a,b);
    //creo un entero que me devuelva la suma de a+b
    int res = suma (a,b);

    //Imprimo el resultado
    std::cout << "El resultado de " << a << " + " << b << " es: " << res << std::endl;

    return 0;
}

/*
 * Tut21_NameSpaces - Espacios de nombres
 *
 * Un espacio de nombre es algo que te permite en c++ tener
 * varias variables con el mismo nombre pero que
 * esten dentro de distintos espacios de nombres
 *
 *
 * */
#include <iostream>
//Creamos un namespace siempre fuera de main
namespace  ciudad
{
    int calle;
}

//Creo otro namespace siempre fuera de main
namespace pueblo
{
    int calle = 10;
}

//Utilizamos el namespace ciudad, creado siempre fuera de main
using namespace ciudad;

int main()
{
    //La variable que va a ser modificada, damos valor, será calle del namespace ciudad
    calle = 12;
    //Tenemos que imprimir en pantalla la calle de pueblo
    //como estoy usando el namespace ciudad no podré mostrar pueblo, tendré que usar pueblo::ciudad
    //Cout necesita el namespace std pero como no lo estoy usando accedo a el mediante std::cout
    std::cout << "El numero de calle de pueblo es: "<<pueblo::calle << std::endl;
    std::cout << "\nEl numero de calle de ciudad es: "<< calle << std::endl;
    std::cin.get();
    return 0;

}

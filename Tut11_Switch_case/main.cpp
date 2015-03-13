/*
 * Tut11 Switch: Similar al if, para elección
 *
 *https://www.youtube.com/watch?v=df1zLfljUMM
 *
 * Aplicación que nos hará escribir una letra
 */
#include <iostream>

using namespace std;


int main()
{
    //Declaramos un char y pedimos al usuario que escriba un caracter
    //que guardaremos en la variable c
    char c;
    cout << "Escribe una letra: " << endl;
    //Para guardar
    cin >> c;

    //Colocamos el switch y entre parentesis cual va a ser la que está cambiando que es c
    switch(c)
    {
    //Para todos estos casos será el mismo código, mejor que hacer un if, será menos código
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal \n " << endl;
        break;//para que no siga ejecuntado este code, si no hay otro caso pasará al siguiente caso o default
    default:
        cout << "Es una consonante" << endl;
    }

    //Para que no se cierre el programa utilizamos en este caso
    system ("pause");
    return 0;
}

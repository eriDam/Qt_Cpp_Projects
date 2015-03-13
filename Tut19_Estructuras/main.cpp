/*
 *
 * Tut19_ Estructuras : Codigo facilito
 *
 * Las estructuras son un tipo de variable estructurada en el cual se pueden guardar varios
 * datos sin importar de que tipo sean y quen tengan un arelacion entre ellos
 *
 *https://www.youtube.com/watch?v=jViob1lkCC0
 *
 *
 */
#include <iostream>

using namespace std;

int main( )
{
    //Creamos la estructura, en c++ no es obligatorio colocar struct
    //A las variables no se les puede asignar un valor dentro de la estructura
    struct Personaje
    {
        int edad;
        int tel;
    }Erika;
    Erika.edad = 32;
    Erika.tel = +658997450;

    cout << "La edad es: " << Erika.edad << "\nEl telefino es: " << Erika.tel << endl;

    cin.get();
    return 0;
}

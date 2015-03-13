/*
 *
 * Tut20_ Estructuras : Codigo facilito
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
    //Creamos la ESTRUCTURA de tipo Hogar, en c++ no es obligatorio colocar struct, en c si
    //A las variables no se les puede asignar un valor dentro de la estructura

    struct Hogar
    {
        int numDireccion;
        int numTelefono;
    };
    Hogar Fernandez, Gonzalez;//colocamos los 2 hogares
    Fernandez.numDireccion = 1080;
    Fernandez.numTelefono = 678320584;

    //Asignamos la misma direccion y telefono al Hogar gonzalez que el otro hogar de los Fernandez
    Gonzalez = Fernandez;
    cout << "**** Estructura 1:\nEl numero de direccion de la casa Gonzalez tiene: " << Gonzalez.numDireccion << endl;



    //ESTRUCTURA CON VALORES POR DEFAULT
    struct Hogar2
    {
        int numDir;
        int numTel;
        Hogar2():
            numDir(0)
        {
            numTel = 2;
        }

        //Creo una funcion para ver la direccion dentro de la estructura
        int verDir (){return numDir;}

        //Creo una  funcion para guardar la direccion, con un entero como parametro para que sea la nueva direccion
        int guardaDir(int a){numDir = a;}

    }Garcias, Fenollar, Perez;
    Garcias.numTel = 963331034;
    Garcias.numDir = 1085;

    Fenollar = Garcias;
    //Utilizo la funcion verDir
     cout << "**** Estructura 2:\nEl numero de direccion de la casa Gonzalez tiene: " << Perez.verDir() << endl;
    cout << "El numero de tel de los Garcias es: " << Garcias.numTel << endl;
    cout << "El numero de tel de los Perez es: " << Perez.numTel << endl;





    cin.get();
    return 0;
}

#include <iostream>
using namespace std;

struct Datos {
    string nombre;     // no inicializar los valores dentro, se debe hacer despues de crear la variable, a menos que se trate
                        // de una constante y no cambia nunca el valor ;).
    string apellido;
    int edad;
};// aqui debe llevar ; al final de la }(llave de cierre)

// si quieres crear estructuras lo puedes hacer aqui entre la } y ; o mas adelante en otra parte del código(dentro de main por ejemplo).
// Si quieres crearla aqui junto a la estructura se hace asi:
// [B]} gato, pajaro, persona007 ;[/B] // note que no hace falta poner "Datos"  delante si las creo entre } y ; alfinal de la
// estructura para entenderlo mire todo el programa, aqui creamos variables estructuras para gato, pajaro y persona007.


int main () {
    // Se dice que persona es de tipo "Datos" que a su vez es una estructura.
    // Con estructuras creas variables como si fuera int, char o otro cualquiera.
    Datos persona1;   // Creamos una variable de tipo "Datos" sabemos que es una estructura por que la creamos nosotros ;)
    Datos persona2;  // Creamos otra variable persona fijase que ahora la llamamos persona2
                    // Podemos crear a nuestro gusto la cantidad que deseemos de variables persona1, persona2, persona3...

    // Asi trabajamos con la variable que creamos
    persona1.nombre   = "pepelui"; // Ponemos el nombre de la variableun punto y el campo que queremos acceder
    persona1.apellido = "parrado";
    persona2.nombre   = "pablito";
    persona1.edad     = 34;

    cout << persona1.nombre << " " << persona1.apellido<< " " << persona1.edad << endl;
    // ahora cambiamos el nombre a persona 1, lo podemos cambiar a cualquier hora desde que no sea un const ;)
    persona1.nombre = "luluXD";
    cout << persona1.nombre << " " << persona1.apellido<< " " << persona1.edad << endl;

    // Copiar una estructura entera en otra.
    persona2 = persona1;
    cout << persona2.nombre << " " << persona2.apellido<< " " << persona2.edad << endl;

    // Si vas a trabajar con estructuras, debes saber acerca de los constructores y destructores.
    // Las estructuras se parecen a las clases, es un paso previo.
    cin.ignore(); // SIRVE PARA PAUSAR
    return 0;
}//FIN DE MAIN

/*
 * Tut15 Código facilito: DEFINE
 *
 * Operaciones de preprocesador mas  importantes include y define:
 * El preprocesador es lo que tiene antes de el compilador, que no lee el
 * código si no lee las lineas que empiecen con un numeral #, para ver si hay que hacer algo
 * antes de empezar a compilar.
 *
 * Colocamos un DEFINE para hacer una sustitución de palabras (mas bien  expadir la MACRO,
 * con un identificador de macro y una secuencia vease sustitución)
 * https://www.youtube.com/watch?v=8YvTkSRnxjE
 */

/*
 * MACROS
 * Conjunto de acciones realizadas
 * Colocamos el define con #(numeral), primero escribimos el identificador de macro o la sustitución
 * el nombre que va a tener nuestra operación, después lo que se va a sustituir
*/

#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b

#include <iostream>//para imprimir en pantalla



using namespace std;

//Declaro variables asignando el valor
int numero1 = 2;
int numero2 = 4;

//Declaro variables para las operaciones sin asignar valor
int suma;
int mult;
int div;

int main()
{
    //asignamos la macro a la variable suma
    suma = sumar (numero1, numero2);
    mult = multiplicar (numero1, numero2);
    div = dividir (numero2, numero1);

    cout << "La suma es: " << suma << endl;
    cout << "La multiplicacion es: " << mult << endl;
    cout << "La division es: " << div << endl;

    cin.get();//para que no se cierre el programa
    return 0;
}

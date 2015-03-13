/*
 * Tut26_Clases
 *
 * Una clase en c++ es un objeto el cual se comporta de cierta manera, la diferencia de c++ con otros
 * es que c++ es orientado a objetos.
 * https://www.youtube.com/watch?v=lBhSrZd7oW8
 * Ej. en un juego el pj es un objeto, el arma otro objeto, sus vidas serían otro objeto
 *
 * */

#include <iostream>

//Definimos una clase
class cuentas
{
    //en las clases hay un orden o diferentes categorías de datos, pej.public, private
    //Si son públicos pueden ser cambiados los datos, accedidas las funciones
    //desde fuera de la clase, también pueden ser accedidos mediante objetos desde dentro de la clase
public:
    //Variables
    //Funciones

    //Creo 2 prototipos de funciónes dentro de public, para cambiar la variable resultado que es private
    int sumaDos (int arg);
    int sumaTres(int arg);

    //También estan los objetos private, propios de la clase, no pueden ser
    //cambiados ni utilizados fuera
private:
    int resultado; //Solo puede er cambiada a través de esta clase, con una función por ejemplo.

    //Los objetos protected son una parte intermedia entre private y public, por que no dejan
    //que desde fuera se puedan utilizar los datos, si deja que si una clase  hereda de
    //persona(esta clase) pueda tener acceso
protected:

};

//FUNIONES:
//Hay que definir que va ha hacer cada funcion
//Fuera de la clase y de la función main, hay que definir o declarar que va a hacer cada funcion
//cuentas:: lo utilizamos por que estamos usando el namespace de la clase que
//contiene todos los componentes de la clase cuentas
int cuentas::sumaDos(int arg)
{
    //Sumará 2 al numero que pongamos entre parentesis cuando llamemos a la función
      resultado = arg +2;//lo guardamos en resultado
      return resultado;//nos devuelve un int resultado

}
int cuentas::sumaTres(int arg)
{
    //Sumará 3 al numero quepongamos entre parentesis cuando lo pasemos a la función
      resultado = arg +3;
      return resultado;

}


int main()
{

    //Desde dentro de main intentamos cambiar serie pero no vamos a poder ya que está private
    //serie = 15;
    //std::cout << "El valor de serie es: " << serie << std::endl; No puede ser accdido

    /*Declaramos un objeto cuenta  que tiene todas las propiedades y funciones de
     * la clase cuentas, se pueden hacer muchos = java
    */
    cuentas cuenta;
    std::cout << "+ 2 = " << cuenta.sumaDos(2) << std::endl;
    std::cout << "+ 3 = " << cuenta.sumaTres(2) << std::endl;
    std::cin.get();
    return 0;

}

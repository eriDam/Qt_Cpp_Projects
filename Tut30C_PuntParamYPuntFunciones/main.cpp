/*
 * Tut30C  C++ - #3 Punteros como parametros y punteros a funciones
 *
 * https://www.youtube.com/watch?v=naIpBwpvhHE&index=5&list=PLCA51839EE3D3E7D6
 *
 * */

#include <stdio.h>

/*
 * FUNCION
 *
 * Creo una funcion que incrementa en 5 el parametro que se le pasa a la funcion:
 * Será void por que no va a devolver nada, va a realizar la modificacion del parametro
 * Le pasamos como parámetro un puntero de tipo int y lo que hace la funcion
 * es coger la direccion a la que apunta el puntero e incrementar en 5
 *
 */
void incrementar5(int *i){
 *i +=5;
}

/*
 * FUNCION
 *
 * Creo otra funcion void (por que no va a devolver nada) va a tener como param un puntero
 *  y un valor entero*/
void func1(int *p , int j){
    //Indico que el puntero que le paso a la funcion, el valor al que apunta lo ponga a 6
    //El entero j que me han pasado x param sea == 10
    *p = 6;
    j = 10;
}

/*FUNCION
 * Creo otra funcion DE TIPO INT que sumará enteros y nos devolverá un entero para probar con punteros
 * Le vamos a pasar los param x valor, no vamos a modificar datos solo va a devolver, no hace falta meterlos
 * por referencia solo por valor.
 * */

int funcSuma(int i, int j){
   //Pedimos que nos devuelva la suma de i + j
    return i + j;
}







//FUNCION PRINCIPAL
int main()
{
    //Creamos una variable inicial
    int i = 10;
    //La funcion nos pide que le pasemos como parametro un puntero,
    //le pasamos el entero i, para pasar i como un puntero, se lo paso como
    //una direccion (por referencia) si no pongo el & es como argumento
    incrementar5(&i);
    printf("Resultado: %d", i);
    printf("\n\n");//Espacio linea en blanco en la consola

    // Creo 2 enteros
    int r, m;
    r = 0;
    m = 3;
    //Llamo a la función func1 y le paso el 1 parametro le paso r como pide que sea
    //como puntero lo pasamos con el operador de direccion (por referencia)
    //y el otro nos pide que pasemos un entero tal cual(por valor)
    func1(&r , m);
    //Para ver la direferencia de pasar por referencia y por valor
    //Como la funcion va a cambiar el valor a las variables y va a poner el que le hemos indicado,
    //al pasar x referencia accede a la memoria donde está y lo cambia, pasando el param x valor solo ve
    //como una foto de donde esta, no entra a la memoria(casa)
    printf("\n\nr ahora es %d y m ahora es %d ", r, m );
    printf("\n\n");//Espacio linea en blanco en la consola

    /*
     * También se pueden crear punteros que apunten a funciones, en lugar de apuntar a datos como en el caso anterior
     * apuntan a una función o codigo ejecutable, creamos una función fuera de main funcSuma.
     *
     * Creo un puntero a la funcion suma:
     *  -Tipo de dato int
     *  -Entre parentesis el puntero con su nombre,
     *  -Entre parentesis de nuevo pasamos los dos enteros que tiene como param y ;
     * */
     int (*puntFuncSuma)(int,int);

     //Asignamos la direccion de la funcion al puntero, ponemos el nombre del puntero y el nombre de la funcion
     puntFuncSuma = funcSuma; //De esta forma podemos acceder al codigo de la funcion con el puntero
     //Imprimo en pantalla la suma de 3 y 5 que dara 8,
     // le indico que va 1 entero, llamamos al puntero (nombre puntero)(parametros que necesita)
     printf("Resultado: %d", (puntFuncSuma)(3,5));
     printf("\n\n");//Espacio linea en blanco en la consola
    return 0;
}

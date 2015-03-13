/*
 * Tut15 Código facilito:
 *
 * Operaciones de preprocesador:
 * El preprocesador es lo que tiene antes de el compilador, que no lee el
 * código si no lee las lineas que empiecen con un numeral #, para ver si hay que hacer algo
 * antes de empezar a compilar.
 *
 * Colocamos un include<> para librerias predefinidas (codigo ya hecho) busca en
 * la misma carpeta include del IDE, por que son librerias ya escritas
 *
 * Colocamos el include "" para buscarlos en nuestra misma carpeta donde esta el mismo archivo de c++
 * si no lo encuentra buscará en la carpeta include
 *
 * Copmo ejemplo, creo un header: sobre el proyecto nuevo archivo:
 *
 * https://www.youtube.com/watch?v=hdXSzjpOMP4
 */

 /* Colocamos el include "" para buscarlos en nuestra misma carpeta del proyecto, donde esta
  * el mismo archivo de c++ si no lo encuentra buscará en la carpeta include*/
 #include "header.h"

//Realizo un programa que utiliza iostream
using namespace std;

int main()
{

cout << "Prueba llamando a que busque el include en la carpeta del programa" << endl;
cin.get();//para que no se cierre el programa
return 0;
}

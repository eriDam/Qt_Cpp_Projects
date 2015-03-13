#include <stdio.h>
#include <windows.h>
// Esta bibl tiene la facilidad para detectar si se han presionado las teclas
#include <conio.h>

//Creo una funcion de tipo void, que no devuelve ningun tipo de dato, hace algo.
//esta funcion hace lo mismo que la funcion con este nombre que viene en la
//biblioteca conio de los compiladores gorlam, para recrear esta funcion la llamamos asi
void gotoxy(int x, int y){

    //Método o función para posicionar el asterisco en las coordenadas que desee y
    // mover el asterisco con las flechas del teclado
     HANDLE hConsola;

     //con este hanle lo que haremos es recuperar el id que aparece cuando corremos
      hConsola = GetStdHandle(STD_OUTPUT_HANDLE);

      //Creo objeto de la libreria windows.h para pasarle los parametros
      //al setConsoleCursorPosition - Llamamos con el objeto a sus atributos y creamos la estructura
      COORD dwPos;

      //Utilizamos los atributos y asignamos las coordenadas
      dwPos.X = x;//Punto de horigen en horizontal 4 espacios a dcha
      dwPos.Y = y;//La Y está invertida si queremos que baje num mas alto si queremos que suba mas bajo el num

    //  Cuando ya tenemos el control de salida: Podemos poner el cursor
    //  en cualquier posición para mandar a imprimir lo que queramos.
      SetConsoleCursorPosition(hConsola,dwPos );
      //printf("*");
      //printf("\n \n \n");
}

int main()
{
    //Usamos la llamada a la funcion gotoxy(), pasamos los parametros que queremos de posición


    //creo 2 var para hacer alusion a sus coord
    int x = 10, y = 10;
    //Para que en la 1 iteración se vea el *
    gotoxy(x,y); printf("*");

    //como los métodos se tienen que ejecutar constantemente relizaré un while
    bool game_over = false;//Variable bool para controlar la condición, cuando ejec programa no hay game over, es false
    while (!game_over) { //Se ejecutara siempre que el argumento sea true q no sea game over


        /*Para usar la biblioteca conio uyilizamos la funcion kbhit(). Si se presiona una tecla relizaremos unas condiciones para evaluar
         * que tiene que hacer,
        */

        if(kbhit()){
            char tecla = getch();//getch guarda la letra q se presiona en la var bool tecla
            /*Para que no se quede el rasto de los ateriscos, nos tendremos que situar en la posicion que tenia el asterisco
            * Mandarla a imprimir con un espacio en blanco(equivale
            * a BORRAR ASTERISCO)
            */
            gotoxy(x,y); printf(" ");
            if(tecla == 'j') x--;//Si tecla j pulsada,  posicion DESCUENTA hacia origen (IZQUIERDA)
            if(tecla == 'l') x++;//Si tecla j pulsada,  posicion AUMENTA(DERECHA)
            if(tecla == 'i') y--;//Si tecla j pulsada,  posicion DESCUENTA (ABAJO)
            if(tecla == 'k') y++;//Si tecla j pulsada,  posicion AUMENTA (ARRIBA)
            //Para que no parpadee el * lo PINTAREMOS aquí en lugar de dentro de while
            //En caso de q se apriete una tecla se pinta
            gotoxy(x,y); printf("*"); //llamamos a la función pasamos las var de sus coord que acabo de crear y nos situamos en esas coord
        }

    }
    //para que no se sature el procesador, detiene el programa por 30 milisegundos
    //Realizará menos iteraciones por segundo
    Sleep(30);

    return 0;
}

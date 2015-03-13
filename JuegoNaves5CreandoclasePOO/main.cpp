#include <stdio.h>
#include <windows.h>
// Esta bibl tiene la facilidad para detectar si se han presionado las teclas
#include <conio.h>
//Defino unas constantes - cuando llame a ARRIBA... se estara poniendo 72
#define ARRIBA 72 //las flechas tienen asignados unos numeros de tecla en el teclado
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

//FUNCIONES

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


/*Creo una función OCULTAR CURSOR de tipo void*/
void OcultarCursor(){
    HANDLE hConsola;
    hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    //Estructura de datos consoleCursorInfo, tiene 2 atributos con lo que podemos controlar la apariencia del cursor
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;//variable entera de 1 a 100 el valor es el estilo del cursor que se ponga en pantalla
    cci.bVisible = FALSE;//2 valores true(MUESTRA CURSOR EN PANTALLA) o  false(NO SE MUESTRA)


    //Podemos controlar carateristicas del cursor q se muestra en pantalla
    //1 param handle(identificador de consola, 2 para estructura
    //de datos consoleCursorInfo, tiene 2 atributos con lo que podemos controlar la apariencia del cursor
    //tenemos que pasar el 2 parametro por refrencia para que pueda acceder a sus datos y modificarlos
    SetConsoleCursorInfo(hConsola, &cci);

}
//******************* CLASES *******************

//CLASE NAVE
class NAVE{
    //1º Atributos de la clase por default private(No podemos acceder a ellos fuera
    //de la estructura ni sus metodos), ponemos las COORD
    int x, y;

    //2º Esta parte podemos hacerla publica, estos métodos serán accesibles desde cualquier
    //parte del programa
public:
    //    CONSTRUCTOR que al ser llamado dentro de main nos inicializa los atributos de la clase y del objeto
    //    Ha de tener el mismo nombre que la clase, le pasamos como param 2 int, a la hora de meter estos param en el
    //    contructor, le estaremos pasando estos valores a sus coordenadas x,y
    //    Los pongo con _x  y _y para q no se confundan con los atributos
    NAVE(int _x, int _y );


    void pintar();//Necesitamos pintar la nave
    void borrar();//Borrará el rastro de las posiciones
    void mover();//Para el control de la nave x teclado

};//La clase tiene que cerrar el cuerpo con ;

//Definimos el constructor
NAVE::NAVE(int _x, int _y ){
   //Iniciamos los atributos de la clase con los parametros
    x = _x;
    y = _y;
}

//Otra forma que acorta el code y se pondría dentro de la misma clase line73
// NAVE::NAVE(int _x, int _y ):x(_x),y(_y){}



//***************** FUNCIONES *******************

//  Definimos las funciones de la clase, 1º tipo de func, 2º Especificamos que es una funcion de la clase nave
//  ponemos NAVE:: para acceder con este operador a los mtodos de la clase
void NAVE::pintar()
{
    //Llamamos a la funcion gotoxy();Utilizamos printf con arg (indicamos que pasaremos 1 caracter y el num de caracter que corresponde en code Ascii
    gotoxy(x,y);   printf("  %c", 30);//1 linea de la nave
    gotoxy(x,y+1); printf(" %c%c%c", 40,207,41);//Una posicion abajo de la primera
    gotoxy(x,y+2); printf("%c%c %c%c", 30,190,190,30);//dos posiciones abajo, ultima linea de la nave

}
void NAVE::borrar()
{
    gotoxy(x,y);   printf("     ");
    gotoxy(x,y+1); printf("     ");
    gotoxy(x,y+2); printf("     ");
}
void NAVE::mover()
{
    /*Para usar la biblioteca conio uyilizamos la funcion kbhit(). Si se presiona una tecla relizaremos unas condiciones para evaluar
     * que tiene que hacer,
    */

    if(kbhit()){
        char tecla = getch();//getch guarda la letra q se presiona en la var bool tecla
        /*Para que no se quede el rasto de los ateriscos, nos tendremos que situar en la posicion que tenia el asterisco
        * Mandarla a imprimir con un espacio en blanco(equivale
        * a BORRAR ASTERISCO)
        */
        borrar();
        if(tecla == 'j') x--;//Si tecla j pulsada,  posicion DESCUENTA hacia origen (IZQUIERDA)
        if(tecla == 'l') x++;//Si tecla j pulsada,  posicion AUMENTA(DERECHA)
        if(tecla == 'i') y--;//Si tecla j pulsada,  posicion DESCUENTA (ABAJO)
        if(tecla == 'k') y++;//Si tecla j pulsada,  posicion AUMENTA (ARRIBA)

        //Detectar flechas El comp esta igualando un char a un int -detecta y busca en el code ansi un caracter que corresponda a ese num
        if(tecla == IZQUIERDA) x--;//Si tecla j pulsada,  posicion DESCUENTA hacia origen (IZQUIERDA)
        if(tecla == DERECHA) x++;//Si tecla j pulsada,  posicion AUMENTA(DERECHA)
        if(tecla == ARRIBA) y--;//Si tecla j pulsada,  posicion DESCUENTA (ABAJO)
        if(tecla == ABAJO) y++;//Si tecla j pulsada,  posicion AUMENTA (ARRIBA)


        //Para que no parpadee el * lo PINTAREMOS aquí en lugar de dentro de while
        //En caso de q se apriete una tecla se pinta
         pintar();
    }
}



//FUNCION PRINCIPAL
int main()
{

    //Utilizo la función para ocultar cursor
    OcultarCursor();

    //Creo el objeto de la clase:
    //1º Nombre clase - 2º Name object - 3º Param - En este caso inicio las coordenadas en 7,7
    NAVE N(7,7);

    //LLamo a los métodos
    N.pintar();


    //como los métodos se tienen que ejecutar constantemente relizaré un while
    bool game_over = false;//Variable bool para controlar la condición, cuando ejec programa no hay game over, es false

    while (!game_over) { //Se ejecutara siempre que el argumento sea true q no sea game over
    N.mover();

    //para que no se sature el procesador, detiene el programa por 30 milisegundos
    //Realizará menos iteraciones por segundo
    Sleep(30);
}
    return 0;
}


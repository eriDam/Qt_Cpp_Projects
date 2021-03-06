/*Parte 7 https://www.youtube.com/watch?v=50BCedtUNNE*/
#include <stdio.h>
#include <windows.h>
// Esta bibl tiene la facilidad para detectar si se han presionado las teclas
#include <conio.h>
#include<stdlib.h>//para usar la funcion rand
//Incluyo para utilizar listas
#include<list>
using namespace std;

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

/*FUNCION OCULTAR LIMITES,
 * No va a tener parametros*/
void pintar_limites(){
    //1º Pintamos las lineas horizontales, usamos codigo ascii
    // Tenemos que pintar todos los cuadritos horizontales, lo haremos con un for
    for(int i = 2; i<78 ; i++){
        gotoxy(i, 3); printf("%c",205);//nos situamos en i que va de 2 a 78 e y lo dejamos fijo en 3
        gotoxy(i, 33); printf("%c",205);//nos situamos lina horizontal de abajo, las x las recorremos con el indice i
    }

    //1º Pintamos las lineas verticales, usamos tamb codigo ascii
    for(int i = 4; i<33 ; i++){
        gotoxy(2, i); printf("%c",186);//nos situamos en i que va de 2 a 78 e y lo dejamos fijo en 3
        gotoxy(77, i); printf("%c",186);//nos situamos lina horizontal de abajo, las x las recorremos con el indice i
    }
    //Pintaremos las esquinas
    gotoxy(2,3);printf("%c",201);
    gotoxy(2,33);printf("%c",200);
    gotoxy(77,3);printf("%c",187);
    gotoxy(77,33);printf("%c",188);
}


//******************* CLASES *******************

//CLASE NAVE
class NAVE{
    //1º Atributos de la clase por default private(No podemos acceder a ellos fuera
    //de la estructura ni sus metodos), ponemos las COORD
    int x, y;
    //Creamos otra variable para el atributo de los corazones para la clase
    int corazones;
    //Añadimos otro atributo a la clase para vidas y lo añado al constructor
    int vidas;



    //2º Esta parte podemos hacerla publica, estos métodos serán accesibles desde cualquier
    //parte del programa
public:
    //    CONSTRUCTOR
    //    que al ser llamado dentro de main nos inicializa los atributos de la clase y del objeto
    //    Ha de tener el mismo nombre que la clase, le pasamos como param 2 int, a la hora de meter estos param en el
    //    contructor, le estaremos pasando estos valores a sus coordenadas x,y
    //    Los pongo con _x  y _y para q no se confundan con los atributos
    //NAVE(int _x, int _y , _corazones);
    //Otra forma que acorta el code y se pondría dentro de la misma clase line73
    //añado el nuevo atributo vidas con el parametro _vidas para no confundir y se lo inicio
    NAVE(int _x, int _y ,int _corazones, int _vidas):x(_x),y(_y),corazones(_corazones), vidas(_vidas){}

    //PROTOTIPOS DE FUNCION
    int X(){return x;}//Funcion que permite devolver/ver valor de la coord x
    int Y(){return y;}//Funcion que permite devolver/ver valor de la coord y
   //Funcion que hace q los corazones de la nave decrezcan, creo un metodo en la Nave COR que descontara 1 al atr corazones
    void COR(){corazones--;}
    void pintar();//Necesitamos pintar la nave
    void borrar();//Borrará el rastro de las posiciones
    void mover();//Para el control de la nave x teclado
    void pintar_corazones();//función para nuestras vidas
    void morir();//función game_over


};//La clase tiene que cerrar el cuerpo con ;

//Definimos el constructor (lo defino en la misma clase x eso dejo comentado)
//NAVE::NAVE(int _x, int _y ,_corazones){
//Iniciamos los atributos de la clase con los parametros
//   x = _x;
//   y = _y;
//   corazones = _corazones;
//}





//***************** FUNCIONES clase nave *******************

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
    gotoxy(x,y);   printf("       ");
    gotoxy(x,y+1); printf("       ");
    gotoxy(x,y+2); printf("       ");
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
        *
        */
        borrar();
        if(tecla == 'j' && x > 3 ) x--;//Si tecla j pulsada,  posicion DESCUENTA hacia origen (IZQUIERDA)
        if(tecla == 'l' && x+6 < 76) x++;//Si tecla j pulsada,  posicion AUMENTA(DERECHA)
        if(tecla == 'i' && y > 4) y--;//Si tecla j pulsada,  posicion DESCUENTA (ABAJO)
        if(tecla == 'k' && y+3 < 33) y++;//Si tecla j pulsada,  posicion AUMENTA (ARRIBA)

        //Detectar flechas El comp esta igualando un char a un int -detecta y busca en el code ansi un caracter que corresponda a ese num
        if(tecla == IZQUIERDA && x > 3 ) x--;//Si Flecha IZQUIERDA y la coord x es mayor q 3(borde)posicion DESCUENTA hacia origen (IZQUIERDA)
        if(tecla == DERECHA   && x+6 < 76) x++;//Si Flecha DERECHA pulsada, y x+6(por que tiene varios caracteres) es menor q 77 que es el limite de la dcha  posicion AUMENTA(DERECHA)
        if(tecla == ARRIBA    && y > 4) y--;//Si Flecha ARRIBA pulsada,  posicion DESCUENTA (ABAJO)
        if(tecla == ABAJO     && y+3 < 33) y++;//Si Flecha pulsada ABAJO,  posicion AUMENTA (ARRIBA)
        //Probamos si podemos descontar corazones con la  tecla e
        if(tecla == 'e' )corazones--;

        //Para que no parpadee el * lo PINTAREMOS aquí en lugar de dentro de while
        //En caso de q se apriete una tecla se pinta
        pintar();
        pintar_corazones();//que nos pinte cuando movamos a la nave
    }
}

//Funcion pintar_corazones

void NAVE::pintar_corazones(){

    //Pintamos el numero de vidas, Mensaje-indico q va un entero , paso el entero q es vidas
    gotoxy(50,2);printf("VIDAS %d", vidas);
    gotoxy(64,2); printf("Salud");//nos situamos en la posicion e imprimimos
    gotoxy(70,2); printf("      ");//nossituamos en la posicion e imprimimos espacios en blanco
    for(int i = 0; i < corazones; i++){//For para imprimir todos los corazones que tenemos i < corazones el num de corazones que tenemos
        gotoxy(70+i,2);printf("%c", 3);
    }
}

//Funcion morir :GameOver Explota nave cuando corazones==0;
void NAVE::morir(){
    //Verificar si los corazones son cero
    if(corazones == 0){
        borrar();
       gotoxy(x,y);printf  ("   **   ");
       gotoxy(x,y+1);printf("  ****  ");
       gotoxy(x,y+2);printf(" ******   ");
       //Le damos un tiempo a la imagen q imprimo
       Sleep(300);

       borrar();
       gotoxy(x,y);printf  (" * ** * ");
       gotoxy(x,y+1);printf(" %cBOOM!",173);
      // gotoxy(x,y+2);printf("  ****  ");
       gotoxy(x,y+2);printf(" * ** *  ");
       Sleep(400);
       borrar();

       //Ya ha explotado la nave, el atributo vidas disminuye
       vidas--;
       corazones = 3;//corazones se resetean a 3
       //imprimo de nuevo corazones
       pintar_corazones();
       //pintamos la nave de nuevo
       pintar();
    }
}

//****************** CLASE ASTEROIDES ****************
class AST{
    //Atributos, necesitamos coordenadas
    int x, y;

    //La interfaz será pública
    public:
    //constructor paso los parametros
    AST(int _x, int _y):x(_x),y(_y){};
    //Prototipo de Funciones
    void pintar();
    void mover();
    //Detectara la colisión entre nave y ast, le pasamos un objeto
    //de la clase NAVE, para usar todo de ella y como vamos a llamar a sus
    //médos que nos MODIFICAN los valores, hay que pasarlo por  REFERENCIA
    void choque(class NAVE &N);

};

//*******************Declaración de funciones de la clase AST**********************
void AST::pintar(){
gotoxy(x,y); printf("%c",184);
}//fin pintar

void AST::mover(){
    //1º hay que borrar, nops situamos en sus coordenadas y borramos con un espacio en blanco
    gotoxy(x,y);printf(" ");
    //realizamos y++ para que vaya como cayendo y no hay que dejar que se salga de los limites de la pantalla q es 32
    y++;
    if(y > 32){
        //rand nos da num aleatorio,como puede ser muy grande, obtenemos el resto y nos dará un num entre 4 y 71
        x = rand()%71+4;
        y = 4;
    }
    //llamamos a pintar del asteroide, el metodo de su propia clase no la nave
    pintar();
}//Fin mover


//funcion de AST que detectará la colision/choque

/*  Necesitamos saber coord de la nave y del ast, creo una función en NAV para acceder a sus coordenadas
 *  ya que son privadas, vamos a llamar a sus
    médos que nos MODIFICAN los valores, hay que pasarlo por  REFERENCIA
*/
void AST::choque(class NAVE &N){
    /*Condición param: La variable x es la del asteroide (x q estamos en la funcion de la clase ast)
     * Si esta x es mayor o igual q la de la nave y (usamos la coordenada de la nave con el metodo X
     * x es menor que X+5 (como la nave esta pintada en varios caracteres
     * y la coord x es la q esta mas a la izq, N+5 cojemos el valor de 5 pos mas a la derecha, estamos
     * cogiendo el intervalo que ocupa la nave desde su x a su x+5 todo el ancho,
     * sig && que la coord Y sea mayor o igual que la de la nave y el ancho  Y+2 el caracter que sta mas abajo*/
    if(x >= N.X() && x < N.X()+6 && y >= N.Y() && y <=N.Y()+2)
    {
        //Que los corazones de la nave decrezcan, creo un metodo en la Nave COR que descontara 1 al atr corazones,
        //y lo utilizo aqui con su objeto N
        N.COR();
        N.borrar();
        N.pintar();//pinta la nave
        N.pintar_corazones();//Para actualizar el num de corazones q queda
        //Hacemos que la coord x vuelva a tomar un valor al azar en el intervalo de nuestro juego en las x y que la y sea 4
        //rand nos da num aleatorio,como puede ser muy grande, obtenemos el resto y nos dará un num entre 4 y 71
        x = rand()%71 + 4;
        y = 4;

    }
}


//**************** CLASE BALA   *******************************
class BALA{
    //Atributos coordenadas
    int x, y;

    //interfaz
public:
    BALA(int _x, int _y):x(_x), y(_y){}
    void mover();
    //PROTOTIPOS DE FUNCION
    int X(){return x;}//Funcion que permite devolver/ver valor de la coord x
    int Y(){return y;}//Funcion que permite devolver/ver valor de la coord y
    //Prototipo de función para detectar si las balas han llegado arriba
     bool fuera();
};

//FUNCIONES BALA
void BALA::mover(){
    gotoxy(x,y); printf(" ");
    y--;
    gotoxy(x,y); printf("*");
}

//funcion fuera
bool BALA::fuera(){
    if(y == 4) return true;//Si ha llegado a la posicion del limite de arriba
    return false;//en caso contrario
}



//FUNCION PRINCIPAL
int main()
{

    //Utilizo la función para ocultar cursor
    OcultarCursor();

    //Probamos la funcion pintar_limites();
    pintar_limites();

    //Creo el objeto de la clase:
    //1º Nombre clase - 2º Name object - 3º Param - En este caso inicio las coordenadas en 7,7, y el numero de corazones/vidas
    //Paso un numevo parametro int vidas, le paso 3 vidas
    NAVE N(37,30,3,3);

    //LLamo a los métodos
    N.pintar();
    N.pintar_corazones();

    //Creo VARIOS objetos de la clase AST
   // AST ast1(10,4),ast2(4,8), ast3(15,10);

    //Otra forma de crear VARIOS punteros obj de la clase AST
    list<AST*> AS;
    //Creo el iterador qeu servirá para recorrer la lista
    list<AST*>::iterator itAs;
    //Podemos crear al inicio 5 asteroides
    for(int i = 0; i < 5; i++){
        AS.push_back(new AST(rand()%75 + 3, rand()%5 + 4));
    }



    /*Creo una lista que va a tener como elementos objetos de la clase BALA, no va a tener objetos
     * directamente si no punteros, que tengamos una lista de punteros, implica que tengamos que
     * reservar memoria para los asteroides de forma manual, se hace con el operador new
     *
     * Una lista es como un array, en esta lista se pueden guardar cosas, vamos a guardar en cada
     * pedazo de memoria que tiene la lista, va a ser un puntero a un objeto de la clase BALA
     *
    */
    list<BALA*> B;
    //Creo un iterador que servirá para recorrer las listas
    list<BALA*>::iterator it;


    //como los métodos se tienen que ejecutar constantemente relizaré un while
    bool game_over = false;//Variable bool para controlar la condición, cuando ejec programa no hay game over, es false

    //Rutina del juego
    while (!game_over) { //Se ejecutara siempre que el argumento sea true q no sea game over

        //  Detecto una tecla
        if(kbhit())
        {

            char tecla = getch();
            //si se presiona tecla a crearemos una bala
            if(tecla == 'a')
                //Usamos la lista.push_back para crear un nuevo elemento
                //Arg. con el operador new llamamos a la clase BALA y directamente podemos llamar a su constructor
                //este tiene 2 param las coordenadas, queremos poner las que tiene la nave, usamos N.X y N.Y para acceder a las coord de la nave
                B.push_back(new BALA(N.X()+2,N.Y()-1));//+2 y -1 es para arreglar  que salga de enmedio
             }

        //Para mover esas balas creadas, recorremos la lista, creando un indice especial
        //para la lista
         //Hacemos al iterador el primer elemento de la lista, hasta que el it sea distinto del final de la lista B, hacemos un it++para que vaya rec todos
        for(it = B.begin(); it != B.end() ; it++){
            //*it es el puntero que guarda la direccion en memoria del elem al q apunta, yo quiero la info y manipularla, le pongo el op desreferenciar
            //y asi es como la llave de la casa q accede
            //este it será como una bala
            (*it)->mover();
            //verificamos si es true e metodo fuera
            if((*it)->fuera()){
                gotoxy((*it)->X(),(*it)->Y()); printf(" ");
                delete(*it);//Borramos el elemento que ya está fuera
                //Al quitarlo pierde el enlace, vamos a hacer q continue con el siguiente elem de la lista
                it= B.erase(it);
            }
        }
        //Usamos el iterador para recorre la lista de asteroides, desde a.begin hasta que it sea distinto del final y hacemos un it++ para que recorra todos
        for(itAs = AS.begin(); itAs != AS.end();itAs++){
            (*itAs)->mover();
            (*itAs)->choque(N);//Detectamos el choqeu del asteroide con la bala, cuyo param es la nave

        }


        //Probamos morir
        N.morir();
        N.mover();

        //para que no se sature el procesador, detiene el programa por 30 milisegundos
        //Realizará menos iteraciones por segundo
        Sleep(30);
    }
    return 0;
}


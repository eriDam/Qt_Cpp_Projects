#include <iostream>

using namespace std;

int main()
{
    //Defino una variable para la entrada de datos
    string entrada_nombre;
    cout << "Hola, ¿como te llamas? " << endl; //también puedo poner \n entre las comillas
    cin>>entrada_nombre;
    cout << "Bienvenido: "<<entrada_nombre << "\n";
   // system ("pause");
    return 0;
}


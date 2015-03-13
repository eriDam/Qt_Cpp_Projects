//******************************************************************************
//*           Tut_5    Variables Double: Código facilito                                                             *
//*   https://www.youtube.com/watch?v=e0mC0s8Qo54                                                              *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//*                                                                            *
//******************************************************************************
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
//Variables double para numeros con coma que necesitan mas espacio en memoria, tiene
  //el doble de precisión que tiene el float, puede guardar numeros de hasta 10 elevado 308 o -308
    //a dif de float que es 10 elevado a la 38
    double num = 2.6795555777;
    double num2 = 1.359888899;

    cout << num+num2 << endl;//sumamos ambas variables con el operador
    getch();
    return 0;

}

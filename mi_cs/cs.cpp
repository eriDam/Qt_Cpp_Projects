#include "cs.h"

cs::cs()
{
    int op1( struct soap *soap, int a, int b, int * r )    {
        std::cout << "op1 llamada con: a=" << a << ", b=" << b << std::endl;
        *r = 2 * a + b;
        return SOAP_OK;
    }
}

cs::~cs()
{

}


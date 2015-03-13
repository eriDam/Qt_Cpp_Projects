#include "soapH.h"

int ns__currentTime(struct soap *soap, double a, double b, double &result)
{
   result = a+b;
   return SOAP_OK;
}

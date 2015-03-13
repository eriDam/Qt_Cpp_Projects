#include "soapH.h"
#include "currentTime.nsmap" // include the XML namespace mappings

int ns__currentTime(struct soap *soap, double a, double b, double &result)
{
   result = a+b;
   return SOAP_OK;
}



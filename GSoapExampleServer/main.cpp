
#include "currentTime.h"

#include "soapH.h" // include the generated declarations
#include "currentTime.nsmap" // include the XML namespace mappings
int main(int argc, char *argv[])
{
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
*/
    struct soap *soap_instance=soap_new();
    soap_instance->encodingStyle = "http://xml.apache.org/xml-soap/literalxml";
    return soap_serve(soap_instance);
}

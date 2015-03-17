#include "mi_cs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    mi_cs w;
//    w.show();

//    return a.exec();
    SOAP_SOCKET s; // slave socket
    struct soap soap; /* soap structure */
    for ( ; ; )
    {
        s = soap_accept( &soap ); // Reception de una petición
        std::cout << "conexión con el client valida: slave socket = " << s << std::endl;
        if ( !soap_valid_socket( s ) )
        {
            std::cout << "error: problema de socket" << std::endl << "pulse una tecla para quitar";
            return 1;
        }

        // ejecución de la petición. soap_serve() va a llamar la función correspondiente a la petición.
        soap_serve( &soap );

        // finalizatión
        soap_end( &soap );
    }

}

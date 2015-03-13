#include "mainwindow.h"
#include <QApplication>
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
    return soap_serve(soap_new());
}

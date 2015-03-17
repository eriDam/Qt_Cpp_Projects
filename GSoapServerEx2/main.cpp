#include "mainwindow.h"
#include <QApplication>

#include "soapH.h"

#include <QDebug>

int main(int argc, char *argv[])
{
/*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
*/
    struct soap soap;
    int m, s; // master and slave sockets
    soap_init(&soap);
    m = soap_bind(&soap, "127.0.0.1", 8081, 100);
    if (m < 0)
       soap_print_fault(&soap, stderr);
    else
    {
        qDebug()<<"Socket connection successful: master socket ="<< m;
       for (int i = 1; ; i++)
       {
          s = soap_accept(&soap);
          if (s < 0)
          {
             soap_print_fault(&soap, stderr);
             break;
          }
          fprintf(stderr, "%d: accepted connection from IP=%d.%d.%d.%d socket=%d", i,
             (soap.ip >> 24)&0xFF, (soap.ip >> 16)&0xFF, (soap.ip >> 8)&0xFF, soap.ip&0xFF, s);
          if (soap_serve(&soap) != SOAP_OK)	// process RPC request
             soap_print_fault(&soap, stderr); // print error
          fprintf(stderr, "request served\n");
          soap_destroy(&soap);	// clean up class instances
          soap_end(&soap);	// clean up everything and close socket
       }
    }
    soap_done(&soap); // close master socket and detach context

}

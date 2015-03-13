#include "qdbookreader.h"
#include<QString>
#include<QDebug>

//Constructor
QDBookReader::QDBookReader() : QXmlStreamReader()
{
}

//Destructor
QDBookReader::~QDBookReader(){

}
bool QDBookReader::read(QIODevice *device){
    /*1- Indicamos con el método QXmlStreamReader::setDevice() el archivo xml*/
    setDevice(device); //Se ha realizado en el constructor y no es necesario colocarlo aquí
    /*2- Iniciamos el loop del parseador que no parara hasta q  no alcance el  final del archivo o surja
   un error en el proceso. Hasta que ese loop no pare, el parseador hará lo siguiente: Leere
*/
    while(!atEnd()) {
        readNext(); /*3- Leemos el siguiente Token*/
        if (isStartElement()) { /*4- Si es un elemento de comienzo de token...*/
            if (name() == "Elementos") /*5-  ...como elementos*/
                readLibro();/*6- Invocaré al método que inicia la lectura del libro*/
        }
    }
    /*7- Cuando acabe el loop, debemos indicar si se ha acabado por un error del parseador
     *o por que todo ha ido bien (true/false)*/
    return !error();
}

//Método/función readLibro
void QDBookReader::readLibro() {

    /* 1- Continuamos con el loop del parseador */
    while (!atEnd()) {
        /* 2 Leemos el siguiente token…*/
        readNext();
        /* 3 … y si es un fin de elemento (en este caso sería </Elemento>),
        romperíamos el loop del parseador (el bucle while)
       y retornariamos al punto desde donde fue invocado este método (el loop del QDBookReader::read)*/
        if(isEndElement()) break;
        /* 4  Pero si es un marcador de principio de elemento, y el nombre coincide con alguno de
         *  los token que estamos buscando (titulo, fecha, autor, editorial y capítulo),
        invocaremos al método correspondiente para obtener su valor.*/
        if(isStartElement()) {
            if(name() == "Elementoa")
                readElementoa();
            else if(name() == "Elementob")
                readElementob();
            else if(name() == "Elementoc")
                readElementoc();
            else if(name() == "Elementod")
                readElementod();
            else if(name() == "Elementoe")
             readElementoe();
            /* 6 Si se encuentran tokens que no nos interesan, el loop simplemente lo deja pasar (skipCurrentElement) y vuelve a leer el siguiente elemento (readNext)*/
            else skipCurrentElement();
        }
    }
}
//Método de lectura de valor del token, Con el valor del token, que se obtiene como un QString via QXmlStreamReader::readElementText()
//puede hacer cualquier cosa que nos interese. Por ejemplo :
void QDBookReader::readElementoa() {

    /* 1 Imprimirlo en la consola de debug*/
    qDebug() << readElementText();

/* 2 Almacenarlo en una variable o en un miembro de la clase*/
    QString nombre = readElementText();

/* 3 Almacenarlo, por ejemplo en una lista de cadenas*/
    QStringList listaFechas;
         listaFechas << readElementText();

}
//Método de lectura de valor del token, Con el valor del token, que se obtiene como un QString via QXmlStreamReader::readElementText()
//puede hacer cualquier cosa que nos interese. Por ejemplo :
void QDBookReader::readElementob() {

    /* 1 Imprimirlo en la consola de debug*/
    qDebug() << readElementText();

/* 2 Almacenarlo en una variable o en un miembro de la clase*/
    QString nombre = readElementText();

/* 3 Almacenarlo, por ejemplo en una lista de cadenas*/
    QStringList listaFechas;
         listaFechas << readElementText();

}

//Método de lectura de valor del token, Con el valor del token, que se obtiene como un QString via QXmlStreamReader::readElementText()
//puede hacer cualquier cosa que nos interese. Por ejemplo :
void QDBookReader::readElementoc() {

    /* 1 Imprimirlo en la consola de debug*/
    qDebug() << readElementText();

/* 2 Almacenarlo en una variable o en un miembro de la clase*/
    QString nombre = readElementText();

/* 3 Almacenarlo, por ejemplo en una lista de cadenas*/
    QStringList listaFechas;
         listaFechas << readElementText();

}

//Método de lectura de valor del token, Con el valor del token, que se obtiene como un QString via QXmlStreamReader::readElementText()
//puede hacer cualquier cosa que nos interese. Por ejemplo :
void QDBookReader::readElementod() {

    /* 1 Imprimirlo en la consola de debug*/
    qDebug() << readElementText();

/* 2 Almacenarlo en una variable o en un miembro de la clase*/
    QString nombre = readElementText();

/* 3 Almacenarlo, por ejemplo en una lista de cadenas*/
    QStringList listaFechas;
         listaFechas << readElementText();

}

//Método de lectura de valor del token, Con el valor del token, que se obtiene como un QString via QXmlStreamReader::readElementText()
//puede hacer cualquier cosa que nos interese. Por ejemplo :
void QDBookReader::readElementoe() {

    /* 1 Imprimirlo en la consola de debug*/
    qDebug() << readElementText();

/* 2 Almacenarlo en una variable o en un miembro de la clase*/
    QString nombre = readElementText();

/* 3 Almacenarlo, por ejemplo en una lista de cadenas*/
    QStringList listaFechas;
         listaFechas << readElementText();

}



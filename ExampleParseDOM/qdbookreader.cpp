#include "qdbookreader.h"
#include  <QDebug>
#include  <QString>
QDBookReader::QDBookReader() : QXmlStreamReader() {

}

QDBookReader::~QDBookReader() {

}

bool QDBookReader::read(QIODevice *device) {

/* 1 */ setDevice(device);
/* 2 */ while (!atEnd()) {
/* 3 */    readNext();
/* 4 */    if (isStartElement()) {
/* 5 */        if (name() == "biblioteca")
/* 6 */            readLibro();
}
}
/* 7 */ return !error();
}
void QDBookReader::readLibro() {

/* 1 */ while (!atEnd()) {
/* 2 */       readNext();
/* 3 */       if(isEndElement()) break;
/* 4 */       if(isStartElement()) {
                  if(name() == "titulo")
                    readTitulo();
                  else if(name() == "fecha")
                    readFecha();
                  else if(name() == "autor")
                    readAutor();
                  else if(name() == "editorial")
                    readEditorial();
                  else if(name() == "capitulo")
/* 5 */             readCapitulo();
/* 6 */           else skipCurrentElement();
              }
       }
}

void QDBookReader::readTitulo() {
/* 1 */  qDebug() << readElementText();

/* 2 */  QString nombre = readElementText();

/* 3 */  QStringList listaTitulos;
         listaTitulos << readElementText();

}

void QDBookReader::readFecha() {
    /* 1 */  qDebug() << readElementText();

    /* 2 */  QString fecha = readElementText();

    /* 3 */  QStringList listaFechas;
             listaFechas << readElementText();
}

void QDBookReader::readAutor() {
    /* 1 */  qDebug() << readElementText();

    /* 2 */  QString Autor = readElementText();

    /* 3 */  QStringList listaAutor;
             listaAutor << readElementText();
}
void QDBookReader::readEditorial()  {
    /* 1 */  qDebug() << readElementText();

    /* 2 */  QString Edit = readElementText();

    /* 3 */  QStringList listaEdit;
             listaEdit << readElementText();
}

void QDBookReader::readCapitulo() {

/* 1 */ while (!atEnd()) {
/* 2 */       readNext();
/* 3 */       if(isEndElement()) break;
/* 4 */       if(isStartElement()) {
                 if(name() == "titulo")
/* 5 */            readCapituloTitulo();
                 else if(name() == "numPag")
/* 6 */            readCapituloNumPag();
/* 7 */          else skipCurrentElement();
              }
        }
}
void QDBookReader::readCapituloTitulo()  {
    /* 1 */  qDebug() << readElementText();

    /* 2 */  QString CapituloTitulo = readElementText();

    /* 3 */  QStringList listaCap;
             listaCap << readElementText();
}
void QDBookReader::readCapituloNumPag()  {
    /* 1 */  qDebug() << readElementText();

    /* 2 */  QString  CapituloNumPag = readElementText();

    /* 3 */  QStringList listaCapPags;
             listaCapPags << readElementText();
}


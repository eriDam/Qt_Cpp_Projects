#ifndef QDBOOKREADER_H
#define QDBOOKREADER_H

#include <QXmlStreamReader>

class QDBookReader : public QXmlStreamReader {

public:
QDBookReader();
virtual ~QDBookReader();
/* 1 */ bool read(QIODevice *);

private:
/* 2 */ void readLibro();
/* 3 */ void readTitulo();
/* 4 */ void readFecha();
/* 5 */ void readAutor();
/* 6 */ void readEditorial();
/* 7 */ void readCapitulo();
/* 8 */ void readCapituloTitulo();
/* 9 */ void readCapituloNumPag();
};


#endif // QDBOOKREADER_H

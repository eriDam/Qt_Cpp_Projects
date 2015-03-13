#ifndef QDBOOKREADER_H
#define QDBOOKREADER_H

#include <QObject>
#include<QXmlStreamReader>//Incluyo la librería para poder leer xml

class QDBookReader : public QXmlStreamReader
{
public:
    QDBookReader();

    virtual ~QDBookReader();
    /* 1 Método público QDBookReader::read, utilizado para iniciar la
     * lectura del xml que se le pasa por parámetro*/
    bool read(QIODevice *);

signals:

public slots:

private:
    //QXmlStreamReader fReader;
    //Métodos de lectura de tokens. Cada vez que el loop del parser encuentre el token
    //<Elemento>, el método QDBookReader::readElemento1 será llamado y lo mismo para cada token
    //A partir de aquí ya vamos a la clase cpp e implemento estos métodos
            void readLibro();
    /* 2 */ void readElementoa();
    /* 3 */ void readElementob();
    /* 4 */ void readElementoc();
    /* 5 */ void readElementod();
    /* 6 */ void readElementoe();

};

#endif // QDBOOKREADER_H

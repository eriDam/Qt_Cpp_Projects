#ifndef PROCESO_H
#define PROCESO_H

#include <QObject>

class Proceso : public QObject
{
    Q_OBJECT

//Constructor

public:
    explicit Proceso(QObject *parent = 0);

    //Creamos los métodos set y get(Getters and Setters en java)
    void setNum(int n){num=n;}
    int getNum(){return num;}

    /*Ahora este código es de c++ y no de Qt LA SOBRECARGA DE OPERADORES
     * es una habilidad muy poderosa de c++
    */
    Proceso & operator ++();
    Proceso & operator --();

signals:
    //Creamos una nueva señal que va a recibir un entero (puede no recibir parametro)
    void my_signal(int);

public slots:

    //Creamos un atributo, escribimos private:
private:

    int num;
};

#endif // PROCESO_H

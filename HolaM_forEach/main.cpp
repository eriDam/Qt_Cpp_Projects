#include <QCoreApplication>//Librería incluida por defecto
#include<QDebug>//Esta librería se incluye, para imprimir algo por pantalla
#include<QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //Utilizamos el String
    QString myString = "Hola 1, Mundo 2";
    //ForEach es una función muy útil, por cada QChar al que llamaré var, que exista
    //en myString, si es un numero lo indicará, si no, lo deja pasar
    foreach (QChar var, myString)
    {
        if (var.toLatin1() == 49 || var.toLatin1() == 50)
        {
            qDebug() << "Bandera " << var << "\n";
        }
    }

    //Utilizamos el qDebug de nuevo para imprimir por pantalla
    qDebug("Fin del programa");
    return a.exec();
}

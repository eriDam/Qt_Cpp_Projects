#include "holamundo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HolaMundo w;
    w.show();

    return a.exec();
}

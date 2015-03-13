#include "holam.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HolaM w;
    w.show();

    return a.exec();
}

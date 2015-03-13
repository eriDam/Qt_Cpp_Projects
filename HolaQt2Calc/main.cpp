#include "holaqt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HolaQt w;
    w.show();

    return a.exec();
}

#include "mainwindow.h"
#include "qdbookreader.h"
#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QFile archivo("biblioteca.xml");
    if (!archivo.open(QFile::ReadOnly | QFile::Text))
      return false;
    QDBookReader reader;
    reader.read(&archivo);

    return a.exec();
}

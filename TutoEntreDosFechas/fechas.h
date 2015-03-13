#ifndef FECHAS_H
#define FECHAS_H
#include <QtGui>
#include "fechas.h"
/*En “fechas.h” hemos creado una subclase derivada de QDialog. Una característica que
 * llama la atención es que hemos definido el objeto privado ui,
 * que se va a encargar de suministrar el código necesario para la configuración
 *  y el manejo del cuadro de diálogo creado con el Qt Designer.*/
class fechas : public QDialog {
Q_OBJECT
public:
fechas();

private:
Ui::fechas ui;

private slots:
void calcula_diferencia();

};


#endif // FECHAS_H

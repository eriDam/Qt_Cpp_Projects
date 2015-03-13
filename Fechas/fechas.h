/*En “fechas.h” hemos creado una subclase derivada de QDialog. Una característica que llama la
 * atención es que hemos definido el objeto privado ui, que se va a encargar de suministrar el
 * código necesario  para la configuración y el manejo del cuadro de
 *  diálogo creado con el Qt Designer.
https://dibosa.wordpress.com/articulos-programacion/desarrollando-aplicaciones-opensource-multiplataforma-con-las-librerias-qt4-y-c/
*/
#include <QtGui>
#include "fechas.ui"

class fechas :public QDialog {
Q_OBJECT
public:
fechas();

private:
Ui::fechas ui;

private slots:
void calcula_diferencia();

};

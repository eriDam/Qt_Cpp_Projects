#include "fechas.h"



fechas::fechas() : QDialog() {
ui.setupUi(this);

calcula_diferencia();
connect(ui.calendarWidget,SIGNAL(selectionChanged()),
this,SLOT(calcula_diferencia()));
connect(ui.calendarWidget_2,SIGNAL(selectionChanged()),
this,SLOT(calcula_diferencia()));

}


void fechas::calcula_diferencia()
{
int dias=ui.calendarWidget->selectedDate().daysTo(
ui.calendarWidget_2->selectedDate());
QString cadnum;
cadnum.setNum(dias);
ui.lineEdit->setText(cadnum);

}

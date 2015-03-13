/********************************************************************************
** Form generated from reading UI file 'fechas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FECHAS_H
#define UI_FECHAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fechas
{
public:
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget_2;
    QCalendarWidget *calendarWidget;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_f_inic;
    QLabel *label_f_final;
    QLabel *label_dias;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *fechas)
    {
        if (fechas->objectName().isEmpty())
            fechas->setObjectName(QStringLiteral("fechas"));
        fechas->resize(637, 278);
        centralWidget = new QWidget(fechas);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        calendarWidget_2 = new QCalendarWidget(centralWidget);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(330, 40, 296, 183));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 40, 296, 183));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 230, 611, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(310, 40, 20, 181));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_f_inic = new QLabel(centralWidget);
        label_f_inic->setObjectName(QStringLiteral("label_f_inic"));
        label_f_inic->setGeometry(QRect(10, 10, 101, 16));
        label_f_final = new QLabel(centralWidget);
        label_f_final->setObjectName(QStringLiteral("label_f_final"));
        label_f_final->setGeometry(QRect(330, 10, 91, 16));
        label_dias = new QLabel(centralWidget);
        label_dias->setObjectName(QStringLiteral("label_dias"));
        label_dias->setGeometry(QRect(80, 250, 171, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(260, 250, 121, 20));
        fechas->setCentralWidget(centralWidget);

        retranslateUi(fechas);

        QMetaObject::connectSlotsByName(fechas);
    } // setupUi

    void retranslateUi(QMainWindow *fechas)
    {
        fechas->setWindowTitle(QApplication::translate("fechas", "fechas", 0));
        label_f_inic->setText(QApplication::translate("fechas", "<html><head/><body><p><span style=\" font-size:10pt;\">FECHA INICIAL:</span></p></body></html>", 0));
        label_f_final->setText(QApplication::translate("fechas", "<html><head/><body><p><span style=\" font-size:10pt;\">FECHA FINAL:</span></p></body></html>", 0));
        label_dias->setText(QApplication::translate("fechas", "<html><head/><body><p><span style=\" font-size:12pt;\">DIAS ENTRE FECHAS:</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class fechas: public Ui_fechas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FECHAS_H

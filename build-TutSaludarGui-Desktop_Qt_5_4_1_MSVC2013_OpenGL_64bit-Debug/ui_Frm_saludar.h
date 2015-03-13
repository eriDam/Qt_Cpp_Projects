/********************************************************************************
** Form generated from reading UI file 'Frm_saludar.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_SALUDAR_H
#define UI_FRM_SALUDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saludar
{
public:
    QWidget *centralWidget;
    QLabel *label_entrada;
    QLineEdit *lineEdit_entrada;
    QPushButton *pushButton_saludar;
    QLabel *label;
    QTextEdit *textEdit_saludarA;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Saludar)
    {
        if (Saludar->objectName().isEmpty())
            Saludar->setObjectName(QStringLiteral("Saludar"));
        Saludar->resize(328, 300);
        centralWidget = new QWidget(Saludar);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_entrada = new QLabel(centralWidget);
        label_entrada->setObjectName(QStringLiteral("label_entrada"));
        label_entrada->setGeometry(QRect(30, 50, 47, 13));
        lineEdit_entrada = new QLineEdit(centralWidget);
        lineEdit_entrada->setObjectName(QStringLiteral("lineEdit_entrada"));
        lineEdit_entrada->setGeometry(QRect(120, 50, 151, 20));
        pushButton_saludar = new QPushButton(centralWidget);
        pushButton_saludar->setObjectName(QStringLiteral("pushButton_saludar"));
        pushButton_saludar->setGeometry(QRect(130, 90, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 140, 61, 16));
        textEdit_saludarA = new QTextEdit(centralWidget);
        textEdit_saludarA->setObjectName(QStringLiteral("textEdit_saludarA"));
        textEdit_saludarA->setGeometry(QRect(120, 140, 151, 71));
        Saludar->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Saludar);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Saludar->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Saludar);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Saludar->setStatusBar(statusBar);

        retranslateUi(Saludar);
        QObject::connect(pushButton_saludar, SIGNAL(clicked()), Saludar, SLOT(saludar()));

        QMetaObject::connectSlotsByName(Saludar);
    } // setupUi

    void retranslateUi(QMainWindow *Saludar)
    {
        Saludar->setWindowTitle(QApplication::translate("Saludar", "Saludar", 0));
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleName(QApplication::translate("Saludar", "Saludar nombres", 0));
#endif // QT_NO_ACCESSIBILITY
        label_entrada->setText(QApplication::translate("Saludar", "Entrada ", 0));
        pushButton_saludar->setText(QApplication::translate("Saludar", "Saludar", 0));
        label->setText(QApplication::translate("Saludar", "Saludar a :", 0));
    } // retranslateUi

};

namespace Ui {
    class Saludar: public Ui_Saludar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_SALUDAR_H

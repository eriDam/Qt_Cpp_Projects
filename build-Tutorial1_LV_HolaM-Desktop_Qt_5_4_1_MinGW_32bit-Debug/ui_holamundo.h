/********************************************************************************
** Form generated from reading UI file 'holamundo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLAMUNDO_H
#define UI_HOLAMUNDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HolaMundo
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_cerrar;
    QPushButton *pushButton_clickMe;
    QLabel *label;

    void setupUi(QMainWindow *HolaMundo)
    {
        if (HolaMundo->objectName().isEmpty())
            HolaMundo->setObjectName(QStringLiteral("HolaMundo"));
        HolaMundo->resize(245, 191);
        centralWidget = new QWidget(HolaMundo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_cerrar = new QPushButton(centralWidget);
        pushButton_cerrar->setObjectName(QStringLiteral("pushButton_cerrar"));
        pushButton_cerrar->setGeometry(QRect(30, 100, 75, 23));
        pushButton_clickMe = new QPushButton(centralWidget);
        pushButton_clickMe->setObjectName(QStringLiteral("pushButton_clickMe"));
        pushButton_clickMe->setGeometry(QRect(140, 100, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 47, 13));
        HolaMundo->setCentralWidget(centralWidget);

        retranslateUi(HolaMundo);
        QObject::connect(pushButton_cerrar, SIGNAL(clicked()), HolaMundo, SLOT(close()));

        QMetaObject::connectSlotsByName(HolaMundo);
    } // setupUi

    void retranslateUi(QMainWindow *HolaMundo)
    {
        HolaMundo->setWindowTitle(QApplication::translate("HolaMundo", "Hola Mundo", 0));
        pushButton_cerrar->setText(QApplication::translate("HolaMundo", "Cerrar", 0));
        pushButton_clickMe->setText(QApplication::translate("HolaMundo", "Click Me", 0));
        label->setText(QApplication::translate("HolaMundo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HolaMundo: public Ui_HolaMundo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLAMUNDO_H

/********************************************************************************
** Form generated from reading UI file 'holaqt.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLAQT_H
#define UI_HOLAQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HolaQt
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HolaQt)
    {
        if (HolaQt->objectName().isEmpty())
            HolaQt->setObjectName(QStringLiteral("HolaQt"));
        HolaQt->resize(400, 300);
        centralWidget = new QWidget(HolaQt);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 140, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 140, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 100, 91, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 50, 67, 17));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 113, 27));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 40, 113, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 100, 67, 17));
        HolaQt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HolaQt);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        HolaQt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HolaQt);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HolaQt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HolaQt);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HolaQt->setStatusBar(statusBar);

        retranslateUi(HolaQt);

        QMetaObject::connectSlotsByName(HolaQt);
    } // setupUi

    void retranslateUi(QMainWindow *HolaQt)
    {
        HolaQt->setWindowTitle(QApplication::translate("HolaQt", "HolaQt", 0));
        pushButton->setText(QApplication::translate("HolaQt", "Sumar", 0));
        pushButton_2->setText(QApplication::translate("HolaQt", "Cerrar", 0));
        label->setText(QApplication::translate("HolaQt", "Resultado:", 0));
        label_2->setText(QApplication::translate("HolaQt", "+", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HolaQt: public Ui_HolaQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLAQT_H

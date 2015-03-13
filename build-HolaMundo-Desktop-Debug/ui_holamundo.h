/********************************************************************************
** Form generated from reading UI file 'holamundo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HolaMundo
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HolaMundo)
    {
        if (HolaMundo->objectName().isEmpty())
            HolaMundo->setObjectName(QStringLiteral("HolaMundo"));
        HolaMundo->resize(400, 300);
        centralWidget = new QWidget(HolaMundo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 140, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 90, 67, 17));
        HolaMundo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HolaMundo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        HolaMundo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HolaMundo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HolaMundo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HolaMundo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HolaMundo->setStatusBar(statusBar);

        retranslateUi(HolaMundo);

        QMetaObject::connectSlotsByName(HolaMundo);
    } // setupUi

    void retranslateUi(QMainWindow *HolaMundo)
    {
        HolaMundo->setWindowTitle(QApplication::translate("HolaMundo", "HolaMundo", 0));
        pushButton->setText(QApplication::translate("HolaMundo", "Pulsame", 0));
        label->setText(QApplication::translate("HolaMundo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HolaMundo: public Ui_HolaMundo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLAMUNDO_H

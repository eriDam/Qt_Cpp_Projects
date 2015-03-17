/********************************************************************************
** Form generated from reading UI file 'mi_cs.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MI_CS_H
#define UI_MI_CS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mi_cs
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mi_cs)
    {
        if (mi_cs->objectName().isEmpty())
            mi_cs->setObjectName(QStringLiteral("mi_cs"));
        mi_cs->resize(400, 300);
        menuBar = new QMenuBar(mi_cs);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        mi_cs->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mi_cs);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mi_cs->addToolBar(mainToolBar);
        centralWidget = new QWidget(mi_cs);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mi_cs->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(mi_cs);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mi_cs->setStatusBar(statusBar);

        retranslateUi(mi_cs);

        QMetaObject::connectSlotsByName(mi_cs);
    } // setupUi

    void retranslateUi(QMainWindow *mi_cs)
    {
        mi_cs->setWindowTitle(QApplication::translate("mi_cs", "mi_cs", 0));
    } // retranslateUi

};

namespace Ui {
    class mi_cs: public Ui_mi_cs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MI_CS_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_lector;
    QPushButton *pushButton_abrir;
    QToolButton *toolButton_explorer;
    QPushButton *pushButton_cerrar;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(451, 338);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_lector = new QLabel(centralWidget);
        label_lector->setObjectName(QStringLiteral("label_lector"));
        label_lector->setGeometry(QRect(140, 0, 131, 17));
        pushButton_abrir = new QPushButton(centralWidget);
        pushButton_abrir->setObjectName(QStringLiteral("pushButton_abrir"));
        pushButton_abrir->setGeometry(QRect(80, 240, 99, 27));
        toolButton_explorer = new QToolButton(centralWidget);
        toolButton_explorer->setObjectName(QStringLiteral("toolButton_explorer"));
        toolButton_explorer->setGeometry(QRect(420, 30, 24, 25));
        pushButton_cerrar = new QPushButton(centralWidget);
        pushButton_cerrar->setObjectName(QStringLiteral("pushButton_cerrar"));
        pushButton_cerrar->setGeometry(QRect(270, 240, 99, 27));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 391, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 451, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_cerrar, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_abrir, SIGNAL(clicked()), toolButton_explorer, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_lector->setText(QApplication::translate("MainWindow", "Lector de archivos", 0));
        pushButton_abrir->setText(QApplication::translate("MainWindow", "Abrir", 0));
        toolButton_explorer->setText(QApplication::translate("MainWindow", "...", 0));
        pushButton_cerrar->setText(QApplication::translate("MainWindow", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

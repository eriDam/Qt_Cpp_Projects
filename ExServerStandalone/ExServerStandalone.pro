#-------------------------------------------------
#
# Project created by QtCreator 2015-03-10T12:37:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExServerStandalone
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32

SOURCES += main.cpp\
        mainwindow.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

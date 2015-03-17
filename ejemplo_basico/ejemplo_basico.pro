#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T12:46:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ejemplo_basico
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32


SOURCES += main.cpp\
        mainwindow.cpp \
    soapC.cpp \
    soapServer.cpp \
    currenttime.cpp

HEADERS  += mainwindow.h \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.h \
    current_time.h \
    currentTime.nsmap \
    soapH.h \
    soapStub.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    currentTime.wsdl


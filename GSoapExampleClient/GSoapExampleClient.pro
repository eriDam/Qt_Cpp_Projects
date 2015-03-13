#-------------------------------------------------
#
# Project created by QtCreator 2015-03-09T13:03:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GSoapExampleClient
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap" "C:\Downloads\gsoap_2.8.21\gsoap-2.8\gsoap\import"

LIBS += -lws2_32

SOURCES += main.cpp\
        mainwindow.cpp \
    soapC.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp \
    soapcurrentTimeProxy.cpp \
    soapClient.cpp

HEADERS  += mainwindow.h \
    soapH.h \
    soapStub.h \
    soapcurrentTimeProxy.h \
    currentTime.nsmap \
    currentTime.h

FORMS    += mainwindow.ui

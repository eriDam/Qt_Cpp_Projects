#-------------------------------------------------
#
# Project created by QtCreator 2015-03-09T15:21:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GSoapExampleServer
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32

SOURCES += main.cpp\
        mainwindow.cpp \
    currentTime.cpp \
    soapC.cpp \
    soapServer.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp \
    gsoapexserv.cpp

HEADERS  += mainwindow.h \
    currentTime.h \
    soapH.h \
    soapStub.h \
    currentTime.nsmap \
    currenttime.h \
    gsoapexserv.h

FORMS    += mainwindow.ui

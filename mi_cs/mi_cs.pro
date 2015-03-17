#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T15:10:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mi_cs
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32

SOURCES += main.cpp\
        mi_cs.cpp \
    cs.cpp \
    soapC.cpp \
    soapServer.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp

HEADERS  += mi_cs.h \
    cs.h \
    soapH.h \
    soapStub.h \
    soap.nsmap \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.h

FORMS    += mi_cs.ui

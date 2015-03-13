#-------------------------------------------------
#
# Project created by QtCreator 2015-03-10T10:34:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GSoapServerEx
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32

SOURCES += main.cpp\
        mainwindow.cpp \
    currenttime.cpp \
    soapC.cpp \
    soapServer.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp

HEADERS  += mainwindow.h \
    currenttime.h \
    soap.nsmap \
    soapH.h \
    soapStub.h \
    currentTime.nsmap

FORMS    += mainwindow.ui

DISTFILES += \
    currentTime.currentTime.req.xml \
    currentTime.currentTime.res.xml \
    GSoapServerEx.pro.user \
    currentTime.wsdl \
    ns.xsd

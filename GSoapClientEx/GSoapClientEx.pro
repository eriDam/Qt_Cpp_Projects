#-------------------------------------------------
#
# Project created by QtCreator 2015-03-10T11:22:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GSoapClientEx
TEMPLATE = app

INCLUDEPATH += "C:/Downloads/gsoap_2.8.21/gsoap-2.8/gsoap"
LIBS += -lws2_32

SOURCES += main.cpp\
        mainwindow.cpp \
    soapC.cpp \
    soapClient.cpp \
    ../../../../Downloads/gsoap_2.8.21/gsoap-2.8/gsoap/stdsoap2.cpp \
    soapcurrentTimeProxy.cpp

HEADERS  += mainwindow.h \
    currentTime.nsmap \
    soapH.h \
    soapStub.h

FORMS    += mainwindow.ui

DISTFILES += \
    currentTime.currentTime.req.xml \
    currentTime.currentTime.res.xml \
    GSoapClientEx.pro.user \
    currentTime.wsdl \
    ns.xsd

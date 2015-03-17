#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T15:41:51
#
#-------------------------------------------------

QT       -= gui

TARGET = conexionCliente
TEMPLATE = lib

DEFINES += CONEXIONCLIENTE_LIBRARY

SOURCES += conexioncliente.cpp

HEADERS += conexioncliente.h\
        conexioncliente_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

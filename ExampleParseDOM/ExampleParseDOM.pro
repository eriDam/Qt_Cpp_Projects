#-------------------------------------------------
#
# Project created by QtCreator 2015-03-03T23:29:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExampleParseDOM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qdbookreader.cpp

HEADERS  += mainwindow.h \
    qdbookreader.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    biblioteca.xml

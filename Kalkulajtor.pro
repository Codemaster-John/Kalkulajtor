#-------------------------------------------------
#
# Project created by QtCreator 2016-11-06T20:38:34
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kalkulajtor
TEMPLATE = app


SOURCES += main.cpp\
        calculator.cpp \
    units.cpp

HEADERS  += calculator.h \
    units.h

FORMS    += calculator.ui

RESOURCES += \
    resources.qrc

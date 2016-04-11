#-------------------------------------------------
#
# Project created by QtCreator 2016-04-11T15:23:58
#
#-------------------------------------------------


QT       += core gui
QT       += network



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clienttest.cpp

HEADERS  += mainwindow.h \
    clienttest.h

FORMS    += mainwindow.ui

QT       += network

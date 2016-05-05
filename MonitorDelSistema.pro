#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T11:23:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MonitorDelSistema
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    monitor.cpp \
    lanzador.cpp \
    acercade.cpp

HEADERS  += mainwindow.h \
    monitor.h \
    lanzador.h \
    acercade.h

FORMS    += mainwindow.ui \
    monitor.ui \
    lanzador.ui \
    acercade.ui

RESOURCES += \
    imagenes.qrc

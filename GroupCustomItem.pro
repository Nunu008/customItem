#-------------------------------------------------
#
# Project created by QtCreator 2016-03-11T10:15:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GroupCustomItem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    customitemellipse.cpp \
    customitemrect.cpp

HEADERS  += mainwindow.h \
    customitemellipse.h \
    customitemrect.h

FORMS    += mainwindow.ui

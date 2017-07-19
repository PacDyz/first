#-------------------------------------------------
#
# Project created by QtCreator 2017-07-17T17:23:11
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++14


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = first
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    teamlist.cpp \
    login.cpp \
    createaccount.cpp \
    newteam.cpp \
    logototeam.cpp \
    team.cpp

HEADERS += \
        mainwindow.h \
    teamlist.h \
    login.h \
    createaccount.h \
    logototeam.h \
    newteam.h \
    team.h

FORMS += \
        mainwindow.ui \
    teamlist.ui \
    login.ui \
    createaccount.ui \
    newteam.ui \
    logototeam.ui

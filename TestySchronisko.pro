#-------------------------------------------------
#
# Project created by QtCreator 2015-06-25T09:07:48
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_schroniskotesty
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += ProgramGlowny/pies.cpp \
           ProgramGlowny/listapsow.cpp \
           ProgramGlowny/przydzielpsatransakcja.cpp
HEADERS += ProgramGlowny/pies.h \
           ProgramGlowny/listapsow.h \
           ProgramGlowny/przydzielpsatransakcja.h

SOURCES += tst_schroniskotesty.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

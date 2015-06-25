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

SOURCES += ProgramGlowny/pies.cpp
#SOURCES += ProgramGlowny/listapsow.cpp
HEADERS += ProgramGlowny/pies.h
#HEADERS += ProgramGlowny/listapsow.h

SOURCES += tst_schroniskotesty.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

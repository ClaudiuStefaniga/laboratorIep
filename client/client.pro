QT += core
QT -= gui

CONFIG += c++11

TARGET = client
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    bcm2835_stub.cpp \
    blink.cpp

HEADERS += \
    bcm2835.h

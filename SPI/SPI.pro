QT += core
QT -= gui

CONFIG += c++11

TARGET = SPI
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    serial.cpp \
    spi.cpp \
    bcm2835_stub.cpp

HEADERS += \
    serial.h \
    spi.h \
    bcm2835.h

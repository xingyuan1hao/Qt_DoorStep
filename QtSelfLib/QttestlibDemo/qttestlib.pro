# qttestlib.pro

QT += widgets

TARGET = qttestlib
TEMPLATE = lib

CONFIG += static
#CONFIG += shared
#CONFIG += shared lib_bundle

DEFINES += QTTESTLIB_LIBRARY
DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
    widget.cpp

HEADERS += \
    widget.h \
    qttestlib_global.h

# end of file

#-------------------------------------------------
#
# Project created by QtCreator 2018-05-04T09:25:35
#
#-------------------------------------------------

QT       -= gui

DEPEND_MODULES += SDK.Core.Guid SDK.Core.RandomHelper

TARGET = Services
TEMPLATE = lib

DEFINES += SERVICES_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractModule.cpp \
    AbstractService.cpp

HEADERS += \
        services_global.h \ 
    AbstractModule.h \
    AbstractService.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../../paths.pri)

INCLUDEPATH += $$SDK_DIR

include(../../../modules.pri)

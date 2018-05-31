#-------------------------------------------------
#
# Project created by QtCreator 2018-05-07T15:06:15
#
#-------------------------------------------------

QT       -= gui

DEPEND_MODULES += \
        SDK.Core.Exceptions \
        SDK.Core.Guid \
        SDK.Core.Serialization


TARGET = Models
TEMPLATE = lib

DEFINES += MODELS_LIBRARY

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
        AbstractEntity.cpp \
    Actor.cpp \
    AbstractEntityFactory.cpp \
    AbstractItem.cpp \
    UnknownFieldException.cpp

HEADERS += \
        AbstractEntity.h \
        models_global.h \ 
    Actor.h \
    AbstractEntityFactory.h \
    AbstractItem.h \
    IDatabaseStored.h \
    UnknownFieldException.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../paths.pri)
include(../../modules.pri)

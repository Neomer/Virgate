#-------------------------------------------------
#
# Project created by QtCreator 2018-05-04T11:09:45
#
#-------------------------------------------------

QT       -= gui
QT       += xml

TARGET = DatabaseService
TEMPLATE = lib

DEPEND_MODULES += \
        SDK.Core.Exceptions \
        SDK.Core.Services \
        SDK.Core.Serialization \
        SDK.Core.Helpers \
        SDK.Core.Guid \
        SDK.Models



DEFINES += DATABASESERVICE_LIBRARY

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
        DatabaseService.cpp \
    DatabaseServiceConfiguration.cpp \
    DatabaseConfiguration.cpp \
    AbstractDatabaseConnection.cpp \
    AbstractDatabaseQuery.cpp

HEADERS += \
        DatabaseService.h \
        databaseservice_global.h \ 
    DatabaseServiceConfiguration.h \
    DatabaseConfiguration.h \
    AbstractDatabaseConnection.h \
    AbstractDatabaseQuery.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../paths.pri)
include(../../modules.pri)

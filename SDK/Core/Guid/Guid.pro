#-------------------------------------------------
#
# Project created by QtCreator 2018-05-03T16:16:43
#
#-------------------------------------------------

QT       -= gui

MODULES += SDK.Core.RandomHelper SDK.Core.Guid

TARGET = Guid
TEMPLATE = lib

DEFINES += GUID_LIBRARY

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
        Guid.cpp

HEADERS += \
        Guid.h \
        guid_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../../../paths.pri)

INCLUDEPATH += $$SDK_DIR

for(item, MODULES) {
    split_modules = $$split(item, .)
    module_name = $$last(split_modules)
    join_modules = $$join(split_modules, /)
    build_type = release
    CONFIG(debug, debug|release) {
        build_type = debug
    }
    message($$join_modules/$$build_type/$$module_name)
}

TEMPLATE = subdirs

SUBDIRS += \
    SDK/Core/Guid \
    SDK/Core/Helpers \
    SDK/Core/Services \
    Services/DatabaseService \
    SDK/Core/Serialization \
    SDK/Logs/Logger

INCLUDEPATH += $$PWD

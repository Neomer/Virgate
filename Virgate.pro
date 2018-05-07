TEMPLATE = subdirs

CONFIG += ordered

SUBDIRS += \
    SDK/Core/Exceptions \
    SDK/Logs/Logger \
    SDK/Core/Helpers \
    SDK/Core/Guid \
    SDK/Core/Serialization \
    SDK/Core/Services \
    Services/DatabaseService \
    Services/AuthenticationService \
    ServiceScheduller \
    SDK/Models


#ifndef ABSTRACTLOGGER_H
#define ABSTRACTLOGGER_H

#include "logger_global.h"
#include <Core/Defines.h>
#include <QString>

class LOGGERSHARED_EXPORT AbstractLogger
{
public:
    AbstractLogger();

    PROP(bool, DisplayTimestamp)
    PROP(QString, TimestampFormat)

    virtual void load() = 0;
    virtual void unload() = 0;
    virtual void writeLine(QString value) = 0;
    virtual void writeLine(const char *value) = 0;

    virtual void write(QString value) = 0;
    virtual void write(const char *value) = 0;
};

#endif // ABSTRACTLOGGER_H

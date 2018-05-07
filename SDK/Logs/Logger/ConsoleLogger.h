#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include "logger_global.h"
#include "AbstractLogger.h"

class LOGGERSHARED_EXPORT ConsoleLogger : public AbstractLogger
{
public:
    ConsoleLogger();

    // AbstractLogger interface
public:
    void load() override;
    void unload() override;
    void writeLine(const QString value) override;
    void write(const QString value) override;
    void writeLine(const char *value) override;
    void write(const char *value) override;
};

#endif // CONSOLELOGGER_H

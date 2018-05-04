#include "ConsoleLogger.h"
#include <QDebug>

ConsoleLogger::ConsoleLogger()
{

}


void ConsoleLogger::load()
{

}

void ConsoleLogger::unload()
{

}

void ConsoleLogger::writeLine(QString value)
{
    printf("%s\n", value.toStdString().c_str());
}

void ConsoleLogger::write(QString value)
{
    printf("%s", value.toStdString().c_str());
}


void ConsoleLogger::writeLine(const char *value)
{
    printf("%s\n", value);
}

void ConsoleLogger::write(const char *value)
{
    printf("%s", value);
}

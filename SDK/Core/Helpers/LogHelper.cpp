#include "LogHelper.h"
#include <Logs/Logger/ConsoleLogger.h>

LogHelper::LogHelper()
{
    _current = new ConsoleLogger();
}

AbstractLogger *LogHelper::getCurrent() const
{
    return _current;
}

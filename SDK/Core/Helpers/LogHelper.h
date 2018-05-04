#ifndef LOGHELPER_H
#define LOGHELPER_H

#include "randomhelper_global.h"
#include <Core/Defines.h>
#include <Logs/Logger/AbstractLogger.h>

class RANDOMHELPERSHARED_EXPORT LogHelper
{
    SINGLETON(LogHelper)

public:
    AbstractLogger *getCurrent() const;

private:
    AbstractLogger * _current;
};

#endif // LOGHELPER_H

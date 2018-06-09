#ifndef STRINGHELPER_H
#define STRINGHELPER_H

#include "randomhelper_global.h"

#include <Core/Defines.h>
#include <QString>

class RANDOMHELPERSHARED_EXPORT StringHelper
{
    SINGLETON(StringHelper)

public:
    static const char *StringToConstChar(QString string);
};

#endif // STRINGHELPER_H

#include "StringHelper.h"

StringHelper::StringHelper()
{

}

const char *StringHelper::StringToConstChar(QString string)
{
    return string.toLatin1().constData();
}

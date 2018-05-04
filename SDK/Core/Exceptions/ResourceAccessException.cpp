#include "ResourceAccessException.h"

ResourceAccessException::ResourceAccessException(QString resourceName, QString message) :
    BaseException(message),
    _ResourceName(resourceName)
{

}

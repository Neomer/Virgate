#include "NotImplementedException.h"

NotImplementedException::NotImplementedException() :
     BaseException()
{

}

NotImplementedException::NotImplementedException(const char *methodName) :
    BaseException(QString("Method has not been implemented: ") + methodName)
{

}

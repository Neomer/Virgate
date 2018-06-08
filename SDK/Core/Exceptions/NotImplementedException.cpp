#include "NotImplementedException.h"

NotImplementedException::NotImplementedException() :
     BaseException(QString("Method has not been implemented: ") + __FUNCTION__)
{

}

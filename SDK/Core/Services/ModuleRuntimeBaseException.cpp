#include "ModuleRuntimeBaseException.h"

ModuleRuntimeBaseException::ModuleRuntimeBaseException(AbstractModule *module, QString message) :
    BaseException(message),
    _Module(module)
{

}

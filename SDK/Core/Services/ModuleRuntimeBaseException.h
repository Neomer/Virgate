#ifndef MODULERUNTIMEBASEEXCEPTION_H
#define MODULERUNTIMEBASEEXCEPTION_H

#include <Core/Exceptions/BaseException.h>
#include "AbstractModule.h"

class ModuleRuntimeBaseException : public BaseException
{
public:
    ModuleRuntimeBaseException(AbstractModule *module, QString message);

    PROP_PTR(AbstractModule, Module)

private:
    AbstractModule *module;
};

#endif // MODULERUNTIMEBASEEXCEPTION_H

#include "IAbstractModule.h"


IAbstractModule::IAbstractModule()
{
}



void IAbstractModule::run()
{
    forever {
        exec();
    }
}

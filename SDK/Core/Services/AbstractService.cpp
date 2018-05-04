#include "AbstractService.h"

AbstractService::AbstractService()
{

}

void AbstractService::registerModule(AbstractModule *module)
{
    _modules << module;
}


void AbstractService::run()
{
    forever
    {
        foreach (auto m, _modules)
        {
            m->exec();
        }
    }
}

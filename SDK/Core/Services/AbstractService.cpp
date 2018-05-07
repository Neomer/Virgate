#include "AbstractService.h"

AbstractService::AbstractService()
{

}

void AbstractService::start()
{
    QThread::start();
}

void AbstractService::registerModule(AbstractModule *module)
{
    _modules.push_back(module);
}

void AbstractService::registerModule(int before, AbstractModule *module)
{
    _modules.insert(before, module);
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

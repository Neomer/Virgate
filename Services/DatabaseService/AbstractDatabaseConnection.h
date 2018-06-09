#ifndef ABSTRACTDATABASECONNECTION_H
#define ABSTRACTDATABASECONNECTION_H

#include "databaseservice_global.h"
#include "AbstractDatabaseQuery.h"
#include <Core/Services/AbstractConfiguration.h>

#include <memory>

class DATABASESERVICESHARED_EXPORT AbstractDatabaseConnection
{
public:
    virtual bool open() = 0;
    virtual void close() = 0;
    virtual AbstractDatabaseQuery* exec(QString sql) = 0;

    PROP_PTR(AbstractConfiguration, Configuration)
};

#endif // ABSTRACTDATABASECONNECTION_H

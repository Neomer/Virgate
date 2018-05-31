#ifndef ABSTRACTDATABASECONNECTION_H
#define ABSTRACTDATABASECONNECTION_H

#include "databaseservice_global.h"
#include "AbstractDatabaseQuery.h"

#include <memory>

class DATABASESERVICESHARED_EXPORT AbstractDatabaseConnection
{
public:
    virtual bool open();
    virtual void close();
    virtual AbstractDatabaseQuery* exec(QString sql) = 0;
};

#endif // ABSTRACTDATABASECONNECTION_H

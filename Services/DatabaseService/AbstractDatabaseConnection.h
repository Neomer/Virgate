#ifndef ABSTRACTDATABASECONNECTION_H
#define ABSTRACTDATABASECONNECTION_H

#include "databaseservice_global.h"

class DATABASESERVICESHARED_EXPORT AbstractDatabaseConnection
{
public:
    virtual bool open();
    virtual void close();
};

#endif // ABSTRACTDATABASECONNECTION_H

#ifndef AUTHENTICATIONSERVICE_H
#define AUTHENTICATIONSERVICE_H

#include "authenticationservice_global.h"
#include <Core/Services/AbstractService.h>

class AUTHENTICATIONSERVICESHARED_EXPORT AuthenticationService : public AbstractService
{

public:
    AuthenticationService();

    // AbstractService interface
public:
    void Load() override;
    void Unload() override;
};

#endif // AUTHENTICATIONSERVICE_H

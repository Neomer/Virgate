#include <QFile>
#include <QJsonDocument>

#include "AuthenticationService.h"
#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>
#include <Core/Exceptions/DataFormatException.h>

AuthenticationService::AuthenticationService() :
    AbstractService(),
    _moduleId(Guid::Parse("3cb9ef0a-29e7-4875-87c7-9a34981a4a65"))
{
    _configuration = new AuthenticationServiceConfiguration();
}


void AuthenticationService::Load()
{
}

void AuthenticationService::Unload()
{
}


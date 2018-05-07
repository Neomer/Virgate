#include "AuthenticationService.h"
#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>

AuthenticationService::AuthenticationService() :
    _moduleId(Guid::Parse("3cb9ef0a-29e7-4875-87c7-9a34981a4a65"))
{
}


void AuthenticationService::Load()
{
}

void AuthenticationService::Unload()
{
}


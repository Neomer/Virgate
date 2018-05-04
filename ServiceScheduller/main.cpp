#include <QCoreApplication>
#include <Core/Services/AbstractService.h>
#include "../Services/AuthenticationService/AuthenticationService.h"
#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AbstractService *svc = new AuthenticationService();
    try
    {
        svc->Load();
    }
    catch (DataParsingException &ex)
    {

    }
    catch (ResourceAccessException &ex)
    {

    }
    catch (BaseException &ex)
    {

    }

    return a.exec();
}

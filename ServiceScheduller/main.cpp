#include <QCoreApplication>
#include <Core/Services/AbstractService.h>
#include "../Services/AuthenticationService/AuthenticationService.h"
#include <Core/Exceptions/ResourceAccessException.h>
#include <Core/Exceptions/DataParsingException.h>
#include <Core/Helpers/LogHelper.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    auto logger = LogHelper::Instance().getCurrent();

    try
    {
        AbstractService *svc = new AuthenticationService();
        try
        {
            svc->loadConfiguration("configuration.json");
            svc->Load();
        }
        catch (DataParsingException &ex)
        {
            logger->writeLine(QString("Parsing error! Offset: %1 %2").arg(QString::number(ex.getOffset()), ex.getMessage()));
        }
        catch (ResourceAccessException &ex)
        {
            logger->writeLine(QString("Resource access error! Resource: %1 %2").arg(ex.getResourceName(), ex.getMessage()));
        }
    }
    catch (BaseException &ex)
    {
        logger->writeLine(ex.what());
    }

    return a.exec();
}

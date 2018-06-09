#include "AbstractConfiguration.h"

AbstractConfiguration::AbstractConfiguration() :
    _IsLoad(false)
{

}


void AbstractConfiguration::fromJson(const QJsonObject &object)
{
    Q_UNUSED(object); setIsLoad(true);
}

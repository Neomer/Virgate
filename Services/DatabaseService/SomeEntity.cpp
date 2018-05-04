#include "SomeEntity.h"
#include <QDataStream>

SomeEntity::SomeEntity()
{

}


void SomeEntity::toBinary(QByteArray &buffer)
{
    QDataStream stream(&buffer, QIODevice::WriteOnly);

    stream << getSomeBoolProperty()
           << getSomeIntProperty()
           << getSomeStringProperty();
}

void SomeEntity::fromBinary(QByteArray &buffer)
{
    QDataStream stream(&buffer, QIODevice::ReadOnly);

    bool boolVar;
    int intVar;
    QString stringVar;

    stream >> boolVar;
    stream >> intVar;
    stream >> stringVar;

    setSomeBoolProperty(boolVar);
    setSomeIntProperty(intVar);
    setSomeStringProperty(stringVar);
}

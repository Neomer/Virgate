#include "AbstractEntityFactory.h"
#include <QMetaObject>
#include <QMetaType>
#include <QDebug>

AbstractEntityFactory::AbstractEntityFactory()
{

}

std::shared_ptr<AbstractEntity> AbstractEntityFactory::CreateEntity(Guid typeId)
{
    auto type = QMetaType::type("Actor");
    qDebug() << "Type:" << type;
    if (type != QMetaType::UnknownType)
    {
        auto instance = QMetaType::create(type);
        qDebug() << "Instance:" << instance;
    }
}

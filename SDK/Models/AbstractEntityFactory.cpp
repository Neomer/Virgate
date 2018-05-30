#include "AbstractEntityFactory.h"
#include <QMetaObject>
#include <QMetaType>
#include <QDebug>

AbstractEntityFactory::AbstractEntityFactory()
{

}

std::shared_ptr<AbstractEntity> AbstractEntityFactory::CreateEntity(const char *typeName)
{
    auto type = QMetaType::type(typeName);
    qDebug() << "Type:" << type;
    if (type == QMetaType::UnknownType)
    {
        return nullptr;
    }
    auto instance = QMetaType::create(type);
    return std::shared_ptr<AbstractEntity>(static_cast<AbstractEntity *>(instance));
}

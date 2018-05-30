#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <QObject>
#include "AbstractEntity.h"

class MODELSSHARED_EXPORT AbstractItem : public AbstractEntity
{
    Q_OBJECT

public:
    AbstractItem();
    AbstractItem(const AbstractItem &other);
};


#endif // ABSTRACTITEM_H

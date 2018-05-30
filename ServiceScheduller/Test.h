#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <Core/Defines.h>

class Test : QObject
{
    Q_OBJECT

public:
    Test();
    Test(const Test &other);

    PROP(int, Property)
};

Q_DECLARE_METATYPE(Test)

#endif // TEST_H

#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include <QException>

#include "exceptions_global.h"
#include <Core/Defines.h>

class EXCEPTIONSSHARED_EXPORT BaseException : public QException
{
public:
    BaseException(QString message);
    BaseException(const char *message);

private:
    QString _message;

    // QException interface
public:
    void raise() const override;
    QException *clone() const override;
};

#endif // BASEEXCEPTION_H

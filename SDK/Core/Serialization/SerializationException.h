#ifndef SERIALIZATIONEXCEPTION_H
#define SERIALIZATIONEXCEPTION_H

#include "serialization_global.h"

#include <QException>

class SERIALIZATIONSHARED_EXPORT SerializationException : public QException
{
public:
    explicit SerializationException(const char *message) : _msg(message) { }
    explicit SerializationException(const QString& message) : _msg(message) { }

    void raise() const { throw *this; }
    SerializationException *clone() const { return new SerializationException(*this); }

    QString getMessage() { return _msg; }

private:
    QString _msg;

};


#endif // SERIALIZATIONEXCEPTION_H

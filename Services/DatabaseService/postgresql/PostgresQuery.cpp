#include "PostgresQuery.h"

PostgresQuery::PostgresQuery(PGresult *result) :
    _result(result),
    _row(0)
{

}

void PostgresQuery::close()
{
    PQclear(_result);
    _result = nullptr;
}

bool PostgresQuery::isEmpty()
{
    NOT_IMPL
}

bool PostgresQuery::isValid()
{
    return _result != nullptr;
}

bool PostgresQuery::first()
{
    NOT_IMPL
}

bool PostgresQuery::last()
{
    NOT_IMPL
}

bool PostgresQuery::next()
{
    NOT_IMPL
}

bool PostgresQuery::prev()
{
    NOT_IMPL
}

int PostgresQuery::rowCount()
{
    Q_ASSERT(_result != nullptr); return PQntuples(_result);
}

int PostgresQuery::fieldCount()
{
    Q_ASSERT(_result != nullptr); return PQnfields(_result);
}

QString PostgresQuery::field(int index)
{
    Q_ASSERT(index >= 0 && index < fieldCount()); return PQfname(_result, index);
}

int PostgresQuery::field(QString name)
{
    return PQfnumber(_result, name.toLatin1().constData());
}

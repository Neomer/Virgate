#ifndef POSTGRESQUERY_H
#define POSTGRESQUERY_H

#include "../AbstractDatabaseQuery.h"
#include <libpq-fe.h>

class DATABASESERVICESHARED_EXPORT PostgresQuery : public AbstractDatabaseQuery
{
public:
    PostgresQuery(PGresult *result);

    // AbstractDatabaseQuery interface
public:
    void close() override;
    bool isEmpty() override;
    bool isValid() override;
    bool first() override;
    bool last() override;
    bool next() override;
    bool prev() override;
    int rowCount() override;
    int fieldCount() override;
    QString field(int index) override;
    int field(QString name) override;

    template <typename T> T value(int index)
    {
        Q_ASSERT(_result != nullptr && index >= 0 && index < rowCount()); return (T)PQgetvalue(_result, _row, index);
    }

    template <typename T> T value(QString name)
    {
        throw NotImplementedException();
    }

private:
    PGresult *_result;
    int _row;
};

#endif // POSTGRESQUERY_H

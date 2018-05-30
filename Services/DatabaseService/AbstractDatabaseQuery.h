#ifndef ABSTRACTDATABASEQUERY_H
#define ABSTRACTDATABASEQUERY_H

#include "databaseservice_global.h"

#include <Core/Exceptions/NotImplementedException.h>

///
/// \brief The AbstractDatabaseQuery class provides access to database's resultset. Used by AbstractDatabaseConnection's for represent execution result.
///
class AbstractDatabaseQuery
{
public:
    ///
    /// \brief close free resultset memory
    ///
    virtual void close() = 0;

    ///
    /// \brief isEmpty returns TRUE if recordset has no rows
    /// \return
    ///
    virtual bool isEmpty() = 0;
    ///
    /// \brief isValid returns TRUE if recordset is valid
    /// \return
    ///
    virtual bool isValid() = 0;

    ///
    /// \brief first moves carrier to the first row
    /// \return
    ///
    virtual bool first() = 0;
    ///
    /// \brief last moves carrier to the last row
    /// \return
    ///
    virtual bool last() = 0;
    ///
    /// \brief next moves carrier to the next row
    /// \return
    ///
    virtual bool next() = 0;
    ///
    /// \brief prev moves carrier to the previous row
    /// \return
    ///
    virtual bool prev() = 0;

    ///
    /// \brief rowCount returns row-count of the resultset
    /// \return
    ///
    virtual int rowCount() = 0;
    ///
    /// \brief fieldCount returns field-count of the resultset
    /// \return
    ///
    virtual int fieldCount() = 0;

    ///
    /// \brief field returns NAME of the field by index INDEX
    /// \param index
    /// \return
    ///
    virtual QString field(int index) = 0;
    ///
    /// \brief field returns INDEX of field by given NAME
    /// \param name
    /// \return
    ///
    virtual int field(QString name) = 0;

    template <typename T> T value(int index)
    {
        Q_UNUSED(index); throw NotImplementedException();
    }

    template <typename T> T value(QString name)
    {
        Q_UNUSED(name); throw NotImplementedException();
    }
};

#endif // ABSTRACTDATABASEQUERY_H

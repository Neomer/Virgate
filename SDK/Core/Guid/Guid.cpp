#include "Guid.h"
#include <QRegExp>
#include <QStringList>
#include <Core/RandomHelper/RandomHelper.h>

Guid::Guid(const Guid &other)
{
    _data = other._data;
}

Guid Guid::newGuid()
{
    Guid ret;
    quint8 *ptr = (quint8 *)&(ret._data);
    for (unsigned int i = 0; i < sizeof(GuidStructure); i++)
    {
         ptr[i] = RandomHelper::Instance().nextInt(0x100);
    }
    return ret;
}

Guid Guid::emptyGuid()
{
    Guid ret;
    memset(&ret._data, 0, sizeof(GuidStructure));
    return ret;
}

Guid Guid::parse(QString guid, bool *ok)
{
    QRegExp guidValidator("\\{?[\\da-fA-F]{8}\\-[\\da-fA-F]{4}\\-[\\da-fA-F]{4}\\-[\\da-fA-F]{4}\\-[\\da-fA-F]{12}\\}?");
    if (!guidValidator.exactMatch(guid))
    {
        *ok = false;
        return Guid::emptyGuid();
    }
    if (guid.startsWith("{")) guid = guid.mid(1);
    if (guid.endsWith("}")) guid = guid.left(-1);
    QStringList r = guid.split('-');
    Guid ret;
    ret._data.Data1 = QString(r.at(0)).toUInt(ok, 16);
    ret._data.Data2 = QString(r.at(1)).toUInt(ok, 16);
    ret._data.Data3 = QString(r.at(2)).toUInt(ok, 16);
    ret._data.Data4 = QString(r.at(3)).toUInt(ok, 16) << 16;
    ret._data.Data4 |= QString(r.at(4)).left(4).toUInt(ok, 16);
    ret._data.Data5 = QString(r.at(4)).right(8).toUInt(ok, 16);
    if (!*ok)
    {
        return Guid::emptyGuid();
    }
    return ret;
}

bool Guid::operator !=(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) != 0;
}

bool Guid::operator ==(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) == 0;
}

Guid Guid::operator =(const Guid &other)
{
    _data = other._data;
    return *this;
}

Guid Guid::operator =(QString data)
{
    bool ok = true;
    Guid ret = Guid::parse(data, &ok);
    if (!ok)
    {
        throw std::runtime_error("Неверный формат Guid!");
    }
    return ret;
}

Guid Guid::operator =(const char *data)
{
    bool ok = true;
    Guid ret = Guid::parse(QString(data), &ok);
    if (!ok)
    {
        throw std::runtime_error("Неверный формат Guid!");
    }
    return ret;
}

bool Guid::operator <(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) > 0;
}

bool Guid::operator >(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) < 0;
}

QString Guid::toString()
{
    return QString("%1-%2-%3-%4-%5%6").arg(
                QString::number(_data.Data1, 16).rightJustified(8, '0'),
                QString::number(_data.Data2, 16).rightJustified(4, '0'),
                QString::number(_data.Data3, 16).rightJustified(4, '0'),
                QString::number((quint16)((_data.Data4 & 0xffff0000) >> 16), 16).rightJustified(4, '0'),
                QString::number((quint16)( _data.Data4 & 0x0000ffff), 16).rightJustified(4, '0'),
                QString::number( _data.Data5, 16).rightJustified(8, '0'));
}

Guid::Guid()
{
    memset(&_data, 0, sizeof(GuidStructure));
}

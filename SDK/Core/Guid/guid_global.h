#ifndef GUID_GLOBAL_H
#define GUID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GUID_LIBRARY)
#  define GUIDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GUIDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // GUID_GLOBAL_H

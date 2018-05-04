#ifndef RANDOMHELPER_GLOBAL_H
#define RANDOMHELPER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RANDOMHELPER_LIBRARY)
#  define RANDOMHELPERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RANDOMHELPERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RANDOMHELPER_GLOBAL_H
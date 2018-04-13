#ifndef TEAM1_GLOBAL_H
#define TEAM1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEAM1_LIBRARY)
#  define TEAM1SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEAM1SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEAM1_GLOBAL_H

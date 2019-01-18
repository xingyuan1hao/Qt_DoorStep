// qttestlib_global.h

#pragma once

// Qt includes
#include <QtCore/qglobal.h>

#if defined(QTTESTLIB_LIBRARY)
#  define QTTESTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTTESTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

// end of file

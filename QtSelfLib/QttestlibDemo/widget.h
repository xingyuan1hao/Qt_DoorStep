// widget.h

#pragma once

// Qt includes
#include <QLabel>

// qttestlib includes
#include "qttestlib_global.h"

class QTTESTLIBSHARED_EXPORT Widget : public QLabel
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
};

// end of file

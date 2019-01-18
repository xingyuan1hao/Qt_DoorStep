// widget.cpp

// qttestlib includes
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QLabel(parent)
{
    setText("Zork");
    setAlignment(Qt::AlignCenter);
}

// end of file

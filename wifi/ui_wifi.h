/********************************************************************************
** Form generated from reading UI file 'wifi.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFI_H
#define UI_WIFI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wifi
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *usb;
    QRadioButton *sdio;
    QRadioButton *bu8723;
    QPushButton *pbt_open;
    QPushButton *pbt_scan;
    QLabel *label;
    QLineEdit *Edit_name;
    QLabel *label_2;
    QLineEdit *Edit_pass;
    QPushButton *pbt_connect;
    QTextEdit *Edit_show;

    void setupUi(QWidget *Wifi)
    {
        if (Wifi->objectName().isEmpty())
            Wifi->setObjectName(QString::fromUtf8("Wifi"));
        Wifi->resize(613, 349);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Wifi->sizePolicy().hasHeightForWidth());
        Wifi->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Wifi);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(Wifi);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_2->addLayout(verticalLayout_3, 1, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        usb = new QRadioButton(groupBox_2);
        usb->setObjectName(QString::fromUtf8("usb"));
        sizePolicy.setHeightForWidth(usb->sizePolicy().hasHeightForWidth());
        usb->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(usb);

        sdio = new QRadioButton(groupBox_2);
        sdio->setObjectName(QString::fromUtf8("sdio"));
        sizePolicy.setHeightForWidth(sdio->sizePolicy().hasHeightForWidth());
        sdio->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(sdio);

        bu8723 = new QRadioButton(groupBox_2);
        bu8723->setObjectName(QString::fromUtf8("bu8723"));
        sizePolicy.setHeightForWidth(bu8723->sizePolicy().hasHeightForWidth());
        bu8723->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(bu8723);

        pbt_open = new QPushButton(groupBox_2);
        pbt_open->setObjectName(QString::fromUtf8("pbt_open"));
        sizePolicy.setHeightForWidth(pbt_open->sizePolicy().hasHeightForWidth());
        pbt_open->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(pbt_open);

        pbt_scan = new QPushButton(groupBox_2);
        pbt_scan->setObjectName(QString::fromUtf8("pbt_scan"));
        sizePolicy.setHeightForWidth(pbt_scan->sizePolicy().hasHeightForWidth());
        pbt_scan->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(pbt_scan);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label);

        Edit_name = new QLineEdit(groupBox_2);
        Edit_name->setObjectName(QString::fromUtf8("Edit_name"));
        sizePolicy.setHeightForWidth(Edit_name->sizePolicy().hasHeightForWidth());
        Edit_name->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(Edit_name);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_2);

        Edit_pass = new QLineEdit(groupBox_2);
        Edit_pass->setObjectName(QString::fromUtf8("Edit_pass"));
        sizePolicy.setHeightForWidth(Edit_pass->sizePolicy().hasHeightForWidth());
        Edit_pass->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(Edit_pass);


        gridLayout_2->addLayout(verticalLayout_4, 0, 2, 1, 1);

        pbt_connect = new QPushButton(groupBox_2);
        pbt_connect->setObjectName(QString::fromUtf8("pbt_connect"));
        sizePolicy.setHeightForWidth(pbt_connect->sizePolicy().hasHeightForWidth());
        pbt_connect->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pbt_connect, 1, 0, 1, 1);

        Edit_show = new QTextEdit(groupBox_2);
        Edit_show->setObjectName(QString::fromUtf8("Edit_show"));

        gridLayout_2->addWidget(Edit_show, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Wifi);

        QMetaObject::connectSlotsByName(Wifi);
    } // setupUi

    void retranslateUi(QWidget *Wifi)
    {
        Wifi->setWindowTitle(QApplication::translate("Wifi", "Wifi", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        usb->setText(QApplication::translate("Wifi", "usb", 0, QApplication::UnicodeUTF8));
        sdio->setText(QApplication::translate("Wifi", "sdio", 0, QApplication::UnicodeUTF8));
        bu8723->setText(QApplication::translate("Wifi", "8723bu", 0, QApplication::UnicodeUTF8));
        pbt_open->setText(QApplication::translate("Wifi", "open", 0, QApplication::UnicodeUTF8));
        pbt_scan->setText(QApplication::translate("Wifi", "scan", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wifi", "name:", 0, QApplication::UnicodeUTF8));
        Edit_name->setText(QString());
        label_2->setText(QApplication::translate("Wifi", "password:", 0, QApplication::UnicodeUTF8));
        Edit_pass->setText(QString());
        pbt_connect->setText(QApplication::translate("Wifi", "connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wifi: public Ui_Wifi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFI_H

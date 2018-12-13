/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qipaddressedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QRadioButton *radio_dhcp;
    QRadioButton *radio_static;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QIpAddressEdit *edt_ip;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QIpAddressEdit *edt_mask;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QIpAddressEdit *edt_gateway;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QIpAddressEdit *edt_dns;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QPushButton *ok;
    QComboBox *cb_interface;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radio_dhcp = new QRadioButton(groupBox);
        radio_dhcp->setObjectName(QString::fromUtf8("radio_dhcp"));
        sizePolicy.setHeightForWidth(radio_dhcp->sizePolicy().hasHeightForWidth());
        radio_dhcp->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(radio_dhcp, 0, 0, 1, 1);

        radio_static = new QRadioButton(groupBox);
        radio_static->setObjectName(QString::fromUtf8("radio_static"));
        sizePolicy.setHeightForWidth(radio_static->sizePolicy().hasHeightForWidth());
        radio_static->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(radio_static, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        edt_ip = new QIpAddressEdit(groupBox);
        edt_ip->setObjectName(QString::fromUtf8("edt_ip"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(edt_ip->sizePolicy().hasHeightForWidth());
        edt_ip->setSizePolicy(sizePolicy1);
        edt_ip->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(edt_ip, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        edt_mask = new QIpAddressEdit(groupBox);
        edt_mask->setObjectName(QString::fromUtf8("edt_mask"));
        sizePolicy1.setHeightForWidth(edt_mask->sizePolicy().hasHeightForWidth());
        edt_mask->setSizePolicy(sizePolicy1);
        edt_mask->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(edt_mask, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        edt_gateway = new QIpAddressEdit(groupBox);
        edt_gateway->setObjectName(QString::fromUtf8("edt_gateway"));
        sizePolicy1.setHeightForWidth(edt_gateway->sizePolicy().hasHeightForWidth());
        edt_gateway->setSizePolicy(sizePolicy1);
        edt_gateway->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(edt_gateway, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        edt_dns = new QIpAddressEdit(groupBox);
        edt_dns->setObjectName(QString::fromUtf8("edt_dns"));
        sizePolicy1.setHeightForWidth(edt_dns->sizePolicy().hasHeightForWidth());
        edt_dns->setSizePolicy(sizePolicy1);
        edt_dns->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(edt_dns, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        verticalLayout->addLayout(gridLayout_7);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ok = new QPushButton(centralWidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ok, 3, 0, 1, 3);

        cb_interface = new QComboBox(centralWidget);
        cb_interface->setObjectName(QString::fromUtf8("cb_interface"));
        sizePolicy2.setHeightForWidth(cb_interface->sizePolicy().hasHeightForWidth());
        cb_interface->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(cb_interface, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        radio_dhcp->setText(QApplication::translate("MainWindow", "DHCP", 0, QApplication::UnicodeUTF8));
        radio_static->setText(QApplication::translate("MainWindow", "STATIC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ip:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "netmask:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "gateway:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "dns:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "              interface:", 0, QApplication::UnicodeUTF8));
        ok->setText(QApplication::translate("MainWindow", "Apply and Restart Network", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

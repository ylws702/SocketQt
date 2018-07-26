/********************************************************************************
** Form generated from reading UI file 'Client.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ipLabel;
    QLineEdit *ipEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *portLabel;
    QLineEdit *portEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *connectButton;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *sendEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sendButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QTextEdit *getEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClientClass)
    {
        if (ClientClass->objectName().isEmpty())
            ClientClass->setObjectName(QStringLiteral("ClientClass"));
        ClientClass->resize(600, 400);
        centralWidget = new QWidget(ClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ipLabel = new QLabel(centralWidget);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));

        horizontalLayout->addWidget(ipLabel);

        ipEdit = new QLineEdit(centralWidget);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));

        horizontalLayout->addWidget(ipEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        portLabel = new QLabel(centralWidget);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        horizontalLayout->addWidget(portLabel);

        portEdit = new QLineEdit(centralWidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        horizontalLayout->addWidget(portEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout->addWidget(connectButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        sendEdit = new QTextEdit(centralWidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        verticalLayout->addWidget(sendEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_2->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        getEdit = new QTextEdit(centralWidget);
        getEdit->setObjectName(QStringLiteral("getEdit"));

        verticalLayout->addWidget(getEdit);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        ClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        ClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClientClass->setStatusBar(statusBar);

        retranslateUi(ClientClass);

        QMetaObject::connectSlotsByName(ClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClientClass)
    {
        ClientClass->setWindowTitle(QApplication::translate("ClientClass", "Client", nullptr));
        ipLabel->setText(QApplication::translate("ClientClass", "IP\345\234\260\345\235\200:", nullptr));
        portLabel->setText(QApplication::translate("ClientClass", "\347\253\257\345\217\243:", nullptr));
        connectButton->setText(QApplication::translate("ClientClass", "\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("ClientClass", "\345\217\221\351\200\201\346\266\210\346\201\257:", nullptr));
        sendButton->setText(QApplication::translate("ClientClass", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("ClientClass", "\346\216\245\345\217\227\346\266\210\346\201\257:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientClass: public Ui_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

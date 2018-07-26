/********************************************************************************
** Form generated from reading UI file 'Server.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

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

class Ui_ServerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *portEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *listenButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *sendEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sendButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QTextEdit *getEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ServerClass)
    {
        if (ServerClass->objectName().isEmpty())
            ServerClass->setObjectName(QStringLiteral("ServerClass"));
        ServerClass->resize(600, 400);
        centralWidget = new QWidget(ServerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        portEdit = new QLineEdit(centralWidget);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        horizontalLayout->addWidget(portEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listenButton = new QPushButton(centralWidget);
        listenButton->setObjectName(QStringLiteral("listenButton"));

        horizontalLayout->addWidget(listenButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        sendEdit = new QTextEdit(centralWidget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        verticalLayout_2->addWidget(sendEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_2->addWidget(sendButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        getEdit = new QTextEdit(centralWidget);
        getEdit->setObjectName(QStringLiteral("getEdit"));

        verticalLayout_2->addWidget(getEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        ServerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ServerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        ServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ServerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ServerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ServerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ServerClass->setStatusBar(statusBar);

        retranslateUi(ServerClass);

        QMetaObject::connectSlotsByName(ServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ServerClass)
    {
        ServerClass->setWindowTitle(QApplication::translate("ServerClass", "Server", nullptr));
        label->setText(QApplication::translate("ServerClass", "\347\253\257\345\217\243:", nullptr));
        listenButton->setText(QApplication::translate("ServerClass", "\344\276\246\345\220\254", nullptr));
        label_2->setText(QApplication::translate("ServerClass", "\345\217\221\351\200\201\346\266\210\346\201\257:", nullptr));
        sendButton->setText(QApplication::translate("ServerClass", "\345\217\221\351\200\201", nullptr));
        label_3->setText(QApplication::translate("ServerClass", "\346\216\245\345\217\227\346\266\210\346\201\257:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerClass: public Ui_ServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H

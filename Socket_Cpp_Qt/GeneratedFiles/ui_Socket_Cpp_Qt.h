/********************************************************************************
** Form generated from reading UI file 'Socket_Cpp_Qt.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCKET_CPP_QT_H
#define UI_SOCKET_CPP_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Socket_Cpp_QtClass
{
public:

    void setupUi(QDialog *Socket_Cpp_QtClass)
    {
        if (Socket_Cpp_QtClass->objectName().isEmpty())
            Socket_Cpp_QtClass->setObjectName(QStringLiteral("Socket_Cpp_QtClass"));
        Socket_Cpp_QtClass->resize(600, 400);

        retranslateUi(Socket_Cpp_QtClass);

        QMetaObject::connectSlotsByName(Socket_Cpp_QtClass);
    } // setupUi

    void retranslateUi(QDialog *Socket_Cpp_QtClass)
    {
        Socket_Cpp_QtClass->setWindowTitle(QApplication::translate("Socket_Cpp_QtClass", "Socket_Cpp_Qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Socket_Cpp_QtClass: public Ui_Socket_Cpp_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCKET_CPP_QT_H

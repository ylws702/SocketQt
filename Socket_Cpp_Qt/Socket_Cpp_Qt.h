#pragma once

#include <QtWidgets/QDialog>
#include "ui_Socket_Cpp_Qt.h"

class Socket_Cpp_Qt : public QDialog
{
	Q_OBJECT

public:
	Socket_Cpp_Qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::Socket_Cpp_QtClass ui;
};

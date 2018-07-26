#include "stdafx.h"
#include "Socket_Cpp_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Socket_Cpp_Qt w;
	w.show();
	return a.exec();
}

#include "Server.h"

Server::Server(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.portEdit->setText("8765");
}

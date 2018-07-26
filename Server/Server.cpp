#include "Server.h"

Server::Server(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.portEdit->setText("8765");
	connect(ui.listenButton, &QPushButton::clicked, this, &Server::slt_listenButton_clicked);

}

void Server::slt_listenButton_clicked()
{
	if (!listening)
	{
		int port = ui.portEdit->text().toInt();
		if (!server->listen(QHostAddress::Any,port))
		{
			//TODO:Êä³ö´íÎóĞÅÏ¢
		}
		//TODO:
		listening = true;
	}
	else
	{
		//TODO:
		listening = false;
	}
}
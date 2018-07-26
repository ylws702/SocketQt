#include "Server.h"

Server::Server(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.portEdit->setText("8765");
	connect(ui.listenButton, &QPushButton::clicked, this, &Server::slt_listenButton_clicked);
	connect(ui.sendButton, &QPushButton::clicked, this, &Server::slt_sendButton_clicked);
	connect(server, &QTcpServer::newConnection, this, &Server::slt_server_newConnection);
	ui.sendButton->setEnabled(false);
}

Server::~Server()
{
	server->close();
	server->deleteLater();
	socket->deleteLater();
}

void Server::slt_sendButton_clicked()
{
	socket->write(ui.sendEdit->toPlainText().toLatin1());
	socket->flush();
}

void Server::slt_listenButton_clicked()
{
	if (!listening)
	{
		int port = ui.portEdit->text().toInt();
		if (!server->listen(QHostAddress::Any,port))
		{
			//TODO:输出错误信息
		}
		ui.listenButton->setText("取消侦听");
		ui.sendButton->setEnabled(true);
		listening = true;
	}
	else
	{
		if (socket->state()== QAbstractSocket::ConnectedState)
		{
			socket->disconnectFromHost();
		}
		server->close();
		ui.listenButton->setText("侦听");
		ui.sendButton->setEnabled(false);
		listening = false;
	}
}

void Server::slt_server_newConnection()
{
	socket = server->nextPendingConnection();
	connect(socket, &QTcpSocket::readyRead, this, &Server::slt_server_readyRead);
	connect(socket, &QTcpSocket::disconnected, this, &Server::slt_server_disconnected);
	ui.sendButton->setEnabled(true);
}
void Server::slt_server_readyRead()
{
	QByteArray buffer = socket->readAll();
	if (!buffer.isEmpty())
	{
		QString str = ui.getEdit->toPlainText();
		str += tr(buffer);
		ui.getEdit->setText(str);
	}
}
void Server::slt_server_disconnected()
{
	ui.sendButton->setEnabled(false);
	QMessageBox::warning(this, tr("提示信息"), tr("连接已断开。"));
}
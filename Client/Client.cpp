#include "Client.h"

Client::Client(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.ipEdit->setText("127.0.0.1");
	ui.portEdit->setText("8765");
	connect(ui.connectButton, &QPushButton::clicked, this, &Client::slt_connectButton_clicked);
	connect(ui.sendButton, &QPushButton::clicked, this, &Client::slt_sendButton_clicked);
	connect(socket, &QTcpSocket::readyRead, this, &Client::slt_socket_readyRead);
	connect(socket, &QTcpSocket::disconnected, this, &Client::slt_socket_disconnected);
	ui.sendButton->setEnabled(false);
}

Client::~Client()
{
	delete socket;
}

void Client::slt_connectButton_clicked()
{
	if (!connected)
	{
		const QString IP = ui.ipEdit->text();
		const int port = ui.portEdit->text().toInt();
		socket->abort();
		socket->connectToHost(IP, port);
		if (!socket->waitForConnected())
		{
			QMessageBox::warning(this, tr("��ʾ��Ϣ"), tr("����ʧ�ܡ�"));
			qDebug() << "Connection failed!";
			return;
		}
		qDebug() << "Connect successfully!";
		ui.connectButton->setText("�Ͽ�����");
		ui.sendButton->setEnabled(true);
		connected = true;
	}
	else
	{
		socket->disconnectFromHost();
		ui.connectButton->setText("����");
		ui.sendButton->setEnabled(true);
		connected = false;
	}
}


void Client::slt_sendButton_clicked()
{
	socket->write(ui.sendEdit->toPlainText().toLatin1());
	socket->flush();
}

void Client::slt_socket_readyRead()
{
	QByteArray buffer = socket->readAll();
	if (!buffer.isEmpty())
	{
		QString str = ui.getEdit->toPlainText();
		str += tr(buffer);
		ui.getEdit->setText(str);
	}
}
void Client::slt_socket_disconnected()
{
	ui.sendButton->setEnabled(false);
	ui.connectButton->setText("����");
	QMessageBox::warning(this, tr("��ʾ��Ϣ"), tr("�����ѶϿ���"));
}
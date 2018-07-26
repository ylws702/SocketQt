#include "Client.h"

Client::Client(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.ipEdit->setText("127.0.0.1");
	ui.portEdit->setText("8765");
	connect(ui.connectButton, &QPushButton::clicked, this, &Client::slt_connectButton_clicked);
}

void Client::slt_connectButton_clicked()
{
	if (!connected)
	{
		QMessageBox::warning(this, tr("��ʾ��Ϣ"), tr("��ʼ���ӡ�"));
		const QString IP = ui.ipEdit->text();
		const int port = ui.portEdit->text().toInt();
		socket->abort();
		socket->connectToHost(IP, port);
		if (!socket->waitForConnected())
		{
			qDebug() << "Connection failed!";
			return;
		}
		qDebug() << "Connect successfully!";
		ui.sendButton->setText("�Ͽ�����");
		ui.sendButton->setEnabled(true);
		connected = true;
	}
	else
	{
		socket->disconnectFromHost();
		ui.sendButton->setText("�Ͽ�����");
		ui.sendButton->setEnabled(true);
		connected = false;
	}
}
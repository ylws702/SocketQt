#pragma once
#pragma execution_character_set("utf-8")  
#include <QtWidgets/QMainWindow>
#include "ui_Client.h"
#include <QMessageBox>
#include <QTcpSocket>

class Client : public QMainWindow
{
	Q_OBJECT

public:
	Client(QWidget *parent = Q_NULLPTR);
	~Client();
public slots:
	void slt_connectButton_clicked();
	void slt_sendButton_clicked();
	void slt_socket_readyRead();
	void slt_socket_disconnected();
private:
	Ui::ClientClass ui;
	bool connected = false;
	QTcpSocket* socket = new QTcpSocket();
};

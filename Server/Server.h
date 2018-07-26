#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Server.h"
#pragma execution_character_set("utf-8")  
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>

class Server : public QMainWindow
{
	Q_OBJECT

public:
	Server(QWidget *parent = Q_NULLPTR);
	~Server();
private slots:
	void slt_listenButton_clicked();
	void slt_sendButton_clicked();
	void slt_server_newConnection();
	void slt_server_readyRead();
	void slt_server_disconnected();
private:
	Ui::ServerClass ui;
	bool listening=false;
	QTcpServer* server = new QTcpServer();
	QTcpSocket* socket = new QTcpSocket();
};

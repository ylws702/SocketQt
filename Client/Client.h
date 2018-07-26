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
public slots:
	void slt_connectButton_clicked();
private:
	Ui::ClientClass ui;
	bool connected = false;
	QTcpSocket* socket = new QTcpSocket();
};

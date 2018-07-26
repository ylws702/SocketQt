#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Server.h"

class Server : public QMainWindow
{
	Q_OBJECT

public:
	Server(QWidget *parent = Q_NULLPTR);
private slots:
	void slt_listenButton_clicked();
private:
	Ui::ServerClass ui;
	bool listening=false;
};

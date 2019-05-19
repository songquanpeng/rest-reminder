#pragma once

#include <QtWidgets/QWidget>
#include "ui_MainWidget.h"

class MainWidget : public QWidget
{
	Q_OBJECT

public:
	MainWidget(QWidget *parent = Q_NULLPTR);
	//QMediaPlayer soundPlayer;
	virtual void timerEvent(QTimerEvent* event);
	virtual void closeEvent(QCloseEvent* event);
	void startWork();
	void startRest();
	void endWork();
	void endRest();
	void timeLapse();

public slots:
	void on_controlBtn_clicked();
	void on_stopBtn_clicked();
	void on_chooseBtn_clicked();
	void remind();
	void soundReminder();
	void popupsReminder();

private:
	Ui::MainWidgetClass ui;
	int secondTimer;
	bool ongoing;
	bool working;
	int count;
	int secondCount;
};

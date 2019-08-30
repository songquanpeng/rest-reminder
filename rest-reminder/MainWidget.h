#pragma once

#include <QtWidgets/QWidget>
#include <QSystemTrayIcon>

#include "ui_MainWidget.h"

class MainWidget : public QWidget
{
	Q_OBJECT

public:
	MainWidget(QWidget *parent = Q_NULLPTR);
	//QMediaPlayer soundPlayer;
	virtual void timerEvent(QTimerEvent* event);
	virtual void closeEvent(QCloseEvent* event);
	void timeLapse();
protected:
	//void closeEvent(QCloseEvent* event) override;

public slots:
	void on_controlBtn_clicked();
	void on_stopBtn_clicked();
	void remind();
	//void iconActivated(QSystemTrayIcon::ActivationReason reason);
	//void showMessage();
	//void messageClicked();

private:
	void createActions();
	void createTrayIcon();

	Ui::MainWidgetClass ui;
	QAction* controlAction;
	QAction* stopAction;
	QAction* restoreAction;
	QAction* quitAction;
	QSystemTrayIcon* trayIcon;
	QMenu* trayIconMenu;
	int minuteTimer;
	bool ongoing;
	bool working;
	int minuteCounter;
};

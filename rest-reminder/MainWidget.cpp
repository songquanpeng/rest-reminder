#include "stdafx.h"
#include "MainWidget.h"
#include <QMessageBox>
#include <QAction>
#include <QMenu>
#include <QCloseEvent>
#include <QSystemTrayIcon>

MainWidget::MainWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	createActions();
	createTrayIcon();
	ongoing = false;
	working = true;
	minuteTimer = startTimer(60*1000); // One minute
	minuteCounter = 0;
}

void MainWidget::timeLapse()
{
	int workingTimeLength = ui.woringTimeSpinBox->value();
	int restingTimeLength = ui.restingTimeSpinBox->value();
	int currentTimeLength = working ? workingTimeLength : restingTimeLength;
	this->setWindowTitle("Current state: running " + QString::number(++minuteCounter) + " / " + QString::number(currentTimeLength));
	if (minuteCounter >= currentTimeLength) {
		minuteCounter = 0;
		remind();
		working = !working;
	}
}

void MainWidget::remind()
{
	if (working) {
		trayIcon->showMessage("Start taking a break.", "Please pay attention to rest eyes.");
	}
	else {
		trayIcon->showMessage("Start working.", "Let's get started.");
	}
}

void MainWidget::on_controlBtn_clicked()
{
	ongoing = !ongoing;
	if (ongoing) {
		ui.controlBtn->setText("Pause");
		this->setWindowTitle("Current state: running");
	}
	else
	{
		ui.controlBtn->setText("Start");
		this->setWindowTitle("Current state: paused");
	}
}

void MainWidget::on_stopBtn_clicked()
{
	ongoing = false;
	ui.controlBtn->setText("Start");
	this->setWindowTitle("Current state: stopped");
	working = true;
	minuteCounter = 0;
}


void MainWidget::timerEvent(QTimerEvent* event)
{
	if (ongoing)
	{
		if (event->timerId() == minuteTimer)
		{
			timeLapse();
		}
	}
}

void MainWidget::closeEvent(QCloseEvent* event)
{
	hide();
	event->ignore();
}

void MainWidget::createActions()
{
	controlAction = new QAction(tr("&Control"), this);
	connect(controlAction, &QAction::triggered, this, &MainWidget::on_controlBtn_clicked);

	stopAction = new QAction(tr("&Stop"), this);
	connect(stopAction, &QAction::triggered, this, &MainWidget::on_stopBtn_clicked);

	restoreAction = new QAction(tr("&Restore"), this);
	connect(restoreAction, &QAction::triggered, this, &QWidget::showNormal);

	quitAction = new QAction(tr("&Quit"), this);
	connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);
}

void MainWidget::createTrayIcon()
{
	trayIconMenu = new QMenu(this);
	trayIconMenu->addAction(controlAction);
	trayIconMenu->addAction(stopAction);
	trayIconMenu->addAction(restoreAction);
	trayIconMenu->addSeparator();
	trayIconMenu->addAction(quitAction);

	trayIcon = new QSystemTrayIcon(this);
	connect(trayIcon, &QSystemTrayIcon::activated, this, &QWidget::showNormal);
	trayIcon->setToolTip("Rest reminder");
	trayIcon->setContextMenu(trayIconMenu);
	trayIcon->setIcon(QIcon(":/image/rest-reminder.ico"));
	trayIcon->setVisible(true);
	trayIcon->show();
}
#include "stdafx.h"
#include "MainWidget.h"
#include <QFile>
#include <QMessageBox>


MainWidget::MainWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ongoing = false;
	working = true;
	count = 0;
	minuteTimer = startTimer(1000);
}



void MainWidget::startWork()
{
}

void MainWidget::startRest()
{
}

void MainWidget::endWork()
{
}

void MainWidget::endRest()
{
}

void MainWidget::timeLapse()
{
	int workingTimeLength = ui.woringTimeSpinBox->value();
	int restingTimeLength = ui.restingTimeSpinBox->value();
	int currentTimeLength = working ? workingTimeLength : restingTimeLength;
	int usedTime = count;
	int remainTime = currentTimeLength - count;
	ui.usedTimeLable->setText(QString::number(usedTime) + " min");
	ui.remainingTimeLabel->setText(QString::number(remainTime) + " min");
	if (count >= currentTimeLength) {
		count = 0;
		remind();
		working = !working;
		return;
	}
	count++;
}

void MainWidget::remind()
{
	if (ui.soundCheckBox->isChecked())
	{
		soundReminder();
	}
	if (ui.popupsCheckBox->isChecked())
	{
		popupsReminder();
	}
}

void MainWidget::soundReminder()
{
	QApplication::beep();
}

void MainWidget::popupsReminder()
{
	QString work = "It's time to work.";
	QString rest = "It's time to rest, for good health, especially for the eyes. ";
	QMessageBox::information(this, "Reminder", working ? work : rest, QMessageBox::Ok);
}

void MainWidget::on_controlBtn_clicked()
{
	ongoing = !ongoing;
	if (ongoing) {
		ui.controlBtn->setText("Pause");
	}
	else
	{
		ui.controlBtn->setText("Start");
	}
}

void MainWidget::on_stopBtn_clicked()
{
	ongoing = false;
	ui.controlBtn->setText("Start");
	working = true;
	count = 0;
}

void MainWidget::on_chooseBtn_clicked()
{

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
	event->accept();
}

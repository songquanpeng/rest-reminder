#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QSystemTrayIcon>
#include "ui_MainWidget.h"

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = Q_NULLPTR);
    virtual void timerEvent(QTimerEvent* event);
    virtual void closeEvent(QCloseEvent* event);
    void timeLapse();

public slots:
    void on_controlBtn_clicked();
    void on_stopBtn_clicked();
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void remind();

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
#endif // MAINWIDGET_H

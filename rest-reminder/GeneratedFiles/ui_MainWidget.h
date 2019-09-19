/********************************************************************************
** Form generated from reading UI file 'MainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *woringTimeSpinBox;
    QPushButton *controlBtn;
    QLabel *label_2;
    QSpinBox *restingTimeSpinBox;
    QPushButton *stopBtn;

    void setupUi(QWidget *MainWidgetClass)
    {
        if (MainWidgetClass->objectName().isEmpty())
            MainWidgetClass->setObjectName(QStringLiteral("MainWidgetClass"));
        MainWidgetClass->resize(500, 120);
        MainWidgetClass->setMinimumSize(QSize(500, 120));
        MainWidgetClass->setMaximumSize(QSize(500, 120));
        MainWidgetClass->setStyleSheet(QLatin1String("font: 14pt \"Segoe UI\";\n"
"background-color: rgb(51, 51, 51);\n"
"color: rgb(255, 255, 255);\n"
""));
        gridLayout = new QGridLayout(MainWidgetClass);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(MainWidgetClass);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        woringTimeSpinBox = new QSpinBox(MainWidgetClass);
        woringTimeSpinBox->setObjectName(QStringLiteral("woringTimeSpinBox"));
        woringTimeSpinBox->setStyleSheet(QStringLiteral(""));
        woringTimeSpinBox->setMinimum(1);
        woringTimeSpinBox->setMaximum(999);
        woringTimeSpinBox->setValue(40);

        gridLayout->addWidget(woringTimeSpinBox, 0, 1, 1, 1);

        controlBtn = new QPushButton(MainWidgetClass);
        controlBtn->setObjectName(QStringLiteral("controlBtn"));

        gridLayout->addWidget(controlBtn, 0, 2, 1, 1);

        label_2 = new QLabel(MainWidgetClass);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        restingTimeSpinBox = new QSpinBox(MainWidgetClass);
        restingTimeSpinBox->setObjectName(QStringLiteral("restingTimeSpinBox"));
        restingTimeSpinBox->setMinimum(0);
        restingTimeSpinBox->setMaximum(999);
        restingTimeSpinBox->setValue(5);

        gridLayout->addWidget(restingTimeSpinBox, 1, 1, 1, 1);

        stopBtn = new QPushButton(MainWidgetClass);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        gridLayout->addWidget(stopBtn, 1, 2, 1, 1);


        retranslateUi(MainWidgetClass);

        QMetaObject::connectSlotsByName(MainWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *MainWidgetClass)
    {
        MainWidgetClass->setWindowTitle(QApplication::translate("MainWidgetClass", "Rest Reminder", nullptr));
        label->setText(QApplication::translate("MainWidgetClass", "Working time length:", nullptr));
        controlBtn->setText(QApplication::translate("MainWidgetClass", "Start", nullptr));
        label_2->setText(QApplication::translate("MainWidgetClass", "Resting time length:", nullptr));
        stopBtn->setText(QApplication::translate("MainWidgetClass", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidgetClass: public Ui_MainWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H

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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *woringTimeSpinBox;
    QLabel *label_2;
    QSpinBox *restingTimeSpinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *soundCheckBox;
    QCheckBox *popupsCheckBox;
    QProgressBar *mainProgressBar;
    QProgressBar *secondProgressBar;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *usedTimeLable;
    QSpacerItem *horizontalSpacer_4;
    QLabel *remainingTimeLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *soundFileLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *controlBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *chooseBtn;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *MainWidgetClass)
    {
        if (MainWidgetClass->objectName().isEmpty())
            MainWidgetClass->setObjectName(QStringLiteral("MainWidgetClass"));
        MainWidgetClass->resize(615, 400);
        MainWidgetClass->setStyleSheet(QStringLiteral("font: 14pt \"Consolas\";"));
        verticalLayout = new QVBoxLayout(MainWidgetClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(MainWidgetClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        woringTimeSpinBox = new QSpinBox(groupBox_2);
        woringTimeSpinBox->setObjectName(QStringLiteral("woringTimeSpinBox"));
        woringTimeSpinBox->setMinimum(1);
        woringTimeSpinBox->setMaximum(999);
        woringTimeSpinBox->setValue(40);

        gridLayout_2->addWidget(woringTimeSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        restingTimeSpinBox = new QSpinBox(groupBox_2);
        restingTimeSpinBox->setObjectName(QStringLiteral("restingTimeSpinBox"));
        restingTimeSpinBox->setMinimum(0);
        restingTimeSpinBox->setMaximum(999);
        restingTimeSpinBox->setValue(10);

        gridLayout_2->addWidget(restingTimeSpinBox, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(MainWidgetClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(221, 0));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        soundCheckBox = new QCheckBox(groupBox);
        soundCheckBox->setObjectName(QStringLiteral("soundCheckBox"));

        gridLayout_3->addWidget(soundCheckBox, 0, 0, 1, 1);

        popupsCheckBox = new QCheckBox(groupBox);
        popupsCheckBox->setObjectName(QStringLiteral("popupsCheckBox"));

        gridLayout_3->addWidget(popupsCheckBox, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout);

        mainProgressBar = new QProgressBar(MainWidgetClass);
        mainProgressBar->setObjectName(QStringLiteral("mainProgressBar"));
        mainProgressBar->setValue(0);

        verticalLayout->addWidget(mainProgressBar);

        secondProgressBar = new QProgressBar(MainWidgetClass);
        secondProgressBar->setObjectName(QStringLiteral("secondProgressBar"));
        secondProgressBar->setMaximum(60);
        secondProgressBar->setValue(0);

        verticalLayout->addWidget(secondProgressBar);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(MainWidgetClass);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        usedTimeLable = new QLabel(MainWidgetClass);
        usedTimeLable->setObjectName(QStringLiteral("usedTimeLable"));

        gridLayout->addWidget(usedTimeLable, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        remainingTimeLabel = new QLabel(MainWidgetClass);
        remainingTimeLabel->setObjectName(QStringLiteral("remainingTimeLabel"));

        gridLayout->addWidget(remainingTimeLabel, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 2);

        soundFileLabel = new QLabel(MainWidgetClass);
        soundFileLabel->setObjectName(QStringLiteral("soundFileLabel"));

        gridLayout->addWidget(soundFileLabel, 1, 5, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 6, 1, 1);

        controlBtn = new QPushButton(MainWidgetClass);
        controlBtn->setObjectName(QStringLiteral("controlBtn"));

        gridLayout->addWidget(controlBtn, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        stopBtn = new QPushButton(MainWidgetClass);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        gridLayout->addWidget(stopBtn, 3, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 2);

        chooseBtn = new QPushButton(MainWidgetClass);
        chooseBtn->setObjectName(QStringLiteral("chooseBtn"));

        gridLayout->addWidget(chooseBtn, 3, 6, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        QWidget::setTabOrder(woringTimeSpinBox, restingTimeSpinBox);
        QWidget::setTabOrder(restingTimeSpinBox, controlBtn);
        QWidget::setTabOrder(controlBtn, stopBtn);
        QWidget::setTabOrder(stopBtn, chooseBtn);
        QWidget::setTabOrder(chooseBtn, soundCheckBox);
        QWidget::setTabOrder(soundCheckBox, popupsCheckBox);

        retranslateUi(MainWidgetClass);

        QMetaObject::connectSlotsByName(MainWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *MainWidgetClass)
    {
        MainWidgetClass->setWindowTitle(QApplication::translate("MainWidgetClass", "Rest Reminder", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWidgetClass", "Length Setting", nullptr));
        label->setText(QApplication::translate("MainWidgetClass", "Working time length:", nullptr));
        label_2->setText(QApplication::translate("MainWidgetClass", "Resting time length:", nullptr));
        groupBox->setTitle(QApplication::translate("MainWidgetClass", "Reminder Method", nullptr));
        soundCheckBox->setText(QApplication::translate("MainWidgetClass", "Sound", nullptr));
        popupsCheckBox->setText(QApplication::translate("MainWidgetClass", "Pop-ups", nullptr));
        label_4->setText(QString());
        usedTimeLable->setText(QApplication::translate("MainWidgetClass", "0 min", nullptr));
        remainingTimeLabel->setText(QApplication::translate("MainWidgetClass", "*min", nullptr));
        soundFileLabel->setText(QApplication::translate("MainWidgetClass", "No file choosen", nullptr));
        controlBtn->setText(QApplication::translate("MainWidgetClass", "Start", nullptr));
        stopBtn->setText(QApplication::translate("MainWidgetClass", "Stop", nullptr));
        chooseBtn->setText(QApplication::translate("MainWidgetClass", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidgetClass: public Ui_MainWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *labelInfo;
    QPushButton *pushButton;
    QPushButton *pushButtonPlot;
    QPushButton *pushButton_2;
    QCustomPlot *myPlot;
    QCustomPlot *myPlot_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(805, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        gridLayout->addWidget(labelInfo, 0, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButtonPlot = new QPushButton(centralwidget);
        pushButtonPlot->setObjectName(QString::fromUtf8("pushButtonPlot"));

        gridLayout->addWidget(pushButtonPlot, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        myPlot = new QCustomPlot(centralwidget);
        myPlot->setObjectName(QString::fromUtf8("myPlot"));

        gridLayout->addWidget(myPlot, 1, 0, 1, 4);

        myPlot_2 = new QCustomPlot(centralwidget);
        myPlot_2->setObjectName(QString::fromUtf8("myPlot_2"));

        gridLayout->addWidget(myPlot_2, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 805, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GSCMonitor", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        pushButtonPlot->setText(QCoreApplication::translate("MainWindow", "plot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "testPlot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

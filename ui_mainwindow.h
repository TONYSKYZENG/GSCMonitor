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
#include <QtWidgets/QLineEdit>
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
    QLabel *label;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QPushButton *pushButton;
    QPushButton *pushButtonPlot;
    QPushButton *pushButton_2;
    QLabel *labelInfo;
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(centralwidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEditPort = new QLineEdit(centralwidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 0, 3, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);

        pushButtonPlot = new QPushButton(centralwidget);
        pushButtonPlot->setObjectName(QString::fromUtf8("pushButtonPlot"));

        gridLayout->addWidget(pushButtonPlot, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 6, 1, 1);

        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        gridLayout->addWidget(labelInfo, 1, 0, 1, 4);

        myPlot = new QCustomPlot(centralwidget);
        myPlot->setObjectName(QString::fromUtf8("myPlot"));

        gridLayout->addWidget(myPlot, 2, 1, 1, 6);

        myPlot_2 = new QCustomPlot(centralwidget);
        myPlot_2->setObjectName(QString::fromUtf8("myPlot_2"));

        gridLayout->addWidget(myPlot_2, 3, 1, 1, 6);

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
        label->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "172.18.21.200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        lineEditPort->setText(QCoreApplication::translate("MainWindow", "9005", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "query", nullptr));
        pushButtonPlot->setText(QCoreApplication::translate("MainWindow", "plot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "testPlot", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

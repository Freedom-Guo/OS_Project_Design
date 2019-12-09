/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_curtime;
    QVBoxLayout *mainlayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_osver;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_cpuhz;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_ostype;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_cputype;
    QLabel *label_osstart;
    QLabel *label_17;
    QLabel *label_oswork;
    QLabel *label_cpuname;
    QLabel *label_hostname;
    QCustomPlot *customPlot;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_31;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_freemem;
    QLabel *label_totalmem;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *label_usedmem;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_totalswap;
    QLabel *label_7;
    QLabel *label_freeswap;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_usedswap;
    QCustomPlot *customplot_mem;
    QCustomPlot *customplot_swap;
    QLabel *label_19;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QLabel *label_totalpro;
    QLabel *label_18;
    QLabel *label_22;
    QLabel *label_sleepro;
    QLabel *label_zombie;
    QLabel *label_16;
    QLabel *label_runpro;
    QLabel *label_20;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLineEdit *pro_text;
    QLabel *label_23;
    QProgressBar *progressBar_2;
    QLabel *label_21;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(632, 616);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_curtime = new QLabel(centralWidget);
        label_curtime->setObjectName(QStringLiteral("label_curtime"));

        verticalLayout->addWidget(label_curtime);

        mainlayout = new QVBoxLayout();
        mainlayout->setSpacing(6);
        mainlayout->setObjectName(QStringLiteral("mainlayout"));
        mainlayout->setContentsMargins(0, -1, -1, -1);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(-1, 5, 601, 241));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_osver = new QLabel(gridLayoutWidget_2);
        label_osver->setObjectName(QStringLiteral("label_osver"));

        gridLayout_2->addWidget(label_osver, 7, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_cpuhz = new QLabel(gridLayoutWidget_2);
        label_cpuhz->setObjectName(QStringLiteral("label_cpuhz"));

        gridLayout_2->addWidget(label_cpuhz, 4, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_ostype = new QLabel(gridLayoutWidget_2);
        label_ostype->setObjectName(QStringLiteral("label_ostype"));

        gridLayout_2->addWidget(label_ostype, 6, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 5, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 8, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 7, 0, 1, 1);

        label_cputype = new QLabel(gridLayoutWidget_2);
        label_cputype->setObjectName(QStringLiteral("label_cputype"));

        gridLayout_2->addWidget(label_cputype, 3, 1, 1, 1);

        label_osstart = new QLabel(gridLayoutWidget_2);
        label_osstart->setObjectName(QStringLiteral("label_osstart"));

        gridLayout_2->addWidget(label_osstart, 8, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 9, 0, 1, 1);

        label_oswork = new QLabel(gridLayoutWidget_2);
        label_oswork->setObjectName(QStringLiteral("label_oswork"));

        gridLayout_2->addWidget(label_oswork, 9, 1, 1, 1);

        label_cpuname = new QLabel(gridLayoutWidget_2);
        label_cpuname->setObjectName(QStringLiteral("label_cpuname"));

        gridLayout_2->addWidget(label_cpuname, 2, 1, 1, 1);

        label_hostname = new QLabel(gridLayoutWidget_2);
        label_hostname->setObjectName(QStringLiteral("label_hostname"));

        gridLayout_2->addWidget(label_hostname, 0, 1, 2, 1);

        customPlot = new QCustomPlot(tab);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(30, 250, 531, 111));
        label_32 = new QLabel(customPlot);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(240, 0, 67, 17));
        label_33 = new QLabel(customPlot);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(40, 90, 67, 17));
        label_34 = new QLabel(customPlot);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(500, 90, 67, 17));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(30, 240, 67, 17));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 231, 71));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_freemem = new QLabel(gridLayoutWidget_3);
        label_freemem->setObjectName(QStringLiteral("label_freemem"));

        gridLayout_3->addWidget(label_freemem, 1, 1, 1, 1);

        label_totalmem = new QLabel(gridLayoutWidget_3);
        label_totalmem->setObjectName(QStringLiteral("label_totalmem"));

        gridLayout_3->addWidget(label_totalmem, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        label_usedmem = new QLabel(gridLayoutWidget_3);
        label_usedmem->setObjectName(QStringLiteral("label_usedmem"));

        gridLayout_3->addWidget(label_usedmem, 2, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(tab_2);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(359, 0, 241, 71));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_totalswap = new QLabel(gridLayoutWidget_4);
        label_totalswap->setObjectName(QStringLiteral("label_totalswap"));

        gridLayout_4->addWidget(label_totalswap, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        label_freeswap = new QLabel(gridLayoutWidget_4);
        label_freeswap->setObjectName(QStringLiteral("label_freeswap"));

        gridLayout_4->addWidget(label_freeswap, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 2, 0, 1, 1);

        label_usedswap = new QLabel(gridLayoutWidget_4);
        label_usedswap->setObjectName(QStringLiteral("label_usedswap"));

        gridLayout_4->addWidget(label_usedswap, 2, 1, 1, 1);

        customplot_mem = new QCustomPlot(tab_2);
        customplot_mem->setObjectName(QStringLiteral("customplot_mem"));
        customplot_mem->setGeometry(QRect(30, 90, 531, 101));
        customplot_swap = new QCustomPlot(tab_2);
        customplot_swap->setObjectName(QStringLiteral("customplot_swap"));
        customplot_swap->setGeometry(QRect(30, 230, 531, 101));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 190, 67, 17));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(30, 330, 67, 17));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(540, 330, 67, 17));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(540, 190, 67, 17));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(260, 70, 67, 17));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(270, 210, 67, 17));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 210, 67, 17));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 70, 67, 17));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 591, 341));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_totalpro = new QLabel(layoutWidget);
        label_totalpro->setObjectName(QStringLiteral("label_totalpro"));

        gridLayout->addWidget(label_totalpro, 0, 1, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout->addWidget(label_22, 1, 2, 1, 1);

        label_sleepro = new QLabel(layoutWidget);
        label_sleepro->setObjectName(QStringLiteral("label_sleepro"));

        gridLayout->addWidget(label_sleepro, 0, 3, 1, 1);

        label_zombie = new QLabel(layoutWidget);
        label_zombie->setObjectName(QStringLiteral("label_zombie"));

        gridLayout->addWidget(label_zombie, 1, 3, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        label_runpro = new QLabel(layoutWidget);
        label_runpro->setObjectName(QStringLiteral("label_runpro"));

        gridLayout->addWidget(label_runpro, 1, 1, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout->addWidget(label_20, 0, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_5->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_5->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_5, 2, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(430, 350, 134, 25));
        pro_text = new QLineEdit(tab_3);
        pro_text->setObjectName(QStringLiteral("pro_text"));
        pro_text->setGeometry(QRect(0, 350, 411, 25));
        tabWidget->addTab(tab_3, QString());

        mainlayout->addWidget(tabWidget);


        verticalLayout->addLayout(mainlayout);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout->addWidget(label_23);

        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(0);

        verticalLayout->addWidget(progressBar_2);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout->addWidget(label_21);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 632, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_curtime->setText(QString());
        label_osver->setText(QApplication::translate("MainWindow", "4.14.26", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "CPU' name:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "CPU' type:", Q_NULLPTR));
        label_cpuhz->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "CPU' HZ:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Hostname:", Q_NULLPTR));
        label_ostype->setText(QApplication::translate("MainWindow", "Linux", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "OS", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "open time:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Version:", Q_NULLPTR));
        label_cputype->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_osstart->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "work time:", Q_NULLPTR));
        label_oswork->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_cpuname->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_hostname->setText(QApplication::translate("MainWindow", "unknow", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "120s", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "System", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Free Mem:", Q_NULLPTR));
        label_freemem->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_totalmem->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Total Mem:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Used Mem:", Q_NULLPTR));
        label_usedmem->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_totalswap->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Total Swap:", Q_NULLPTR));
        label_freeswap->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Free Swap:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Used Swap:", Q_NULLPTR));
        label_usedswap->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "120s", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "120s", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Memory", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Swap", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Memory", Q_NULLPTR));
        label_totalpro->setText(QApplication::translate("MainWindow", "textlabel", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "run_pro:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "zombie_pro:", Q_NULLPTR));
        label_sleepro->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_zombie->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "num_pro:", Q_NULLPTR));
        label_runpro->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "sleep_pro:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "shut down", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "reboot", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Kill process", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Find process", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Creat new", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Search process", Q_NULLPTR));
        pro_text->setPlaceholderText(QApplication::translate("MainWindow", "input part of pid or name", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Process", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Memory used:", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "CPU used:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

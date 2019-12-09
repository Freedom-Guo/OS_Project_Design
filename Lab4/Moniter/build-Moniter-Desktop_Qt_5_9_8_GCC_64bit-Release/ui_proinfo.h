/********************************************************************************
** Form generated from reading UI file 'proinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROINFO_H
#define UI_PROINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProInfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_pstate;
    QLabel *label_pid;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_ppri;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_pname;
    QLabel *label_9;
    QLabel *label_pmem;
    QPushButton *pushButton;

    void setupUi(QDialog *ProInfo)
    {
        if (ProInfo->objectName().isEmpty())
            ProInfo->setObjectName(QStringLiteral("ProInfo"));
        ProInfo->resize(400, 300);
        gridLayoutWidget = new QWidget(ProInfo);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 371, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_pstate = new QLabel(gridLayoutWidget);
        label_pstate->setObjectName(QStringLiteral("label_pstate"));

        gridLayout->addWidget(label_pstate, 2, 1, 1, 1);

        label_pid = new QLabel(gridLayoutWidget);
        label_pid->setObjectName(QStringLiteral("label_pid"));

        gridLayout->addWidget(label_pid, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_ppri = new QLabel(gridLayoutWidget);
        label_ppri->setObjectName(QStringLiteral("label_ppri"));

        gridLayout->addWidget(label_ppri, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_pname = new QLabel(gridLayoutWidget);
        label_pname->setObjectName(QStringLiteral("label_pname"));

        gridLayout->addWidget(label_pname, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_pmem = new QLabel(gridLayoutWidget);
        label_pmem->setObjectName(QStringLiteral("label_pmem"));

        gridLayout->addWidget(label_pmem, 4, 1, 1, 1);

        pushButton = new QPushButton(ProInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 89, 25));

        retranslateUi(ProInfo);

        QMetaObject::connectSlotsByName(ProInfo);
    } // setupUi

    void retranslateUi(QDialog *ProInfo)
    {
        ProInfo->setWindowTitle(QApplication::translate("ProInfo", "Dialog", Q_NULLPTR));
        label_pstate->setText(QApplication::translate("ProInfo", "TextLabel", Q_NULLPTR));
        label_pid->setText(QApplication::translate("ProInfo", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("ProInfo", "PID:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ProInfo", "Pro priority", Q_NULLPTR));
        label_ppri->setText(QApplication::translate("ProInfo", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("ProInfo", "Pro state", Q_NULLPTR));
        label_3->setText(QApplication::translate("ProInfo", "Pro name", Q_NULLPTR));
        label_pname->setText(QApplication::translate("ProInfo", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("ProInfo", "Pro memory", Q_NULLPTR));
        label_pmem->setText(QApplication::translate("ProInfo", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ProInfo", "KILL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProInfo: public Ui_ProInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROINFO_H

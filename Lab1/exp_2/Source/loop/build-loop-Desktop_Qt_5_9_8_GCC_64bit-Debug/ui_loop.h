/********************************************************************************
** Form generated from reading UI file 'loop.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOP_H
#define UI_LOOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loop
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Loop)
    {
        if (Loop->objectName().isEmpty())
            Loop->setObjectName(QStringLiteral("Loop"));
        Loop->resize(400, 300);
        label = new QLabel(Loop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 67, 17));
        label_2 = new QLabel(Loop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 40, 67, 17));
        label_3 = new QLabel(Loop);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 100, 67, 91));

        retranslateUi(Loop);

        QMetaObject::connectSlotsByName(Loop);
    } // setupUi

    void retranslateUi(QWidget *Loop)
    {
        Loop->setWindowTitle(QApplication::translate("Loop", "Loop", Q_NULLPTR));
        label->setText(QApplication::translate("Loop", "PID:", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Loop: public Ui_Loop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOP_H

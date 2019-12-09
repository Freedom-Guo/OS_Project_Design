/********************************************************************************
** Form generated from reading UI file 'findpro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPRO_H
#define UI_FINDPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Findpro
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Findpro)
    {
        if (Findpro->objectName().isEmpty())
            Findpro->setObjectName(QStringLiteral("Findpro"));
        Findpro->resize(373, 217);
        lineEdit = new QLineEdit(Findpro);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 80, 281, 31));
        pushButton = new QPushButton(Findpro);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 130, 89, 25));

        retranslateUi(Findpro);

        QMetaObject::connectSlotsByName(Findpro);
    } // setupUi

    void retranslateUi(QDialog *Findpro)
    {
        Findpro->setWindowTitle(QApplication::translate("Findpro", "Dialog", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Findpro", "input the pid or pro's name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Findpro", "SEEK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Findpro: public Ui_Findpro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPRO_H

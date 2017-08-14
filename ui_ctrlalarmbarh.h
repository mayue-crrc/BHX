/********************************************************************************
** Form generated from reading UI file 'ctrlalarmbarh.ui'
**
** Created: Mon Aug 14 11:18:47 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLALARMBARH_H
#define UI_CTRLALARMBARH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlAlarmBarH
{
public:
    QLabel *Showlbl;
    QPushButton *confirmbtn;

    void setupUi(QWidget *CtrlAlarmBarH)
    {
        if (CtrlAlarmBarH->objectName().isEmpty())
            CtrlAlarmBarH->setObjectName(QString::fromUtf8("CtrlAlarmBarH"));
        CtrlAlarmBarH->resize(500, 30);
        CtrlAlarmBarH->setStyleSheet(QString::fromUtf8(""));
        Showlbl = new QLabel(CtrlAlarmBarH);
        Showlbl->setObjectName(QString::fromUtf8("Showlbl"));
        Showlbl->setGeometry(QRect(0, 0, 501, 30));
        Showlbl->setStyleSheet(QString::fromUtf8("	background-color:yellow;\n"
"	border: 2px solid black ;\n"
"	border-radius:10px;\n"
"	font: 15px;"));
        confirmbtn = new QPushButton(CtrlAlarmBarH);
        confirmbtn->setObjectName(QString::fromUtf8("confirmbtn"));
        confirmbtn->setGeometry(QRect(437, 3, 61, 25));
        confirmbtn->setFocusPolicy(Qt::NoFocus);
        confirmbtn->setStyleSheet(QString::fromUtf8("font: 75 16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: red;\n"
"border:2px solid white;\n"
"border-radius:8px;"));

        retranslateUi(CtrlAlarmBarH);

        QMetaObject::connectSlotsByName(CtrlAlarmBarH);
    } // setupUi

    void retranslateUi(QWidget *CtrlAlarmBarH)
    {
        CtrlAlarmBarH->setWindowTitle(QApplication::translate("CtrlAlarmBarH", "Form", 0, QApplication::UnicodeUTF8));
        Showlbl->setText(QString());
        confirmbtn->setText(QApplication::translate("CtrlAlarmBarH", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlAlarmBarH: public Ui_CtrlAlarmBarH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLALARMBARH_H

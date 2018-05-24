/********************************************************************************
** Form generated from reading UI file 'ctrlcountdown.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLCOUNTDOWN_H
#define UI_CTRLCOUNTDOWN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlCountdown
{
public:
    QLabel *CtrlCountdown_background;
    QLabel *CtrlCountdown_cirlce;
    QLabel *CtrlCountdown_background_2;
    QLabel *CtrlCountdown_background_3;

    void setupUi(QWidget *CtrlCountdown)
    {
        if (CtrlCountdown->objectName().isEmpty())
            CtrlCountdown->setObjectName(QString::fromUtf8("CtrlCountdown"));
        CtrlCountdown->resize(110, 140);
        CtrlCountdown_background = new QLabel(CtrlCountdown);
        CtrlCountdown_background->setObjectName(QString::fromUtf8("CtrlCountdown_background"));
        CtrlCountdown_background->setGeometry(QRect(0, 40, 111, 101));
        CtrlCountdown_background->setStyleSheet(QString::fromUtf8("background-color: rgb(210,210,210);"));
        CtrlCountdown_cirlce = new QLabel(CtrlCountdown);
        CtrlCountdown_cirlce->setObjectName(QString::fromUtf8("CtrlCountdown_cirlce"));
        CtrlCountdown_cirlce->setGeometry(QRect(14, 50, 80, 80));
        CtrlCountdown_cirlce->setStyleSheet(QString::fromUtf8("border-radius:40px;\n"
"border:9px solid white;\n"
"font: 75 bold 40px ;\n"
"background-color: rgb(210, 210, 210);\n"
"color:rgb(0, 170, 0);"));
        CtrlCountdown_cirlce->setAlignment(Qt::AlignCenter);
        CtrlCountdown_background_2 = new QLabel(CtrlCountdown);
        CtrlCountdown_background_2->setObjectName(QString::fromUtf8("CtrlCountdown_background_2"));
        CtrlCountdown_background_2->setGeometry(QRect(0, 0, 111, 41));
        CtrlCountdown_background_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: gray;\n"
"font: 20px bold;"));
        CtrlCountdown_background_2->setAlignment(Qt::AlignCenter);
        CtrlCountdown_background_3 = new QLabel(CtrlCountdown);
        CtrlCountdown_background_3->setObjectName(QString::fromUtf8("CtrlCountdown_background_3"));
        CtrlCountdown_background_3->setGeometry(QRect(85, 115, 20, 20));
        CtrlCountdown_background_3->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"color: green;\n"
"background-color: rgb(210,210,210);\n"
"font: 16px;"));
        CtrlCountdown_background_3->setAlignment(Qt::AlignCenter);

        retranslateUi(CtrlCountdown);

        QMetaObject::connectSlotsByName(CtrlCountdown);
    } // setupUi

    void retranslateUi(QWidget *CtrlCountdown)
    {
        CtrlCountdown->setWindowTitle(QApplication::translate("CtrlCountdown", "Form", 0, QApplication::UnicodeUTF8));
        CtrlCountdown_background->setText(QString());
        CtrlCountdown_cirlce->setText(QApplication::translate("CtrlCountdown", "1", 0, QApplication::UnicodeUTF8));
        CtrlCountdown_background_2->setText(QApplication::translate("CtrlCountdown", "\350\255\246\346\203\225\345\200\222\350\256\241\346\227\266", 0, QApplication::UnicodeUTF8));
        CtrlCountdown_background_3->setText(QApplication::translate("CtrlCountdown", "\347\247\222", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlCountdown: public Ui_CtrlCountdown {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLCOUNTDOWN_H

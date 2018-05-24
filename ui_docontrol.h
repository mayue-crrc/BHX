/********************************************************************************
** Form generated from reading UI file 'docontrol.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCONTROL_H
#define UI_DOCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoControl
{
public:
    QLabel *lblDo12State;
    QLabel *lblDo3State;
    QLabel *lblDo9Name;
    QLabel *lblTitle;
    QLabel *lblDo12Name;
    QLabel *lblDo2State;
    QLabel *lblDo2Name;
    QLabel *lblDo14Name;
    QLabel *lblDo13State;
    QLabel *lblDo8Name;
    QLabel *lblDo4Name;
    QLabel *lblDo9State;
    QLabel *lblDo4State;
    QLabel *lblDo5State;
    QLabel *lblDo10State;
    QLabel *lblDo6State;
    QLabel *lblDo11Name;
    QLabel *lblDo16State;
    QLabel *lblDo7Name;
    QLabel *lblDo11State;
    QLabel *lblDo13Name;
    QLabel *lblDo10Name;
    QLabel *lblDo8State;
    QLabel *lblDo15Name;
    QLabel *lblDo5Name;
    QLabel *lblDo14State;
    QLabel *lblDo15State;
    QLabel *lblDo3Name;
    QLabel *lblDo1State;
    QLabel *lblDo1Name;
    QLabel *lblDo6Name;
    QLabel *lblDo7State;
    QLabel *lblDo16Name;

    void setupUi(QWidget *DoControl)
    {
        if (DoControl->objectName().isEmpty())
            DoControl->setObjectName(QString::fromUtf8("DoControl"));
        DoControl->resize(720, 145);
        DoControl->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font: 18px;\n"
"    color: black;\n"
"	background-color: rgb(113, 113, 198);\n"
"	border:1px solid white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font: 12px;\n"
"	color: black;\n"
"	border:2px solid gray;\n"
"	background-color: qlineargradient(x1: 0, y1 :0, x2: 1, y2: 1,\n"
"				stop:0 white, stop: 0.618 rgb(213, 213, 238), stop: 1 white);\n"
"}"));
        lblDo12State = new QLabel(DoControl);
        lblDo12State->setObjectName(QString::fromUtf8("lblDo12State"));
        lblDo12State->setGeometry(QRect(690, 80, 24, 24));
        lblDo12State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo3State = new QLabel(DoControl);
        lblDo3State->setObjectName(QString::fromUtf8("lblDo3State"));
        lblDo3State->setGeometry(QRect(520, 7, 24, 24));
        lblDo3State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo9Name = new QLabel(DoControl);
        lblDo9Name->setObjectName(QString::fromUtf8("lblDo9Name"));
        lblDo9Name->setGeometry(QRect(40, 72, 171, 38));
        lblTitle = new QLabel(DoControl);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(0, 0, 41, 146));
        lblTitle->setAlignment(Qt::AlignCenter);
        lblDo12Name = new QLabel(DoControl);
        lblDo12Name->setObjectName(QString::fromUtf8("lblDo12Name"));
        lblDo12Name->setGeometry(QRect(550, 72, 171, 38));
        lblDo2State = new QLabel(DoControl);
        lblDo2State->setObjectName(QString::fromUtf8("lblDo2State"));
        lblDo2State->setGeometry(QRect(350, 5, 24, 24));
        lblDo2State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo2Name = new QLabel(DoControl);
        lblDo2Name->setObjectName(QString::fromUtf8("lblDo2Name"));
        lblDo2Name->setGeometry(QRect(210, 0, 171, 38));
        lblDo14Name = new QLabel(DoControl);
        lblDo14Name->setObjectName(QString::fromUtf8("lblDo14Name"));
        lblDo14Name->setGeometry(QRect(210, 108, 171, 38));
        lblDo13State = new QLabel(DoControl);
        lblDo13State->setObjectName(QString::fromUtf8("lblDo13State"));
        lblDo13State->setGeometry(QRect(180, 118, 24, 24));
        lblDo13State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo8Name = new QLabel(DoControl);
        lblDo8Name->setObjectName(QString::fromUtf8("lblDo8Name"));
        lblDo8Name->setGeometry(QRect(550, 36, 171, 38));
        lblDo4Name = new QLabel(DoControl);
        lblDo4Name->setObjectName(QString::fromUtf8("lblDo4Name"));
        lblDo4Name->setGeometry(QRect(550, 0, 171, 38));
        lblDo9State = new QLabel(DoControl);
        lblDo9State->setObjectName(QString::fromUtf8("lblDo9State"));
        lblDo9State->setGeometry(QRect(180, 80, 24, 24));
        lblDo9State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo4State = new QLabel(DoControl);
        lblDo4State->setObjectName(QString::fromUtf8("lblDo4State"));
        lblDo4State->setGeometry(QRect(690, 7, 24, 24));
        lblDo4State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo5State = new QLabel(DoControl);
        lblDo5State->setObjectName(QString::fromUtf8("lblDo5State"));
        lblDo5State->setGeometry(QRect(180, 42, 24, 24));
        lblDo5State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo10State = new QLabel(DoControl);
        lblDo10State->setObjectName(QString::fromUtf8("lblDo10State"));
        lblDo10State->setGeometry(QRect(350, 80, 24, 24));
        lblDo10State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo6State = new QLabel(DoControl);
        lblDo6State->setObjectName(QString::fromUtf8("lblDo6State"));
        lblDo6State->setGeometry(QRect(350, 40, 24, 24));
        lblDo6State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo11Name = new QLabel(DoControl);
        lblDo11Name->setObjectName(QString::fromUtf8("lblDo11Name"));
        lblDo11Name->setGeometry(QRect(380, 72, 171, 38));
        lblDo16State = new QLabel(DoControl);
        lblDo16State->setObjectName(QString::fromUtf8("lblDo16State"));
        lblDo16State->setGeometry(QRect(690, 115, 24, 24));
        lblDo16State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo7Name = new QLabel(DoControl);
        lblDo7Name->setObjectName(QString::fromUtf8("lblDo7Name"));
        lblDo7Name->setGeometry(QRect(380, 36, 171, 38));
        lblDo11State = new QLabel(DoControl);
        lblDo11State->setObjectName(QString::fromUtf8("lblDo11State"));
        lblDo11State->setGeometry(QRect(520, 80, 24, 24));
        lblDo11State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo13Name = new QLabel(DoControl);
        lblDo13Name->setObjectName(QString::fromUtf8("lblDo13Name"));
        lblDo13Name->setGeometry(QRect(40, 108, 171, 38));
        lblDo10Name = new QLabel(DoControl);
        lblDo10Name->setObjectName(QString::fromUtf8("lblDo10Name"));
        lblDo10Name->setGeometry(QRect(210, 72, 171, 38));
        lblDo8State = new QLabel(DoControl);
        lblDo8State->setObjectName(QString::fromUtf8("lblDo8State"));
        lblDo8State->setGeometry(QRect(690, 43, 24, 24));
        lblDo8State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo15Name = new QLabel(DoControl);
        lblDo15Name->setObjectName(QString::fromUtf8("lblDo15Name"));
        lblDo15Name->setGeometry(QRect(380, 108, 171, 38));
        lblDo5Name = new QLabel(DoControl);
        lblDo5Name->setObjectName(QString::fromUtf8("lblDo5Name"));
        lblDo5Name->setGeometry(QRect(40, 36, 171, 38));
        lblDo14State = new QLabel(DoControl);
        lblDo14State->setObjectName(QString::fromUtf8("lblDo14State"));
        lblDo14State->setGeometry(QRect(350, 118, 24, 24));
        lblDo14State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo15State = new QLabel(DoControl);
        lblDo15State->setObjectName(QString::fromUtf8("lblDo15State"));
        lblDo15State->setGeometry(QRect(520, 115, 24, 24));
        lblDo15State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo3Name = new QLabel(DoControl);
        lblDo3Name->setObjectName(QString::fromUtf8("lblDo3Name"));
        lblDo3Name->setGeometry(QRect(380, 0, 171, 38));
        lblDo1State = new QLabel(DoControl);
        lblDo1State->setObjectName(QString::fromUtf8("lblDo1State"));
        lblDo1State->setGeometry(QRect(180, 5, 24, 24));
        lblDo1State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo1Name = new QLabel(DoControl);
        lblDo1Name->setObjectName(QString::fromUtf8("lblDo1Name"));
        lblDo1Name->setGeometry(QRect(40, 0, 171, 38));
        lblDo1Name->setStyleSheet(QString::fromUtf8(""));
        lblDo6Name = new QLabel(DoControl);
        lblDo6Name->setObjectName(QString::fromUtf8("lblDo6Name"));
        lblDo6Name->setGeometry(QRect(210, 36, 171, 38));
        lblDo7State = new QLabel(DoControl);
        lblDo7State->setObjectName(QString::fromUtf8("lblDo7State"));
        lblDo7State->setGeometry(QRect(520, 43, 24, 24));
        lblDo7State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblDo16Name = new QLabel(DoControl);
        lblDo16Name->setObjectName(QString::fromUtf8("lblDo16Name"));
        lblDo16Name->setGeometry(QRect(550, 108, 171, 38));
        lblDo9Name->raise();
        lblTitle->raise();
        lblDo12Name->raise();
        lblDo2Name->raise();
        lblDo14Name->raise();
        lblDo8Name->raise();
        lblDo4Name->raise();
        lblDo11Name->raise();
        lblDo7Name->raise();
        lblDo13Name->raise();
        lblDo10Name->raise();
        lblDo15Name->raise();
        lblDo5Name->raise();
        lblDo3Name->raise();
        lblDo1Name->raise();
        lblDo6Name->raise();
        lblDo16Name->raise();
        lblDo13State->raise();
        lblDo1State->raise();
        lblDo11State->raise();
        lblDo10State->raise();
        lblDo6State->raise();
        lblDo5State->raise();
        lblDo3State->raise();
        lblDo16State->raise();
        lblDo14State->raise();
        lblDo15State->raise();
        lblDo9State->raise();
        lblDo12State->raise();
        lblDo4State->raise();
        lblDo7State->raise();
        lblDo8State->raise();
        lblDo2State->raise();

        retranslateUi(DoControl);

        QMetaObject::connectSlotsByName(DoControl);
    } // setupUi

    void retranslateUi(QWidget *DoControl)
    {
        DoControl->setWindowTitle(QApplication::translate("DoControl", "Form", 0, QApplication::UnicodeUTF8));
        lblDo12State->setText(QString());
        lblDo3State->setText(QString());
        lblDo9Name->setText(QApplication::translate("DoControl", "DO9", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("DoControl", "DO", 0, QApplication::UnicodeUTF8));
        lblDo12Name->setText(QApplication::translate("DoControl", "DO12", 0, QApplication::UnicodeUTF8));
        lblDo2State->setText(QString());
        lblDo2Name->setText(QApplication::translate("DoControl", "DO2", 0, QApplication::UnicodeUTF8));
        lblDo14Name->setText(QApplication::translate("DoControl", "DO14", 0, QApplication::UnicodeUTF8));
        lblDo13State->setText(QString());
        lblDo8Name->setText(QApplication::translate("DoControl", "DO8", 0, QApplication::UnicodeUTF8));
        lblDo4Name->setText(QApplication::translate("DoControl", "DO4", 0, QApplication::UnicodeUTF8));
        lblDo9State->setText(QString());
        lblDo4State->setText(QString());
        lblDo5State->setText(QString());
        lblDo10State->setText(QString());
        lblDo6State->setText(QString());
        lblDo11Name->setText(QApplication::translate("DoControl", "DO11", 0, QApplication::UnicodeUTF8));
        lblDo16State->setText(QString());
        lblDo7Name->setText(QApplication::translate("DoControl", "DO7", 0, QApplication::UnicodeUTF8));
        lblDo11State->setText(QString());
        lblDo13Name->setText(QApplication::translate("DoControl", "DO13", 0, QApplication::UnicodeUTF8));
        lblDo10Name->setText(QApplication::translate("DoControl", "DO10", 0, QApplication::UnicodeUTF8));
        lblDo8State->setText(QString());
        lblDo15Name->setText(QApplication::translate("DoControl", "DO15", 0, QApplication::UnicodeUTF8));
        lblDo5Name->setText(QApplication::translate("DoControl", "DO5", 0, QApplication::UnicodeUTF8));
        lblDo14State->setText(QString());
        lblDo15State->setText(QString());
        lblDo3Name->setText(QApplication::translate("DoControl", "DO3", 0, QApplication::UnicodeUTF8));
        lblDo1State->setText(QString());
        lblDo1Name->setText(QApplication::translate("DoControl", "DO1", 0, QApplication::UnicodeUTF8));
        lblDo6Name->setText(QApplication::translate("DoControl", "DO6", 0, QApplication::UnicodeUTF8));
        lblDo7State->setText(QString());
        lblDo16Name->setText(QApplication::translate("DoControl", "DO16", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DoControl: public Ui_DoControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCONTROL_H

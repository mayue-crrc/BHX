/********************************************************************************
** Form generated from reading UI file 'axcontrol.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXCONTROL_H
#define UI_AXCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AxControl
{
public:
    QLabel *lblAin8Voltage;
    QLabel *lblAin2Name;
    QLabel *lblTitle;
    QLabel *lblAin6Voltage;
    QLabel *lblIn2Name;
    QLabel *lblAin3Current;
    QLabel *lblAin5Voltage;
    QLabel *lblAin4Name;
    QLabel *lblInName;
    QLabel *lblAin4Current;
    QLabel *lblAin6Name;
    QLabel *lblAin8Name;
    QLabel *lblAin5Name;
    QLabel *lblAin3Name;
    QLabel *lblAin2Current;
    QLabel *lblAin7Name;
    QLabel *lblAin1Name;
    QLabel *lblIn3Name;
    QLabel *lblIn1Name;
    QLabel *lblAin1Current;
    QLabel *lblAin7Voltage;
    QLabel *lblAin2State;
    QLabel *lblAin4State;
    QLabel *lblAin1State;
    QLabel *lblAin3State;
    QLabel *lblAin6State;
    QLabel *lblAin8State;
    QLabel *lblAin5State;
    QLabel *lblAin7State;

    void setupUi(QWidget *AxControl)
    {
        if (AxControl->objectName().isEmpty())
            AxControl->setObjectName(QString::fromUtf8("AxControl"));
        AxControl->resize(720, 184);
        AxControl->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        lblAin8Voltage = new QLabel(AxControl);
        lblAin8Voltage->setObjectName(QString::fromUtf8("lblAin8Voltage"));
        lblAin8Voltage->setGeometry(QRect(540, 146, 91, 38));
        lblAin8Voltage->setAlignment(Qt::AlignCenter);
        lblAin2Name = new QLabel(AxControl);
        lblAin2Name->setObjectName(QString::fromUtf8("lblAin2Name"));
        lblAin2Name->setGeometry(QRect(40, 74, 161, 38));
        lblTitle = new QLabel(AxControl);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(0, 2, 41, 182));
        lblTitle->setAlignment(Qt::AlignCenter);
        lblAin6Voltage = new QLabel(AxControl);
        lblAin6Voltage->setObjectName(QString::fromUtf8("lblAin6Voltage"));
        lblAin6Voltage->setGeometry(QRect(540, 74, 91, 38));
        lblAin6Voltage->setAlignment(Qt::AlignCenter);
        lblIn2Name = new QLabel(AxControl);
        lblIn2Name->setObjectName(QString::fromUtf8("lblIn2Name"));
        lblIn2Name->setGeometry(QRect(200, 2, 181, 38));
        lblIn2Name->setAlignment(Qt::AlignCenter);
        lblAin3Current = new QLabel(AxControl);
        lblAin3Current->setObjectName(QString::fromUtf8("lblAin3Current"));
        lblAin3Current->setGeometry(QRect(200, 110, 91, 38));
        lblAin3Current->setAlignment(Qt::AlignCenter);
        lblAin5Voltage = new QLabel(AxControl);
        lblAin5Voltage->setObjectName(QString::fromUtf8("lblAin5Voltage"));
        lblAin5Voltage->setGeometry(QRect(540, 38, 91, 38));
        lblAin5Voltage->setAlignment(Qt::AlignCenter);
        lblAin4Name = new QLabel(AxControl);
        lblAin4Name->setObjectName(QString::fromUtf8("lblAin4Name"));
        lblAin4Name->setGeometry(QRect(40, 146, 161, 38));
        lblInName = new QLabel(AxControl);
        lblInName->setObjectName(QString::fromUtf8("lblInName"));
        lblInName->setGeometry(QRect(540, 2, 181, 38));
        lblInName->setAlignment(Qt::AlignCenter);
        lblAin4Current = new QLabel(AxControl);
        lblAin4Current->setObjectName(QString::fromUtf8("lblAin4Current"));
        lblAin4Current->setGeometry(QRect(200, 146, 91, 38));
        lblAin4Current->setAlignment(Qt::AlignCenter);
        lblAin6Name = new QLabel(AxControl);
        lblAin6Name->setObjectName(QString::fromUtf8("lblAin6Name"));
        lblAin6Name->setGeometry(QRect(380, 74, 161, 38));
        lblAin8Name = new QLabel(AxControl);
        lblAin8Name->setObjectName(QString::fromUtf8("lblAin8Name"));
        lblAin8Name->setGeometry(QRect(380, 146, 161, 38));
        lblAin5Name = new QLabel(AxControl);
        lblAin5Name->setObjectName(QString::fromUtf8("lblAin5Name"));
        lblAin5Name->setGeometry(QRect(380, 38, 161, 38));
        lblAin3Name = new QLabel(AxControl);
        lblAin3Name->setObjectName(QString::fromUtf8("lblAin3Name"));
        lblAin3Name->setGeometry(QRect(40, 110, 161, 38));
        lblAin2Current = new QLabel(AxControl);
        lblAin2Current->setObjectName(QString::fromUtf8("lblAin2Current"));
        lblAin2Current->setGeometry(QRect(200, 74, 91, 38));
        lblAin2Current->setAlignment(Qt::AlignCenter);
        lblAin7Name = new QLabel(AxControl);
        lblAin7Name->setObjectName(QString::fromUtf8("lblAin7Name"));
        lblAin7Name->setGeometry(QRect(380, 110, 161, 38));
        lblAin1Name = new QLabel(AxControl);
        lblAin1Name->setObjectName(QString::fromUtf8("lblAin1Name"));
        lblAin1Name->setGeometry(QRect(40, 38, 161, 38));
        lblIn3Name = new QLabel(AxControl);
        lblIn3Name->setObjectName(QString::fromUtf8("lblIn3Name"));
        lblIn3Name->setGeometry(QRect(380, 2, 161, 38));
        lblIn3Name->setAlignment(Qt::AlignCenter);
        lblIn1Name = new QLabel(AxControl);
        lblIn1Name->setObjectName(QString::fromUtf8("lblIn1Name"));
        lblIn1Name->setGeometry(QRect(40, 2, 161, 38));
        lblIn1Name->setAlignment(Qt::AlignCenter);
        lblAin1Current = new QLabel(AxControl);
        lblAin1Current->setObjectName(QString::fromUtf8("lblAin1Current"));
        lblAin1Current->setGeometry(QRect(200, 38, 91, 38));
        lblAin1Current->setAlignment(Qt::AlignCenter);
        lblAin7Voltage = new QLabel(AxControl);
        lblAin7Voltage->setObjectName(QString::fromUtf8("lblAin7Voltage"));
        lblAin7Voltage->setGeometry(QRect(540, 110, 91, 38));
        lblAin7Voltage->setAlignment(Qt::AlignCenter);
        lblAin2State = new QLabel(AxControl);
        lblAin2State->setObjectName(QString::fromUtf8("lblAin2State"));
        lblAin2State->setGeometry(QRect(290, 74, 91, 38));
        lblAin2State->setAlignment(Qt::AlignCenter);
        lblAin4State = new QLabel(AxControl);
        lblAin4State->setObjectName(QString::fromUtf8("lblAin4State"));
        lblAin4State->setGeometry(QRect(290, 146, 91, 38));
        lblAin4State->setAlignment(Qt::AlignCenter);
        lblAin1State = new QLabel(AxControl);
        lblAin1State->setObjectName(QString::fromUtf8("lblAin1State"));
        lblAin1State->setGeometry(QRect(290, 38, 91, 38));
        lblAin1State->setAlignment(Qt::AlignCenter);
        lblAin3State = new QLabel(AxControl);
        lblAin3State->setObjectName(QString::fromUtf8("lblAin3State"));
        lblAin3State->setGeometry(QRect(290, 110, 91, 38));
        lblAin3State->setAlignment(Qt::AlignCenter);
        lblAin6State = new QLabel(AxControl);
        lblAin6State->setObjectName(QString::fromUtf8("lblAin6State"));
        lblAin6State->setGeometry(QRect(630, 74, 91, 38));
        lblAin6State->setAlignment(Qt::AlignCenter);
        lblAin8State = new QLabel(AxControl);
        lblAin8State->setObjectName(QString::fromUtf8("lblAin8State"));
        lblAin8State->setGeometry(QRect(630, 146, 91, 38));
        lblAin8State->setAlignment(Qt::AlignCenter);
        lblAin5State = new QLabel(AxControl);
        lblAin5State->setObjectName(QString::fromUtf8("lblAin5State"));
        lblAin5State->setGeometry(QRect(630, 38, 91, 38));
        lblAin5State->setAlignment(Qt::AlignCenter);
        lblAin7State = new QLabel(AxControl);
        lblAin7State->setObjectName(QString::fromUtf8("lblAin7State"));
        lblAin7State->setGeometry(QRect(630, 110, 91, 38));
        lblAin7State->setAlignment(Qt::AlignCenter);

        retranslateUi(AxControl);

        QMetaObject::connectSlotsByName(AxControl);
    } // setupUi

    void retranslateUi(QWidget *AxControl)
    {
        AxControl->setWindowTitle(QApplication::translate("AxControl", "Form", 0, QApplication::UnicodeUTF8));
        lblAin8Voltage->setText(QString());
        lblAin2Name->setText(QApplication::translate("AxControl", "AIN2", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("AxControl", "AX", 0, QApplication::UnicodeUTF8));
        lblAin6Voltage->setText(QString());
        lblIn2Name->setText(QApplication::translate("AxControl", "\347\224\265\346\265\201\345\200\274 / \345\257\271\345\272\224\344\277\241\345\217\267\345\217\202\350\200\203\345\200\274", 0, QApplication::UnicodeUTF8));
        lblAin3Current->setText(QString());
        lblAin5Voltage->setText(QString());
        lblAin4Name->setText(QApplication::translate("AxControl", "AIN4", 0, QApplication::UnicodeUTF8));
        lblInName->setText(QApplication::translate("AxControl", "\347\224\265\345\216\213\345\200\274 / \345\257\271\345\272\224\344\277\241\345\217\267\345\217\202\350\200\203\345\200\274", 0, QApplication::UnicodeUTF8));
        lblAin4Current->setText(QString());
        lblAin6Name->setText(QApplication::translate("AxControl", "AIN6", 0, QApplication::UnicodeUTF8));
        lblAin8Name->setText(QApplication::translate("AxControl", "AIN8", 0, QApplication::UnicodeUTF8));
        lblAin5Name->setText(QApplication::translate("AxControl", "AIN5", 0, QApplication::UnicodeUTF8));
        lblAin3Name->setText(QApplication::translate("AxControl", "AIN3", 0, QApplication::UnicodeUTF8));
        lblAin2Current->setText(QString());
        lblAin7Name->setText(QApplication::translate("AxControl", "AIN7", 0, QApplication::UnicodeUTF8));
        lblAin1Name->setText(QApplication::translate("AxControl", "AIN1", 0, QApplication::UnicodeUTF8));
        lblIn3Name->setText(QApplication::translate("AxControl", "\344\277\241\345\217\267\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        lblIn1Name->setText(QApplication::translate("AxControl", "\344\277\241\345\217\267\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        lblAin1Current->setText(QString());
        lblAin7Voltage->setText(QString());
        lblAin2State->setText(QString());
        lblAin4State->setText(QString());
        lblAin1State->setText(QString());
        lblAin3State->setText(QString());
        lblAin6State->setText(QString());
        lblAin8State->setText(QString());
        lblAin5State->setText(QString());
        lblAin7State->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AxControl: public Ui_AxControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXCONTROL_H

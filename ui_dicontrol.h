/********************************************************************************
** Form generated from reading UI file 'dicontrol.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICONTROL_H
#define UI_DICONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiControl
{
public:
    QLabel *lblIn3Name;
    QLabel *lblTitle;
    QLabel *lblIn4Name;
    QLabel *lblIn2Name;
    QLabel *lblIn1State;
    QLabel *lblIn1Name;
    QLabel *lblIn2State;
    QLabel *lblIn4State;
    QLabel *lblIn3State;
    QLabel *lblIn5Name;
    QLabel *lblIn7Name;
    QLabel *lblIn6Name;
    QLabel *lblIn8Name;
    QLabel *lblIn12Name;
    QLabel *lblIn11Name;
    QLabel *lblIn10Name;
    QLabel *lblIn9Name;
    QLabel *lblIn16Name;
    QLabel *lblIn15Name;
    QLabel *lblIn14Name;
    QLabel *lblIn13Name;
    QLabel *lblIn20Name;
    QLabel *lblIn19Name;
    QLabel *lblIn18Name;
    QLabel *lblIn17Name;
    QLabel *lblIn24Name;
    QLabel *lblIn23Name;
    QLabel *lblIn22Name;
    QLabel *lblIn21Name;
    QLabel *lblIn5State;
    QLabel *lblIn9State;
    QLabel *lblIn13State;
    QLabel *lblIn17State;
    QLabel *lblIn21State;
    QLabel *lblIn6State;
    QLabel *lblIn10State;
    QLabel *lblIn14State;
    QLabel *lblIn18State;
    QLabel *lblIn22State;
    QLabel *lblIn23State;
    QLabel *lblIn19State;
    QLabel *lblIn15State;
    QLabel *lblIn11State;
    QLabel *lblIn7State;
    QLabel *lblIn8State;
    QLabel *lblIn12State;
    QLabel *lblIn16State;
    QLabel *lblIn20State;
    QLabel *lblIn24State;

    void setupUi(QWidget *DiControl)
    {
        if (DiControl->objectName().isEmpty())
            DiControl->setObjectName(QString::fromUtf8("DiControl"));
        DiControl->resize(720, 220);
        DiControl->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        lblIn3Name = new QLabel(DiControl);
        lblIn3Name->setObjectName(QString::fromUtf8("lblIn3Name"));
        lblIn3Name->setGeometry(QRect(380, 3, 171, 38));
        lblTitle = new QLabel(DiControl);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(0, 3, 41, 218));
        lblTitle->setAlignment(Qt::AlignCenter);
        lblIn4Name = new QLabel(DiControl);
        lblIn4Name->setObjectName(QString::fromUtf8("lblIn4Name"));
        lblIn4Name->setGeometry(QRect(550, 3, 171, 38));
        lblIn2Name = new QLabel(DiControl);
        lblIn2Name->setObjectName(QString::fromUtf8("lblIn2Name"));
        lblIn2Name->setGeometry(QRect(210, 3, 171, 38));
        lblIn1State = new QLabel(DiControl);
        lblIn1State->setObjectName(QString::fromUtf8("lblIn1State"));
        lblIn1State->setGeometry(QRect(180, 10, 24, 24));
        lblIn1State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn1Name = new QLabel(DiControl);
        lblIn1Name->setObjectName(QString::fromUtf8("lblIn1Name"));
        lblIn1Name->setGeometry(QRect(40, 3, 171, 38));
        lblIn2State = new QLabel(DiControl);
        lblIn2State->setObjectName(QString::fromUtf8("lblIn2State"));
        lblIn2State->setGeometry(QRect(350, 10, 24, 24));
        lblIn2State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn4State = new QLabel(DiControl);
        lblIn4State->setObjectName(QString::fromUtf8("lblIn4State"));
        lblIn4State->setGeometry(QRect(690, 10, 24, 24));
        lblIn4State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn3State = new QLabel(DiControl);
        lblIn3State->setObjectName(QString::fromUtf8("lblIn3State"));
        lblIn3State->setGeometry(QRect(520, 10, 24, 24));
        lblIn3State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn5Name = new QLabel(DiControl);
        lblIn5Name->setObjectName(QString::fromUtf8("lblIn5Name"));
        lblIn5Name->setGeometry(QRect(40, 39, 171, 38));
        lblIn7Name = new QLabel(DiControl);
        lblIn7Name->setObjectName(QString::fromUtf8("lblIn7Name"));
        lblIn7Name->setGeometry(QRect(380, 39, 171, 38));
        lblIn6Name = new QLabel(DiControl);
        lblIn6Name->setObjectName(QString::fromUtf8("lblIn6Name"));
        lblIn6Name->setGeometry(QRect(210, 39, 171, 38));
        lblIn8Name = new QLabel(DiControl);
        lblIn8Name->setObjectName(QString::fromUtf8("lblIn8Name"));
        lblIn8Name->setGeometry(QRect(550, 39, 171, 38));
        lblIn12Name = new QLabel(DiControl);
        lblIn12Name->setObjectName(QString::fromUtf8("lblIn12Name"));
        lblIn12Name->setGeometry(QRect(550, 75, 171, 38));
        lblIn11Name = new QLabel(DiControl);
        lblIn11Name->setObjectName(QString::fromUtf8("lblIn11Name"));
        lblIn11Name->setGeometry(QRect(380, 75, 171, 38));
        lblIn10Name = new QLabel(DiControl);
        lblIn10Name->setObjectName(QString::fromUtf8("lblIn10Name"));
        lblIn10Name->setGeometry(QRect(210, 75, 171, 38));
        lblIn9Name = new QLabel(DiControl);
        lblIn9Name->setObjectName(QString::fromUtf8("lblIn9Name"));
        lblIn9Name->setGeometry(QRect(40, 75, 171, 38));
        lblIn16Name = new QLabel(DiControl);
        lblIn16Name->setObjectName(QString::fromUtf8("lblIn16Name"));
        lblIn16Name->setGeometry(QRect(550, 111, 171, 38));
        lblIn15Name = new QLabel(DiControl);
        lblIn15Name->setObjectName(QString::fromUtf8("lblIn15Name"));
        lblIn15Name->setGeometry(QRect(380, 111, 171, 38));
        lblIn14Name = new QLabel(DiControl);
        lblIn14Name->setObjectName(QString::fromUtf8("lblIn14Name"));
        lblIn14Name->setGeometry(QRect(210, 111, 171, 38));
        lblIn13Name = new QLabel(DiControl);
        lblIn13Name->setObjectName(QString::fromUtf8("lblIn13Name"));
        lblIn13Name->setGeometry(QRect(40, 111, 171, 38));
        lblIn20Name = new QLabel(DiControl);
        lblIn20Name->setObjectName(QString::fromUtf8("lblIn20Name"));
        lblIn20Name->setGeometry(QRect(550, 147, 171, 38));
        lblIn19Name = new QLabel(DiControl);
        lblIn19Name->setObjectName(QString::fromUtf8("lblIn19Name"));
        lblIn19Name->setGeometry(QRect(380, 147, 171, 38));
        lblIn18Name = new QLabel(DiControl);
        lblIn18Name->setObjectName(QString::fromUtf8("lblIn18Name"));
        lblIn18Name->setGeometry(QRect(210, 147, 171, 38));
        lblIn17Name = new QLabel(DiControl);
        lblIn17Name->setObjectName(QString::fromUtf8("lblIn17Name"));
        lblIn17Name->setGeometry(QRect(40, 147, 171, 38));
        lblIn24Name = new QLabel(DiControl);
        lblIn24Name->setObjectName(QString::fromUtf8("lblIn24Name"));
        lblIn24Name->setGeometry(QRect(550, 183, 171, 38));
        lblIn23Name = new QLabel(DiControl);
        lblIn23Name->setObjectName(QString::fromUtf8("lblIn23Name"));
        lblIn23Name->setGeometry(QRect(380, 183, 171, 38));
        lblIn22Name = new QLabel(DiControl);
        lblIn22Name->setObjectName(QString::fromUtf8("lblIn22Name"));
        lblIn22Name->setGeometry(QRect(210, 183, 171, 38));
        lblIn21Name = new QLabel(DiControl);
        lblIn21Name->setObjectName(QString::fromUtf8("lblIn21Name"));
        lblIn21Name->setGeometry(QRect(40, 183, 171, 38));
        lblIn5State = new QLabel(DiControl);
        lblIn5State->setObjectName(QString::fromUtf8("lblIn5State"));
        lblIn5State->setGeometry(QRect(180, 46, 24, 24));
        lblIn5State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn9State = new QLabel(DiControl);
        lblIn9State->setObjectName(QString::fromUtf8("lblIn9State"));
        lblIn9State->setGeometry(QRect(180, 83, 24, 24));
        lblIn9State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn13State = new QLabel(DiControl);
        lblIn13State->setObjectName(QString::fromUtf8("lblIn13State"));
        lblIn13State->setGeometry(QRect(180, 118, 24, 24));
        lblIn13State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn17State = new QLabel(DiControl);
        lblIn17State->setObjectName(QString::fromUtf8("lblIn17State"));
        lblIn17State->setGeometry(QRect(180, 154, 24, 24));
        lblIn17State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn21State = new QLabel(DiControl);
        lblIn21State->setObjectName(QString::fromUtf8("lblIn21State"));
        lblIn21State->setGeometry(QRect(180, 190, 24, 24));
        lblIn21State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn6State = new QLabel(DiControl);
        lblIn6State->setObjectName(QString::fromUtf8("lblIn6State"));
        lblIn6State->setGeometry(QRect(350, 46, 24, 24));
        lblIn6State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn10State = new QLabel(DiControl);
        lblIn10State->setObjectName(QString::fromUtf8("lblIn10State"));
        lblIn10State->setGeometry(QRect(350, 83, 24, 24));
        lblIn10State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn14State = new QLabel(DiControl);
        lblIn14State->setObjectName(QString::fromUtf8("lblIn14State"));
        lblIn14State->setGeometry(QRect(350, 118, 24, 24));
        lblIn14State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn18State = new QLabel(DiControl);
        lblIn18State->setObjectName(QString::fromUtf8("lblIn18State"));
        lblIn18State->setGeometry(QRect(350, 154, 24, 24));
        lblIn18State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn22State = new QLabel(DiControl);
        lblIn22State->setObjectName(QString::fromUtf8("lblIn22State"));
        lblIn22State->setGeometry(QRect(350, 190, 24, 24));
        lblIn22State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn23State = new QLabel(DiControl);
        lblIn23State->setObjectName(QString::fromUtf8("lblIn23State"));
        lblIn23State->setGeometry(QRect(520, 190, 24, 24));
        lblIn23State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn19State = new QLabel(DiControl);
        lblIn19State->setObjectName(QString::fromUtf8("lblIn19State"));
        lblIn19State->setGeometry(QRect(520, 154, 24, 24));
        lblIn19State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn15State = new QLabel(DiControl);
        lblIn15State->setObjectName(QString::fromUtf8("lblIn15State"));
        lblIn15State->setGeometry(QRect(520, 118, 24, 24));
        lblIn15State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn11State = new QLabel(DiControl);
        lblIn11State->setObjectName(QString::fromUtf8("lblIn11State"));
        lblIn11State->setGeometry(QRect(520, 83, 24, 24));
        lblIn11State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn7State = new QLabel(DiControl);
        lblIn7State->setObjectName(QString::fromUtf8("lblIn7State"));
        lblIn7State->setGeometry(QRect(520, 46, 24, 24));
        lblIn7State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn8State = new QLabel(DiControl);
        lblIn8State->setObjectName(QString::fromUtf8("lblIn8State"));
        lblIn8State->setGeometry(QRect(690, 46, 24, 24));
        lblIn8State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn12State = new QLabel(DiControl);
        lblIn12State->setObjectName(QString::fromUtf8("lblIn12State"));
        lblIn12State->setGeometry(QRect(690, 83, 24, 24));
        lblIn12State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn16State = new QLabel(DiControl);
        lblIn16State->setObjectName(QString::fromUtf8("lblIn16State"));
        lblIn16State->setGeometry(QRect(690, 118, 24, 24));
        lblIn16State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn20State = new QLabel(DiControl);
        lblIn20State->setObjectName(QString::fromUtf8("lblIn20State"));
        lblIn20State->setGeometry(QRect(690, 154, 24, 24));
        lblIn20State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn24State = new QLabel(DiControl);
        lblIn24State->setObjectName(QString::fromUtf8("lblIn24State"));
        lblIn24State->setGeometry(QRect(690, 190, 24, 24));
        lblIn24State->setStyleSheet(QString::fromUtf8("border-radius: 12px;\n"
"border: 1px groove yellow;\n"
"background-color: gray;"));
        lblIn1Name->raise();
        lblIn3Name->raise();
        lblTitle->raise();
        lblIn4Name->raise();
        lblIn2Name->raise();
        lblIn1State->raise();
        lblIn2State->raise();
        lblIn4State->raise();
        lblIn3State->raise();
        lblIn5Name->raise();
        lblIn7Name->raise();
        lblIn6Name->raise();
        lblIn8Name->raise();
        lblIn12Name->raise();
        lblIn11Name->raise();
        lblIn10Name->raise();
        lblIn9Name->raise();
        lblIn16Name->raise();
        lblIn15Name->raise();
        lblIn14Name->raise();
        lblIn13Name->raise();
        lblIn20Name->raise();
        lblIn19Name->raise();
        lblIn18Name->raise();
        lblIn17Name->raise();
        lblIn24Name->raise();
        lblIn23Name->raise();
        lblIn22Name->raise();
        lblIn21Name->raise();
        lblIn5State->raise();
        lblIn9State->raise();
        lblIn13State->raise();
        lblIn17State->raise();
        lblIn21State->raise();
        lblIn6State->raise();
        lblIn10State->raise();
        lblIn14State->raise();
        lblIn18State->raise();
        lblIn22State->raise();
        lblIn23State->raise();
        lblIn19State->raise();
        lblIn15State->raise();
        lblIn11State->raise();
        lblIn7State->raise();
        lblIn8State->raise();
        lblIn12State->raise();
        lblIn16State->raise();
        lblIn20State->raise();
        lblIn24State->raise();

        retranslateUi(DiControl);

        QMetaObject::connectSlotsByName(DiControl);
    } // setupUi

    void retranslateUi(QWidget *DiControl)
    {
        DiControl->setWindowTitle(QApplication::translate("DiControl", "Form", 0, QApplication::UnicodeUTF8));
        lblIn3Name->setText(QApplication::translate("DiControl", "IN3", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("DiControl", "DI", 0, QApplication::UnicodeUTF8));
        lblIn4Name->setText(QApplication::translate("DiControl", "IN4", 0, QApplication::UnicodeUTF8));
        lblIn2Name->setText(QApplication::translate("DiControl", "IN2", 0, QApplication::UnicodeUTF8));
        lblIn1State->setText(QString());
        lblIn1Name->setText(QApplication::translate("DiControl", "IN1", 0, QApplication::UnicodeUTF8));
        lblIn2State->setText(QString());
        lblIn4State->setText(QString());
        lblIn3State->setText(QString());
        lblIn5Name->setText(QApplication::translate("DiControl", "IN5", 0, QApplication::UnicodeUTF8));
        lblIn7Name->setText(QApplication::translate("DiControl", "IN7", 0, QApplication::UnicodeUTF8));
        lblIn6Name->setText(QApplication::translate("DiControl", "IN6", 0, QApplication::UnicodeUTF8));
        lblIn8Name->setText(QApplication::translate("DiControl", "IN8", 0, QApplication::UnicodeUTF8));
        lblIn12Name->setText(QApplication::translate("DiControl", "IN12", 0, QApplication::UnicodeUTF8));
        lblIn11Name->setText(QApplication::translate("DiControl", "IN11", 0, QApplication::UnicodeUTF8));
        lblIn10Name->setText(QApplication::translate("DiControl", "IN10", 0, QApplication::UnicodeUTF8));
        lblIn9Name->setText(QApplication::translate("DiControl", "IN9", 0, QApplication::UnicodeUTF8));
        lblIn16Name->setText(QApplication::translate("DiControl", "IN16", 0, QApplication::UnicodeUTF8));
        lblIn15Name->setText(QApplication::translate("DiControl", "IN15", 0, QApplication::UnicodeUTF8));
        lblIn14Name->setText(QApplication::translate("DiControl", "IN14", 0, QApplication::UnicodeUTF8));
        lblIn13Name->setText(QApplication::translate("DiControl", "IN13", 0, QApplication::UnicodeUTF8));
        lblIn20Name->setText(QApplication::translate("DiControl", "IN20", 0, QApplication::UnicodeUTF8));
        lblIn19Name->setText(QApplication::translate("DiControl", "IN19", 0, QApplication::UnicodeUTF8));
        lblIn18Name->setText(QApplication::translate("DiControl", "IN18", 0, QApplication::UnicodeUTF8));
        lblIn17Name->setText(QApplication::translate("DiControl", "IN17", 0, QApplication::UnicodeUTF8));
        lblIn24Name->setText(QApplication::translate("DiControl", "IN24", 0, QApplication::UnicodeUTF8));
        lblIn23Name->setText(QApplication::translate("DiControl", "IN23", 0, QApplication::UnicodeUTF8));
        lblIn22Name->setText(QApplication::translate("DiControl", "IN22", 0, QApplication::UnicodeUTF8));
        lblIn21Name->setText(QApplication::translate("DiControl", "IN21", 0, QApplication::UnicodeUTF8));
        lblIn5State->setText(QString());
        lblIn9State->setText(QString());
        lblIn13State->setText(QString());
        lblIn17State->setText(QString());
        lblIn21State->setText(QString());
        lblIn6State->setText(QString());
        lblIn10State->setText(QString());
        lblIn14State->setText(QString());
        lblIn18State->setText(QString());
        lblIn22State->setText(QString());
        lblIn23State->setText(QString());
        lblIn19State->setText(QString());
        lblIn15State->setText(QString());
        lblIn11State->setText(QString());
        lblIn7State->setText(QString());
        lblIn8State->setText(QString());
        lblIn12State->setText(QString());
        lblIn16State->setText(QString());
        lblIn20State->setText(QString());
        lblIn24State->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DiControl: public Ui_DiControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICONTROL_H

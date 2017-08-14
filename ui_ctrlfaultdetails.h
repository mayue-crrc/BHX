/********************************************************************************
** Form generated from reading UI file 'ctrlfaultdetails.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLFAULTDETAILS_H
#define UI_CTRLFAULTDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlFaultdetails
{
public:
    QLabel *CtrlFaultdetails_background;
    QLabel *CtrlFaultdetails_line1;
    QLabel *CtrlFaultdetails_line1_2;
    QLabel *CtrlFaultdetails_label1;
    QLabel *CtrlFaultdetails_label2;
    QLabel *CtrlFaultdetails_label2_2;
    QLabel *CtrlFaultdetails_label2_3;
    QLabel *CtrlFaultdetails_label_FName;
    QLabel *CtrlFaultdetails_label_FCode;
    QLabel *CtrlFaultdetails_label_FPos;
    QLabel *CtrlFaultdetails_label_FDevice;
    QLabel *CtrlFaultdetails_label2_4;
    QLabel *CtrlFaultdetails_label_FDetail;
    QPushButton *CtrlFaultdetails_Button_quit;

    void setupUi(QWidget *CtrlFaultdetails)
    {
        if (CtrlFaultdetails->objectName().isEmpty())
            CtrlFaultdetails->setObjectName(QString::fromUtf8("CtrlFaultdetails"));
        CtrlFaultdetails->resize(500, 350);
        CtrlFaultdetails_background = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_background->setObjectName(QString::fromUtf8("CtrlFaultdetails_background"));
        CtrlFaultdetails_background->setGeometry(QRect(0, 0, 500, 350));
        CtrlFaultdetails_background->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);"));
        CtrlFaultdetails_line1 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_line1->setObjectName(QString::fromUtf8("CtrlFaultdetails_line1"));
        CtrlFaultdetails_line1->setGeometry(QRect(0, 50, 500, 2));
        CtrlFaultdetails_line1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        CtrlFaultdetails_line1_2 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_line1_2->setObjectName(QString::fromUtf8("CtrlFaultdetails_line1_2"));
        CtrlFaultdetails_line1_2->setGeometry(QRect(0, 100, 500, 2));
        CtrlFaultdetails_line1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        CtrlFaultdetails_label1 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label1->setObjectName(QString::fromUtf8("CtrlFaultdetails_label1"));
        CtrlFaultdetails_label1->setGeometry(QRect(0, 10, 91, 31));
        CtrlFaultdetails_label1->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label1->setAlignment(Qt::AlignCenter);
        CtrlFaultdetails_label2 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label2->setObjectName(QString::fromUtf8("CtrlFaultdetails_label2"));
        CtrlFaultdetails_label2->setGeometry(QRect(0, 60, 91, 31));
        CtrlFaultdetails_label2->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label2->setAlignment(Qt::AlignCenter);
        CtrlFaultdetails_label2_2 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label2_2->setObjectName(QString::fromUtf8("CtrlFaultdetails_label2_2"));
        CtrlFaultdetails_label2_2->setGeometry(QRect(150, 60, 91, 31));
        CtrlFaultdetails_label2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label2_2->setAlignment(Qt::AlignCenter);
        CtrlFaultdetails_label2_3 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label2_3->setObjectName(QString::fromUtf8("CtrlFaultdetails_label2_3"));
        CtrlFaultdetails_label2_3->setGeometry(QRect(310, 60, 91, 31));
        CtrlFaultdetails_label2_3->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label2_3->setAlignment(Qt::AlignCenter);
        CtrlFaultdetails_label_FName = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label_FName->setObjectName(QString::fromUtf8("CtrlFaultdetails_label_FName"));
        CtrlFaultdetails_label_FName->setGeometry(QRect(100, 10, 361, 31));
        CtrlFaultdetails_label_FName->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label_FName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CtrlFaultdetails_label_FCode = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label_FCode->setObjectName(QString::fromUtf8("CtrlFaultdetails_label_FCode"));
        CtrlFaultdetails_label_FCode->setGeometry(QRect(90, 60, 51, 31));
        CtrlFaultdetails_label_FCode->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label_FCode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CtrlFaultdetails_label_FPos = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label_FPos->setObjectName(QString::fromUtf8("CtrlFaultdetails_label_FPos"));
        CtrlFaultdetails_label_FPos->setGeometry(QRect(250, 60, 51, 31));
        CtrlFaultdetails_label_FPos->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label_FPos->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CtrlFaultdetails_label_FDevice = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label_FDevice->setObjectName(QString::fromUtf8("CtrlFaultdetails_label_FDevice"));
        CtrlFaultdetails_label_FDevice->setGeometry(QRect(420, 60, 51, 31));
        CtrlFaultdetails_label_FDevice->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label_FDevice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CtrlFaultdetails_label2_4 = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label2_4->setObjectName(QString::fromUtf8("CtrlFaultdetails_label2_4"));
        CtrlFaultdetails_label2_4->setGeometry(QRect(0, 110, 91, 31));
        CtrlFaultdetails_label2_4->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label2_4->setAlignment(Qt::AlignCenter);
        CtrlFaultdetails_label_FDetail = new QLabel(CtrlFaultdetails);
        CtrlFaultdetails_label_FDetail->setObjectName(QString::fromUtf8("CtrlFaultdetails_label_FDetail"));
        CtrlFaultdetails_label_FDetail->setGeometry(QRect(90, 115, 391, 181));
        CtrlFaultdetails_label_FDetail->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"color: rgb(255, 255, 255);\n"
"font: 16px ;"));
        CtrlFaultdetails_label_FDetail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        CtrlFaultdetails_Button_quit = new QPushButton(CtrlFaultdetails);
        CtrlFaultdetails_Button_quit->setObjectName(QString::fromUtf8("CtrlFaultdetails_Button_quit"));
        CtrlFaultdetails_Button_quit->setGeometry(QRect(400, 310, 90, 31));
        CtrlFaultdetails_Button_quit->setFocusPolicy(Qt::NoFocus);
        CtrlFaultdetails_Button_quit->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        CtrlFaultdetails_background->raise();
        CtrlFaultdetails_line1->raise();
        CtrlFaultdetails_line1_2->raise();
        CtrlFaultdetails_label1->raise();
        CtrlFaultdetails_label2->raise();
        CtrlFaultdetails_label2_2->raise();
        CtrlFaultdetails_label2_3->raise();
        CtrlFaultdetails_label_FName->raise();
        CtrlFaultdetails_label_FCode->raise();
        CtrlFaultdetails_label_FDevice->raise();
        CtrlFaultdetails_label2_4->raise();
        CtrlFaultdetails_label_FDetail->raise();
        CtrlFaultdetails_Button_quit->raise();
        CtrlFaultdetails_label_FPos->raise();

        retranslateUi(CtrlFaultdetails);

        QMetaObject::connectSlotsByName(CtrlFaultdetails);
    } // setupUi

    void retranslateUi(QWidget *CtrlFaultdetails)
    {
        CtrlFaultdetails->setWindowTitle(QApplication::translate("CtrlFaultdetails", "Form", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_background->setText(QString());
        CtrlFaultdetails_line1->setText(QString());
        CtrlFaultdetails_line1_2->setText(QString());
        CtrlFaultdetails_label1->setText(QApplication::translate("CtrlFaultdetails", "\346\225\205\351\232\234\345\220\215\347\247\260:", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_label2->setText(QApplication::translate("CtrlFaultdetails", "\346\225\205\351\232\234\344\273\243\347\240\201:", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_label2_2->setText(QApplication::translate("CtrlFaultdetails", "\346\225\205\351\232\234\344\275\215\347\275\256:", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_label2_3->setText(QApplication::translate("CtrlFaultdetails", "\346\225\205\351\232\234\350\256\276\345\244\207:", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_label_FName->setText(QString());
        CtrlFaultdetails_label_FCode->setText(QString());
        CtrlFaultdetails_label_FPos->setText(QString());
        CtrlFaultdetails_label_FDevice->setText(QString());
        CtrlFaultdetails_label2_4->setText(QApplication::translate("CtrlFaultdetails", "\346\225\205\351\232\234\346\217\217\350\277\260:", 0, QApplication::UnicodeUTF8));
        CtrlFaultdetails_label_FDetail->setText(QString());
        CtrlFaultdetails_Button_quit->setText(QApplication::translate("CtrlFaultdetails", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlFaultdetails: public Ui_CtrlFaultdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLFAULTDETAILS_H

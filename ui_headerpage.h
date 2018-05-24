/********************************************************************************
** Form generated from reading UI file 'headerpage.ui'
**
** Created: Mon Dec 11 20:15:51 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADERPAGE_H
#define UI_HEADERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeaderPage
{
public:
    QLabel *Line1;
    QLabel *Line2;
    QLabel *label;
    QLabel *Line1_2;
    QLabel *Line1_3;
    QLabel *Line1_4;
    QLabel *Line1_5;
    QLabel *Line1_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *headerlabel_Voltage;
    QLabel *headerlabel_Current;
    QLabel *headerlabel_24VVoltage;
    QLabel *headerlabel_Date;
    QLabel *headerlabel_Time;
    QLabel *headerlabel_Positon;
    QLabel *header_background;
    QPushButton *CurrentFaultBtn;
    QLabel *headerlabel_Level;
    QLabel *headerlabel_speed;
    QLabel *Line1_7;
    QPushButton *HelpitemBtn;
    QLabel *Line1_8;
    QLabel *headerlabel_limitspeed;
    QLabel *label_4;
    QLabel *headerlabel_Voltage_MC2;
    QLabel *Line1_9;
    QLabel *label_5;

    void setupUi(QWidget *HeaderPage)
    {
        if (HeaderPage->objectName().isEmpty())
            HeaderPage->setObjectName(QString::fromUtf8("HeaderPage"));
        HeaderPage->resize(800, 80);
        HeaderPage->setStyleSheet(QString::fromUtf8(""));
        Line1 = new QLabel(HeaderPage);
        Line1->setObjectName(QString::fromUtf8("Line1"));
        Line1->setGeometry(QRect(0, 40, 670, 2));
        Line1->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Line2 = new QLabel(HeaderPage);
        Line2->setObjectName(QString::fromUtf8("Line2"));
        Line2->setGeometry(QRect(0, 78, 800, 2));
        Line2->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        label = new QLabel(HeaderPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 51, 38));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font:16px;\n"
"background-color: rgb(115, 115, 115);\n"
"color: rgb(255, 255, 255);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        Line1_2 = new QLabel(HeaderPage);
        Line1_2->setObjectName(QString::fromUtf8("Line1_2"));
        Line1_2->setGeometry(QRect(114, 0, 2, 78));
        Line1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Line1_3 = new QLabel(HeaderPage);
        Line1_3->setObjectName(QString::fromUtf8("Line1_3"));
        Line1_3->setGeometry(QRect(180, 0, 2, 78));
        Line1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Line1_4 = new QLabel(HeaderPage);
        Line1_4->setObjectName(QString::fromUtf8("Line1_4"));
        Line1_4->setGeometry(QRect(320, 0, 2, 78));
        Line1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Line1_5 = new QLabel(HeaderPage);
        Line1_5->setObjectName(QString::fromUtf8("Line1_5"));
        Line1_5->setGeometry(QRect(430, 0, 2, 78));
        Line1_5->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Line1_6 = new QLabel(HeaderPage);
        Line1_6->setObjectName(QString::fromUtf8("Line1_6"));
        Line1_6->setGeometry(QRect(590, 0, 2, 78));
        Line1_6->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        label_2 = new QLabel(HeaderPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 0, 51, 38));
        label_2->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(HeaderPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 0, 121, 38));
        label_3->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        label_3->setAlignment(Qt::AlignCenter);
        headerlabel_Voltage = new QLabel(HeaderPage);
        headerlabel_Voltage->setObjectName(QString::fromUtf8("headerlabel_Voltage"));
        headerlabel_Voltage->setGeometry(QRect(0, 42, 51, 36));
        headerlabel_Voltage->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Voltage->setAlignment(Qt::AlignCenter);
        headerlabel_Current = new QLabel(HeaderPage);
        headerlabel_Current->setObjectName(QString::fromUtf8("headerlabel_Current"));
        headerlabel_Current->setGeometry(QRect(120, 42, 51, 36));
        headerlabel_Current->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Current->setAlignment(Qt::AlignCenter);
        headerlabel_24VVoltage = new QLabel(HeaderPage);
        headerlabel_24VVoltage->setObjectName(QString::fromUtf8("headerlabel_24VVoltage"));
        headerlabel_24VVoltage->setGeometry(QRect(190, 42, 121, 36));
        headerlabel_24VVoltage->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_24VVoltage->setAlignment(Qt::AlignCenter);
        headerlabel_Date = new QLabel(HeaderPage);
        headerlabel_Date->setObjectName(QString::fromUtf8("headerlabel_Date"));
        headerlabel_Date->setGeometry(QRect(330, 0, 91, 38));
        headerlabel_Date->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Date->setAlignment(Qt::AlignCenter);
        headerlabel_Time = new QLabel(HeaderPage);
        headerlabel_Time->setObjectName(QString::fromUtf8("headerlabel_Time"));
        headerlabel_Time->setGeometry(QRect(330, 42, 91, 36));
        headerlabel_Time->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Time->setAlignment(Qt::AlignCenter);
        headerlabel_Positon = new QLabel(HeaderPage);
        headerlabel_Positon->setObjectName(QString::fromUtf8("headerlabel_Positon"));
        headerlabel_Positon->setGeometry(QRect(440, 0, 141, 38));
        headerlabel_Positon->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Positon->setAlignment(Qt::AlignCenter);
        header_background = new QLabel(HeaderPage);
        header_background->setObjectName(QString::fromUtf8("header_background"));
        header_background->setGeometry(QRect(0, 0, 800, 80));
        header_background->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        CurrentFaultBtn = new QPushButton(HeaderPage);
        CurrentFaultBtn->setObjectName(QString::fromUtf8("CurrentFaultBtn"));
        CurrentFaultBtn->setGeometry(QRect(735, 15, 61, 51));
        CurrentFaultBtn->setFocusPolicy(Qt::NoFocus);
        CurrentFaultBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/fault.bmp);"));
        headerlabel_Level = new QLabel(HeaderPage);
        headerlabel_Level->setObjectName(QString::fromUtf8("headerlabel_Level"));
        headerlabel_Level->setGeometry(QRect(440, 42, 71, 36));
        headerlabel_Level->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Level->setAlignment(Qt::AlignCenter);
        headerlabel_speed = new QLabel(HeaderPage);
        headerlabel_speed->setObjectName(QString::fromUtf8("headerlabel_speed"));
        headerlabel_speed->setGeometry(QRect(509, 42, 71, 36));
        headerlabel_speed->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_speed->setAlignment(Qt::AlignCenter);
        Line1_7 = new QLabel(HeaderPage);
        Line1_7->setObjectName(QString::fromUtf8("Line1_7"));
        Line1_7->setGeometry(QRect(730, 0, 2, 78));
        Line1_7->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        HelpitemBtn = new QPushButton(HeaderPage);
        HelpitemBtn->setObjectName(QString::fromUtf8("HelpitemBtn"));
        HelpitemBtn->setGeometry(QRect(680, 22, 40, 40));
        HelpitemBtn->setFocusPolicy(Qt::NoFocus);
        HelpitemBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);\n"
"border: 2px solid rgb(115, 115, 115);\n"
"font: 30pt \"\351\273\221\344\275\223\";\n"
"border-radius: 20px;\n"
"background-color: rgb(255, 242, 0);\n"
"border: 1px groove yellow;\n"
""));
        Line1_8 = new QLabel(HeaderPage);
        Line1_8->setObjectName(QString::fromUtf8("Line1_8"));
        Line1_8->setGeometry(QRect(670, 0, 2, 78));
        Line1_8->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        headerlabel_limitspeed = new QLabel(HeaderPage);
        headerlabel_limitspeed->setObjectName(QString::fromUtf8("headerlabel_limitspeed"));
        headerlabel_limitspeed->setGeometry(QRect(596, 42, 71, 36));
        headerlabel_limitspeed->setStyleSheet(QString::fromUtf8(""));
        headerlabel_limitspeed->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(HeaderPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(596, 0, 71, 38));
        label_4->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        label_4->setAlignment(Qt::AlignCenter);
        headerlabel_Voltage_MC2 = new QLabel(HeaderPage);
        headerlabel_Voltage_MC2->setObjectName(QString::fromUtf8("headerlabel_Voltage_MC2"));
        headerlabel_Voltage_MC2->setGeometry(QRect(60, 42, 51, 36));
        headerlabel_Voltage_MC2->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Voltage_MC2->setAlignment(Qt::AlignCenter);
        Line1_9 = new QLabel(HeaderPage);
        Line1_9->setObjectName(QString::fromUtf8("Line1_9"));
        Line1_9->setGeometry(QRect(55, 0, 2, 78));
        Line1_9->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        label_5 = new QLabel(HeaderPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 0, 51, 38));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font:16px;\n"
"background-color: rgb(115, 115, 115);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        header_background->raise();
        Line1->raise();
        Line2->raise();
        label->raise();
        Line1_2->raise();
        Line1_3->raise();
        Line1_4->raise();
        Line1_5->raise();
        Line1_6->raise();
        label_2->raise();
        label_3->raise();
        headerlabel_Voltage->raise();
        headerlabel_Current->raise();
        headerlabel_24VVoltage->raise();
        headerlabel_Date->raise();
        headerlabel_Time->raise();
        headerlabel_Positon->raise();
        CurrentFaultBtn->raise();
        headerlabel_Level->raise();
        headerlabel_speed->raise();
        Line1_7->raise();
        HelpitemBtn->raise();
        Line1_8->raise();
        headerlabel_limitspeed->raise();
        label_4->raise();
        headerlabel_Voltage_MC2->raise();
        Line1_9->raise();
        label_5->raise();

        retranslateUi(HeaderPage);

        QMetaObject::connectSlotsByName(HeaderPage);
    } // setupUi

    void retranslateUi(QWidget *HeaderPage)
    {
        HeaderPage->setWindowTitle(QApplication::translate("HeaderPage", "Form", 0, QApplication::UnicodeUTF8));
        Line1->setText(QString());
        Line2->setText(QString());
        label->setText(QApplication::translate("HeaderPage", "TP1\n"
"\347\275\221\345\216\213", 0, QApplication::UnicodeUTF8));
        Line1_2->setText(QString());
        Line1_3->setText(QString());
        Line1_4->setText(QString());
        Line1_5->setText(QString());
        Line1_6->setText(QString());
        label_2->setText(QApplication::translate("HeaderPage", "\347\275\221\346\265\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HeaderPage", "DC24V\346\257\215\347\272\277\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        headerlabel_Voltage->setText(QString());
        headerlabel_Current->setText(QString());
        headerlabel_24VVoltage->setText(QString());
        headerlabel_Date->setText(QString());
        headerlabel_Time->setText(QString());
        headerlabel_Positon->setText(QString());
        header_background->setText(QString());
        CurrentFaultBtn->setText(QString());
        headerlabel_Level->setText(QString());
        headerlabel_speed->setText(QString());
        Line1_7->setText(QString());
        HelpitemBtn->setText(QApplication::translate("HeaderPage", "?", 0, QApplication::UnicodeUTF8));
        Line1_8->setText(QString());
        headerlabel_limitspeed->setText(QString());
        label_4->setText(QApplication::translate("HeaderPage", "\351\231\220\351\200\237\345\200\274", 0, QApplication::UnicodeUTF8));
        headerlabel_Voltage_MC2->setText(QString());
        Line1_9->setText(QString());
        label_5->setText(QApplication::translate("HeaderPage", "TP2\n"
"\347\275\221\345\216\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HeaderPage: public Ui_HeaderPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADERPAGE_H

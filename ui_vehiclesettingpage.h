/********************************************************************************
** Form generated from reading UI file 'vehiclesettingpage.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESETTINGPAGE_H
#define UI_VEHICLESETTINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleSettingPage
{
public:
    QLabel *VehicleSettingPage_background;
    QPushButton *VSetting_Button_Num1;
    QPushButton *VSetting_Button_Num0;
    QPushButton *VSetting_Button_Num2;
    QPushButton *VSetting_Button_Num5;
    QPushButton *VSetting_Button_Num3;
    QPushButton *VSetting_Button_Num4;
    QPushButton *VSetting_Button_Num8;
    QPushButton *VSetting_Button_Num6;
    QPushButton *VSetting_Button_Num7;
    QPushButton *VSetting_Button_Num9;
    QPushButton *VSetting_Button_clear;
    QPushButton *VSetting_Button_confirm;
    QLabel *VSetting_Label_LIne1;
    QLabel *VSetting_Label_Password;

    void setupUi(QWidget *VehicleSettingPage)
    {
        if (VehicleSettingPage->objectName().isEmpty())
            VehicleSettingPage->setObjectName(QString::fromUtf8("VehicleSettingPage"));
        VehicleSettingPage->resize(800, 440);
        VehicleSettingPage_background = new QLabel(VehicleSettingPage);
        VehicleSettingPage_background->setObjectName(QString::fromUtf8("VehicleSettingPage_background"));
        VehicleSettingPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleSettingPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        VehicleSettingPage_background->setAlignment(Qt::AlignCenter);
        VSetting_Button_Num1 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num1->setObjectName(QString::fromUtf8("VSetting_Button_Num1"));
        VSetting_Button_Num1->setGeometry(QRect(210, 140, 90, 50));
        VSetting_Button_Num1->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num1->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num0 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num0->setObjectName(QString::fromUtf8("VSetting_Button_Num0"));
        VSetting_Button_Num0->setGeometry(QRect(350, 350, 90, 50));
        VSetting_Button_Num0->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num0->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num2 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num2->setObjectName(QString::fromUtf8("VSetting_Button_Num2"));
        VSetting_Button_Num2->setGeometry(QRect(350, 140, 90, 50));
        VSetting_Button_Num2->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num2->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num5 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num5->setObjectName(QString::fromUtf8("VSetting_Button_Num5"));
        VSetting_Button_Num5->setGeometry(QRect(350, 210, 90, 50));
        VSetting_Button_Num5->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num5->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num3 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num3->setObjectName(QString::fromUtf8("VSetting_Button_Num3"));
        VSetting_Button_Num3->setGeometry(QRect(490, 140, 90, 50));
        VSetting_Button_Num3->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num3->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num4 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num4->setObjectName(QString::fromUtf8("VSetting_Button_Num4"));
        VSetting_Button_Num4->setGeometry(QRect(210, 210, 90, 50));
        VSetting_Button_Num4->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num4->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num8 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num8->setObjectName(QString::fromUtf8("VSetting_Button_Num8"));
        VSetting_Button_Num8->setGeometry(QRect(350, 280, 90, 50));
        VSetting_Button_Num8->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num8->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num6 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num6->setObjectName(QString::fromUtf8("VSetting_Button_Num6"));
        VSetting_Button_Num6->setGeometry(QRect(490, 210, 90, 50));
        VSetting_Button_Num6->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num6->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num7 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num7->setObjectName(QString::fromUtf8("VSetting_Button_Num7"));
        VSetting_Button_Num7->setGeometry(QRect(210, 280, 90, 50));
        VSetting_Button_Num7->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num7->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_Num9 = new QPushButton(VehicleSettingPage);
        VSetting_Button_Num9->setObjectName(QString::fromUtf8("VSetting_Button_Num9"));
        VSetting_Button_Num9->setGeometry(QRect(490, 280, 90, 50));
        VSetting_Button_Num9->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_Num9->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_clear = new QPushButton(VehicleSettingPage);
        VSetting_Button_clear->setObjectName(QString::fromUtf8("VSetting_Button_clear"));
        VSetting_Button_clear->setGeometry(QRect(490, 350, 90, 50));
        VSetting_Button_clear->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_clear->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Button_confirm = new QPushButton(VehicleSettingPage);
        VSetting_Button_confirm->setObjectName(QString::fromUtf8("VSetting_Button_confirm"));
        VSetting_Button_confirm->setGeometry(QRect(210, 350, 90, 50));
        VSetting_Button_confirm->setFocusPolicy(Qt::NoFocus);
        VSetting_Button_confirm->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VSetting_Label_LIne1 = new QLabel(VehicleSettingPage);
        VSetting_Label_LIne1->setObjectName(QString::fromUtf8("VSetting_Label_LIne1"));
        VSetting_Label_LIne1->setGeometry(QRect(0, 100, 800, 3));
        VSetting_Label_LIne1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        VSetting_Label_Password = new QLabel(VehicleSettingPage);
        VSetting_Label_Password->setObjectName(QString::fromUtf8("VSetting_Label_Password"));
        VSetting_Label_Password->setGeometry(QRect(190, 30, 421, 51));
        VSetting_Label_Password->setStyleSheet(QString::fromUtf8("font: 75 24px ;\n"
"border:2px solid;\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(191, 191, 191);\n"
""));
        VSetting_Label_Password->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleSettingPage);

        QMetaObject::connectSlotsByName(VehicleSettingPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleSettingPage)
    {
        VehicleSettingPage->setWindowTitle(QApplication::translate("VehicleSettingPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleSettingPage_background->setText(QString());
        VSetting_Button_Num1->setText(QApplication::translate("VehicleSettingPage", "1", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num0->setText(QApplication::translate("VehicleSettingPage", "0", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num2->setText(QApplication::translate("VehicleSettingPage", "2", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num5->setText(QApplication::translate("VehicleSettingPage", "5", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num3->setText(QApplication::translate("VehicleSettingPage", "3", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num4->setText(QApplication::translate("VehicleSettingPage", "4", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num8->setText(QApplication::translate("VehicleSettingPage", "8", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num6->setText(QApplication::translate("VehicleSettingPage", "6", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num7->setText(QApplication::translate("VehicleSettingPage", "7", 0, QApplication::UnicodeUTF8));
        VSetting_Button_Num9->setText(QApplication::translate("VehicleSettingPage", "9", 0, QApplication::UnicodeUTF8));
        VSetting_Button_clear->setText(QApplication::translate("VehicleSettingPage", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        VSetting_Button_confirm->setText(QApplication::translate("VehicleSettingPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        VSetting_Label_LIne1->setText(QString());
        VSetting_Label_Password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleSettingPage: public Ui_VehicleSettingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESETTINGPAGE_H

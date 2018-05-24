/********************************************************************************
** Form generated from reading UI file 'vehicleeditpwpage.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEEDITPWPAGE_H
#define UI_VEHICLEEDITPWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleEditPWPage
{
public:
    QLabel *VEPW_background;
    QLabel *VEPW_Label_name;
    QLabel *VEPW_Label_InputPW;
    QPushButton *VEPW_Button_clear;
    QPushButton *VEPW_Button_Num4;
    QPushButton *VEPW_Button_Num3;
    QPushButton *VEPW_Button_Num0;
    QPushButton *VEPW_Button_Num1;
    QPushButton *VEPW_Button_Num7;
    QPushButton *VEPW_Button_Num8;
    QPushButton *VEPW_Button_confirm;
    QPushButton *VEPW_Button_Num6;
    QPushButton *VEPW_Button_Num5;
    QPushButton *VEPW_Button_Num2;
    QPushButton *VEPW_Button_Num9;
    QPushButton *VEPW_Button_back;

    void setupUi(QWidget *VehicleEditPWPage)
    {
        if (VehicleEditPWPage->objectName().isEmpty())
            VehicleEditPWPage->setObjectName(QString::fromUtf8("VehicleEditPWPage"));
        VehicleEditPWPage->resize(520, 440);
        VEPW_background = new QLabel(VehicleEditPWPage);
        VEPW_background->setObjectName(QString::fromUtf8("VEPW_background"));
        VEPW_background->setGeometry(QRect(0, 0, 516, 436));
        VEPW_background->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);\n"
"border:2px solid rgb(255,255,255);"));
        VEPW_Label_name = new QLabel(VehicleEditPWPage);
        VEPW_Label_name->setObjectName(QString::fromUtf8("VEPW_Label_name"));
        VEPW_Label_name->setGeometry(QRect(100, 30, 320, 31));
        VEPW_Label_name->setStyleSheet(QString::fromUtf8("font: 75  24px ;\n"
"color: rgb(255, 255, 255);"));
        VEPW_Label_name->setAlignment(Qt::AlignCenter);
        VEPW_Label_InputPW = new QLabel(VehicleEditPWPage);
        VEPW_Label_InputPW->setObjectName(QString::fromUtf8("VEPW_Label_InputPW"));
        VEPW_Label_InputPW->setGeometry(QRect(50, 70, 420, 51));
        VEPW_Label_InputPW->setStyleSheet(QString::fromUtf8("font: 75  34px ;\n"
"color: rgb(255, 255, 255);\n"
"border:3px solid rgb(102,154,204);"));
        VEPW_Label_InputPW->setAlignment(Qt::AlignCenter);
        VEPW_Button_clear = new QPushButton(VehicleEditPWPage);
        VEPW_Button_clear->setObjectName(QString::fromUtf8("VEPW_Button_clear"));
        VEPW_Button_clear->setGeometry(QRect(410, 230, 90, 50));
        VEPW_Button_clear->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_clear->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num4 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num4->setObjectName(QString::fromUtf8("VEPW_Button_Num4"));
        VEPW_Button_Num4->setGeometry(QRect(150, 230, 90, 50));
        VEPW_Button_Num4->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num4->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num3 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num3->setObjectName(QString::fromUtf8("VEPW_Button_Num3"));
        VEPW_Button_Num3->setGeometry(QRect(20, 230, 90, 50));
        VEPW_Button_Num3->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num3->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num0 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num0->setObjectName(QString::fromUtf8("VEPW_Button_Num0"));
        VEPW_Button_Num0->setGeometry(QRect(20, 310, 90, 50));
        VEPW_Button_Num0->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num0->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num1 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num1->setObjectName(QString::fromUtf8("VEPW_Button_Num1"));
        VEPW_Button_Num1->setGeometry(QRect(150, 310, 90, 50));
        VEPW_Button_Num1->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num1->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num7 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num7->setObjectName(QString::fromUtf8("VEPW_Button_Num7"));
        VEPW_Button_Num7->setGeometry(QRect(150, 150, 90, 50));
        VEPW_Button_Num7->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num7->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num8 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num8->setObjectName(QString::fromUtf8("VEPW_Button_Num8"));
        VEPW_Button_Num8->setGeometry(QRect(280, 150, 90, 50));
        VEPW_Button_Num8->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num8->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_confirm = new QPushButton(VehicleEditPWPage);
        VEPW_Button_confirm->setObjectName(QString::fromUtf8("VEPW_Button_confirm"));
        VEPW_Button_confirm->setGeometry(QRect(410, 310, 90, 50));
        VEPW_Button_confirm->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_confirm->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num6 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num6->setObjectName(QString::fromUtf8("VEPW_Button_Num6"));
        VEPW_Button_Num6->setGeometry(QRect(20, 150, 90, 50));
        VEPW_Button_Num6->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num6->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num5 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num5->setObjectName(QString::fromUtf8("VEPW_Button_Num5"));
        VEPW_Button_Num5->setGeometry(QRect(280, 230, 90, 50));
        VEPW_Button_Num5->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num5->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num2 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num2->setObjectName(QString::fromUtf8("VEPW_Button_Num2"));
        VEPW_Button_Num2->setGeometry(QRect(280, 310, 90, 50));
        VEPW_Button_Num2->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num2->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_Num9 = new QPushButton(VehicleEditPWPage);
        VEPW_Button_Num9->setObjectName(QString::fromUtf8("VEPW_Button_Num9"));
        VEPW_Button_Num9->setGeometry(QRect(410, 150, 90, 50));
        VEPW_Button_Num9->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_Num9->setStyleSheet(QString::fromUtf8("font: 75 bold 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));
        VEPW_Button_back = new QPushButton(VehicleEditPWPage);
        VEPW_Button_back->setObjectName(QString::fromUtf8("VEPW_Button_back"));
        VEPW_Button_back->setGeometry(QRect(410, 380, 90, 41));
        VEPW_Button_back->setFocusPolicy(Qt::NoFocus);
        VEPW_Button_back->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 255, 0);\n"
"border:3px solid;\n"
"border-color: rgb(255, 0, 0);\n"
""));

        retranslateUi(VehicleEditPWPage);

        QMetaObject::connectSlotsByName(VehicleEditPWPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleEditPWPage)
    {
        VehicleEditPWPage->setWindowTitle(QApplication::translate("VehicleEditPWPage", "Form", 0, QApplication::UnicodeUTF8));
        VEPW_background->setText(QString());
        VEPW_Label_name->setText(QApplication::translate("VehicleEditPWPage", "\350\257\267\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        VEPW_Label_InputPW->setText(QString());
        VEPW_Button_clear->setText(QApplication::translate("VehicleEditPWPage", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num4->setText(QApplication::translate("VehicleEditPWPage", "4", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num3->setText(QApplication::translate("VehicleEditPWPage", "3", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num0->setText(QApplication::translate("VehicleEditPWPage", "0", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num1->setText(QApplication::translate("VehicleEditPWPage", "1", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num7->setText(QApplication::translate("VehicleEditPWPage", "7", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num8->setText(QApplication::translate("VehicleEditPWPage", "8", 0, QApplication::UnicodeUTF8));
        VEPW_Button_confirm->setText(QApplication::translate("VehicleEditPWPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num6->setText(QApplication::translate("VehicleEditPWPage", "6", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num5->setText(QApplication::translate("VehicleEditPWPage", "5", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num2->setText(QApplication::translate("VehicleEditPWPage", "2", 0, QApplication::UnicodeUTF8));
        VEPW_Button_Num9->setText(QApplication::translate("VehicleEditPWPage", "9", 0, QApplication::UnicodeUTF8));
        VEPW_Button_back->setText(QApplication::translate("VehicleEditPWPage", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleEditPWPage: public Ui_VehicleEditPWPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEEDITPWPAGE_H

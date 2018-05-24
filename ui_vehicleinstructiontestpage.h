/********************************************************************************
** Form generated from reading UI file 'vehicleinstructiontestpage.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINSTRUCTIONTESTPAGE_H
#define UI_VEHICLEINSTRUCTIONTESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleInstructionTestPage
{
public:
    QLabel *VITest_background;
    QPushButton *VITest_Button_L1R1;
    QPushButton *VITest_Button_L1R2;
    QPushButton *VITest_Button_L1R3;
    QPushButton *VITest_Button_L1R4;
    QPushButton *VITest_Button_prePage;
    QPushButton *VITest_Button_nextPage;
    QLabel *VITest_Label_Page;
    QPushButton *VITest_Button_closePage;
    QPushButton *VITest_Button_L2R1;
    QPushButton *VITest_Button_L2R3;
    QPushButton *VITest_Button_L2R4;
    QPushButton *VITest_Button_L2R2;
    QPushButton *VITest_Button_L3R1;
    QPushButton *VITest_Button_L3R3;
    QPushButton *VITest_Button_L3R4;
    QPushButton *VITest_Button_L3R2;
    QLabel *label;
    QPushButton *VITest_Button_TCUTest;

    void setupUi(QWidget *VehicleInstructionTestPage)
    {
        if (VehicleInstructionTestPage->objectName().isEmpty())
            VehicleInstructionTestPage->setObjectName(QString::fromUtf8("VehicleInstructionTestPage"));
        VehicleInstructionTestPage->resize(800, 440);
        VehicleInstructionTestPage->setStyleSheet(QString::fromUtf8(""));
        VITest_background = new QLabel(VehicleInstructionTestPage);
        VITest_background->setObjectName(QString::fromUtf8("VITest_background"));
        VITest_background->setGeometry(QRect(0, 0, 800, 440));
        VITest_background->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 179, 179);"));
        VITest_Button_L1R1 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L1R1->setObjectName(QString::fromUtf8("VITest_Button_L1R1"));
        VITest_Button_L1R1->setGeometry(QRect(80, 40, 120, 60));
        VITest_Button_L1R1->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L1R1->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L1R2 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L1R2->setObjectName(QString::fromUtf8("VITest_Button_L1R2"));
        VITest_Button_L1R2->setGeometry(QRect(260, 40, 120, 60));
        VITest_Button_L1R2->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L1R2->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L1R3 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L1R3->setObjectName(QString::fromUtf8("VITest_Button_L1R3"));
        VITest_Button_L1R3->setGeometry(QRect(440, 40, 120, 60));
        VITest_Button_L1R3->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L1R3->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L1R4 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L1R4->setObjectName(QString::fromUtf8("VITest_Button_L1R4"));
        VITest_Button_L1R4->setGeometry(QRect(620, 40, 120, 60));
        VITest_Button_L1R4->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L1R4->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_prePage = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_prePage->setObjectName(QString::fromUtf8("VITest_Button_prePage"));
        VITest_Button_prePage->setGeometry(QRect(510, 370, 81, 41));
        VITest_Button_prePage->setFocusPolicy(Qt::NoFocus);
        VITest_Button_prePage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"background-color: rgb(179, 179, 179);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_nextPage = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_nextPage->setObjectName(QString::fromUtf8("VITest_Button_nextPage"));
        VITest_Button_nextPage->setGeometry(QRect(610, 370, 81, 41));
        VITest_Button_nextPage->setFocusPolicy(Qt::NoFocus);
        VITest_Button_nextPage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"background-color: rgb(179, 179, 179);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Label_Page = new QLabel(VehicleInstructionTestPage);
        VITest_Label_Page->setObjectName(QString::fromUtf8("VITest_Label_Page"));
        VITest_Label_Page->setGeometry(QRect(410, 370, 91, 41));
        VITest_Label_Page->setStyleSheet(QString::fromUtf8("font: 75  18px ;"));
        VITest_Button_closePage = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_closePage->setObjectName(QString::fromUtf8("VITest_Button_closePage"));
        VITest_Button_closePage->setGeometry(QRect(710, 370, 81, 41));
        VITest_Button_closePage->setFocusPolicy(Qt::NoFocus);
        VITest_Button_closePage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"background-color: rgb(179, 179, 179);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L2R1 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L2R1->setObjectName(QString::fromUtf8("VITest_Button_L2R1"));
        VITest_Button_L2R1->setGeometry(QRect(80, 150, 120, 60));
        VITest_Button_L2R1->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L2R1->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L2R3 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L2R3->setObjectName(QString::fromUtf8("VITest_Button_L2R3"));
        VITest_Button_L2R3->setGeometry(QRect(440, 150, 120, 60));
        VITest_Button_L2R3->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L2R3->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L2R4 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L2R4->setObjectName(QString::fromUtf8("VITest_Button_L2R4"));
        VITest_Button_L2R4->setGeometry(QRect(620, 150, 120, 60));
        VITest_Button_L2R4->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L2R4->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L2R2 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L2R2->setObjectName(QString::fromUtf8("VITest_Button_L2R2"));
        VITest_Button_L2R2->setGeometry(QRect(260, 150, 120, 60));
        VITest_Button_L2R2->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L2R2->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L3R1 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L3R1->setObjectName(QString::fromUtf8("VITest_Button_L3R1"));
        VITest_Button_L3R1->setGeometry(QRect(80, 260, 120, 60));
        VITest_Button_L3R1->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L3R1->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L3R3 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L3R3->setObjectName(QString::fromUtf8("VITest_Button_L3R3"));
        VITest_Button_L3R3->setGeometry(QRect(440, 260, 120, 60));
        VITest_Button_L3R3->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L3R3->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L3R4 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L3R4->setObjectName(QString::fromUtf8("VITest_Button_L3R4"));
        VITest_Button_L3R4->setGeometry(QRect(620, 260, 120, 60));
        VITest_Button_L3R4->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L3R4->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        VITest_Button_L3R2 = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_L3R2->setObjectName(QString::fromUtf8("VITest_Button_L3R2"));
        VITest_Button_L3R2->setGeometry(QRect(260, 260, 120, 60));
        VITest_Button_L3R2->setFocusPolicy(Qt::NoFocus);
        VITest_Button_L3R2->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));
        label = new QLabel(VehicleInstructionTestPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 370, 161, 51));
        label->setStyleSheet(QString::fromUtf8("font: 75 16px ;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        VITest_Button_TCUTest = new QPushButton(VehicleInstructionTestPage);
        VITest_Button_TCUTest->setObjectName(QString::fromUtf8("VITest_Button_TCUTest"));
        VITest_Button_TCUTest->setGeometry(QRect(80, 360, 120, 60));
        VITest_Button_TCUTest->setFocusPolicy(Qt::NoFocus);
        VITest_Button_TCUTest->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(255, 192, 0);\n"
"border:3px solid rgb(0, 0, 0);"));

        retranslateUi(VehicleInstructionTestPage);

        QMetaObject::connectSlotsByName(VehicleInstructionTestPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleInstructionTestPage)
    {
        VehicleInstructionTestPage->setWindowTitle(QApplication::translate("VehicleInstructionTestPage", "Form", 0, QApplication::UnicodeUTF8));
        VITest_background->setText(QString());
        VITest_Button_L1R1->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC1-1\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L1R2->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M1-1 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L1R3->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M2-1 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L1R4->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC2-1 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_prePage->setText(QApplication::translate("VehicleInstructionTestPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        VITest_Button_nextPage->setText(QApplication::translate("VehicleInstructionTestPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        VITest_Label_Page->setText(QString());
        VITest_Button_closePage->setText(QApplication::translate("VehicleInstructionTestPage", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        VITest_Button_L2R1->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC1-2\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L2R3->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M2-2 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L2R4->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC2-2 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L2R2->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M1-2 \345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        VITest_Button_L3R1->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC1 \346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        VITest_Button_L3R3->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M2 \346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        VITest_Button_L3R4->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"MC2 \346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        VITest_Button_L3R2->setText(QApplication::translate("VehicleInstructionTestPage", "\347\211\265\345\274\225\351\200\206\345\217\230\345\231\250\n"
"M1 \346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VehicleInstructionTestPage", "\345\244\215\344\275\215\346\214\211\351\224\256\346\212\254\350\265\267\345\211\215\n"
"\350\257\267\344\270\215\350\246\201\347\246\273\345\274\200\350\257\245\351\241\265\351\235\242", 0, QApplication::UnicodeUTF8));
        VITest_Button_TCUTest->setText(QApplication::translate("VehicleInstructionTestPage", "\345\215\225\346\250\241\345\235\227\n"
"\345\212\250\350\275\246\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleInstructionTestPage: public Ui_VehicleInstructionTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINSTRUCTIONTESTPAGE_H

/********************************************************************************
** Form generated from reading UI file 'vehicleparasetting.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEPARASETTING_H
#define UI_VEHICLEPARASETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleParaSetting
{
public:
    QLabel *VParaSetting_background;
    QPushButton *VParaSetting_Button_test;
    QPushButton *VParaSetting_Button_EditPW;
    QPushButton *VParaSetting_Button_Initset;
    QPushButton *VParaSetting_Button_IOpage;
    QPushButton *VParaSetting_Button_candataPage;
    QPushButton *VParaSetting_Button_visionlifesignal;
    QPushButton *VParaSetting_Button_factroyset;
    QPushButton *VParaSetting_Button_datetimeset;
    QPushButton *VParaSetting_Button_parasetting;
    QPushButton *VParaSetting_Button_HistoryFault;
    QPushButton *VParaSetting_Button_factorytest;

    void setupUi(QWidget *VehicleParaSetting)
    {
        if (VehicleParaSetting->objectName().isEmpty())
            VehicleParaSetting->setObjectName(QString::fromUtf8("VehicleParaSetting"));
        VehicleParaSetting->resize(800, 440);
        VParaSetting_background = new QLabel(VehicleParaSetting);
        VParaSetting_background->setObjectName(QString::fromUtf8("VParaSetting_background"));
        VParaSetting_background->setGeometry(QRect(0, 0, 800, 440));
        VParaSetting_background->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);"));
        VParaSetting_Button_test = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_test->setObjectName(QString::fromUtf8("VParaSetting_Button_test"));
        VParaSetting_Button_test->setGeometry(QRect(80, 50, 110, 40));
        VParaSetting_Button_test->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_test->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_EditPW = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_EditPW->setObjectName(QString::fromUtf8("VParaSetting_Button_EditPW"));
        VParaSetting_Button_EditPW->setGeometry(QRect(250, 50, 110, 40));
        VParaSetting_Button_EditPW->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_EditPW->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_Initset = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_Initset->setObjectName(QString::fromUtf8("VParaSetting_Button_Initset"));
        VParaSetting_Button_Initset->setGeometry(QRect(430, 50, 110, 40));
        VParaSetting_Button_Initset->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_Initset->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_IOpage = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_IOpage->setObjectName(QString::fromUtf8("VParaSetting_Button_IOpage"));
        VParaSetting_Button_IOpage->setGeometry(QRect(610, 50, 110, 40));
        VParaSetting_Button_IOpage->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_IOpage->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_candataPage = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_candataPage->setObjectName(QString::fromUtf8("VParaSetting_Button_candataPage"));
        VParaSetting_Button_candataPage->setGeometry(QRect(80, 120, 110, 40));
        VParaSetting_Button_candataPage->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_candataPage->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_visionlifesignal = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_visionlifesignal->setObjectName(QString::fromUtf8("VParaSetting_Button_visionlifesignal"));
        VParaSetting_Button_visionlifesignal->setGeometry(QRect(250, 120, 110, 40));
        VParaSetting_Button_visionlifesignal->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_visionlifesignal->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_factroyset = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_factroyset->setObjectName(QString::fromUtf8("VParaSetting_Button_factroyset"));
        VParaSetting_Button_factroyset->setGeometry(QRect(590, 320, 131, 40));
        VParaSetting_Button_factroyset->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_factroyset->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_datetimeset = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_datetimeset->setObjectName(QString::fromUtf8("VParaSetting_Button_datetimeset"));
        VParaSetting_Button_datetimeset->setGeometry(QRect(430, 120, 110, 40));
        VParaSetting_Button_datetimeset->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_datetimeset->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_parasetting = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_parasetting->setObjectName(QString::fromUtf8("VParaSetting_Button_parasetting"));
        VParaSetting_Button_parasetting->setGeometry(QRect(610, 120, 110, 40));
        VParaSetting_Button_parasetting->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_parasetting->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_HistoryFault = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_HistoryFault->setObjectName(QString::fromUtf8("VParaSetting_Button_HistoryFault"));
        VParaSetting_Button_HistoryFault->setGeometry(QRect(80, 190, 110, 40));
        VParaSetting_Button_HistoryFault->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_HistoryFault->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VParaSetting_Button_factorytest = new QPushButton(VehicleParaSetting);
        VParaSetting_Button_factorytest->setObjectName(QString::fromUtf8("VParaSetting_Button_factorytest"));
        VParaSetting_Button_factorytest->setGeometry(QRect(250, 190, 110, 40));
        VParaSetting_Button_factorytest->setFocusPolicy(Qt::NoFocus);
        VParaSetting_Button_factorytest->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));

        retranslateUi(VehicleParaSetting);

        QMetaObject::connectSlotsByName(VehicleParaSetting);
    } // setupUi

    void retranslateUi(QWidget *VehicleParaSetting)
    {
        VehicleParaSetting->setWindowTitle(QApplication::translate("VehicleParaSetting", "Form", 0, QApplication::UnicodeUTF8));
        VParaSetting_background->setText(QString());
        VParaSetting_Button_test->setText(QApplication::translate("VehicleParaSetting", "\346\214\207\344\273\244\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_EditPW->setText(QApplication::translate("VehicleParaSetting", "\345\257\206\347\240\201\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_Initset->setText(QApplication::translate("VehicleParaSetting", "\345\210\235\345\247\213\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_IOpage->setText(QApplication::translate("VehicleParaSetting", "\350\260\203\350\257\225\351\241\265\351\235\242", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_candataPage->setText(QApplication::translate("VehicleParaSetting", "\346\225\260\346\215\256\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_visionlifesignal->setText(QApplication::translate("VehicleParaSetting", "\347\211\210\346\234\254\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_factroyset->setText(QApplication::translate("VehicleParaSetting", "\345\207\272\345\216\202\346\265\213\350\257\225\346\214\211\351\222\256", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_datetimeset->setText(QApplication::translate("VehicleParaSetting", "\346\227\266\351\227\264\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_parasetting->setText(QApplication::translate("VehicleParaSetting", "\345\217\202\346\225\260\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_HistoryFault->setText(QApplication::translate("VehicleParaSetting", "\345\216\206\345\217\262\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        VParaSetting_Button_factorytest->setText(QApplication::translate("VehicleParaSetting", "\345\207\272\345\216\202\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleParaSetting: public Ui_VehicleParaSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEPARASETTING_H

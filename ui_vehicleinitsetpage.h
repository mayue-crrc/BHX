/********************************************************************************
** Form generated from reading UI file 'vehicleinitsetpage.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINITSETPAGE_H
#define UI_VEHICLEINITSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleInitsetPage
{
public:
    QLabel *VehicleInitsetPage_background;
    QPushButton *VehicleInitsetPage_Button_HMI1;
    QLabel *VehicleInitsetPage_HMIpos;
    QPushButton *VehicleInitsetPage_Button_HMI2;
    QPushButton *VehicleInitsetPage_Button_reboot;
    QPushButton *VehicleInitsetPage_Button_back;

    void setupUi(QWidget *VehicleInitsetPage)
    {
        if (VehicleInitsetPage->objectName().isEmpty())
            VehicleInitsetPage->setObjectName(QString::fromUtf8("VehicleInitsetPage"));
        VehicleInitsetPage->resize(800, 440);
        VehicleInitsetPage_background = new QLabel(VehicleInitsetPage);
        VehicleInitsetPage_background->setObjectName(QString::fromUtf8("VehicleInitsetPage_background"));
        VehicleInitsetPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleInitsetPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);"));
        VehicleInitsetPage_Button_HMI1 = new QPushButton(VehicleInitsetPage);
        VehicleInitsetPage_Button_HMI1->setObjectName(QString::fromUtf8("VehicleInitsetPage_Button_HMI1"));
        VehicleInitsetPage_Button_HMI1->setGeometry(QRect(40, 40, 161, 51));
        VehicleInitsetPage_Button_HMI1->setFocusPolicy(Qt::NoFocus);
        VehicleInitsetPage_Button_HMI1->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleInitsetPage_HMIpos = new QLabel(VehicleInitsetPage);
        VehicleInitsetPage_HMIpos->setObjectName(QString::fromUtf8("VehicleInitsetPage_HMIpos"));
        VehicleInitsetPage_HMIpos->setGeometry(QRect(110, 130, 261, 31));
        VehicleInitsetPage_HMIpos->setStyleSheet(QString::fromUtf8("font: 75  24px ;\n"
"color: rgb(255, 255, 0);"));
        VehicleInitsetPage_Button_HMI2 = new QPushButton(VehicleInitsetPage);
        VehicleInitsetPage_Button_HMI2->setObjectName(QString::fromUtf8("VehicleInitsetPage_Button_HMI2"));
        VehicleInitsetPage_Button_HMI2->setGeometry(QRect(290, 40, 161, 51));
        VehicleInitsetPage_Button_HMI2->setFocusPolicy(Qt::NoFocus);
        VehicleInitsetPage_Button_HMI2->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleInitsetPage_Button_reboot = new QPushButton(VehicleInitsetPage);
        VehicleInitsetPage_Button_reboot->setObjectName(QString::fromUtf8("VehicleInitsetPage_Button_reboot"));
        VehicleInitsetPage_Button_reboot->setGeometry(QRect(610, 40, 161, 51));
        VehicleInitsetPage_Button_reboot->setFocusPolicy(Qt::NoFocus);
        VehicleInitsetPage_Button_reboot->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleInitsetPage_Button_back = new QPushButton(VehicleInitsetPage);
        VehicleInitsetPage_Button_back->setObjectName(QString::fromUtf8("VehicleInitsetPage_Button_back"));
        VehicleInitsetPage_Button_back->setGeometry(QRect(630, 330, 121, 51));
        VehicleInitsetPage_Button_back->setFocusPolicy(Qt::NoFocus);
        VehicleInitsetPage_Button_back->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));

        retranslateUi(VehicleInitsetPage);

        QMetaObject::connectSlotsByName(VehicleInitsetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleInitsetPage)
    {
        VehicleInitsetPage->setWindowTitle(QApplication::translate("VehicleInitsetPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleInitsetPage_background->setText(QString());
        VehicleInitsetPage_Button_HMI1->setText(QApplication::translate("VehicleInitsetPage", "\350\256\276\347\275\256\344\270\272MC1\347\253\257", 0, QApplication::UnicodeUTF8));
        VehicleInitsetPage_HMIpos->setText(QString());
        VehicleInitsetPage_Button_HMI2->setText(QApplication::translate("VehicleInitsetPage", "\350\256\276\347\275\256\344\270\272MC2\347\253\257", 0, QApplication::UnicodeUTF8));
        VehicleInitsetPage_Button_reboot->setText(QApplication::translate("VehicleInitsetPage", "\351\207\215\345\220\257HMI", 0, QApplication::UnicodeUTF8));
        VehicleInitsetPage_Button_back->setText(QApplication::translate("VehicleInitsetPage", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleInitsetPage: public Ui_VehicleInitsetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINITSETPAGE_H

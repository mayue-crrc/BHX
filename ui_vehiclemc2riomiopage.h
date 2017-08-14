/********************************************************************************
** Form generated from reading UI file 'vehiclemc2riomiopage.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMC2RIOMIOPAGE_H
#define UI_VEHICLEMC2RIOMIOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleMC2RIOMIOPage
{
public:
    QLabel *VehicleMC2RIOMIOPage_background;
    QPushButton *VehicleMC2RIOMIOPage_button_M2;
    QPushButton *VehicleMC2RIOMIOPage_button_MC2;
    QPushButton *VehicleMC2RIOMIOPage_button_M1;
    QPushButton *VehicleMC2RIOMIOPage_button_nextpage;
    QPushButton *VehicleMC2RIOMIOPage_button_MC1;
    QPushButton *VehicleMC2RIOMIOPage_button_prepage;
    QPushButton *VehicleMC2RIOMIOPage_button_back;
    QLabel *VehicleMC2RIOMIOPage_Label_Page;

    void setupUi(QWidget *VehicleMC2RIOMIOPage)
    {
        if (VehicleMC2RIOMIOPage->objectName().isEmpty())
            VehicleMC2RIOMIOPage->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage"));
        VehicleMC2RIOMIOPage->resize(800, 520);
        VehicleMC2RIOMIOPage_background = new QLabel(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_background->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_background"));
        VehicleMC2RIOMIOPage_background->setGeometry(QRect(0, 0, 800, 520));
        VehicleMC2RIOMIOPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);"));
        VehicleMC2RIOMIOPage_button_M2 = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_M2->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_M2"));
        VehicleMC2RIOMIOPage_button_M2->setGeometry(QRect(230, 470, 81, 41));
        VehicleMC2RIOMIOPage_button_M2->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_M2->setStyleSheet(QString::fromUtf8(""));
        VehicleMC2RIOMIOPage_button_MC2 = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_MC2->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_MC2"));
        VehicleMC2RIOMIOPage_button_MC2->setGeometry(QRect(330, 470, 81, 41));
        VehicleMC2RIOMIOPage_button_MC2->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_MC2->setStyleSheet(QString::fromUtf8(""));
        VehicleMC2RIOMIOPage_button_M1 = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_M1->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_M1"));
        VehicleMC2RIOMIOPage_button_M1->setGeometry(QRect(130, 470, 81, 41));
        VehicleMC2RIOMIOPage_button_M1->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_M1->setStyleSheet(QString::fromUtf8(""));
        VehicleMC2RIOMIOPage_button_nextpage = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_nextpage->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_nextpage"));
        VehicleMC2RIOMIOPage_button_nextpage->setGeometry(QRect(640, 480, 71, 31));
        VehicleMC2RIOMIOPage_button_nextpage->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_nextpage->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleMC2RIOMIOPage_button_MC1 = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_MC1->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_MC1"));
        VehicleMC2RIOMIOPage_button_MC1->setGeometry(QRect(30, 470, 81, 41));
        VehicleMC2RIOMIOPage_button_MC1->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_MC1->setStyleSheet(QString::fromUtf8(""));
        VehicleMC2RIOMIOPage_button_prepage = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_prepage->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_prepage"));
        VehicleMC2RIOMIOPage_button_prepage->setGeometry(QRect(560, 480, 71, 31));
        VehicleMC2RIOMIOPage_button_prepage->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_prepage->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleMC2RIOMIOPage_button_back = new QPushButton(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_button_back->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_button_back"));
        VehicleMC2RIOMIOPage_button_back->setGeometry(QRect(720, 480, 71, 31));
        VehicleMC2RIOMIOPage_button_back->setFocusPolicy(Qt::NoFocus);
        VehicleMC2RIOMIOPage_button_back->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleMC2RIOMIOPage_Label_Page = new QLabel(VehicleMC2RIOMIOPage);
        VehicleMC2RIOMIOPage_Label_Page->setObjectName(QString::fromUtf8("VehicleMC2RIOMIOPage_Label_Page"));
        VehicleMC2RIOMIOPage_Label_Page->setGeometry(QRect(470, 480, 101, 31));
        VehicleMC2RIOMIOPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(VehicleMC2RIOMIOPage);

        QMetaObject::connectSlotsByName(VehicleMC2RIOMIOPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleMC2RIOMIOPage)
    {
        VehicleMC2RIOMIOPage->setWindowTitle(QApplication::translate("VehicleMC2RIOMIOPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_background->setText(QString());
        VehicleMC2RIOMIOPage_button_M2->setText(QApplication::translate("VehicleMC2RIOMIOPage", "M2", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_MC2->setText(QApplication::translate("VehicleMC2RIOMIOPage", "MC2", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_M1->setText(QApplication::translate("VehicleMC2RIOMIOPage", "M1", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_nextpage->setText(QApplication::translate("VehicleMC2RIOMIOPage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_MC1->setText(QApplication::translate("VehicleMC2RIOMIOPage", "MC1", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_prepage->setText(QApplication::translate("VehicleMC2RIOMIOPage", "\342\226\262", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_button_back->setText(QApplication::translate("VehicleMC2RIOMIOPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        VehicleMC2RIOMIOPage_Label_Page->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleMC2RIOMIOPage: public Ui_VehicleMC2RIOMIOPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMC2RIOMIOPAGE_H

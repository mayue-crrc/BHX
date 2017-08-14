/********************************************************************************
** Form generated from reading UI file 'vehicleriomiopage.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLERIOMIOPAGE_H
#define UI_VEHICLERIOMIOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleRIOMIOPage
{
public:
    QPushButton *VehicleRIOMIOPage_button_back;
    QPushButton *VehicleRIOMIOPage_button_prepage;
    QPushButton *VehicleRIOMIOPage_button_nextpage;
    QPushButton *VehicleRIOMIOPage_button_MC1;
    QPushButton *VehicleRIOMIOPage_button_M1;
    QPushButton *VehicleRIOMIOPage_button_M2;
    QPushButton *VehicleRIOMIOPage_button_MC2;
    QLabel *VehicleRIOMIOPage_Label_Page;
    QLabel *VehicleRIOMIOPage_background;

    void setupUi(QWidget *VehicleRIOMIOPage)
    {
        if (VehicleRIOMIOPage->objectName().isEmpty())
            VehicleRIOMIOPage->setObjectName(QString::fromUtf8("VehicleRIOMIOPage"));
        VehicleRIOMIOPage->resize(800, 520);
        VehicleRIOMIOPage_button_back = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_back->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_back"));
        VehicleRIOMIOPage_button_back->setGeometry(QRect(720, 480, 71, 31));
        VehicleRIOMIOPage_button_back->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_back->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleRIOMIOPage_button_prepage = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_prepage->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_prepage"));
        VehicleRIOMIOPage_button_prepage->setGeometry(QRect(560, 480, 71, 31));
        VehicleRIOMIOPage_button_prepage->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_prepage->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleRIOMIOPage_button_nextpage = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_nextpage->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_nextpage"));
        VehicleRIOMIOPage_button_nextpage->setGeometry(QRect(640, 480, 71, 31));
        VehicleRIOMIOPage_button_nextpage->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_nextpage->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleRIOMIOPage_button_MC1 = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_MC1->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_MC1"));
        VehicleRIOMIOPage_button_MC1->setGeometry(QRect(30, 470, 81, 41));
        VehicleRIOMIOPage_button_MC1->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_MC1->setStyleSheet(QString::fromUtf8(""));
        VehicleRIOMIOPage_button_M1 = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_M1->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_M1"));
        VehicleRIOMIOPage_button_M1->setGeometry(QRect(130, 470, 81, 41));
        VehicleRIOMIOPage_button_M1->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_M1->setStyleSheet(QString::fromUtf8(""));
        VehicleRIOMIOPage_button_M2 = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_M2->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_M2"));
        VehicleRIOMIOPage_button_M2->setGeometry(QRect(230, 470, 81, 41));
        VehicleRIOMIOPage_button_M2->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_M2->setStyleSheet(QString::fromUtf8(""));
        VehicleRIOMIOPage_button_MC2 = new QPushButton(VehicleRIOMIOPage);
        VehicleRIOMIOPage_button_MC2->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_button_MC2"));
        VehicleRIOMIOPage_button_MC2->setGeometry(QRect(330, 470, 81, 41));
        VehicleRIOMIOPage_button_MC2->setFocusPolicy(Qt::NoFocus);
        VehicleRIOMIOPage_button_MC2->setStyleSheet(QString::fromUtf8(""));
        VehicleRIOMIOPage_Label_Page = new QLabel(VehicleRIOMIOPage);
        VehicleRIOMIOPage_Label_Page->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_Label_Page"));
        VehicleRIOMIOPage_Label_Page->setGeometry(QRect(470, 480, 101, 31));
        VehicleRIOMIOPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"color: rgb(255, 255, 255);"));
        VehicleRIOMIOPage_background = new QLabel(VehicleRIOMIOPage);
        VehicleRIOMIOPage_background->setObjectName(QString::fromUtf8("VehicleRIOMIOPage_background"));
        VehicleRIOMIOPage_background->setGeometry(QRect(0, 0, 800, 520));
        VehicleRIOMIOPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);"));
        VehicleRIOMIOPage_background->raise();
        VehicleRIOMIOPage_button_back->raise();
        VehicleRIOMIOPage_button_prepage->raise();
        VehicleRIOMIOPage_button_nextpage->raise();
        VehicleRIOMIOPage_button_MC1->raise();
        VehicleRIOMIOPage_button_M1->raise();
        VehicleRIOMIOPage_button_M2->raise();
        VehicleRIOMIOPage_button_MC2->raise();
        VehicleRIOMIOPage_Label_Page->raise();

        retranslateUi(VehicleRIOMIOPage);

        QMetaObject::connectSlotsByName(VehicleRIOMIOPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleRIOMIOPage)
    {
        VehicleRIOMIOPage->setWindowTitle(QApplication::translate("VehicleRIOMIOPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_back->setText(QApplication::translate("VehicleRIOMIOPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_prepage->setText(QApplication::translate("VehicleRIOMIOPage", "\342\226\262", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_nextpage->setText(QApplication::translate("VehicleRIOMIOPage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_MC1->setText(QApplication::translate("VehicleRIOMIOPage", "MC1", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_M1->setText(QApplication::translate("VehicleRIOMIOPage", "M1", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_M2->setText(QApplication::translate("VehicleRIOMIOPage", "M2", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_button_MC2->setText(QApplication::translate("VehicleRIOMIOPage", "MC2", 0, QApplication::UnicodeUTF8));
        VehicleRIOMIOPage_Label_Page->setText(QString());
        VehicleRIOMIOPage_background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleRIOMIOPage: public Ui_VehicleRIOMIOPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLERIOMIOPAGE_H

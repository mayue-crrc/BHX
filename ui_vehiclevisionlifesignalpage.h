/********************************************************************************
** Form generated from reading UI file 'vehiclevisionlifesignalpage.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEVISIONLIFESIGNALPAGE_H
#define UI_VEHICLEVISIONLIFESIGNALPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleVisionLifesignalPage
{
public:
    QPushButton *VehicleVisionLifesignalPage_Button_back;
    QPushButton *VehicleVisionLifesignalPage_Button_prepage;
    QPushButton *VehicleVisionLifesignalPage_Button_nextpage;
    QLabel *VehicleVisionLifesignalPage_Label_Page;

    void setupUi(QWidget *VehicleVisionLifesignalPage)
    {
        if (VehicleVisionLifesignalPage->objectName().isEmpty())
            VehicleVisionLifesignalPage->setObjectName(QString::fromUtf8("VehicleVisionLifesignalPage"));
        VehicleVisionLifesignalPage->resize(800, 440);
        VehicleVisionLifesignalPage_Button_back = new QPushButton(VehicleVisionLifesignalPage);
        VehicleVisionLifesignalPage_Button_back->setObjectName(QString::fromUtf8("VehicleVisionLifesignalPage_Button_back"));
        VehicleVisionLifesignalPage_Button_back->setGeometry(QRect(740, 340, 50, 81));
        VehicleVisionLifesignalPage_Button_back->setFocusPolicy(Qt::NoFocus);
        VehicleVisionLifesignalPage_Button_back->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleVisionLifesignalPage_Button_prepage = new QPushButton(VehicleVisionLifesignalPage);
        VehicleVisionLifesignalPage_Button_prepage->setObjectName(QString::fromUtf8("VehicleVisionLifesignalPage_Button_prepage"));
        VehicleVisionLifesignalPage_Button_prepage->setGeometry(QRect(740, 91, 50, 50));
        VehicleVisionLifesignalPage_Button_prepage->setFocusPolicy(Qt::NoFocus);
        VehicleVisionLifesignalPage_Button_prepage->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleVisionLifesignalPage_Button_nextpage = new QPushButton(VehicleVisionLifesignalPage);
        VehicleVisionLifesignalPage_Button_nextpage->setObjectName(QString::fromUtf8("VehicleVisionLifesignalPage_Button_nextpage"));
        VehicleVisionLifesignalPage_Button_nextpage->setGeometry(QRect(740, 161, 50, 50));
        VehicleVisionLifesignalPage_Button_nextpage->setFocusPolicy(Qt::NoFocus);
        VehicleVisionLifesignalPage_Button_nextpage->setStyleSheet(QString::fromUtf8("font: 75  18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleVisionLifesignalPage_Label_Page = new QLabel(VehicleVisionLifesignalPage);
        VehicleVisionLifesignalPage_Label_Page->setObjectName(QString::fromUtf8("VehicleVisionLifesignalPage_Label_Page"));
        VehicleVisionLifesignalPage_Label_Page->setGeometry(QRect(740, 230, 50, 91));
        VehicleVisionLifesignalPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
""));
        VehicleVisionLifesignalPage_Label_Page->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleVisionLifesignalPage);

        QMetaObject::connectSlotsByName(VehicleVisionLifesignalPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleVisionLifesignalPage)
    {
        VehicleVisionLifesignalPage->setWindowTitle(QApplication::translate("VehicleVisionLifesignalPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleVisionLifesignalPage_Button_back->setText(QApplication::translate("VehicleVisionLifesignalPage", "\351\200\200\n"
"\345\207\272", 0, QApplication::UnicodeUTF8));
        VehicleVisionLifesignalPage_Button_prepage->setText(QApplication::translate("VehicleVisionLifesignalPage", "\342\226\262", 0, QApplication::UnicodeUTF8));
        VehicleVisionLifesignalPage_Button_nextpage->setText(QApplication::translate("VehicleVisionLifesignalPage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        VehicleVisionLifesignalPage_Label_Page->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleVisionLifesignalPage: public Ui_VehicleVisionLifesignalPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEVISIONLIFESIGNALPAGE_H

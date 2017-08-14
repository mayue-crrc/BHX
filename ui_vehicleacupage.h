/********************************************************************************
** Form generated from reading UI file 'vehicleacupage.ui'
**
** Created: Tue Jul 18 09:19:58 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEACUPAGE_H
#define UI_VEHICLEACUPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleACUPage
{
public:
    QLabel *VehicleACUPage_background;
    QLabel *VehicleACUPage_Label_Page;
    QPushButton *VehicleACUPage_Button_NextPage;
    QPushButton *VehicleACUPage_Button_PrePage;

    void setupUi(QWidget *VehicleACUPage)
    {
        if (VehicleACUPage->objectName().isEmpty())
            VehicleACUPage->setObjectName(QString::fromUtf8("VehicleACUPage"));
        VehicleACUPage->resize(800, 440);
        VehicleACUPage_background = new QLabel(VehicleACUPage);
        VehicleACUPage_background->setObjectName(QString::fromUtf8("VehicleACUPage_background"));
        VehicleACUPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleACUPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        VehicleACUPage_Label_Page = new QLabel(VehicleACUPage);
        VehicleACUPage_Label_Page->setObjectName(QString::fromUtf8("VehicleACUPage_Label_Page"));
        VehicleACUPage_Label_Page->setGeometry(QRect(380, 390, 131, 41));
        VehicleACUPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;"));
        VehicleACUPage_Button_NextPage = new QPushButton(VehicleACUPage);
        VehicleACUPage_Button_NextPage->setObjectName(QString::fromUtf8("VehicleACUPage_Button_NextPage"));
        VehicleACUPage_Button_NextPage->setGeometry(QRect(660, 395, 101, 31));
        VehicleACUPage_Button_NextPage->setFocusPolicy(Qt::NoFocus);
        VehicleACUPage_Button_NextPage->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        VehicleACUPage_Button_PrePage = new QPushButton(VehicleACUPage);
        VehicleACUPage_Button_PrePage->setObjectName(QString::fromUtf8("VehicleACUPage_Button_PrePage"));
        VehicleACUPage_Button_PrePage->setGeometry(QRect(540, 395, 101, 31));
        VehicleACUPage_Button_PrePage->setFocusPolicy(Qt::NoFocus);
        VehicleACUPage_Button_PrePage->setStyleSheet(QString::fromUtf8("font: 75 16px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));

        retranslateUi(VehicleACUPage);

        QMetaObject::connectSlotsByName(VehicleACUPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleACUPage)
    {
        VehicleACUPage->setWindowTitle(QApplication::translate("VehicleACUPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleACUPage_background->setText(QString());
        VehicleACUPage_Label_Page->setText(QString());
        VehicleACUPage_Button_NextPage->setText(QApplication::translate("VehicleACUPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        VehicleACUPage_Button_PrePage->setText(QApplication::translate("VehicleACUPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleACUPage: public Ui_VehicleACUPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEACUPAGE_H

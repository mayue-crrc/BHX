/********************************************************************************
** Form generated from reading UI file 'vehicletcupage.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLETCUPAGE_H
#define UI_VEHICLETCUPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleTCUPage
{
public:
    QLabel *VehicleTCUPage_background;
    QPushButton *VehicleTCUPage_Button_NextPage;
    QLabel *VehicleTCUPage_Label_Page;
    QPushButton *VehicleTCUPage_Button_PrePage;

    void setupUi(QWidget *VehicleTCUPage)
    {
        if (VehicleTCUPage->objectName().isEmpty())
            VehicleTCUPage->setObjectName(QString::fromUtf8("VehicleTCUPage"));
        VehicleTCUPage->resize(800, 440);
        VehicleTCUPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font:  14px;\n"
"	color: black;\n"
"	border:2px solid;\n"
"}"));
        VehicleTCUPage_background = new QLabel(VehicleTCUPage);
        VehicleTCUPage_background->setObjectName(QString::fromUtf8("VehicleTCUPage_background"));
        VehicleTCUPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleTCUPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);\n"
"border-color: rgb(216, 216, 216);"));
        VehicleTCUPage_Button_NextPage = new QPushButton(VehicleTCUPage);
        VehicleTCUPage_Button_NextPage->setObjectName(QString::fromUtf8("VehicleTCUPage_Button_NextPage"));
        VehicleTCUPage_Button_NextPage->setGeometry(QRect(660, 395, 101, 31));
        VehicleTCUPage_Button_NextPage->setFocusPolicy(Qt::NoFocus);
        VehicleTCUPage_Button_NextPage->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        VehicleTCUPage_Label_Page = new QLabel(VehicleTCUPage);
        VehicleTCUPage_Label_Page->setObjectName(QString::fromUtf8("VehicleTCUPage_Label_Page"));
        VehicleTCUPage_Label_Page->setGeometry(QRect(370, 390, 131, 41));
        VehicleTCUPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;\n"
"border-color: rgb(216, 216, 216);"));
        VehicleTCUPage_Button_PrePage = new QPushButton(VehicleTCUPage);
        VehicleTCUPage_Button_PrePage->setObjectName(QString::fromUtf8("VehicleTCUPage_Button_PrePage"));
        VehicleTCUPage_Button_PrePage->setGeometry(QRect(540, 395, 101, 31));
        VehicleTCUPage_Button_PrePage->setFocusPolicy(Qt::NoFocus);
        VehicleTCUPage_Button_PrePage->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));

        retranslateUi(VehicleTCUPage);

        QMetaObject::connectSlotsByName(VehicleTCUPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleTCUPage)
    {
        VehicleTCUPage->setWindowTitle(QApplication::translate("VehicleTCUPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleTCUPage_background->setText(QString());
        VehicleTCUPage_Button_NextPage->setText(QApplication::translate("VehicleTCUPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        VehicleTCUPage_Label_Page->setText(QString());
        VehicleTCUPage_Button_PrePage->setText(QApplication::translate("VehicleTCUPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleTCUPage: public Ui_VehicleTCUPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLETCUPAGE_H

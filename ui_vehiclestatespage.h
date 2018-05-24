/********************************************************************************
** Form generated from reading UI file 'vehiclestatespage.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESTATESPAGE_H
#define UI_VEHICLESTATESPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleStatesPage
{
public:
    QLabel *VehicleRunPage_background;
    QLabel *VehicleStatesPage_Label_Page;
    QPushButton *VehicleStatesPage_Button_NextPage;
    QPushButton *VehicleStatesPage_Button_PrePage;

    void setupUi(QWidget *VehicleStatesPage)
    {
        if (VehicleStatesPage->objectName().isEmpty())
            VehicleStatesPage->setObjectName(QString::fromUtf8("VehicleStatesPage"));
        VehicleStatesPage->resize(800, 440);
        VehicleStatesPage->setStyleSheet(QString::fromUtf8(""));
        VehicleRunPage_background = new QLabel(VehicleStatesPage);
        VehicleRunPage_background->setObjectName(QString::fromUtf8("VehicleRunPage_background"));
        VehicleRunPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleRunPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        VehicleStatesPage_Label_Page = new QLabel(VehicleStatesPage);
        VehicleStatesPage_Label_Page->setObjectName(QString::fromUtf8("VehicleStatesPage_Label_Page"));
        VehicleStatesPage_Label_Page->setGeometry(QRect(360, 390, 131, 41));
        VehicleStatesPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px;"));
        VehicleStatesPage_Button_NextPage = new QPushButton(VehicleStatesPage);
        VehicleStatesPage_Button_NextPage->setObjectName(QString::fromUtf8("VehicleStatesPage_Button_NextPage"));
        VehicleStatesPage_Button_NextPage->setGeometry(QRect(660, 395, 101, 31));
        VehicleStatesPage_Button_NextPage->setFocusPolicy(Qt::NoFocus);
        VehicleStatesPage_Button_NextPage->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        VehicleStatesPage_Button_PrePage = new QPushButton(VehicleStatesPage);
        VehicleStatesPage_Button_PrePage->setObjectName(QString::fromUtf8("VehicleStatesPage_Button_PrePage"));
        VehicleStatesPage_Button_PrePage->setGeometry(QRect(530, 395, 101, 31));
        VehicleStatesPage_Button_PrePage->setFocusPolicy(Qt::NoFocus);
        VehicleStatesPage_Button_PrePage->setStyleSheet(QString::fromUtf8("font: 75  16px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(216, 216, 216);\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));

        retranslateUi(VehicleStatesPage);

        QMetaObject::connectSlotsByName(VehicleStatesPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleStatesPage)
    {
        VehicleStatesPage->setWindowTitle(QApplication::translate("VehicleStatesPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleRunPage_background->setText(QString());
        VehicleStatesPage_Label_Page->setText(QString());
        VehicleStatesPage_Button_NextPage->setText(QApplication::translate("VehicleStatesPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        VehicleStatesPage_Button_PrePage->setText(QApplication::translate("VehicleStatesPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleStatesPage: public Ui_VehicleStatesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESTATESPAGE_H

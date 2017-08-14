/********************************************************************************
** Form generated from reading UI file 'vehiclealarmwidget.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEALARMWIDGET_H
#define UI_VEHICLEALARMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleAlarmWidget
{
public:
    QLabel *VA_background;
    QLabel *VA_text;
    QPushButton *pushButton;

    void setupUi(QWidget *VehicleAlarmWidget)
    {
        if (VehicleAlarmWidget->objectName().isEmpty())
            VehicleAlarmWidget->setObjectName(QString::fromUtf8("VehicleAlarmWidget"));
        VehicleAlarmWidget->resize(501, 200);
        VA_background = new QLabel(VehicleAlarmWidget);
        VA_background->setObjectName(QString::fromUtf8("VA_background"));
        VA_background->setGeometry(QRect(0, 0, 500, 200));
        VA_background->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        VA_text = new QLabel(VehicleAlarmWidget);
        VA_text->setObjectName(QString::fromUtf8("VA_text"));
        VA_text->setGeometry(QRect(50, 10, 400, 120));
        VA_text->setAutoFillBackground(false);
        VA_text->setStyleSheet(QString::fromUtf8("font: 75 20pt;\n"
""));
        VA_text->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(VehicleAlarmWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 150, 100, 40));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75  18px ;\n"
"background-color: rgb(179, 179, 179);\n"
"border:3px solid rgb(0, 0, 0);"));

        retranslateUi(VehicleAlarmWidget);

        QMetaObject::connectSlotsByName(VehicleAlarmWidget);
    } // setupUi

    void retranslateUi(QWidget *VehicleAlarmWidget)
    {
        VehicleAlarmWidget->setWindowTitle(QApplication::translate("VehicleAlarmWidget", "Form", 0, QApplication::UnicodeUTF8));
        VA_background->setText(QString());
        VA_text->setText(QString());
        pushButton->setText(QApplication::translate("VehicleAlarmWidget", "\347\241\256 \345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleAlarmWidget: public Ui_VehicleAlarmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEALARMWIDGET_H

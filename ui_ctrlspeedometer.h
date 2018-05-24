/********************************************************************************
** Form generated from reading UI file 'ctrlspeedometer.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLSPEEDOMETER_H
#define UI_CTRLSPEEDOMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlSpeedometer
{
public:

    void setupUi(QWidget *CtrlSpeedometer)
    {
        if (CtrlSpeedometer->objectName().isEmpty())
            CtrlSpeedometer->setObjectName(QString::fromUtf8("CtrlSpeedometer"));
        CtrlSpeedometer->resize(230, 230);

        retranslateUi(CtrlSpeedometer);

        QMetaObject::connectSlotsByName(CtrlSpeedometer);
    } // setupUi

    void retranslateUi(QWidget *CtrlSpeedometer)
    {
        CtrlSpeedometer->setWindowTitle(QApplication::translate("CtrlSpeedometer", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlSpeedometer: public Ui_CtrlSpeedometer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLSPEEDOMETER_H

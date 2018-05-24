/********************************************************************************
** Form generated from reading UI file 'warnningdialog.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNNINGDIALOG_H
#define UI_WARNNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarnningDialog
{
public:
    QLabel *WarnningDialog_background;
    QLabel *WarnningDialog_Label_str;
    QPushButton *WarnningDialog_Button_close;

    void setupUi(QWidget *WarnningDialog)
    {
        if (WarnningDialog->objectName().isEmpty())
            WarnningDialog->setObjectName(QString::fromUtf8("WarnningDialog"));
        WarnningDialog->resize(320, 240);
        WarnningDialog->setStyleSheet(QString::fromUtf8(""));
        WarnningDialog_background = new QLabel(WarnningDialog);
        WarnningDialog_background->setObjectName(QString::fromUtf8("WarnningDialog_background"));
        WarnningDialog_background->setGeometry(QRect(0, 0, 320, 240));
        WarnningDialog_background->setStyleSheet(QString::fromUtf8(""));
        WarnningDialog_Label_str = new QLabel(WarnningDialog);
        WarnningDialog_Label_str->setObjectName(QString::fromUtf8("WarnningDialog_Label_str"));
        WarnningDialog_Label_str->setGeometry(QRect(29, 29, 261, 91));
        WarnningDialog_Label_str->setStyleSheet(QString::fromUtf8("font: 75 bold 20px;\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(51, 153, 255);"));
        WarnningDialog_Label_str->setAlignment(Qt::AlignCenter);
        WarnningDialog_Button_close = new QPushButton(WarnningDialog);
        WarnningDialog_Button_close->setObjectName(QString::fromUtf8("WarnningDialog_Button_close"));
        WarnningDialog_Button_close->setGeometry(QRect(110, 170, 100, 40));
        WarnningDialog_Button_close->setFocusPolicy(Qt::NoFocus);
        WarnningDialog_Button_close->setStyleSheet(QString::fromUtf8("font: 75 bold 16px;\n"
"background-color: rgb(216, 216, 216);\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid rgb(0, 0, 0);\n"
""));

        retranslateUi(WarnningDialog);

        QMetaObject::connectSlotsByName(WarnningDialog);
    } // setupUi

    void retranslateUi(QWidget *WarnningDialog)
    {
        WarnningDialog->setWindowTitle(QApplication::translate("WarnningDialog", "Form", 0, QApplication::UnicodeUTF8));
        WarnningDialog_background->setText(QString());
        WarnningDialog_Label_str->setText(QString());
        WarnningDialog_Button_close->setText(QApplication::translate("WarnningDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WarnningDialog: public Ui_WarnningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNNINGDIALOG_H

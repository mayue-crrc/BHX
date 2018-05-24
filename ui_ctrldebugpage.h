/********************************************************************************
** Form generated from reading UI file 'ctrldebugpage.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLDEBUGPAGE_H
#define UI_CTRLDEBUGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlDebugPage
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEditbitoffset;
    QTextBrowser *textBrowser;
    QPushButton *pushButtonset;
    QPushButton *pushButtonclear;
    QLineEdit *lineEditport;
    QLineEdit *lineEditbyteoffset;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButtonreset;

    void setupUi(QWidget *CtrlDebugPage)
    {
        if (CtrlDebugPage->objectName().isEmpty())
            CtrlDebugPage->setObjectName(QString::fromUtf8("CtrlDebugPage"));
        CtrlDebugPage->resize(570, 220);
        radioButton = new QRadioButton(CtrlDebugPage);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(400, 80, 61, 22));
        radioButton_2 = new QRadioButton(CtrlDebugPage);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(400, 110, 61, 22));
        lineEditbitoffset = new QLineEdit(CtrlDebugPage);
        lineEditbitoffset->setObjectName(QString::fromUtf8("lineEditbitoffset"));
        lineEditbitoffset->setGeometry(QRect(350, 30, 181, 27));
        textBrowser = new QTextBrowser(CtrlDebugPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 70, 351, 130));
        pushButtonset = new QPushButton(CtrlDebugPage);
        pushButtonset->setObjectName(QString::fromUtf8("pushButtonset"));
        pushButtonset->setGeometry(QRect(390, 140, 161, 31));
        pushButtonclear = new QPushButton(CtrlDebugPage);
        pushButtonclear->setObjectName(QString::fromUtf8("pushButtonclear"));
        pushButtonclear->setGeometry(QRect(480, 180, 71, 31));
        lineEditport = new QLineEdit(CtrlDebugPage);
        lineEditport->setObjectName(QString::fromUtf8("lineEditport"));
        lineEditport->setGeometry(QRect(70, 30, 91, 27));
        lineEditbyteoffset = new QLineEdit(CtrlDebugPage);
        lineEditbyteoffset->setObjectName(QString::fromUtf8("lineEditbyteoffset"));
        lineEditbyteoffset->setGeometry(QRect(200, 30, 101, 27));
        label = new QLabel(CtrlDebugPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 41, 17));
        label_2 = new QLabel(CtrlDebugPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 10, 51, 20));
        radioButton_3 = new QRadioButton(CtrlDebugPage);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(490, 80, 61, 22));
        radioButton_4 = new QRadioButton(CtrlDebugPage);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(490, 110, 61, 22));
        pushButtonreset = new QPushButton(CtrlDebugPage);
        pushButtonreset->setObjectName(QString::fromUtf8("pushButtonreset"));
        pushButtonreset->setGeometry(QRect(390, 180, 71, 31));

        retranslateUi(CtrlDebugPage);

        QMetaObject::connectSlotsByName(CtrlDebugPage);
    } // setupUi

    void retranslateUi(QWidget *CtrlDebugPage)
    {
        CtrlDebugPage->setWindowTitle(QApplication::translate("CtrlDebugPage", "Form", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("CtrlDebugPage", "uchar", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("CtrlDebugPage", "bit", 0, QApplication::UnicodeUTF8));
        pushButtonset->setText(QApplication::translate("CtrlDebugPage", "set", 0, QApplication::UnicodeUTF8));
        pushButtonclear->setText(QApplication::translate("CtrlDebugPage", "clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CtrlDebugPage", "\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CtrlDebugPage", "\345\255\227\350\212\202\345\201\217\347\247\273", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("CtrlDebugPage", "uint", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("CtrlDebugPage", "int", 0, QApplication::UnicodeUTF8));
        pushButtonreset->setText(QApplication::translate("CtrlDebugPage", "reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlDebugPage: public Ui_CtrlDebugPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLDEBUGPAGE_H

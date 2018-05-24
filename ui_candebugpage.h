/********************************************************************************
** Form generated from reading UI file 'candebugpage.ui'
**
** Created: Sat Oct 14 09:26:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDEBUGPAGE_H
#define UI_CANDEBUGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CanDebugPage
{
public:
    QPushButton *CanDebugPage_Button_back;
    QPushButton *CanDebugPage_Button_prepage;
    QPushButton *CanDebugPage_Button_nextpage;
    QLabel *CanDebugPage_Label_Page;
    QLabel *CanDebugPage_label_mil;

    void setupUi(QWidget *CanDebugPage)
    {
        if (CanDebugPage->objectName().isEmpty())
            CanDebugPage->setObjectName(QString::fromUtf8("CanDebugPage"));
        CanDebugPage->resize(800, 440);
        CanDebugPage->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        CanDebugPage_Button_back = new QPushButton(CanDebugPage);
        CanDebugPage_Button_back->setObjectName(QString::fromUtf8("CanDebugPage_Button_back"));
        CanDebugPage_Button_back->setGeometry(QRect(740, 349, 50, 81));
        CanDebugPage_Button_back->setFocusPolicy(Qt::NoFocus);
        CanDebugPage_Button_back->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        CanDebugPage_Button_prepage = new QPushButton(CanDebugPage);
        CanDebugPage_Button_prepage->setObjectName(QString::fromUtf8("CanDebugPage_Button_prepage"));
        CanDebugPage_Button_prepage->setGeometry(QRect(740, 100, 50, 50));
        CanDebugPage_Button_prepage->setFocusPolicy(Qt::NoFocus);
        CanDebugPage_Button_prepage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        CanDebugPage_Button_nextpage = new QPushButton(CanDebugPage);
        CanDebugPage_Button_nextpage->setObjectName(QString::fromUtf8("CanDebugPage_Button_nextpage"));
        CanDebugPage_Button_nextpage->setGeometry(QRect(740, 170, 50, 50));
        CanDebugPage_Button_nextpage->setFocusPolicy(Qt::NoFocus);
        CanDebugPage_Button_nextpage->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        CanDebugPage_Label_Page = new QLabel(CanDebugPage);
        CanDebugPage_Label_Page->setObjectName(QString::fromUtf8("CanDebugPage_Label_Page"));
        CanDebugPage_Label_Page->setGeometry(QRect(740, 239, 50, 91));
        CanDebugPage_Label_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
""));
        CanDebugPage_Label_Page->setAlignment(Qt::AlignCenter);
        CanDebugPage_label_mil = new QLabel(CanDebugPage);
        CanDebugPage_label_mil->setObjectName(QString::fromUtf8("CanDebugPage_label_mil"));
        CanDebugPage_label_mil->setGeometry(QRect(725, 16, 71, 71));
        CanDebugPage_label_mil->setStyleSheet(QString::fromUtf8(""));
        CanDebugPage_label_mil->setAlignment(Qt::AlignCenter);
        CanDebugPage_Label_Page->raise();
        CanDebugPage_Button_back->raise();
        CanDebugPage_Button_prepage->raise();
        CanDebugPage_Button_nextpage->raise();
        CanDebugPage_label_mil->raise();

        retranslateUi(CanDebugPage);

        QMetaObject::connectSlotsByName(CanDebugPage);
    } // setupUi

    void retranslateUi(QWidget *CanDebugPage)
    {
        CanDebugPage->setWindowTitle(QApplication::translate("CanDebugPage", "Form", 0, QApplication::UnicodeUTF8));
        CanDebugPage_Button_back->setText(QApplication::translate("CanDebugPage", "\351\200\200\n"
"\345\207\272", 0, QApplication::UnicodeUTF8));
        CanDebugPage_Button_prepage->setText(QApplication::translate("CanDebugPage", "\342\226\262", 0, QApplication::UnicodeUTF8));
        CanDebugPage_Button_nextpage->setText(QApplication::translate("CanDebugPage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        CanDebugPage_Label_Page->setText(QString());
        CanDebugPage_label_mil->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CanDebugPage: public Ui_CanDebugPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDEBUGPAGE_H

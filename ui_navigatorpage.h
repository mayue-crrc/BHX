/********************************************************************************
** Form generated from reading UI file 'navigatorpage.ui'
**
** Created: Thu Jul 13 16:42:49 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATORPAGE_H
#define UI_NAVIGATORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigatorPage
{
public:
    QPushButton *NButton1;
    QPushButton *NButton2;
    QPushButton *NButton3;
    QPushButton *NButton4;
    QPushButton *NButton5;
    QPushButton *NButton6;
    QPushButton *NButton7;
    QPushButton *NButton8;
    QLabel *header_background;

    void setupUi(QWidget *NavigatorPage)
    {
        if (NavigatorPage->objectName().isEmpty())
            NavigatorPage->setObjectName(QString::fromUtf8("NavigatorPage"));
        NavigatorPage->resize(800, 80);
        NButton1 = new QPushButton(NavigatorPage);
        NButton1->setObjectName(QString::fromUtf8("NButton1"));
        NButton1->setGeometry(QRect(10, 10, 80, 60));
        NButton1->setFocusPolicy(Qt::NoFocus);
        NButton1->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton2 = new QPushButton(NavigatorPage);
        NButton2->setObjectName(QString::fromUtf8("NButton2"));
        NButton2->setGeometry(QRect(110, 10, 80, 60));
        NButton2->setFocusPolicy(Qt::NoFocus);
        NButton2->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton3 = new QPushButton(NavigatorPage);
        NButton3->setObjectName(QString::fromUtf8("NButton3"));
        NButton3->setGeometry(QRect(210, 10, 80, 60));
        NButton3->setFocusPolicy(Qt::NoFocus);
        NButton3->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton4 = new QPushButton(NavigatorPage);
        NButton4->setObjectName(QString::fromUtf8("NButton4"));
        NButton4->setGeometry(QRect(310, 10, 80, 60));
        NButton4->setFocusPolicy(Qt::NoFocus);
        NButton4->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton5 = new QPushButton(NavigatorPage);
        NButton5->setObjectName(QString::fromUtf8("NButton5"));
        NButton5->setGeometry(QRect(410, 10, 80, 60));
        NButton5->setFocusPolicy(Qt::NoFocus);
        NButton5->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton6 = new QPushButton(NavigatorPage);
        NButton6->setObjectName(QString::fromUtf8("NButton6"));
        NButton6->setGeometry(QRect(610, 10, 80, 60));
        NButton6->setFocusPolicy(Qt::NoFocus);
        NButton6->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton7 = new QPushButton(NavigatorPage);
        NButton7->setObjectName(QString::fromUtf8("NButton7"));
        NButton7->setGeometry(QRect(510, 10, 80, 60));
        NButton7->setFocusPolicy(Qt::NoFocus);
        NButton7->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton8 = new QPushButton(NavigatorPage);
        NButton8->setObjectName(QString::fromUtf8("NButton8"));
        NButton8->setGeometry(QRect(710, 10, 80, 60));
        NButton8->setFocusPolicy(Qt::NoFocus);
        NButton8->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        header_background = new QLabel(NavigatorPage);
        header_background->setObjectName(QString::fromUtf8("header_background"));
        header_background->setGeometry(QRect(0, 0, 800, 80));
        header_background->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        header_background->raise();
        NButton1->raise();
        NButton2->raise();
        NButton3->raise();
        NButton4->raise();
        NButton5->raise();
        NButton6->raise();
        NButton7->raise();
        NButton8->raise();

        retranslateUi(NavigatorPage);

        QMetaObject::connectSlotsByName(NavigatorPage);
    } // setupUi

    void retranslateUi(QWidget *NavigatorPage)
    {
        NavigatorPage->setWindowTitle(QApplication::translate("NavigatorPage", "Form", 0, QApplication::UnicodeUTF8));
        NButton1->setText(QApplication::translate("NavigatorPage", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        NButton2->setText(QApplication::translate("NavigatorPage", "\350\275\246\350\276\206", 0, QApplication::UnicodeUTF8));
        NButton3->setText(QApplication::translate("NavigatorPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        NButton4->setText(QApplication::translate("NavigatorPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        NButton5->setText(QApplication::translate("NavigatorPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        NButton6->setText(QApplication::translate("NavigatorPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        NButton7->setText(QApplication::translate("NavigatorPage", "\350\275\246\351\227\250 ", 0, QApplication::UnicodeUTF8));
        NButton8->setText(QApplication::translate("NavigatorPage", "\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        header_background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NavigatorPage: public Ui_NavigatorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATORPAGE_H

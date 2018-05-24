/********************************************************************************
** Form generated from reading UI file 'ctrltraindiagram.ui'
**
** Created: Sat Oct 14 09:26:48 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLTRAINDIAGRAM_H
#define UI_CTRLTRAINDIAGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlTrainDiagram
{
public:
    QLabel *TrainCtrl_label_train;
    QLabel *labelline1;
    QLabel *labelline1_2;
    QLabel *labelline1_3;
    QLabel *labelline1_4;
    QLabel *labelline1_5;
    QLabel *TrainCtrl_label_MC1Door1;
    QLabel *TrainCtrl_label_MC1Door2;
    QLabel *TrainCtrl_label_MC1Door3;
    QLabel *TrainCtrl_label_MC1Door4;
    QLabel *TrainCtrl_label_MC1Door8;
    QLabel *TrainCtrl_label_MC1Door7;
    QLabel *TrainCtrl_label_MC1Door6;
    QLabel *TrainCtrl_label_MC1Door5;
    QLabel *TrainCtrl_label_MC2Door7;
    QLabel *TrainCtrl_label_MC2Door6;
    QLabel *TrainCtrl_label_MC2Door5;
    QLabel *TrainCtrl_label_MC2Door8;
    QLabel *TrainCtrl_label_MC2Door2;
    QLabel *TrainCtrl_label_MC2Door3;
    QLabel *TrainCtrl_label_MC2Door4;
    QLabel *TrainCtrl_label_MC2Door1;
    QLabel *labelbackground;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *TrainCtrl_label_MC1Brake;
    QLabel *TrainCtrl_label_TC1Brake;
    QLabel *TrainCtrl_label_M1Brake;
    QLabel *TrainCtrl_label_M2Brake;
    QLabel *TrainCtrl_label_TC2Brake;
    QLabel *TrainCtrl_label_MC2Brake;
    QLabel *TrainCtrl_label_NET;
    QLabel *TrainCtrl_label_MC1active;
    QLabel *TrainCtrl_label_MC2active;
    QLabel *TrainCtrl_label_MC1MRLS;
    QLabel *TrainCtrl_label_M1MRLS;
    QLabel *TrainCtrl_label_M2MRLS;
    QLabel *TrainCtrl_label_MC2MRLS;

    void setupUi(QWidget *CtrlTrainDiagram)
    {
        if (CtrlTrainDiagram->objectName().isEmpty())
            CtrlTrainDiagram->setObjectName(QString::fromUtf8("CtrlTrainDiagram"));
        CtrlTrainDiagram->resize(480, 180);
        TrainCtrl_label_train = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_train->setObjectName(QString::fromUtf8("TrainCtrl_label_train"));
        TrainCtrl_label_train->setGeometry(QRect(10, 60, 441, 81));
        TrainCtrl_label_train->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(133, 133, 133);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_train->setScaledContents(true);
        labelline1 = new QLabel(CtrlTrainDiagram);
        labelline1->setObjectName(QString::fromUtf8("labelline1"));
        labelline1->setGeometry(QRect(110, 60, 2, 83));
        labelline1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelline1_2 = new QLabel(CtrlTrainDiagram);
        labelline1_2->setObjectName(QString::fromUtf8("labelline1_2"));
        labelline1_2->setGeometry(QRect(150, 60, 2, 83));
        labelline1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelline1_3 = new QLabel(CtrlTrainDiagram);
        labelline1_3->setObjectName(QString::fromUtf8("labelline1_3"));
        labelline1_3->setGeometry(QRect(230, 60, 2, 83));
        labelline1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelline1_4 = new QLabel(CtrlTrainDiagram);
        labelline1_4->setObjectName(QString::fromUtf8("labelline1_4"));
        labelline1_4->setGeometry(QRect(310, 60, 2, 83));
        labelline1_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelline1_5 = new QLabel(CtrlTrainDiagram);
        labelline1_5->setObjectName(QString::fromUtf8("labelline1_5"));
        labelline1_5->setGeometry(QRect(350, 60, 2, 83));
        labelline1_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        TrainCtrl_label_MC1Door1 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door1->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door1"));
        TrainCtrl_label_MC1Door1->setGeometry(QRect(40, 60, 20, 20));
        TrainCtrl_label_MC1Door1->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door1->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door2 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door2->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door2"));
        TrainCtrl_label_MC1Door2->setGeometry(QRect(40, 120, 20, 20));
        TrainCtrl_label_MC1Door2->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door2->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door3 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door3->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door3"));
        TrainCtrl_label_MC1Door3->setGeometry(QRect(80, 60, 20, 20));
        TrainCtrl_label_MC1Door3->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door4 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door4->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door4"));
        TrainCtrl_label_MC1Door4->setGeometry(QRect(80, 120, 20, 20));
        TrainCtrl_label_MC1Door4->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door8 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door8->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door8"));
        TrainCtrl_label_MC1Door8->setGeometry(QRect(200, 120, 20, 20));
        TrainCtrl_label_MC1Door8->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door8->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door7 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door7->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door7"));
        TrainCtrl_label_MC1Door7->setGeometry(QRect(200, 60, 20, 20));
        TrainCtrl_label_MC1Door7->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door7->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door6 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door6->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door6"));
        TrainCtrl_label_MC1Door6->setGeometry(QRect(160, 120, 20, 20));
        TrainCtrl_label_MC1Door6->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door6->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC1Door5 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Door5->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Door5"));
        TrainCtrl_label_MC1Door5->setGeometry(QRect(160, 60, 20, 20));
        TrainCtrl_label_MC1Door5->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC1Door5->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door7 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door7->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door7"));
        TrainCtrl_label_MC2Door7->setGeometry(QRect(240, 120, 20, 20));
        TrainCtrl_label_MC2Door7->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door6 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door6->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door6"));
        TrainCtrl_label_MC2Door6->setGeometry(QRect(280, 60, 20, 20));
        TrainCtrl_label_MC2Door6->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door5 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door5->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door5"));
        TrainCtrl_label_MC2Door5->setGeometry(QRect(280, 120, 20, 20));
        TrainCtrl_label_MC2Door5->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door8 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door8->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door8"));
        TrainCtrl_label_MC2Door8->setGeometry(QRect(240, 60, 20, 20));
        TrainCtrl_label_MC2Door8->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC2Door8->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door2 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door2->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door2"));
        TrainCtrl_label_MC2Door2->setGeometry(QRect(400, 60, 20, 20));
        TrainCtrl_label_MC2Door2->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC2Door2->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door3 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door3->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door3"));
        TrainCtrl_label_MC2Door3->setGeometry(QRect(360, 120, 20, 20));
        TrainCtrl_label_MC2Door3->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC2Door3->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door4 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door4->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door4"));
        TrainCtrl_label_MC2Door4->setGeometry(QRect(360, 60, 20, 20));
        TrainCtrl_label_MC2Door4->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC2Door4->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2Door1 = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Door1->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Door1"));
        TrainCtrl_label_MC2Door1->setGeometry(QRect(400, 120, 20, 20));
        TrainCtrl_label_MC2Door1->setStyleSheet(QString::fromUtf8(""));
        TrainCtrl_label_MC2Door1->setAlignment(Qt::AlignCenter);
        labelbackground = new QLabel(CtrlTrainDiagram);
        labelbackground->setObjectName(QString::fromUtf8("labelbackground"));
        labelbackground->setGeometry(QRect(8, 58, 445, 85));
        labelbackground->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border:2px;\n"
"background-color: rgb(0, 0, 0);\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label = new QLabel(CtrlTrainDiagram);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 41, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        label_2 = new QLabel(CtrlTrainDiagram);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(115, 150, 41, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        label_3 = new QLabel(CtrlTrainDiagram);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 150, 41, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        label_4 = new QLabel(CtrlTrainDiagram);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(315, 150, 41, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        label_5 = new QLabel(CtrlTrainDiagram);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 150, 41, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        label_6 = new QLabel(CtrlTrainDiagram);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 150, 41, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 18px;\n"
""));
        TrainCtrl_label_MC1Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1Brake"));
        TrainCtrl_label_MC1Brake->setGeometry(QRect(60, 90, 20, 20));
        TrainCtrl_label_MC1Brake->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_TC1Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_TC1Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_TC1Brake"));
        TrainCtrl_label_TC1Brake->setGeometry(QRect(120, 90, 20, 20));
        TrainCtrl_label_TC1Brake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_M1Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_M1Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_M1Brake"));
        TrainCtrl_label_M1Brake->setGeometry(QRect(180, 90, 20, 20));
        TrainCtrl_label_M1Brake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_M2Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_M2Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_M2Brake"));
        TrainCtrl_label_M2Brake->setGeometry(QRect(260, 90, 20, 20));
        TrainCtrl_label_M2Brake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_TC2Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_TC2Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_TC2Brake"));
        TrainCtrl_label_TC2Brake->setGeometry(QRect(320, 90, 20, 20));
        TrainCtrl_label_TC2Brake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_MC2Brake = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2Brake->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2Brake"));
        TrainCtrl_label_MC2Brake->setGeometry(QRect(380, 90, 20, 20));
        TrainCtrl_label_MC2Brake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border:2px;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        TrainCtrl_label_NET = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_NET->setObjectName(QString::fromUtf8("TrainCtrl_label_NET"));
        TrainCtrl_label_NET->setGeometry(QRect(20, 9, 425, 3));
        TrainCtrl_label_NET->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        TrainCtrl_label_MC1active = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1active->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1active"));
        TrainCtrl_label_MC1active->setGeometry(QRect(10, 90, 41, 21));
        TrainCtrl_label_MC1active->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/MC1Active.bmp);"));
        TrainCtrl_label_MC2active = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2active->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2active"));
        TrainCtrl_label_MC2active->setGeometry(QRect(410, 90, 41, 21));
        TrainCtrl_label_MC2active->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/MC2Active.bmp);"));
        TrainCtrl_label_MC1MRLS = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC1MRLS->setObjectName(QString::fromUtf8("TrainCtrl_label_MC1MRLS"));
        TrainCtrl_label_MC1MRLS->setGeometry(QRect(60, 120, 21, 21));
        TrainCtrl_label_MC1MRLS->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/warning.bmp);"));
        TrainCtrl_label_MC1MRLS->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_M1MRLS = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_M1MRLS->setObjectName(QString::fromUtf8("TrainCtrl_label_M1MRLS"));
        TrainCtrl_label_M1MRLS->setGeometry(QRect(180, 120, 21, 21));
        TrainCtrl_label_M1MRLS->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/warning.bmp);"));
        TrainCtrl_label_M1MRLS->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_M2MRLS = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_M2MRLS->setObjectName(QString::fromUtf8("TrainCtrl_label_M2MRLS"));
        TrainCtrl_label_M2MRLS->setGeometry(QRect(260, 120, 21, 21));
        TrainCtrl_label_M2MRLS->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/warning.bmp);"));
        TrainCtrl_label_M2MRLS->setAlignment(Qt::AlignCenter);
        TrainCtrl_label_MC2MRLS = new QLabel(CtrlTrainDiagram);
        TrainCtrl_label_MC2MRLS->setObjectName(QString::fromUtf8("TrainCtrl_label_MC2MRLS"));
        TrainCtrl_label_MC2MRLS->setGeometry(QRect(380, 120, 21, 21));
        TrainCtrl_label_MC2MRLS->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/warning.bmp);"));
        TrainCtrl_label_MC2MRLS->setAlignment(Qt::AlignCenter);
        labelbackground->raise();
        TrainCtrl_label_train->raise();
        labelline1->raise();
        labelline1_2->raise();
        labelline1_3->raise();
        labelline1_4->raise();
        labelline1_5->raise();
        TrainCtrl_label_MC1Door1->raise();
        TrainCtrl_label_MC1Door2->raise();
        TrainCtrl_label_MC1Door3->raise();
        TrainCtrl_label_MC1Door4->raise();
        TrainCtrl_label_MC1Door8->raise();
        TrainCtrl_label_MC1Door7->raise();
        TrainCtrl_label_MC1Door6->raise();
        TrainCtrl_label_MC1Door5->raise();
        TrainCtrl_label_MC2Door7->raise();
        TrainCtrl_label_MC2Door6->raise();
        TrainCtrl_label_MC2Door5->raise();
        TrainCtrl_label_MC2Door8->raise();
        TrainCtrl_label_MC2Door2->raise();
        TrainCtrl_label_MC2Door3->raise();
        TrainCtrl_label_MC2Door4->raise();
        TrainCtrl_label_MC2Door1->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        TrainCtrl_label_MC1Brake->raise();
        TrainCtrl_label_TC1Brake->raise();
        TrainCtrl_label_M1Brake->raise();
        TrainCtrl_label_M2Brake->raise();
        TrainCtrl_label_TC2Brake->raise();
        TrainCtrl_label_MC2Brake->raise();
        TrainCtrl_label_NET->raise();
        TrainCtrl_label_MC1active->raise();
        TrainCtrl_label_MC2active->raise();
        TrainCtrl_label_MC1MRLS->raise();
        TrainCtrl_label_M1MRLS->raise();
        TrainCtrl_label_M2MRLS->raise();
        TrainCtrl_label_MC2MRLS->raise();

        retranslateUi(CtrlTrainDiagram);

        QMetaObject::connectSlotsByName(CtrlTrainDiagram);
    } // setupUi

    void retranslateUi(QWidget *CtrlTrainDiagram)
    {
        CtrlTrainDiagram->setWindowTitle(QApplication::translate("CtrlTrainDiagram", "Form", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_train->setText(QString());
        labelline1->setText(QString());
        labelline1_2->setText(QString());
        labelline1_3->setText(QString());
        labelline1_4->setText(QString());
        labelline1_5->setText(QString());
        TrainCtrl_label_MC1Door1->setText(QApplication::translate("CtrlTrainDiagram", "1", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door2->setText(QApplication::translate("CtrlTrainDiagram", "2", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door3->setText(QApplication::translate("CtrlTrainDiagram", "3", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door4->setText(QApplication::translate("CtrlTrainDiagram", "4", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door8->setText(QApplication::translate("CtrlTrainDiagram", "8", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door7->setText(QApplication::translate("CtrlTrainDiagram", "7", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door6->setText(QApplication::translate("CtrlTrainDiagram", "6", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Door5->setText(QApplication::translate("CtrlTrainDiagram", "5", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door7->setText(QApplication::translate("CtrlTrainDiagram", "7", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door6->setText(QApplication::translate("CtrlTrainDiagram", "6", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door5->setText(QApplication::translate("CtrlTrainDiagram", "5", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door8->setText(QApplication::translate("CtrlTrainDiagram", "8", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door2->setText(QApplication::translate("CtrlTrainDiagram", "2", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door3->setText(QApplication::translate("CtrlTrainDiagram", "3", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door4->setText(QApplication::translate("CtrlTrainDiagram", "4", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC2Door1->setText(QApplication::translate("CtrlTrainDiagram", "1", 0, QApplication::UnicodeUTF8));
        labelbackground->setText(QString());
        label->setText(QApplication::translate("CtrlTrainDiagram", "MC1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CtrlTrainDiagram", "TP1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CtrlTrainDiagram", "M1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CtrlTrainDiagram", "TP2", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CtrlTrainDiagram", "MC2", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CtrlTrainDiagram", "M2", 0, QApplication::UnicodeUTF8));
        TrainCtrl_label_MC1Brake->setText(QString());
        TrainCtrl_label_TC1Brake->setText(QString());
        TrainCtrl_label_M1Brake->setText(QString());
        TrainCtrl_label_M2Brake->setText(QString());
        TrainCtrl_label_TC2Brake->setText(QString());
        TrainCtrl_label_MC2Brake->setText(QString());
        TrainCtrl_label_NET->setText(QString());
        TrainCtrl_label_MC1active->setText(QString());
        TrainCtrl_label_MC2active->setText(QString());
        TrainCtrl_label_MC1MRLS->setText(QString());
        TrainCtrl_label_M1MRLS->setText(QString());
        TrainCtrl_label_M2MRLS->setText(QString());
        TrainCtrl_label_MC2MRLS->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CtrlTrainDiagram: public Ui_CtrlTrainDiagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLTRAINDIAGRAM_H

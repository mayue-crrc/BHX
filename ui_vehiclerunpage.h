/********************************************************************************
** Form generated from reading UI file 'vehiclerunpage.ui'
**
** Created: Tue Apr 17 14:22:21 2018
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLERUNPAGE_H
#define UI_VEHICLERUNPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleRunPage
{
public:
    QLabel *VehicleRun_background;
    QLabel *VRun_label_totalmil;
    QLabel *VRun_label_todaymil;
    QLabel *VRun_label_TCUState1;
    QLabel *VRun_label_TCUState2;
    QLabel *VRun_label_TCUState3;
    QLabel *VRun_label_TCUState4;
    QLabel *VRun_label_ACUState1;
    QLabel *VRun_label_ACUState2;
    QLabel *VRun_label_ACUState3;
    QLabel *VRun_label_ACUState4;
    QLabel *VRun_label_HVACState3;
    QLabel *VRun_label_HVACState2;
    QLabel *VRun_label_HVACState1;
    QLabel *VRun_label_HVACState4;
    QLabel *VRun_label_BCUState2;
    QLabel *VRun_label_BCUState5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *VRun_label_MC1ERM;
    QLabel *VRun_label_MC1S3;
    QLabel *VRun_label_MC1S4;
    QLabel *VRun_label_MC1HMI;
    QLabel *VRun_label_M1S2;
    QLabel *VRun_label_M1S4;
    QLabel *VRun_label_M1S3;
    QLabel *VRun_label_M1S1;
    QLabel *VRun_label_M2S2;
    QLabel *VRun_label_M2S4;
    QLabel *VRun_label_M2S3;
    QLabel *VRun_label_M2S1;
    QLabel *VRun_label_MC2HMI;
    QLabel *VRun_label_MC2S4;
    QLabel *VRun_label_MC2S3;
    QLabel *VRun_label_MC2ERM;
    QLabel *VRun_label_MC1VCU;
    QLabel *VRun_label_MC2VCU;
    QLabel *VehicleRun_forward;
    QLabel *VehicleRun_backward;
    QLabel *VRun_label_RECState2;
    QLabel *VRun_label_RECState3;
    QLabel *VRun_label_RECState4;
    QLabel *VRun_label_RECState1;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *VRun_label_MC1S1;
    QLabel *VRun_label_MC1S2;
    QLabel *VRun_label_MC2S2;
    QLabel *VRun_label_MC2S1;
    QLabel *VRun_label_TP1S1;
    QLabel *VRun_label_TP2S1;
    QLabel *VRun_label_TCUState1_2;
    QLabel *VRun_label_TCUState2_2;
    QLabel *VRun_label_TCUState3_2;
    QLabel *VRun_label_TCUState4_2;
    QLabel *VRun_label_MC1PIS;
    QLabel *VRun_label_MC2PIS;
    QLabel *VRun_label_BCUState1;
    QLabel *VRun_label_BCUState3;
    QLabel *VRun_label_BCUState4;
    QLabel *VRun_label_BCUState6;
    QLabel *VRun_label_faultpos;
    QLabel *VRun_label_faultdevice;
    QLabel *VRun_label_faultname;
    QPushButton *VRun_btn_confirm;
    QPushButton *VRun_btn_confirmall;
    QLabel *VRun_label_flip;
    QLabel *VRun_label_ATC1;
    QLabel *VRun_label_ATC2;
    QLabel *VRun_label_bypassALL;
    QLabel *VRun_label_bypass0speed;
    QLabel *VRun_label_bypassATCEDCU;
    QLabel *VRun_label_bypassEDCU;

    void setupUi(QWidget *VehicleRunPage)
    {
        if (VehicleRunPage->objectName().isEmpty())
            VehicleRunPage->setObjectName(QString::fromUtf8("VehicleRunPage"));
        VehicleRunPage->resize(800, 440);
        VehicleRunPage->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 145, 255);"));
        VehicleRun_background = new QLabel(VehicleRunPage);
        VehicleRun_background->setObjectName(QString::fromUtf8("VehicleRun_background"));
        VehicleRun_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleRun_background->setAlignment(Qt::AlignCenter);
        VRun_label_totalmil = new QLabel(VehicleRunPage);
        VRun_label_totalmil->setObjectName(QString::fromUtf8("VRun_label_totalmil"));
        VRun_label_totalmil->setGeometry(QRect(90, 370, 171, 31));
        VRun_label_totalmil->setStyleSheet(QString::fromUtf8("font: 75 15px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        VRun_label_todaymil = new QLabel(VehicleRunPage);
        VRun_label_todaymil->setObjectName(QString::fromUtf8("VRun_label_todaymil"));
        VRun_label_todaymil->setGeometry(QRect(90, 400, 171, 31));
        VRun_label_todaymil->setStyleSheet(QString::fromUtf8("font: 75 15px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        VRun_label_TCUState1 = new QLabel(VehicleRunPage);
        VRun_label_TCUState1->setObjectName(QString::fromUtf8("VRun_label_TCUState1"));
        VRun_label_TCUState1->setGeometry(QRect(320, 210, 31, 21));
        VRun_label_TCUState1->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState1->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState2 = new QLabel(VehicleRunPage);
        VRun_label_TCUState2->setObjectName(QString::fromUtf8("VRun_label_TCUState2"));
        VRun_label_TCUState2->setGeometry(QRect(425, 210, 31, 21));
        VRun_label_TCUState2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState2->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState3 = new QLabel(VehicleRunPage);
        VRun_label_TCUState3->setObjectName(QString::fromUtf8("VRun_label_TCUState3"));
        VRun_label_TCUState3->setGeometry(QRect(540, 210, 31, 21));
        VRun_label_TCUState3->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState3->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState4 = new QLabel(VehicleRunPage);
        VRun_label_TCUState4->setObjectName(QString::fromUtf8("VRun_label_TCUState4"));
        VRun_label_TCUState4->setGeometry(QRect(650, 210, 31, 21));
        VRun_label_TCUState4->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState4->setAlignment(Qt::AlignCenter);
        VRun_label_ACUState1 = new QLabel(VehicleRunPage);
        VRun_label_ACUState1->setObjectName(QString::fromUtf8("VRun_label_ACUState1"));
        VRun_label_ACUState1->setGeometry(QRect(334, 240, 31, 21));
        VRun_label_ACUState1->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ACUState1->setAlignment(Qt::AlignCenter);
        VRun_label_ACUState2 = new QLabel(VehicleRunPage);
        VRun_label_ACUState2->setObjectName(QString::fromUtf8("VRun_label_ACUState2"));
        VRun_label_ACUState2->setGeometry(QRect(445, 240, 31, 21));
        VRun_label_ACUState2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ACUState2->setAlignment(Qt::AlignCenter);
        VRun_label_ACUState3 = new QLabel(VehicleRunPage);
        VRun_label_ACUState3->setObjectName(QString::fromUtf8("VRun_label_ACUState3"));
        VRun_label_ACUState3->setGeometry(QRect(549, 240, 31, 21));
        VRun_label_ACUState3->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ACUState3->setAlignment(Qt::AlignCenter);
        VRun_label_ACUState4 = new QLabel(VehicleRunPage);
        VRun_label_ACUState4->setObjectName(QString::fromUtf8("VRun_label_ACUState4"));
        VRun_label_ACUState4->setGeometry(QRect(665, 240, 31, 21));
        VRun_label_ACUState4->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ACUState4->setAlignment(Qt::AlignCenter);
        VRun_label_HVACState3 = new QLabel(VehicleRunPage);
        VRun_label_HVACState3->setObjectName(QString::fromUtf8("VRun_label_HVACState3"));
        VRun_label_HVACState3->setGeometry(QRect(549, 270, 31, 21));
        VRun_label_HVACState3->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_HVACState3->setAlignment(Qt::AlignCenter);
        VRun_label_HVACState2 = new QLabel(VehicleRunPage);
        VRun_label_HVACState2->setObjectName(QString::fromUtf8("VRun_label_HVACState2"));
        VRun_label_HVACState2->setGeometry(QRect(445, 270, 31, 21));
        VRun_label_HVACState2->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_HVACState2->setAlignment(Qt::AlignCenter);
        VRun_label_HVACState1 = new QLabel(VehicleRunPage);
        VRun_label_HVACState1->setObjectName(QString::fromUtf8("VRun_label_HVACState1"));
        VRun_label_HVACState1->setGeometry(QRect(334, 270, 31, 21));
        VRun_label_HVACState1->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_HVACState1->setAlignment(Qt::AlignCenter);
        VRun_label_HVACState4 = new QLabel(VehicleRunPage);
        VRun_label_HVACState4->setObjectName(QString::fromUtf8("VRun_label_HVACState4"));
        VRun_label_HVACState4->setGeometry(QRect(665, 270, 31, 21));
        VRun_label_HVACState4->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_HVACState4->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState2 = new QLabel(VehicleRunPage);
        VRun_label_BCUState2->setObjectName(QString::fromUtf8("VRun_label_BCUState2"));
        VRun_label_BCUState2->setGeometry(QRect(390, 324, 31, 21));
        VRun_label_BCUState2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState2->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState5 = new QLabel(VehicleRunPage);
        VRun_label_BCUState5->setObjectName(QString::fromUtf8("VRun_label_BCUState5"));
        VRun_label_BCUState5->setGeometry(QRect(610, 324, 31, 21));
        VRun_label_BCUState5->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState5->setAlignment(Qt::AlignCenter);
        label = new QLabel(VehicleRunPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 220, 430, 3));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_2 = new QLabel(VehicleRunPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 250, 430, 3));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_4 = new QLabel(VehicleRunPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 280, 430, 3));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_5 = new QLabel(VehicleRunPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 334, 430, 3));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_6 = new QLabel(VehicleRunPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 370, 430, 3));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        VRun_label_MC1ERM = new QLabel(VehicleRunPage);
        VRun_label_MC1ERM->setObjectName(QString::fromUtf8("VRun_label_MC1ERM"));
        VRun_label_MC1ERM->setGeometry(QRect(290, 350, 31, 22));
        VRun_label_MC1ERM->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1ERM->setAlignment(Qt::AlignCenter);
        VRun_label_MC1S3 = new QLabel(VehicleRunPage);
        VRun_label_MC1S3->setObjectName(QString::fromUtf8("VRun_label_MC1S3"));
        VRun_label_MC1S3->setGeometry(QRect(290, 370, 31, 22));
        VRun_label_MC1S3->setStyleSheet(QString::fromUtf8("font:8px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1S3->setAlignment(Qt::AlignCenter);
        VRun_label_MC1S4 = new QLabel(VehicleRunPage);
        VRun_label_MC1S4->setObjectName(QString::fromUtf8("VRun_label_MC1S4"));
        VRun_label_MC1S4->setGeometry(QRect(350, 370, 31, 22));
        VRun_label_MC1S4->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1S4->setAlignment(Qt::AlignCenter);
        VRun_label_MC1HMI = new QLabel(VehicleRunPage);
        VRun_label_MC1HMI->setObjectName(QString::fromUtf8("VRun_label_MC1HMI"));
        VRun_label_MC1HMI->setGeometry(QRect(260, 370, 31, 22));
        VRun_label_MC1HMI->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1HMI->setAlignment(Qt::AlignCenter);
        VRun_label_M1S2 = new QLabel(VehicleRunPage);
        VRun_label_M1S2->setObjectName(QString::fromUtf8("VRun_label_M1S2"));
        VRun_label_M1S2->setGeometry(QRect(470, 350, 31, 22));
        VRun_label_M1S2->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M1S2->setAlignment(Qt::AlignCenter);
        VRun_label_M1S4 = new QLabel(VehicleRunPage);
        VRun_label_M1S4->setObjectName(QString::fromUtf8("VRun_label_M1S4"));
        VRun_label_M1S4->setGeometry(QRect(470, 370, 31, 22));
        VRun_label_M1S4->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M1S4->setAlignment(Qt::AlignCenter);
        VRun_label_M1S3 = new QLabel(VehicleRunPage);
        VRun_label_M1S3->setObjectName(QString::fromUtf8("VRun_label_M1S3"));
        VRun_label_M1S3->setGeometry(QRect(440, 370, 31, 22));
        VRun_label_M1S3->setStyleSheet(QString::fromUtf8("font: 8px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M1S3->setAlignment(Qt::AlignCenter);
        VRun_label_M1S1 = new QLabel(VehicleRunPage);
        VRun_label_M1S1->setObjectName(QString::fromUtf8("VRun_label_M1S1"));
        VRun_label_M1S1->setGeometry(QRect(440, 350, 31, 22));
        VRun_label_M1S1->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M1S1->setAlignment(Qt::AlignCenter);
        VRun_label_M2S2 = new QLabel(VehicleRunPage);
        VRun_label_M2S2->setObjectName(QString::fromUtf8("VRun_label_M2S2"));
        VRun_label_M2S2->setGeometry(QRect(560, 350, 31, 22));
        VRun_label_M2S2->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M2S2->setAlignment(Qt::AlignCenter);
        VRun_label_M2S4 = new QLabel(VehicleRunPage);
        VRun_label_M2S4->setObjectName(QString::fromUtf8("VRun_label_M2S4"));
        VRun_label_M2S4->setGeometry(QRect(560, 370, 31, 22));
        VRun_label_M2S4->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M2S4->setAlignment(Qt::AlignCenter);
        VRun_label_M2S3 = new QLabel(VehicleRunPage);
        VRun_label_M2S3->setObjectName(QString::fromUtf8("VRun_label_M2S3"));
        VRun_label_M2S3->setGeometry(QRect(530, 370, 31, 22));
        VRun_label_M2S3->setStyleSheet(QString::fromUtf8("font: 8px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M2S3->setAlignment(Qt::AlignCenter);
        VRun_label_M2S1 = new QLabel(VehicleRunPage);
        VRun_label_M2S1->setObjectName(QString::fromUtf8("VRun_label_M2S1"));
        VRun_label_M2S1->setGeometry(QRect(530, 350, 31, 22));
        VRun_label_M2S1->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_M2S1->setAlignment(Qt::AlignCenter);
        VRun_label_MC2HMI = new QLabel(VehicleRunPage);
        VRun_label_MC2HMI->setObjectName(QString::fromUtf8("VRun_label_MC2HMI"));
        VRun_label_MC2HMI->setGeometry(QRect(740, 370, 31, 22));
        VRun_label_MC2HMI->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2HMI->setAlignment(Qt::AlignCenter);
        VRun_label_MC2S4 = new QLabel(VehicleRunPage);
        VRun_label_MC2S4->setObjectName(QString::fromUtf8("VRun_label_MC2S4"));
        VRun_label_MC2S4->setGeometry(QRect(650, 370, 31, 22));
        VRun_label_MC2S4->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2S4->setAlignment(Qt::AlignCenter);
        VRun_label_MC2S3 = new QLabel(VehicleRunPage);
        VRun_label_MC2S3->setObjectName(QString::fromUtf8("VRun_label_MC2S3"));
        VRun_label_MC2S3->setGeometry(QRect(710, 370, 31, 22));
        VRun_label_MC2S3->setStyleSheet(QString::fromUtf8("font: 8px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2S3->setAlignment(Qt::AlignCenter);
        VRun_label_MC2ERM = new QLabel(VehicleRunPage);
        VRun_label_MC2ERM->setObjectName(QString::fromUtf8("VRun_label_MC2ERM"));
        VRun_label_MC2ERM->setGeometry(QRect(710, 350, 31, 22));
        VRun_label_MC2ERM->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2ERM->setAlignment(Qt::AlignCenter);
        VRun_label_MC1VCU = new QLabel(VehicleRunPage);
        VRun_label_MC1VCU->setObjectName(QString::fromUtf8("VRun_label_MC1VCU"));
        VRun_label_MC1VCU->setGeometry(QRect(260, 350, 31, 21));
        VRun_label_MC1VCU->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1VCU->setAlignment(Qt::AlignCenter);
        VRun_label_MC2VCU = new QLabel(VehicleRunPage);
        VRun_label_MC2VCU->setObjectName(QString::fromUtf8("VRun_label_MC2VCU"));
        VRun_label_MC2VCU->setGeometry(QRect(740, 350, 31, 21));
        VRun_label_MC2VCU->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2VCU->setAlignment(Qt::AlignCenter);
        VehicleRun_forward = new QLabel(VehicleRunPage);
        VehicleRun_forward->setObjectName(QString::fromUtf8("VehicleRun_forward"));
        VehicleRun_forward->setGeometry(QRect(300, 180, 71, 21));
        VehicleRun_forward->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/Arrow_Left.PNG);"));
        VehicleRun_backward = new QLabel(VehicleRunPage);
        VehicleRun_backward->setObjectName(QString::fromUtf8("VehicleRun_backward"));
        VehicleRun_backward->setGeometry(QRect(650, 180, 71, 21));
        VehicleRun_backward->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/Arrow_Right.PNG);"));
        VRun_label_RECState2 = new QLabel(VehicleRunPage);
        VRun_label_RECState2->setObjectName(QString::fromUtf8("VRun_label_RECState2"));
        VRun_label_RECState2->setGeometry(QRect(445, 300, 31, 21));
        VRun_label_RECState2->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_RECState2->setAlignment(Qt::AlignCenter);
        VRun_label_RECState3 = new QLabel(VehicleRunPage);
        VRun_label_RECState3->setObjectName(QString::fromUtf8("VRun_label_RECState3"));
        VRun_label_RECState3->setGeometry(QRect(549, 300, 31, 21));
        VRun_label_RECState3->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_RECState3->setAlignment(Qt::AlignCenter);
        VRun_label_RECState4 = new QLabel(VehicleRunPage);
        VRun_label_RECState4->setObjectName(QString::fromUtf8("VRun_label_RECState4"));
        VRun_label_RECState4->setGeometry(QRect(665, 300, 31, 21));
        VRun_label_RECState4->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_RECState4->setAlignment(Qt::AlignCenter);
        VRun_label_RECState1 = new QLabel(VehicleRunPage);
        VRun_label_RECState1->setObjectName(QString::fromUtf8("VRun_label_RECState1"));
        VRun_label_RECState1->setGeometry(QRect(334, 300, 31, 21));
        VRun_label_RECState1->setStyleSheet(QString::fromUtf8("font: 13px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_RECState1->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(VehicleRunPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 310, 430, 3));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        label_8 = new QLabel(VehicleRunPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 210, 41, 17));
        label_8->setStyleSheet(QString::fromUtf8("font:  16px;"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(VehicleRunPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(490, 240, 41, 17));
        label_9->setStyleSheet(QString::fromUtf8("font:  16px;"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(VehicleRunPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 270, 41, 17));
        label_10->setStyleSheet(QString::fromUtf8("font:  16px;"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(VehicleRunPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(485, 300, 51, 17));
        label_11->setStyleSheet(QString::fromUtf8("font:  16px;"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(VehicleRunPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 330, 41, 17));
        label_12->setStyleSheet(QString::fromUtf8("font:  16px;"));
        label_12->setAlignment(Qt::AlignCenter);
        VRun_label_MC1S1 = new QLabel(VehicleRunPage);
        VRun_label_MC1S1->setObjectName(QString::fromUtf8("VRun_label_MC1S1"));
        VRun_label_MC1S1->setGeometry(QRect(320, 350, 31, 22));
        VRun_label_MC1S1->setStyleSheet(QString::fromUtf8("font:12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1S1->setAlignment(Qt::AlignCenter);
        VRun_label_MC1S2 = new QLabel(VehicleRunPage);
        VRun_label_MC1S2->setObjectName(QString::fromUtf8("VRun_label_MC1S2"));
        VRun_label_MC1S2->setGeometry(QRect(350, 350, 31, 22));
        VRun_label_MC1S2->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1S2->setAlignment(Qt::AlignCenter);
        VRun_label_MC2S2 = new QLabel(VehicleRunPage);
        VRun_label_MC2S2->setObjectName(QString::fromUtf8("VRun_label_MC2S2"));
        VRun_label_MC2S2->setGeometry(QRect(680, 350, 31, 22));
        VRun_label_MC2S2->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2S2->setAlignment(Qt::AlignCenter);
        VRun_label_MC2S1 = new QLabel(VehicleRunPage);
        VRun_label_MC2S1->setObjectName(QString::fromUtf8("VRun_label_MC2S1"));
        VRun_label_MC2S1->setGeometry(QRect(650, 350, 31, 22));
        VRun_label_MC2S1->setStyleSheet(QString::fromUtf8("font:12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2S1->setAlignment(Qt::AlignCenter);
        VRun_label_TP1S1 = new QLabel(VehicleRunPage);
        VRun_label_TP1S1->setObjectName(QString::fromUtf8("VRun_label_TP1S1"));
        VRun_label_TP1S1->setGeometry(QRect(400, 360, 31, 22));
        VRun_label_TP1S1->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TP1S1->setAlignment(Qt::AlignCenter);
        VRun_label_TP2S1 = new QLabel(VehicleRunPage);
        VRun_label_TP2S1->setObjectName(QString::fromUtf8("VRun_label_TP2S1"));
        VRun_label_TP2S1->setGeometry(QRect(600, 360, 31, 22));
        VRun_label_TP2S1->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TP2S1->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState1_2 = new QLabel(VehicleRunPage);
        VRun_label_TCUState1_2->setObjectName(QString::fromUtf8("VRun_label_TCUState1_2"));
        VRun_label_TCUState1_2->setGeometry(QRect(350, 210, 31, 21));
        VRun_label_TCUState1_2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState1_2->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState2_2 = new QLabel(VehicleRunPage);
        VRun_label_TCUState2_2->setObjectName(QString::fromUtf8("VRun_label_TCUState2_2"));
        VRun_label_TCUState2_2->setGeometry(QRect(455, 210, 31, 21));
        VRun_label_TCUState2_2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState2_2->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState3_2 = new QLabel(VehicleRunPage);
        VRun_label_TCUState3_2->setObjectName(QString::fromUtf8("VRun_label_TCUState3_2"));
        VRun_label_TCUState3_2->setGeometry(QRect(570, 210, 31, 21));
        VRun_label_TCUState3_2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState3_2->setAlignment(Qt::AlignCenter);
        VRun_label_TCUState4_2 = new QLabel(VehicleRunPage);
        VRun_label_TCUState4_2->setObjectName(QString::fromUtf8("VRun_label_TCUState4_2"));
        VRun_label_TCUState4_2->setGeometry(QRect(680, 210, 31, 21));
        VRun_label_TCUState4_2->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_TCUState4_2->setAlignment(Qt::AlignCenter);
        VRun_label_MC1PIS = new QLabel(VehicleRunPage);
        VRun_label_MC1PIS->setObjectName(QString::fromUtf8("VRun_label_MC1PIS"));
        VRun_label_MC1PIS->setGeometry(QRect(320, 370, 31, 22));
        VRun_label_MC1PIS->setStyleSheet(QString::fromUtf8("font:12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC1PIS->setAlignment(Qt::AlignCenter);
        VRun_label_MC2PIS = new QLabel(VehicleRunPage);
        VRun_label_MC2PIS->setObjectName(QString::fromUtf8("VRun_label_MC2PIS"));
        VRun_label_MC2PIS->setGeometry(QRect(680, 370, 31, 22));
        VRun_label_MC2PIS->setStyleSheet(QString::fromUtf8("font:12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_MC2PIS->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState1 = new QLabel(VehicleRunPage);
        VRun_label_BCUState1->setObjectName(QString::fromUtf8("VRun_label_BCUState1"));
        VRun_label_BCUState1->setGeometry(QRect(334, 324, 31, 21));
        VRun_label_BCUState1->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState1->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState3 = new QLabel(VehicleRunPage);
        VRun_label_BCUState3->setObjectName(QString::fromUtf8("VRun_label_BCUState3"));
        VRun_label_BCUState3->setGeometry(QRect(445, 324, 31, 21));
        VRun_label_BCUState3->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState3->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState4 = new QLabel(VehicleRunPage);
        VRun_label_BCUState4->setObjectName(QString::fromUtf8("VRun_label_BCUState4"));
        VRun_label_BCUState4->setGeometry(QRect(549, 324, 31, 21));
        VRun_label_BCUState4->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState4->setAlignment(Qt::AlignCenter);
        VRun_label_BCUState6 = new QLabel(VehicleRunPage);
        VRun_label_BCUState6->setObjectName(QString::fromUtf8("VRun_label_BCUState6"));
        VRun_label_BCUState6->setGeometry(QRect(665, 324, 31, 21));
        VRun_label_BCUState6->setStyleSheet(QString::fromUtf8("font: 14px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_BCUState6->setAlignment(Qt::AlignCenter);
        VRun_label_faultpos = new QLabel(VehicleRunPage);
        VRun_label_faultpos->setObjectName(QString::fromUtf8("VRun_label_faultpos"));
        VRun_label_faultpos->setGeometry(QRect(262, 400, 51, 35));
        VRun_label_faultpos->setStyleSheet(QString::fromUtf8("font: 75 14px;\n"
"color: rgb(0, 0, 0);\n"
"background-color:white;\n"
"border:2px solid black\n"
""));
        VRun_label_faultdevice = new QLabel(VehicleRunPage);
        VRun_label_faultdevice->setObjectName(QString::fromUtf8("VRun_label_faultdevice"));
        VRun_label_faultdevice->setGeometry(QRect(312, 400, 51, 35));
        VRun_label_faultdevice->setStyleSheet(QString::fromUtf8("font: 75 14px;\n"
"color: rgb(0, 0, 0);\n"
"background-color:white;\n"
"border:2px solid black\n"
""));
        VRun_label_faultname = new QLabel(VehicleRunPage);
        VRun_label_faultname->setObjectName(QString::fromUtf8("VRun_label_faultname"));
        VRun_label_faultname->setGeometry(QRect(362, 400, 321, 35));
        VRun_label_faultname->setStyleSheet(QString::fromUtf8("font: 75 14px;\n"
"color: rgb(0, 0, 0);\n"
"background-color:white;\n"
"border:2px solid black\n"
""));
        VRun_btn_confirm = new QPushButton(VehicleRunPage);
        VRun_btn_confirm->setObjectName(QString::fromUtf8("VRun_btn_confirm"));
        VRun_btn_confirm->setGeometry(QRect(682, 400, 40, 35));
        VRun_btn_confirm->setFocusPolicy(Qt::NoFocus);
        VRun_btn_confirm->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color:white;\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        VRun_btn_confirmall = new QPushButton(VehicleRunPage);
        VRun_btn_confirmall->setObjectName(QString::fromUtf8("VRun_btn_confirmall"));
        VRun_btn_confirmall->setGeometry(QRect(720, 400, 72, 35));
        VRun_btn_confirmall->setFocusPolicy(Qt::NoFocus);
        VRun_btn_confirmall->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: white;\n"
"border:2px solid black;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        VRun_label_flip = new QLabel(VehicleRunPage);
        VRun_label_flip->setObjectName(QString::fromUtf8("VRun_label_flip"));
        VRun_label_flip->setGeometry(QRect(230, 250, 71, 81));
        VRun_label_flip->setStyleSheet(QString::fromUtf8("font: 75 24px;\n"
"color: rgb(255, 0, 0);\n"
"background-color:yellow;\n"
"border-radius:20px solid black\n"
""));
        VRun_label_flip->setAlignment(Qt::AlignCenter);
        VRun_label_ATC1 = new QLabel(VehicleRunPage);
        VRun_label_ATC1->setObjectName(QString::fromUtf8("VRun_label_ATC1"));
        VRun_label_ATC1->setGeometry(QRect(380, 350, 16, 42));
        VRun_label_ATC1->setStyleSheet(QString::fromUtf8("font: 10px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ATC1->setAlignment(Qt::AlignCenter);
        VRun_label_ATC2 = new QLabel(VehicleRunPage);
        VRun_label_ATC2->setObjectName(QString::fromUtf8("VRun_label_ATC2"));
        VRun_label_ATC2->setGeometry(QRect(638, 350, 16, 42));
        VRun_label_ATC2->setStyleSheet(QString::fromUtf8("font: 10px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"));
        VRun_label_ATC2->setAlignment(Qt::AlignCenter);
        VRun_label_bypassALL = new QLabel(VehicleRunPage);
        VRun_label_bypassALL->setObjectName(QString::fromUtf8("VRun_label_bypassALL"));
        VRun_label_bypassALL->setGeometry(QRect(735, 240, 61, 31));
        VRun_label_bypassALL->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"background-color:yellow;\n"
"border-radius:10px solid black"));
        VRun_label_bypassALL->setAlignment(Qt::AlignCenter);
        VRun_label_bypass0speed = new QLabel(VehicleRunPage);
        VRun_label_bypass0speed->setObjectName(QString::fromUtf8("VRun_label_bypass0speed"));
        VRun_label_bypass0speed->setGeometry(QRect(735, 275, 61, 31));
        VRun_label_bypass0speed->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"background-color:yellow;\n"
"border-radius:10px solid black"));
        VRun_label_bypass0speed->setAlignment(Qt::AlignCenter);
        VRun_label_bypassATCEDCU = new QLabel(VehicleRunPage);
        VRun_label_bypassATCEDCU->setObjectName(QString::fromUtf8("VRun_label_bypassATCEDCU"));
        VRun_label_bypassATCEDCU->setGeometry(QRect(735, 310, 61, 31));
        VRun_label_bypassATCEDCU->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"background-color:yellow;\n"
"border-radius:10px solid black"));
        VRun_label_bypassATCEDCU->setAlignment(Qt::AlignCenter);
        VRun_label_bypassEDCU = new QLabel(VehicleRunPage);
        VRun_label_bypassEDCU->setObjectName(QString::fromUtf8("VRun_label_bypassEDCU"));
        VRun_label_bypassEDCU->setGeometry(QRect(735, 205, 61, 31));
        VRun_label_bypassEDCU->setStyleSheet(QString::fromUtf8("font: 12px, \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"background-color:yellow;\n"
"border-radius:10px solid black"));
        VRun_label_bypassEDCU->setAlignment(Qt::AlignCenter);
        VehicleRun_background->raise();
        label_5->raise();
        label_4->raise();
        label->raise();
        label_6->raise();
        label_2->raise();
        label_7->raise();
        VRun_label_totalmil->raise();
        VRun_label_todaymil->raise();
        VRun_label_TCUState1->raise();
        VRun_label_TCUState2->raise();
        VRun_label_TCUState3->raise();
        VRun_label_TCUState4->raise();
        VRun_label_ACUState1->raise();
        VRun_label_ACUState2->raise();
        VRun_label_ACUState3->raise();
        VRun_label_ACUState4->raise();
        VRun_label_HVACState3->raise();
        VRun_label_HVACState2->raise();
        VRun_label_HVACState1->raise();
        VRun_label_HVACState4->raise();
        VRun_label_BCUState2->raise();
        VRun_label_BCUState5->raise();
        VRun_label_MC1ERM->raise();
        VRun_label_MC1S3->raise();
        VRun_label_MC1S4->raise();
        VRun_label_MC1HMI->raise();
        VRun_label_M1S2->raise();
        VRun_label_M1S4->raise();
        VRun_label_M1S3->raise();
        VRun_label_M1S1->raise();
        VRun_label_M2S2->raise();
        VRun_label_M2S4->raise();
        VRun_label_M2S3->raise();
        VRun_label_M2S1->raise();
        VRun_label_MC2HMI->raise();
        VRun_label_MC2S4->raise();
        VRun_label_MC2S3->raise();
        VRun_label_MC2ERM->raise();
        VRun_label_MC1VCU->raise();
        VRun_label_MC2VCU->raise();
        VehicleRun_forward->raise();
        VehicleRun_backward->raise();
        VRun_label_RECState2->raise();
        VRun_label_RECState3->raise();
        VRun_label_RECState4->raise();
        VRun_label_RECState1->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        VRun_label_MC1S1->raise();
        VRun_label_MC1S2->raise();
        VRun_label_MC2S2->raise();
        VRun_label_MC2S1->raise();
        VRun_label_TP1S1->raise();
        VRun_label_TP2S1->raise();
        VRun_label_TCUState1_2->raise();
        VRun_label_TCUState2_2->raise();
        VRun_label_TCUState3_2->raise();
        VRun_label_TCUState4_2->raise();
        VRun_label_MC1PIS->raise();
        VRun_label_MC2PIS->raise();
        VRun_label_BCUState1->raise();
        VRun_label_BCUState3->raise();
        VRun_label_BCUState4->raise();
        VRun_label_BCUState6->raise();
        VRun_label_faultpos->raise();
        VRun_label_faultdevice->raise();
        VRun_label_faultname->raise();
        VRun_btn_confirm->raise();
        VRun_btn_confirmall->raise();
        VRun_label_flip->raise();
        VRun_label_ATC1->raise();
        VRun_label_ATC2->raise();
        VRun_label_bypassALL->raise();
        VRun_label_bypass0speed->raise();
        VRun_label_bypassATCEDCU->raise();
        VRun_label_bypassEDCU->raise();

        retranslateUi(VehicleRunPage);

        QMetaObject::connectSlotsByName(VehicleRunPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleRunPage)
    {
        VehicleRunPage->setWindowTitle(QApplication::translate("VehicleRunPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleRun_background->setText(QString());
        VRun_label_totalmil->setText(QString());
        VRun_label_todaymil->setText(QString());
        VRun_label_TCUState1->setText(QApplication::translate("VehicleRunPage", "1", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState2->setText(QApplication::translate("VehicleRunPage", "1", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState3->setText(QApplication::translate("VehicleRunPage", "1", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState4->setText(QApplication::translate("VehicleRunPage", "1", 0, QApplication::UnicodeUTF8));
        VRun_label_ACUState1->setText(QString());
        VRun_label_ACUState2->setText(QString());
        VRun_label_ACUState3->setText(QString());
        VRun_label_ACUState4->setText(QString());
        VRun_label_HVACState3->setText(QString());
        VRun_label_HVACState2->setText(QString());
        VRun_label_HVACState1->setText(QString());
        VRun_label_HVACState4->setText(QString());
        VRun_label_BCUState2->setText(QString());
        VRun_label_BCUState5->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        VRun_label_MC1ERM->setText(QApplication::translate("VehicleRunPage", "ERM", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1S3->setText(QApplication::translate("VehicleRunPage", "RIOM", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1S4->setText(QApplication::translate("VehicleRunPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1HMI->setText(QApplication::translate("VehicleRunPage", "HMI", 0, QApplication::UnicodeUTF8));
        VRun_label_M1S2->setText(QApplication::translate("VehicleRunPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        VRun_label_M1S4->setText(QApplication::translate("VehicleRunPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        VRun_label_M1S3->setText(QApplication::translate("VehicleRunPage", "RIOM", 0, QApplication::UnicodeUTF8));
        VRun_label_M1S1->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        VRun_label_M2S2->setText(QApplication::translate("VehicleRunPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        VRun_label_M2S4->setText(QApplication::translate("VehicleRunPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        VRun_label_M2S3->setText(QApplication::translate("VehicleRunPage", "RIOM", 0, QApplication::UnicodeUTF8));
        VRun_label_M2S1->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2HMI->setText(QApplication::translate("VehicleRunPage", "HMI", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2S4->setText(QApplication::translate("VehicleRunPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2S3->setText(QApplication::translate("VehicleRunPage", "RIOM", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2ERM->setText(QApplication::translate("VehicleRunPage", "ERM", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1VCU->setText(QApplication::translate("VehicleRunPage", "VCU", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2VCU->setText(QApplication::translate("VehicleRunPage", "VCU", 0, QApplication::UnicodeUTF8));
        VehicleRun_forward->setText(QString());
        VehicleRun_backward->setText(QString());
        VRun_label_RECState2->setText(QString());
        VRun_label_RECState3->setText(QString());
        VRun_label_RECState4->setText(QString());
        VRun_label_RECState1->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("VehicleRunPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("VehicleRunPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("VehicleRunPage", "\345\205\205\347\224\265\346\234\272", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("VehicleRunPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1S1->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1S2->setText(QApplication::translate("VehicleRunPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2S2->setText(QApplication::translate("VehicleRunPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2S1->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        VRun_label_TP1S1->setText(QApplication::translate("VehicleRunPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        VRun_label_TP2S1->setText(QApplication::translate("VehicleRunPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState1_2->setText(QApplication::translate("VehicleRunPage", "2", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState2_2->setText(QApplication::translate("VehicleRunPage", "2", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState3_2->setText(QApplication::translate("VehicleRunPage", "2", 0, QApplication::UnicodeUTF8));
        VRun_label_TCUState4_2->setText(QApplication::translate("VehicleRunPage", "2", 0, QApplication::UnicodeUTF8));
        VRun_label_MC1PIS->setText(QApplication::translate("VehicleRunPage", "PIS", 0, QApplication::UnicodeUTF8));
        VRun_label_MC2PIS->setText(QApplication::translate("VehicleRunPage", "PIS", 0, QApplication::UnicodeUTF8));
        VRun_label_BCUState1->setText(QString());
        VRun_label_BCUState3->setText(QString());
        VRun_label_BCUState4->setText(QString());
        VRun_label_BCUState6->setText(QString());
        VRun_label_faultpos->setText(QString());
        VRun_label_faultdevice->setText(QString());
        VRun_label_faultname->setText(QString());
        VRun_btn_confirm->setText(QApplication::translate("VehicleRunPage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        VRun_btn_confirmall->setText(QApplication::translate("VehicleRunPage", "\345\205\250\351\203\250\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        VRun_label_flip->setText(QApplication::translate("VehicleRunPage", "\345\210\227\350\275\246\n"
"\346\211\223\346\273\221", 0, QApplication::UnicodeUTF8));
        VRun_label_ATC1->setText(QApplication::translate("VehicleRunPage", "A\n"
"T\n"
"C", 0, QApplication::UnicodeUTF8));
        VRun_label_ATC2->setText(QApplication::translate("VehicleRunPage", "A\n"
"T\n"
"C", 0, QApplication::UnicodeUTF8));
        VRun_label_bypassALL->setText(QApplication::translate("VehicleRunPage", "\345\210\227\350\275\246\345\256\214\346\225\264\346\200\247\n"
"\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        VRun_label_bypass0speed->setText(QApplication::translate("VehicleRunPage", "\351\233\266\351\200\237\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        VRun_label_bypassATCEDCU->setText(QApplication::translate("VehicleRunPage", "ATP\351\227\250\n"
"\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        VRun_label_bypassEDCU->setText(QApplication::translate("VehicleRunPage", "\351\227\250\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleRunPage: public Ui_VehicleRunPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLERUNPAGE_H

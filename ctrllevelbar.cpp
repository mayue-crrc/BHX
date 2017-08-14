#include "ctrllevelbar.h"
#include "ui_ctrllevelbar.h"

#define COLOR_CHOSEN    "background-color: rgb(0, 255, 0);"
#define COLOR_EB        "background-color: rgb(255, 0, 0);"
#define COLOR_BRAKE     "background-color: rgb(38, 50, 89);"
#define COLOR_TRCATION  "background-color: rgb(51, 153, 255);"

CtrlLevelBar::CtrlLevelBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlLevelBar)
{
    ui->setupUi(this);
}

CtrlLevelBar::~CtrlLevelBar()
{
    delete ui;
}
/*i 1-15 for -7-+7*/
void CtrlLevelBar::Ctrl_SetLevelvalue(int i)
{
    ResetLevelState();
    switch(i)
    {
    case 11:
        ui->Ctrl_label_VALUE->setText("安全制动");
        ui->Ctrl_label_EB2->setStyleSheet(COLOR_CHOSEN);
        break;
    case -7:
        ui->Ctrl_label_N7->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动7级");
        break;
    case -6:
        ui->Ctrl_label_N6->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动6级");
        break;
    case -5:
        ui->Ctrl_label_N5->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动5级");
        break;
    case -4:
        ui->Ctrl_label_N4->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动4级");
        break;
    case -3:
        ui->Ctrl_label_N3->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动3级");
        break;
    case -2:
        ui->Ctrl_label_N2->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动2级");
        break;
    case -1:
        ui->Ctrl_label_N1->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("制动1级");
        break;
    case 0:
        ui->Ctrl_label_P0->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("惰行");
        break;
    case 1:
        ui->Ctrl_label_P1->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引1级");
        break;
    case 2:
        ui->Ctrl_label_P2->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引2级");
        break;
    case 3:
        ui->Ctrl_label_P3->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引3级");
        break;
    case 4:
        ui->Ctrl_label_P4->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引4级");
        break;
    case 5:
        ui->Ctrl_label_P5->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引5级");
        break;
    case 6:
        ui->Ctrl_label_P6->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引6级");
        break;
    case 7:
        ui->Ctrl_label_P7->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("牵引7级");
        break;
    case 8:
        ui->Ctrl_label_EB3->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("紧急制动");
        break;

    case 10:
        ui->Ctrl_label_EB1->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("强迫制动");
        break;
    default:
        ui->Ctrl_label_P0->setStyleSheet(COLOR_CHOSEN);
        ui->Ctrl_label_VALUE->setText("");
        break;
    }

}
void CtrlLevelBar::ResetLevelState()
{
    ui->Ctrl_label_EB1->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_EB2->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_EB3->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N1->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N2->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N3->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N4->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N5->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N6->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_N7->setStyleSheet(COLOR_BRAKE);
    ui->Ctrl_label_P0->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P1->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P2->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P3->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P4->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P5->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P6->setStyleSheet(COLOR_TRCATION);
    ui->Ctrl_label_P7->setStyleSheet(COLOR_TRCATION);

}

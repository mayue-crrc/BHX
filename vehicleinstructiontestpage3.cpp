#include "vehicleinstructiontestpage3.h"
#include "ui_vehicleinstructiontestpage3.h"

#define VIBUTTONDOWN "font: 75 18px ;background-color: rgb(0, 100, 255);border:3px solid rgb(0, 0, 0);"
#define VIBUTTONUP   "font: 75 18px ;background-color: rgb(255, 192, 0);border:3px solid rgb(0, 0, 0);"


VehicleInstructionTestPage3::VehicleInstructionTestPage3(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInstructionTestPage3)
{
    ui->setupUi(this);
    for(int i =0;i<4;i++)
    {
        timer3sreset[i] = 0;
        for(int j =0;j<3; j++)
        {
            RL[j][i] = false;
        }
    }
}

VehicleInstructionTestPage3::~VehicleInstructionTestPage3()
{
    delete ui;
}
void VehicleInstructionTestPage3::showEvent(QShowEvent *)
{

}
void VehicleInstructionTestPage3::updatePage()
{

    if(RL[1][0])//l1r2  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_BCC1Reset_B1 = true;
        ui->VITest3_Button_L1R1->setStyleSheet(VIBUTTONUP);
        ui->VITest3_Button_L1R1->setDisabled(true);
        ui->VITest3_Button_L2R1->setDisabled(true);
        this->database->HMiCT_BCC1Cutoff_B1 = false;

        if(++timer3sreset[0]>9)
        {

            this->database->HMiCT_BCC1Reset_B1 = false;
            RL[0][0] = RL[1][0] = false;
            timer3sreset[0] = 0;
            ui->VITest3_Button_L2R1->setStyleSheet(VIBUTTONUP);
            ui->VITest3_Button_L1R1->setDisabled(false);
            ui->VITest3_Button_L2R1->setDisabled(false);

        }
    }
    if(RL[1][1])//l1r2  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_BCC2Reset_B1 = true;
        ui->VITest3_Button_L1R2->setStyleSheet(VIBUTTONUP);
        ui->VITest3_Button_L1R2->setDisabled(true);
        ui->VITest3_Button_L2R2->setDisabled(true);
        this->database->HMiCT_BCC2Cutoff_B1 = false;

        if(++timer3sreset[1]>9)
        {

            this->database->HMiCT_BCC2Reset_B1 = false;
            RL[0][1] = RL[1][1] = false;
            timer3sreset[1] = 0;
            ui->VITest3_Button_L2R2->setStyleSheet(VIBUTTONUP);
            ui->VITest3_Button_L1R2->setDisabled(false);
            ui->VITest3_Button_L2R2->setDisabled(false);
        }
    }
    if(RL[1][2])//l1r2  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_BCC3Reset_B1 = true;
        ui->VITest3_Button_L1R3->setStyleSheet(VIBUTTONUP);
        ui->VITest3_Button_L1R3->setDisabled(true);
        ui->VITest3_Button_L2R3->setDisabled(true);
        this->database->HMiCT_BCC3Cutoff_B1 = false;

        if(++timer3sreset[2]>9)
        {

            this->database->HMiCT_BCC3Reset_B1 = false;
            RL[0][2] = RL[1][2] = false;
            timer3sreset[2] = 0;
            ui->VITest3_Button_L2R3->setStyleSheet(VIBUTTONUP);
            ui->VITest3_Button_L1R3->setDisabled(false);
            ui->VITest3_Button_L2R3->setDisabled(false);
        }
    }
    if(RL[1][3])//l1r2  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_BCC4Reset_B1 = true;
        ui->VITest3_Button_L1R4->setStyleSheet(VIBUTTONUP);
        ui->VITest3_Button_L1R4->setDisabled(true);
        ui->VITest3_Button_L2R4->setDisabled(true);
        this->database->HMiCT_BCC4Cutoff_B1 = false;

        if(++timer3sreset[3]>9)
        {

            this->database->HMiCT_BCC4Reset_B1 = false;
            RL[0][3] = RL[1][3] = false;
            timer3sreset[3] = 0;
            ui->VITest3_Button_L2R4->setStyleSheet(VIBUTTONUP);
            ui->VITest3_Button_L1R4->setDisabled(false);
            ui->VITest3_Button_L2R4->setDisabled(false);
        }
    }
    static int mgtestcounter = 0;
    if(this->database->HMiCT_MGTest_B1)
    {
        if(mgtestcounter++ >6)
        {
            mgtestcounter = 0;
            this->database->HMiCT_MGTest_B1 = false;
            ui->VITest3_Button_L3R1->setStyleSheet(VIBUTTONUP);
        }
    }
//    static int brakecounter = 0;
//    if(this->database->HMiCT_BCUSelfTestReq_B1)
//    {
//        if(brakecounter++ >6)
//        {
//            brakecounter = 0;
//            this->database->HMiCT_BCUSelfTestReq_B1 = false;
//            ui->VITest3_Button_L3R2->setStyleSheet(VIBUTTONUP);
//        }
//    }


    ui->VITest3_Label_Page->setText("3 / 3");
}

void VehicleInstructionTestPage3::on_VITest3_Button_L1R1_pressed()
{
    if(!RL[0][0])
    {
        ui->VITest3_Button_L1R1->setStyleSheet(VIBUTTONDOWN);
        RL[0][0] = true;
        this->database->HMiCT_BCC1Cutoff_B1 = true;

    }else
    {
        ui->VITest3_Button_L1R1->setStyleSheet(VIBUTTONUP);
        RL[0][0] = false;
        this->database->HMiCT_BCC1Cutoff_B1 = false;
    }
}

void VehicleInstructionTestPage3::on_VITest3_Button_L1R2_pressed()
{
    if(!RL[0][1])
    {
        ui->VITest3_Button_L1R2->setStyleSheet(VIBUTTONDOWN);
        RL[0][1] = true;
        this->database->HMiCT_BCC2Cutoff_B1 = true;

    }else
    {
        ui->VITest3_Button_L1R2->setStyleSheet(VIBUTTONUP);
        RL[0][1] = false;
        this->database->HMiCT_BCC2Cutoff_B1 = false;
    }
}

void VehicleInstructionTestPage3::on_VITest3_Button_L1R3_pressed()
{
    if(!RL[0][2])
    {
        ui->VITest3_Button_L1R3->setStyleSheet(VIBUTTONDOWN);
        RL[0][2] = true;
        this->database->HMiCT_BCC3Cutoff_B1 = true;

    }else
    {
        ui->VITest3_Button_L1R3->setStyleSheet(VIBUTTONUP);
        RL[0][2] = false;
        this->database->HMiCT_BCC3Cutoff_B1 = false;
    }
}

void VehicleInstructionTestPage3::on_VITest3_Button_L1R4_pressed()
{
    if(!RL[0][3])
    {
        ui->VITest3_Button_L1R4->setStyleSheet(VIBUTTONDOWN);
        RL[0][3] = true;
        this->database->HMiCT_BCC4Cutoff_B1 = true;

    }else
    {
        ui->VITest3_Button_L1R4->setStyleSheet(VIBUTTONUP);
        RL[0][3] = false;
        this->database->HMiCT_BCC4Cutoff_B1 = false;
    }
}

void VehicleInstructionTestPage3::on_VITest3_Button_L2R1_pressed()
{
    ui->VITest3_Button_L2R1->setStyleSheet(VIBUTTONDOWN);
    RL[1][0] = true;
    this->database->HMiCT_BCC1Reset_B1 = true;
}

void VehicleInstructionTestPage3::on_VITest3_Button_L2R2_pressed()
{
    ui->VITest3_Button_L2R2->setStyleSheet(VIBUTTONDOWN);
    RL[1][1] = true;
    this->database->HMiCT_BCC2Reset_B1 = true;
}

void VehicleInstructionTestPage3::on_VITest3_Button_L2R3_pressed()
{
    ui->VITest3_Button_L2R3->setStyleSheet(VIBUTTONDOWN);
    RL[1][2] = true;
    this->database->HMiCT_BCC3Reset_B1 = true;
}

void VehicleInstructionTestPage3::on_VITest3_Button_L2R4_pressed()
{
    ui->VITest3_Button_L2R4->setStyleSheet(VIBUTTONDOWN);
    RL[1][3] = true;
    this->database->HMiCT_BCC4Reset_B1 = true;
}

void VehicleInstructionTestPage3::on_VITest3_Button_L3R1_pressed()
{
    this->database->HMiCT_MGTest_B1 = true;
    ui->VITest3_Button_L3R1->setStyleSheet(VIBUTTONDOWN);
}

void VehicleInstructionTestPage3::on_VITest3_Button_L3R2_pressed()
{
    this->database->HMiCT_ForceWind_B1 = true;
    ui->VITest3_Button_L3R2->setStyleSheet(VIBUTTONDOWN);
}
void VehicleInstructionTestPage3::on_VITest3_Button_L3R2_released()
{
    this->database->HMiCT_ForceWind_B1 = false;
    ui->VITest3_Button_L3R2->setStyleSheet(VIBUTTONUP);
}
void VehicleInstructionTestPage3::on_VITest3_Button_L3R3_pressed()
{

}

void VehicleInstructionTestPage3::on_VITest3_Button_L3R4_pressed()
{

}

void VehicleInstructionTestPage3::on_VITest3_Button_prePage_pressed()
{
    changePage(uVehicleInstructionPage2);
}

void VehicleInstructionTestPage3::on_VITest3_Button_nextPage_pressed()
{

}

void VehicleInstructionTestPage3::on_VITest3_Button_closePage_pressed()
{
//    this->database->HMiCT_BCC1Cutoff_B1 = false;
//    this->database->HMiCT_BCC2Cutoff_B1 = false;
//    this->database->HMiCT_BCC3Cutoff_B1 = false;
//    this->database->HMiCT_BCC4Cutoff_B1 = false;
    this->database->HMiCT_BCC1Reset_B1 = false;
    this->database->HMiCT_BCC2Reset_B1 = false;
    this->database->HMiCT_BCC3Reset_B1 = false;
    this->database->HMiCT_BCC4Reset_B1 = false;
    this->database->HMiCT_MGTest_B1 = false;
 //   this->database->HMiCT_BCUSelfTestReq_B1 = false;


    for(int i =0;i<4;i++)
    {
        timer3sreset[i] = 0;
        for(int j =0;j<3; j++)
        {
            RL[j][i] = false;
        }
    }
    changePage(uVehicleParaSetting);
}



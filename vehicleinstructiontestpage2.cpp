#include "vehicleinstructiontestpage2.h"
#include "ui_vehicleinstructiontestpage2.h"


#define VIBUTTONDOWN "font: 75 18px ;background-color: rgb(0, 100, 255);border:3px solid rgb(0, 0, 0);"
#define VIBUTTONUP   "font: 75 18px ;background-color: rgb(255, 192, 0);border:3px solid rgb(0, 0, 0);"


VehicleInstructionTestPage2::VehicleInstructionTestPage2(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInstructionTestPage2)
{
    ui->setupUi(this);
    for(int i =0;i<4;i++)
    {
        timer3sreset[i] = 0;
        timer3sreset[i+4] = 0;
        for(int j =0;j<3; j++)
        {
            RL[j][i] = false;
        }
    }
}

VehicleInstructionTestPage2::~VehicleInstructionTestPage2()
{
    delete ui;
}
void VehicleInstructionTestPage2::showEvent(QShowEvent *)
{

}

void VehicleInstructionTestPage2::updatePage()
{
    if(RL[1][0])//l2r1  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_ACU1Cutoff_B1  =false;
        ui->VITest2_Button_L1R1->setStyleSheet(VIBUTTONUP);
        ui->VITest2_Button_L1R1->setDisabled(true);
        ui->VITest2_Button_L2R1->setDisabled(true);
        if(++timer3sreset[0]>9)
        {

            this->database->HMiCT_ACU1Reset_B1 = RL[0][0] = RL[1][0] = false;
            timer3sreset[0] = 0;
            ui->VITest2_Button_L2R1->setStyleSheet(VIBUTTONUP);
            ui->VITest2_Button_L1R1->setDisabled(false);
            ui->VITest2_Button_L2R1->setDisabled(false);
        }
    }

    if(RL[1][1])//l2r2  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_ACU2Cutoff_B1 = false;
        ui->VITest2_Button_L1R2->setStyleSheet(VIBUTTONUP);
        ui->VITest2_Button_L1R2->setDisabled(true);
        ui->VITest2_Button_L2R2->setDisabled(true);
        if(++timer3sreset[1]>9)
        {

            this->database->HMiCT_ACU2Reset_B1 = RL[0][1] = RL[1][1] = false;
            timer3sreset[1] = 0;
            ui->VITest2_Button_L2R2->setStyleSheet(VIBUTTONUP);
            ui->VITest2_Button_L1R2->setDisabled(false);
            ui->VITest2_Button_L2R2->setDisabled(false);
        }
    }

    if(RL[1][2])//l2r3  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_ACU3Cutoff_B1 = false;
        ui->VITest2_Button_L1R3->setStyleSheet(VIBUTTONUP);
        ui->VITest2_Button_L1R3->setDisabled(true);
        ui->VITest2_Button_L2R3->setDisabled(true);
        if(++timer3sreset[2]>9)
        {

            this->database->HMiCT_ACU3Reset_B1 = RL[0][2] = RL[1][2] = false;
            timer3sreset[2] = 0;
            ui->VITest2_Button_L2R3->setStyleSheet(VIBUTTONUP);
            ui->VITest2_Button_L1R3->setDisabled(false);
            ui->VITest2_Button_L2R3->setDisabled(false);
        }
    }
    if(RL[1][3])//l2r4  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_ACU4Cutoff_B1 = false;
        ui->VITest2_Button_L1R4->setStyleSheet(VIBUTTONUP);
        ui->VITest2_Button_L1R4->setDisabled(true);
        ui->VITest2_Button_L2R4->setDisabled(true);
        if(++timer3sreset[3]>9)
        {

            this->database->HMiCT_ACU4Reset_B1 = RL[0][3] = RL[1][3] = false;
            timer3sreset[3] = 0;
            ui->VITest2_Button_L2R4->setStyleSheet(VIBUTTONUP);
            ui->VITest2_Button_L1R4->setDisabled(false);
            ui->VITest2_Button_L2R4->setDisabled(false);
        }
    }
    /*
    if(RL[2][0])//l2r1  WHEN PRESS, CUTBUTTON DISABLE
    {
        ui->VITest2_Button_L3R1->setDisabled(true);
        if(++timer3sreset[4]>9)
        {

            this->database->HMiCT_ResetACU1Fult_B1 = RL[2][0] = false;
            ui->VITest2_Button_L3R1->setDisabled(false);
            timer3sreset[4] = 0;
            ui->VITest2_Button_L3R1->setStyleSheet(VIBUTTONUP);
        }
    }
    if(RL[2][1])//l2r1  WHEN PRESS, CUTBUTTON DISABLE
    {
        ui->VITest2_Button_L3R2->setDisabled(true);
        if(++timer3sreset[5]>9)
        {

            this->database->HMiCT_ResetACU2Fult_B1 = RL[2][1] = false;
            ui->VITest2_Button_L3R2->setDisabled(false);
            timer3sreset[5] = 0;
            ui->VITest2_Button_L3R2->setStyleSheet(VIBUTTONUP);
        }
    }
    if(RL[2][2])//l2r3  WHEN PRESS, CUTBUTTON DISABLE
    {
        ui->VITest2_Button_L3R3->setDisabled(true);
        if(++timer3sreset[6]>9)
        {

            this->database->HMiCT_ResetACU3Fult_B1 = RL[2][2] = false;
            ui->VITest2_Button_L3R3->setDisabled(false);
            timer3sreset[6] = 0;
            ui->VITest2_Button_L3R3->setStyleSheet(VIBUTTONUP);
        }
    }
    if(RL[2][3])//l2r1  WHEN PRESS, CUTBUTTON DISABLE
    {
        ui->VITest2_Button_L3R4->setDisabled(true);
        if(++timer3sreset[7]>9)
        {

            this->database->HMiCT_ResetACU4Fult_B1 = RL[2][3] = false;
            ui->VITest2_Button_L3R4->setDisabled(false);
            timer3sreset[7] = 0;
            ui->VITest2_Button_L3R4->setStyleSheet(VIBUTTONUP);
        }
    }*/
    ui->VITest2_Label_Page->setText("2 / 3");

}
void VehicleInstructionTestPage2::on_VITest2_Button_prePage_pressed()
{
    changePage(uVehicleInstructionPage);
}

void VehicleInstructionTestPage2::on_VITest2_Button_closePage_pressed()
{
    changePage(uVehicleParaSetting);
}

void VehicleInstructionTestPage2::on_VITest2_Button_L1R1_pressed()
{
    if(!RL[0][0])
    {
        ui->VITest2_Button_L1R1->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU1Cutoff_B1 = RL[0][0] = true;
    }else
    {
        ui->VITest2_Button_L1R1->setStyleSheet(VIBUTTONUP);
        this->database->HMiCT_ACU1Cutoff_B1 = RL[0][0] = false;
    }
}

void VehicleInstructionTestPage2::on_VITest2_Button_L1R2_pressed()
{
    if(!RL[0][1])
    {
        ui->VITest2_Button_L1R2->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU2Cutoff_B1 = RL[0][1] = true;
    }else
    {
        ui->VITest2_Button_L1R2->setStyleSheet(VIBUTTONUP);
        this->database->HMiCT_ACU2Cutoff_B1 = RL[0][1] = false;
    }
}

void VehicleInstructionTestPage2::on_VITest2_Button_L1R3_pressed()
{
    if(!RL[0][2])
    {
        ui->VITest2_Button_L1R3->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU3Cutoff_B1 = RL[0][2] = true;
    }else
    {
        ui->VITest2_Button_L1R3->setStyleSheet(VIBUTTONUP);
        this->database->HMiCT_ACU3Cutoff_B1 = RL[0][2] = false;
    }
}

void VehicleInstructionTestPage2::on_VITest2_Button_L1R4_pressed()
{
    if(!RL[0][3])
    {
        ui->VITest2_Button_L1R4->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU4Cutoff_B1 = RL[0][3] = true;
    }else
    {
        ui->VITest2_Button_L1R4->setStyleSheet(VIBUTTONUP);
        this->database->HMiCT_ACU4Cutoff_B1 = RL[0][3] = false;
    }
}

void VehicleInstructionTestPage2::on_VITest2_Button_L2R1_pressed()
{

        ui->VITest2_Button_L2R1->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU1Reset_B1 = RL[1][0] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_L2R2_pressed()
{

        ui->VITest2_Button_L2R2->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU2Reset_B1 = RL[1][1] = true;

}

void VehicleInstructionTestPage2::on_VITest2_Button_L2R3_pressed()
{

        ui->VITest2_Button_L2R3->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU3Reset_B1 = RL[1][2] = true;

}

void VehicleInstructionTestPage2::on_VITest2_Button_L2R4_pressed()
{

        ui->VITest2_Button_L2R4->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_ACU4Reset_B1 = RL[1][3] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_L3R1_pressed()
{
//        ui->VITest2_Button_L3R1->setStyleSheet(VIBUTTONDOWN);
//        this->database->HMiCT_ResetACU1Fult_B1 = RL[2][0] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_L3R2_pressed()
{
//        ui->VITest2_Button_L3R2->setStyleSheet(VIBUTTONDOWN);
//        this->database->HMiCT_ResetACU2Fult_B1 = RL[2][1] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_L3R3_pressed()
{

//        ui->VITest2_Button_L3R3->setStyleSheet(VIBUTTONDOWN);
//        this->database->HMiCT_ResetACU3Fult_B1 = RL[2][2] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_L3R4_pressed()
{
//        ui->VITest2_Button_L3R4->setStyleSheet(VIBUTTONDOWN);
//        this->database->HMiCT_ResetACU4Fult_B1 = RL[2][3] = true;
}

void VehicleInstructionTestPage2::on_VITest2_Button_nextPage_pressed()
{
    changePage(uVehicleInstructionPage3);

}

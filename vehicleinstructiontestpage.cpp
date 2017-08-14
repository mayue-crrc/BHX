#include "vehicleinstructiontestpage.h"
#include "ui_vehicleinstructiontestpage.h"

#define VIBUTTONDOWN "font: 75 18px;background-color: rgb(0, 100, 255);border:3px solid rgb(0, 0, 0);"
#define VIBUTTONUP   "font: 75 18px;background-color: rgb(255, 192, 0);border:3px solid rgb(0, 0, 0);"

VehicleInstructionTestPage::VehicleInstructionTestPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInstructionTestPage)
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

VehicleInstructionTestPage::~VehicleInstructionTestPage()
{
    delete ui;
}
void VehicleInstructionTestPage::showEvent(QShowEvent *)
{

}
void VehicleInstructionTestPage::hideEvent(QHideEvent *)
{
    ui->VITest_Button_TCUTest->setStyleSheet(VIBUTTONUP);
    this->database->HMiCT_TCUtest_B1 = false;
}
void VehicleInstructionTestPage::updatePage()
{
    if(RL[2][0])//l1r3  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_IsolateRstMC1_B1 = true;
        ui->VITest_Button_L1R1->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L1R1->setDisabled(true);
        ui->VITest_Button_L2R1->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L2R1->setDisabled(true);
        ui->VITest_Button_L3R1->setDisabled(true);
        this->database->HMiCT_MC1MSR1Enable_B1 = false;
        this->database->HMiCT_MC1MSR2Enable_B1 = false;
        if(++timer3sreset[0]>9)
        {

            this->database->HMiCT_IsolateRstMC1_B1 = false;

            RL[0][0] = RL[1][0] = RL[2][0] = false;
            timer3sreset[0] = 0;
            ui->VITest_Button_L3R1->setStyleSheet(VIBUTTONUP);
            ui->VITest_Button_L1R1->setDisabled(false);
            ui->VITest_Button_L2R1->setDisabled(false);
            ui->VITest_Button_L3R1->setDisabled(false);

        }
    }

    if(RL[2][1])//l2r3  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_IsolateRstM1_B1 = true;
        ui->VITest_Button_L1R2->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L1R2->setDisabled(true);
        ui->VITest_Button_L2R2->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L2R2->setDisabled(true);
        ui->VITest_Button_L3R2->setDisabled(true);
        this->database->HMiCT_M1MSR1Enable_B1 = false;
        this->database->HMiCT_M1MSR2Enable_B1 = false;
        if(++timer3sreset[1]>9)
        {
            this->database->HMiCT_IsolateRstM1_B1 = false;

            RL[0][1] = RL[1][1] = RL[2][1] = false;
            timer3sreset[1] = 0;
            ui->VITest_Button_L3R2->setStyleSheet(VIBUTTONUP);
            ui->VITest_Button_L1R2->setDisabled(false);
            ui->VITest_Button_L2R2->setDisabled(false);
            ui->VITest_Button_L3R2->setDisabled(false);

        }
    }

    if(RL[2][2])//l3r3  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_IsolateRstM2_B1 = true;
        ui->VITest_Button_L1R3->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L1R3->setDisabled(true);
        ui->VITest_Button_L2R3->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L2R3->setDisabled(true);
        ui->VITest_Button_L3R3->setDisabled(true);
        this->database->HMiCT_M2MSR1Enable_B1 = false;
        this->database->HMiCT_M2MSR2Enable_B1 = false;
        if(++timer3sreset[2]>9)
        {

            this->database->HMiCT_IsolateRstM2_B1 = false;

            RL[0][2] = RL[1][2] = RL[2][2] = false;
            timer3sreset[2] = 0;
            ui->VITest_Button_L3R3->setStyleSheet(VIBUTTONUP);
            ui->VITest_Button_L1R3->setDisabled(false);
            ui->VITest_Button_L2R3->setDisabled(false);
            ui->VITest_Button_L3R3->setDisabled(false);
        }
    }
    if(RL[2][3])//l2r4  WHEN PRESS, CUTBUTTON DISABLE
    {
        this->database->HMiCT_IsolateRstMC2_B1 = true;
        ui->VITest_Button_L1R4->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L1R4->setDisabled(true);
        ui->VITest_Button_L2R4->setStyleSheet(VIBUTTONUP);
        ui->VITest_Button_L2R4->setDisabled(true);
        ui->VITest_Button_L3R4->setDisabled(true);
        this->database->HMiCT_MC2MSR1Enable_B1 = false;
        this->database->HMiCT_MC2MSR2Enable_B1 = false;
        if(++timer3sreset[3]>9)
        {
            this->database->HMiCT_IsolateRstMC2_B1 = false;

            RL[0][3] = RL[1][3] = RL[2][3] = false;
            timer3sreset[3] = 0;
            ui->VITest_Button_L3R4->setStyleSheet(VIBUTTONUP);
            ui->VITest_Button_L1R4->setDisabled(false);
            ui->VITest_Button_L2R4->setDisabled(false);
            ui->VITest_Button_L3R4->setDisabled(false);
        }
    }



    ui->VITest_Label_Page->setText("1 / 3");
}

void VehicleInstructionTestPage::on_VITest_Button_closePage_pressed()
{
//    this->database->HMiCT_MC1MSR1Enable_B1 = false;
//    this->database->HMiCT_MC1MSR2Enable_B1 = false;
//    this->database->HMiCT_M1MSR1Enable_B1 = false;
//    this->database->HMiCT_M1MSR2Enable_B1 = false;
//    this->database->HMiCT_M2MSR1Enable_B1 = false;
//    this->database->HMiCT_M2MSR2Enable_B1 = false;
//    this->database->HMiCT_MC2MSR1Enable_B1 = false;
//    this->database->HMiCT_MC2MSR2Enable_B1 = false;
    this->database->HMiCT_IsolateRstMC1_B1 = false;
    this->database->HMiCT_IsolateRstM1_B1 = false;
    this->database->HMiCT_IsolateRstM2_B1 = false;
    this->database->HMiCT_IsolateRstMC2_B1 = false;

    for(int i =0;i<4;i++)
    {
        timer3sreset[i] = 0;
        //for(int j =0;j<3; j++)
        {
            RL[2][i] = false;
        }
    }
    changePage(uVehicleParaSetting);
}

void VehicleInstructionTestPage::on_VITest_Button_nextPage_pressed()
{
    changePage(uVehicleInstructionPage2);
}

void VehicleInstructionTestPage::on_VITest_Button_L1R1_pressed()
{
    if(!RL[0][0])
    {
        ui->VITest_Button_L1R1->setStyleSheet(VIBUTTONDOWN);
        RL[0][0] = true;
        this->database->HMiCT_MC1MSR1Enable_B1 = true;

    }else
    {
        ui->VITest_Button_L1R1->setStyleSheet(VIBUTTONUP);
        RL[0][0] = false;
        this->database->HMiCT_MC1MSR1Enable_B1 = false;
    }
}

void VehicleInstructionTestPage::on_VITest_Button_L1R2_pressed()
{
    if(!RL[0][1])
    {
        ui->VITest_Button_L1R2->setStyleSheet(VIBUTTONDOWN);
        RL[0][1] = true;
        this->database->HMiCT_M1MSR1Enable_B1 = true;
    }else
    {
        ui->VITest_Button_L1R2->setStyleSheet(VIBUTTONUP);
        RL[0][1] = false;
        this->database->HMiCT_M1MSR1Enable_B1 = false;
    }
}

void VehicleInstructionTestPage::on_VITest_Button_L1R3_pressed()
{
    if(!RL[0][2])
    {
        ui->VITest_Button_L1R3->setStyleSheet(VIBUTTONDOWN);
        RL[0][2] = true;
        this->database->HMiCT_M2MSR1Enable_B1 = true;
    }else
    {
        ui->VITest_Button_L1R3->setStyleSheet(VIBUTTONUP);
        RL[0][2] = false;
        this->database->HMiCT_M2MSR1Enable_B1 = false;
    }
}

void VehicleInstructionTestPage::on_VITest_Button_L1R4_pressed()
{
    if(!RL[0][3])
    {
        ui->VITest_Button_L1R4->setStyleSheet(VIBUTTONDOWN);
        RL[0][3] = true;
        this->database->HMiCT_MC2MSR1Enable_B1 = true;
    }else
    {
        ui->VITest_Button_L1R4->setStyleSheet(VIBUTTONUP);
        RL[0][3] = false;
        this->database->HMiCT_MC2MSR1Enable_B1 = false;
    }
}

void VehicleInstructionTestPage::on_VITest_Button_L2R1_pressed()
{
    if(!RL[1][0])
    {
        ui->VITest_Button_L2R1->setStyleSheet(VIBUTTONDOWN);
        RL[1][0] = true;
        this->database->HMiCT_MC1MSR2Enable_B1 = true;

    }else
    {
        ui->VITest_Button_L2R1->setStyleSheet(VIBUTTONUP);
        RL[1][0] = false;
        this->database->HMiCT_MC1MSR2Enable_B1 = false;
    }

}

void VehicleInstructionTestPage::on_VITest_Button_L2R2_pressed()
{
    if(!RL[1][1])
    {
        ui->VITest_Button_L2R2->setStyleSheet(VIBUTTONDOWN);
        RL[1][1] = true;
        this->database->HMiCT_M1MSR2Enable_B1 = true;

    }else
    {
        ui->VITest_Button_L2R2->setStyleSheet(VIBUTTONUP);
        RL[1][1] = false;
        this->database->HMiCT_M1MSR2Enable_B1 = false;
    }

}

void VehicleInstructionTestPage::on_VITest_Button_L2R3_pressed()
{
    if(!RL[1][2])
    {
        ui->VITest_Button_L2R3->setStyleSheet(VIBUTTONDOWN);
        RL[1][2] = true;
        this->database->HMiCT_M2MSR2Enable_B1 = true;

    }else
    {
        ui->VITest_Button_L2R3->setStyleSheet(VIBUTTONUP);
        RL[1][2] = false;
        this->database->HMiCT_M2MSR2Enable_B1 = false;
    }


}

void VehicleInstructionTestPage::on_VITest_Button_L2R4_pressed()
{
    if(!RL[1][3])
    {
        ui->VITest_Button_L2R4->setStyleSheet(VIBUTTONDOWN);
        RL[1][3] = true;
        this->database->HMiCT_MC2MSR2Enable_B1 = true;

    }else
    {
        ui->VITest_Button_L2R4->setStyleSheet(VIBUTTONUP);
        RL[1][3] = false;
        this->database->HMiCT_MC2MSR2Enable_B1 = false;
    }

}

void VehicleInstructionTestPage::on_VITest_Button_L3R1_pressed()
{

    ui->VITest_Button_L3R1->setStyleSheet(VIBUTTONDOWN);
    RL[2][0] = true;
    this->database->HMiCT_IsolateRstMC1_B1 = true;
}


void VehicleInstructionTestPage::on_VITest_Button_L3R2_pressed()
{

    ui->VITest_Button_L3R2->setStyleSheet(VIBUTTONDOWN);
    RL[2][1] = true;
    this->database->HMiCT_IsolateRstM1_B1 = true;
}



void VehicleInstructionTestPage::on_VITest_Button_L3R3_pressed()
{
    ui->VITest_Button_L3R3->setStyleSheet(VIBUTTONDOWN);
    RL[2][2] = true;
    this->database->HMiCT_IsolateRstM2_B1 = true;
}

void VehicleInstructionTestPage::on_VITest_Button_L3R4_pressed()
{
    ui->VITest_Button_L3R4->setStyleSheet(VIBUTTONDOWN);
    RL[2][3] = true;
    this->database->HMiCT_IsolateRstMC2_B1 = true;
}


void VehicleInstructionTestPage::on_VITest_Button_TCUTest_pressed()
{
    if(this->database->HMiCT_TCUtest_B1)
    {
        ui->VITest_Button_TCUTest->setStyleSheet(VIBUTTONUP);
        this->database->HMiCT_TCUtest_B1 = false;
    }else
    {
        ui->VITest_Button_TCUTest->setStyleSheet(VIBUTTONDOWN);
        this->database->HMiCT_TCUtest_B1 = true;
    }

}

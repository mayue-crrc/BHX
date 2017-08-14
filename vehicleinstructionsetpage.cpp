#include "vehicleinstructionsetpage.h"
#include "ui_vehicleinstructionsetpage.h"

VehicleInstructionSetPage::VehicleInstructionSetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInstructionSetPage)
{
    ui->setupUi(this);
    timer2sEB = timer2sEBS = 0;
}

VehicleInstructionSetPage::~VehicleInstructionSetPage()
{
    delete ui;
}
void VehicleInstructionSetPage::updatePage()
{
    if(this->database->HMiCT_EmgyBroadcastCommd_B1)
    {
        if(timer2sEB++ > 6)
        {
            timer2sEB = 0;
            this->database->HMiCT_EmgyBroadcastCommd_B1 = false;
            ui->VehicleInstructionSetPage_Button_EB->setStyleSheet(MY_BUTTON_UP);
        }
    }
    if(this->database->HMiCT_EmgyBroadcastStop_B1)
    {
        if(timer2sEBS++ > 6)
        {
            timer2sEBS = 0;
            this->database->HMiCT_EmgyBroadcastStop_B1 = false;
            ui->VehicleInstructionSetPage_Button_EBStop->setStyleSheet(MY_BUTTON_UP);
       }
    }
}
void VehicleInstructionSetPage::showEvent(QShowEvent *)
{

}

void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_forcewind_pressed()
{
    this->database->HMiCT_ForceWind_B1 = true;
    ui->VehicleInstructionSetPage_Button_forcewind->setStyleSheet(MY_BUTTON_DOWN);
}
void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_forcewind_released()
{
    this->database->HMiCT_ForceWind_B1 = false;
    ui->VehicleInstructionSetPage_Button_forcewind->setStyleSheet(MY_BUTTON_UP);
}
void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_EB_pressed()
{
    this->database->HMiCT_EmgyBroadcastCommd_B1 = true;
    ui->VehicleInstructionSetPage_Button_EB->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_EBStop_pressed()
{
    this->database->HMiCT_EmgyBroadcastStop_B1 = true;
    ui->VehicleInstructionSetPage_Button_EBStop->setStyleSheet(MY_BUTTON_DOWN);

}

void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_Sandforbidden_pressed()
{
    if(this->database->HMiCT_SandForbidden_B1)
    {
        this->database->HMiCT_SandForbidden_B1 = false;
        ui->VehicleInstructionSetPage_Button_Sandforbidden->setStyleSheet(MY_BUTTON_UP);
    }else
    {
        this->database->HMiCT_SandForbidden_B1 = true;
        ui->VehicleInstructionSetPage_Button_Sandforbidden->setStyleSheet(MY_BUTTON_DOWN);
    }

}

void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_quit_pressed()
{
    changePage(uVehicleParaSetting);
}



void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_FBRMC1_pressed()
{
    if(this->database->HMiCT_ForceBrakeReleaseMc1_B1)
    {
        this->database->HMiCT_ForceBrakeReleaseMc1_B1 = false;
        ui->VehicleInstructionSetPage_Button_FBRMC1->setStyleSheet(MY_BUTTON_UP);
    }else
    {
        this->database->HMiCT_ForceBrakeReleaseMc1_B1 = true;
        ui->VehicleInstructionSetPage_Button_FBRMC1->setStyleSheet(MY_BUTTON_DOWN);
    }
}

void VehicleInstructionSetPage::on_VehicleInstructionSetPage_Button_FBRMC2_pressed()
{
//    if(this->database->HMiCT_ForceBrakeReleaseMc2_B1)
//    {
//        this->database->HMiCT_ForceBrakeReleaseMc2_B1 = false;
//        ui->VehicleInstructionSetPage_Button_FBRMC2->setStyleSheet(MY_BUTTON_UP);
//    }else
//    {
//        this->database->HMiCT_ForceBrakeReleaseMc2_B1 = true;
//        ui->VehicleInstructionSetPage_Button_FBRMC2->setStyleSheet(MY_BUTTON_DOWN);
//    }
}

#include "vehicleparasetting.h"
#include "ui_vehicleparasetting.h"

VehicleParaSetting::VehicleParaSetting(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleParaSetting)
{
    ui->setupUi(this);

    vehicleeditpwpage = new VehicleEditPWPage(this);
    vehicleeditpwpage->setGeometry(140,2,vehicleeditpwpage->width(),vehicleeditpwpage->height());
    vehicleeditpwpage->hide();
}

VehicleParaSetting::~VehicleParaSetting()
{
    delete ui;
}
void VehicleParaSetting::showEvent(QShowEvent *)
{

}


void VehicleParaSetting::on_VParaSetting_Button_test_pressed()
{
    changePage(uVehicleInstructionPage);
}

void VehicleParaSetting::on_VParaSetting_Button_EditPW_pressed()
{

    vehicleeditpwpage->show();
}


void VehicleParaSetting::on_VParaSetting_Button_IOpage_pressed()
{
    changePage(uVehicleRIOMIOPage);

}

void VehicleParaSetting::on_VParaSetting_Button_Initset_pressed()
{
    changePage(uVehicleInitSetPage);
}



void VehicleParaSetting::on_VParaSetting_Button_candataPage_pressed()
{
    changePage(uCandebugPage);
}

void VehicleParaSetting::on_VParaSetting_Button_visionlifesignal_pressed()
{
    changePage(uVehicleVisionLifesignalPage);
}

void VehicleParaSetting::on_VParaSetting_Button_factroyset_pressed()
{
    if(!this->database->HMItoVCUfactroytest)
    {
        ui->VParaSetting_Button_factroyset->setStyleSheet(MY_BUTTON_DOWN);
        this->database->HMItoVCUfactroytest = true;
    }else
    {
        ui->VParaSetting_Button_factroyset->setStyleSheet(MY_BUTTON_UP);
        this->database->HMItoVCUfactroytest = false;

    }
}

void VehicleParaSetting::on_VParaSetting_Button_datetimeset_pressed()
{
    changePage(uVehicleDatetimeSetPage);
}

void VehicleParaSetting::on_VParaSetting_Button_parasetting_pressed()
{
    changePage(uVehicleParaSetPage);
}

void VehicleParaSetting::on_VParaSetting_Button_HistoryFault_pressed()
{
    changePage(uVehicleHistoryFaultPage);
}

void VehicleParaSetting::on_VParaSetting_Button_factorytest_pressed()
{
    changePage(uVehicleFactoryTestPage);
}

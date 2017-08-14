#include "vehicleinitsetpage.h"
#include "ui_vehicleinitsetpage.h"

VehicleInitsetPage::VehicleInitsetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInitsetPage)
{
    ui->setupUi(this);
    currentpos = HMIPos->getString("/Position/HMI");

}

VehicleInitsetPage::~VehicleInitsetPage()
{
    delete ui;
}

void VehicleInitsetPage::on_VehicleInitsetPage_Button_HMI1_pressed()
{
    HMIPos->set("/Position/HMI",1);
}

void VehicleInitsetPage::on_VehicleInitsetPage_Button_HMI2_pressed()
{
    HMIPos->set("/Position/HMI",2);

}

void VehicleInitsetPage::on_VehicleInitsetPage_Button_reboot_clicked()
{
    system("reboot");
}
void VehicleInitsetPage::updatePage()
{
    currentpos = HMIPos->getString("/Position/HMI");

    if(currentpos == "1")
    {
        ui->VehicleInitsetPage_HMIpos->setText("当前位置 ： MC1");
    }else if(currentpos == "2")
    {
        ui->VehicleInitsetPage_HMIpos->setText("当前位置 ： MC2");
    }else
    {
        ui->VehicleInitsetPage_HMIpos->setText("配置文件错误");
    }
}

void VehicleInitsetPage::on_VehicleInitsetPage_Button_back_clicked()
{
    changePage(uVehicleParaSetting);
}

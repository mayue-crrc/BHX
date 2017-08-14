#include "vehiclesettingpage.h"
#include "ui_vehiclesettingpage.h"

VehicleSettingPage::VehicleSettingPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleSettingPage)
{
    ui->setupUi(this);
    warningdialog = new WarnningDialog(this);
    warningdialog->setGeometry(240,100,warningdialog->width(),warningdialog->height());
    warningdialog->hide();
}

VehicleSettingPage::~VehicleSettingPage()
{
    delete ui;
}
void VehicleSettingPage::showEvent(QShowEvent *)
{
    inputPW = "";

}
void VehicleSettingPage::updatePage()
{
    QString tmp;
    for(int i = 0; i < inputPW.length();i++)
    {
        tmp = tmp+"*";
    }
    ui->VSetting_Label_Password->setText(tmp);
}

void VehicleSettingPage::on_VSetting_Button_Num0_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "0";
    }else
    {
        inputPW = inputPW + "0";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num1_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "1";
    }else
    {
        inputPW = inputPW + "1";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num2_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "2";
    }else
    {
        inputPW = inputPW + "2";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num3_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "3";
    }else
    {
        inputPW = inputPW + "3";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num4_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "4";
    }else
    {
        inputPW = inputPW + "4";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num5_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "5";
    }else
    {
        inputPW = inputPW + "5";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num6_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "6";
    }else
    {
        inputPW = inputPW + "6";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num7_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "7";
    }else
    {
        inputPW = inputPW + "7";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num8_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "8";
    }else
    {
        inputPW = inputPW + "8";
    }
}

void VehicleSettingPage::on_VSetting_Button_Num9_pressed()
{
    if(inputPW.length() > 3)
    {
        inputPW = "9";
    }else
    {
        inputPW = inputPW + "9";
    }
}

void VehicleSettingPage::on_VSetting_Button_clear_pressed()
{
    inputPW = "";
}

void VehicleSettingPage::on_VSetting_Button_confirm_pressed()
{
    PW = getdefaultpara->getString("/Password/Password");

    if(inputPW == PW )
    {
        changePage(uVehicleParaSetting);
    }else
    {
        warningdialog->setDialogstyle("密码错误！","background-color: rgb(51, 153, 255);border:3px solid rgb(0,0,0);");
        warningdialog->show();
    }
}

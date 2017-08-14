#include "vehicleeditpwpage.h"
#include "ui_vehicleeditpwpage.h"

VehicleEditPWPage::VehicleEditPWPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleEditPWPage)
{
    ui->setupUi(this);
    old_EditPWstr = "";
    old_InputPW = "";
    oldPWOK_flg = false;
}

VehicleEditPWPage::~VehicleEditPWPage()
{
    delete ui;
}
void VehicleEditPWPage::on_VEPW_Button_Num0_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"0";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"0";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }

}

void VehicleEditPWPage::on_VEPW_Button_Num1_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"1";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"1";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num2_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"2";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"2";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num3_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"3";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"3";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num4_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"4";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"4";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num5_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"5";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"5";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}
void VehicleEditPWPage::on_VEPW_Button_Num6_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"6";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"6";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}
void VehicleEditPWPage::on_VEPW_Button_Num7_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"7";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"7";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num8_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"8";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"8";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_Num9_pressed()
{
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() < 4)
        {
            new_EditPWstr = new_EditPWstr+"9";
            new_InputPW = new_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(new_InputPW);
    }else
    {
        if(old_EditPWstr.length() < 4)
        {
            old_EditPWstr = old_EditPWstr+"9";
            old_InputPW = old_InputPW + "*";
        }
        ui->VEPW_Label_InputPW->setText(old_InputPW);
    }
}

void VehicleEditPWPage::on_VEPW_Button_clear_pressed()
{
    old_InputPW = "";
    old_EditPWstr = "";
    new_EditPWstr = "";
    new_InputPW = "";
    ui->VEPW_Label_InputPW->setText(old_InputPW);

}
void VehicleEditPWPage::on_VEPW_Button_confirm_pressed()
{
    PW = getdefaultpara->getString("/Password/Password");
    if(oldPWOK_flg)
    {
        if(new_EditPWstr.length() != 4)
        {
            ui->VEPW_Label_name->setText("密码长度为4位，请重新输入");
            ui->VEPW_Label_InputPW->setText("");
            new_EditPWstr = "";
            new_InputPW = "";
            return;
        }else
        {

            getdefaultpara->set("/Password/Password",new_EditPWstr);
            oldPWOK_flg = false;
            new_EditPWstr = "";
            new_InputPW = "";
            ui->VEPW_Label_name->setText(QString("请输入原密码"));
            ui->VEPW_Label_InputPW->setText("");
            this->close();
        }

    }else if(old_EditPWstr == PW)
    {
        oldPWOK_flg = true;
        old_InputPW = "";
        old_EditPWstr = "";
        ui->VEPW_Label_name->setText(QString("请输入新密码"));
        ui->VEPW_Label_InputPW->setText("");


    }else
    {
        oldPWOK_flg = false;
        old_InputPW = "";
        old_EditPWstr = "";
        ui->VEPW_Label_name->setText("原密码错误，请重新输入");
        ui->VEPW_Label_InputPW->setText("");

    }


    //this->close();
}

void VehicleEditPWPage::on_VEPW_Button_back_pressed()
{
    this->close();
}

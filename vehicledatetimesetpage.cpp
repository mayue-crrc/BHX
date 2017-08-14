#include "vehicledatetimesetpage.h"
#include "ui_vehicledatetimesetpage.h"
#include "QDateTime"


#define BtnUP "background-color: rgb(255, 0, 255);font: 75 20px ;border:5px solid rgb(255, 255, 255);color: rgb(255, 255, 255);"
#define BtnDOWN "background-color: rgb(255, 0, 255);font: 75 20px ;border:5px solid rgb(0, 255, 0);color: rgb(255, 255, 255);"

VehicleDatetimeSetPage::VehicleDatetimeSetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDatetimeSetPage)
{
    ui->setupUi(this);
    inputnum = "";
    count3s = 0;
    Btnselected = 0;
    warningdialog = new WarnningDialog(this);
    warningdialog->setGeometry(240,100,warningdialog->width(),warningdialog->height());
    warningdialog->setDialogstyle("时间设定错误！\n请重新设定","background-color: rgb(51, 153, 255);border:3px solid rgb(0,0,0);");
    warningdialog->hide();
}

VehicleDatetimeSetPage::~VehicleDatetimeSetPage()
{
    delete ui;
}
void VehicleDatetimeSetPage::updatePage()
{
    switch(Btnselected)
    {
    case 1:
        ui->VehicleDatetimeSetPage_Button_yearset->setText(inputnum);
        if(inputnum.toInt() >2037)
        {
            inputnum = "";
        }else
        {
            database->HMiCT_Year_U8 = inputnum.toInt()-2000;
        }
        break;
    case 2:
        ui->VehicleDatetimeSetPage_Button_monthset->setText(inputnum);
        if(inputnum.toInt() >12)
        {
            inputnum = "";
        }
        database->HMiCT_Month_U8 = inputnum.toInt();
        break;
    case 3:
        ui->VehicleDatetimeSetPage_Button_dayset->setText(inputnum);
        if(inputnum.toInt() >31)
        {
            inputnum = "";
        }
        database->HMiCT_Day_U8 = inputnum.toInt();
        break;
    case 4:
        ui->VehicleDatetimeSetPage_Button_hourset->setText(inputnum);
        if(inputnum.toInt() >23)
        {
            inputnum = "";
        }
        database->HMiCT_Hour_U8 = inputnum.toInt();
        break;
    case 5:
        ui->VehicleDatetimeSetPage_Button_minset->setText(inputnum);
        if(inputnum.toInt() >59)
        {
            inputnum = "";
        }
        database->HMiCT_Minute_U8 = inputnum.toInt();
        break;
    case 6:
        ui->VehicleDatetimeSetPage_Button_secset->setText(inputnum);
        if(inputnum.toInt() >59)
        {
            inputnum = "";
        }
        database->HMiCT_Second_U8 = inputnum.toInt();
        break;
    }
    if(database->HMiCT_SaveTime_B1)
    {
        ui->VehicleDatetimeSetPage_Button_confirm->setEnabled(false);
        ui->VehicleDatetimeSetPage_Button_clear_2->setEnabled(false);

        if(++count3s >9)
        {
            ui->VehicleDatetimeSetPage_Button_confirm->setEnabled(true);
            ui->VehicleDatetimeSetPage_Button_clear_2->setEnabled(true);
            count3s = 0;
            database->HMiCT_SaveTime_B1 = false;
        }
    }
}
void VehicleDatetimeSetPage::showEvent(QShowEvent *)
{
    ui->VehicleDatetimeSetPage_Button_yearset->setText(QString::number(QDateTime::currentDateTime().date().year()));
    ui->VehicleDatetimeSetPage_Button_monthset->setText(QString::number(QDateTime::currentDateTime().date().month()));
    ui->VehicleDatetimeSetPage_Button_dayset->setText(QString::number(QDateTime::currentDateTime().date().day()));
    ui->VehicleDatetimeSetPage_Button_hourset->setText(QString::number(QDateTime::currentDateTime().time().hour()));
    ui->VehicleDatetimeSetPage_Button_minset->setText(QString::number(QDateTime::currentDateTime().time().minute()));
    ui->VehicleDatetimeSetPage_Button_secset->setText(QString::number(QDateTime::currentDateTime().time().second()));
    database->HMiCT_Year_U8 = QDateTime::currentDateTime().date().year()-2000;
    database->HMiCT_Month_U8 = QDateTime::currentDateTime().date().month();
    database->HMiCT_Day_U8 = QDateTime::currentDateTime().date().day();
    database->HMiCT_Hour_U8 = QDateTime::currentDateTime().time().hour();
    database->HMiCT_Minute_U8 = QDateTime::currentDateTime().time().minute();
    database->HMiCT_Second_U8 = QDateTime::currentDateTime().time().second();

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num1_clicked()
{
    inputnum = inputnum+"1";
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num2_clicked()
{
    inputnum = inputnum+"2";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num3_clicked()
{
    inputnum = inputnum+"3";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num4_clicked()
{
    inputnum = inputnum+"4";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num5_clicked()
{
    inputnum = inputnum+"5";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num6_clicked()
{
    inputnum = inputnum+"6";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num7_clicked()
{
    inputnum = inputnum+"7";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num8_clicked()
{
    inputnum = inputnum+"8";

}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num9_clicked()
{
    inputnum = inputnum+"9";

}
void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_Num0_clicked()
{
    inputnum = inputnum+"0";

}
void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_clear_clicked()
{
    inputnum = "";
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_confirm_clicked()
{
    QDateTime HMI2VCUtime;
    QDate date( this->database->HMiCT_Year_U8+2000, this->database->HMiCT_Month_U8, this->database->HMiCT_Day_U8);
    QTime time( this->database->HMiCT_Hour_U8, this->database->HMiCT_Minute_U8, this->database->HMiCT_Second_U8);
    HMI2VCUtime.setDate(date);
    HMI2VCUtime.setTime(time);
    if(HMI2VCUtime.isValid())
    {
        database->HMiCT_SaveTime_B1 = true;
    }else
    {
        warningdialog->show();
        database->HMiCT_SaveTime_B1 = false;

    }
}
void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_clear_2_pressed()
{
    changePage(uVehicleParaSetting);
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_yearset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 1)
    {
        Btnselected = 1;
        this->database->HMiCT_Year_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_yearset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_yearset->setStyleSheet(BtnUP);
    }
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_monthset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 2)
    {
        Btnselected = 2;
        this->database->HMiCT_Month_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_monthset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_monthset->setStyleSheet(BtnUP);
    }
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_dayset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 3)
    {
        Btnselected = 3;
        this->database->HMiCT_Day_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_dayset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_dayset->setStyleSheet(BtnUP);
    }
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_hourset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 4)
    {
        Btnselected = 4;
        this->database->HMiCT_Hour_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_hourset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_hourset->setStyleSheet(BtnUP);
    }
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_minset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 5)
    {
        Btnselected = 5;
        this->database->HMiCT_Minute_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_minset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_minset->setStyleSheet(BtnUP);
    }
}

void VehicleDatetimeSetPage::on_VehicleDatetimeSetPage_Button_secset_pressed()
{
    ResetAllBtn();
    inputnum = "";
    if(Btnselected != 6)
    {
        Btnselected = 6;
        this->database->HMiCT_Second_U8 = 0;
        ui->VehicleDatetimeSetPage_Button_secset->setStyleSheet(BtnDOWN);
    }else
    {
        Btnselected = 0;
        ui->VehicleDatetimeSetPage_Button_secset->setStyleSheet(BtnUP);
    }
}
void VehicleDatetimeSetPage::ResetAllBtn()
{
    ui->VehicleDatetimeSetPage_Button_yearset->setStyleSheet(BtnUP);
    ui->VehicleDatetimeSetPage_Button_monthset->setStyleSheet(BtnUP);
    ui->VehicleDatetimeSetPage_Button_dayset->setStyleSheet(BtnUP);
    ui->VehicleDatetimeSetPage_Button_hourset->setStyleSheet(BtnUP);
    ui->VehicleDatetimeSetPage_Button_minset->setStyleSheet(BtnUP);
    ui->VehicleDatetimeSetPage_Button_secset->setStyleSheet(BtnUP);
}

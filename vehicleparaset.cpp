#include "vehicleparaset.h"
#include "ui_vehicleparaset.h"

VehicleParaSet::VehicleParaSet(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleParaSet)
{
    ui->setupUi(this);
    inputmodule = new CtrlInputModule(this);
    inputmodule->setGeometry(200,70,inputmodule->width(),inputmodule->height());
    inputmodule->hide();

    m_tempstart=m_tempstop=m_monthstop1=m_monthstop2=0;
    timer2sEB = timer2sEBS = inputmode = timer3scount[0] = timer3scount[1] = timer3scount[2] = timer3scount[3] = timer3scount[4] = 0;
    ui->VehicleParaSet_Label_wheelvalue->setText(QString::number(this->database->DefaultWheelValue+580));
    ui->VehicleParaSet_Label_VechileNum->setText(QString::number(this->database->DefaultTrainCode));
}

VehicleParaSet::~VehicleParaSet()
{
    delete ui;
}
void VehicleParaSet::showEvent(QShowEvent *)
{

}
void VehicleParaSet::updatePage()
{
    switch(inputmode)
    {
    case 1:
        if(inputmodule->getInputmodulevalue().toInt() >= 580)
        this->database->HMItoVCU_wheelvalue = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->VehicleParaSet_Label_wheelvalue->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));

        break;
    case 2:
        if(inputmodule->getInputmodulevalue().toInt() > 0 && inputmodule->getInputmodulevalue().toInt() <= 99)
        this->database->HMiCT_TrainNum_U8 =  inputmodule->getInputmodulevalue().toInt();
        ui->VehicleParaSet_Label_VechileNum->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
        break;
    case 3:
        this->database->HMiCT_DistanceSet_HW_U16 =  inputmodule->getInputmodulevalue().toInt()/65536;
        this->database->HMiCT_DistanceSet_LW_U16 =  inputmodule->getInputmodulevalue().toInt()%65536;

        ui->VehicleParaSet_Label_milevalue->setText(inputmodule->getInputmodulevalue());
        break;
    }

    if(this->database->HMiCT_WheelSet_B1)
    {
        if(timer3scount[0]++ > 10)
        {
            timer3scount[0] = 0;
            this->database->HMiCT_WheelSet_B1  =false;
            ui->VehicleParaSet_Button_wheeldiasetconfirm->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleParaSet_Button_wheeldiasetconfirm->setEnabled(true);
        }
    }else
    {
        timer3scount[0] = 0;
        ui->VehicleParaSet_Button_wheeldiasetconfirm->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleParaSet_Button_wheeldiasetconfirm->setEnabled(true);
    }
    if(this->database->HMiCT_SaveTrainNum_B1)
    {
        if(timer3scount[1]++ > 10)
        {
            timer3scount[1] = 0;
            this->database->HMiCT_SaveTrainNum_B1 = false;
            ui->VehicleParaSet_Button_traincodesetconfirm->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleParaSet_Button_traincodesetconfirm->setEnabled(true);
        }
    }else
    {
        timer3scount[1] = 0;
        ui->VehicleParaSet_Button_traincodesetconfirm->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleParaSet_Button_traincodesetconfirm->setEnabled(true);
    }
    if(this->database->HMiCT_IDUDistanceSet_B1)
    {
        if(timer3scount[2]++ > 10)
        {
            timer3scount[2] = 0;
            this->database->HMiCT_IDUDistanceSet_B1  =false;
            ui->VehicleParaSet_Button_milesetconfirm->setStyleSheet(MY_BUTTON_UP);
            ui->VehicleParaSet_Button_milesetconfirm->setEnabled(true);
        }
    }else
    {
        timer3scount[2] = 0;
        ui->VehicleParaSet_Button_milesetconfirm->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleParaSet_Button_milesetconfirm->setEnabled(true);
    }
    if(this->database->HMiCT_EmgyBroadcastCommd_B1)
    {
        if(timer2sEB++ > 6)
        {
            timer2sEB = 0;
            this->database->HMiCT_EmgyBroadcastCommd_B1 = false;
            ui->VehicleParaSet_Button_EB->setStyleSheet(MY_BUTTON_UP);
        }
    }else
    {
        timer2sEB = 0;
        ui->VehicleParaSet_Button_EB->setStyleSheet(MY_BUTTON_UP);
    }
    if(this->database->HMiCT_EmgyBroadcastStop_B1)
    {
        if(timer2sEBS++ > 6)
        {
            timer2sEBS = 0;
            this->database->HMiCT_EmgyBroadcastStop_B1 = false;
            ui->VehicleParaSet_Button_EBStop->setStyleSheet(MY_BUTTON_UP);
       }
    }else
    {
        timer2sEBS = 0;
        ui->VehicleParaSet_Button_EBStop->setStyleSheet(MY_BUTTON_UP);
    }

    if(this->database->HMiCT_TempStartSet_B1)
    {
        if(timer3scount[3]++ >10)
        {
            timer3scount[3] = 0;
            this->database->HMiCT_TempStartSet_B1  =false;
            ui->VehicleParaSet_Button_HMiCT_TempStartset->setStyleSheet(MY_BUTTON_UP);
        }
    }else
    {
        timer3scount[3] = 0;
        ui->VehicleParaSet_Button_HMiCT_TempStartset->setStyleSheet(MY_BUTTON_UP);
    }

    if(this->database->HMiCT_MonthStopSet_B1)
    {
        if(timer3scount[4]++ >10)
        {
            timer3scount[4] = 0;
            this->database->HMiCT_MonthStopSet_B1  =false;
            ui->VehicleParaSet_Button_HMiCT_MonthStopSet_B1->setStyleSheet(MY_BUTTON_UP);
        }
    }else
    {
        timer3scount[4] = 0;
        ui->VehicleParaSet_Button_HMiCT_MonthStopSet_B1->setStyleSheet(MY_BUTTON_UP);
    }
    this->database->HMiCT_TempStart_U8 = m_tempstop*16 + m_tempstart + 10;
    this->database->HMiCT_MonthStop_U8 = m_monthstop2*16 + m_monthstop1;

    ui->VehicleParaSet_Label_HMiCT_TempStart->setText(QString::number(m_tempstart));
    ui->VehicleParaSet_Label_HMiCT_TempStop->setText(QString::number(m_tempstop));

    ui->VehicleParaSet_Label_HMiCT_MonthStop1->setText(QString::number(m_monthstop1));
    ui->VehicleParaSet_Label_HMiCT_MonthStop2->setText(QString::number(m_monthstop2));


}

void VehicleParaSet::on_VehicleParaSet_Button_wheeldiaset_pressed()
{
    inputmodule->setInputmode(1);
    inputmode = 1;
    inputmodule->show();
}

void VehicleParaSet::on_VehicleParaSet_Button_carcodeset_pressed()
{
    inputmodule->setInputmode(2);
    inputmode = 2;
    inputmodule->show();
}

void VehicleParaSet::on_VehicleParaSet_Button_mileset_pressed()
{
    inputmodule->setInputmode(3);
    inputmode = 3;
    inputmodule->show();
}


void VehicleParaSet::on_VehicleParaSet_Button_wheeldiasetconfirm_pressed()
{
    this->database->HMiCT_WheelSet_B1 = true;
    if(this->database->HMItoVCU_wheelvalue != this->database->DefaultWheelValue)
    {
        ParasettingPara->set("/Wheel/Wheel",this->database->HMItoVCU_wheelvalue);
    }
    this->database->DefaultWheelValue = this->database->HMItoVCU_wheelvalue;

    ui->VehicleParaSet_Button_wheeldiasetconfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleParaSet_Button_wheeldiasetconfirm->setEnabled(false);
}

void VehicleParaSet::on_VehicleParaSet_Button_traincodesetconfirm_pressed()
{
    this->database->HMiCT_SaveTrainNum_B1 = true;
    if(this->database->HMiCT_TrainNum_U8 != this->database->DefaultTrainCode)
    {
        ParasettingPara->set("/TrainCode/Code",this->database->HMiCT_TrainNum_U8);
    }
    this->database->DefaultTrainCode = this->database->HMiCT_TrainNum_U8;

    ui->VehicleParaSet_Button_traincodesetconfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleParaSet_Button_traincodesetconfirm->setEnabled(false);
}

void VehicleParaSet::on_VehicleParaSet_Button_milesetconfirm_pressed()
{
    this->database->HMiCT_IDUDistanceSet_B1 = true;
    ui->VehicleParaSet_Button_milesetconfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleParaSet_Button_milesetconfirm->setEnabled(false);
}

void VehicleParaSet::on_VehicleParaSet_Button_quitbtn_pressed()
{
    changePage(uVehicleParaSetting);
}
//void VehicleParaSet::on_VehicleParaSet_Button_forcewind_pressed()
//{
//    this->database->HMiCT_ForceWind_B1 = true;
//    ui->VehicleParaSet_Button_forcewind->setStyleSheet(MY_BUTTON_DOWN);
//}
//void VehicleParaSet::on_VehicleParaSet_Button_forcewind_released()
//{
//    this->database->HMiCT_ForceWind_B1 = false;
//    ui->VehicleParaSet_Button_forcewind->setStyleSheet(MY_BUTTON_UP);
//}
void VehicleParaSet::on_VehicleParaSet_Button_EB_pressed()
{
    this->database->HMiCT_EmgyBroadcastCommd_B1 = true;
    ui->VehicleParaSet_Button_EB->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleParaSet::on_VehicleParaSet_Button_EBStop_pressed()
{
    this->database->HMiCT_EmgyBroadcastStop_B1 = true;
    ui->VehicleParaSet_Button_EBStop->setStyleSheet(MY_BUTTON_DOWN);

}

void VehicleParaSet::on_VehicleParaSet_Button_Sandforbidden_pressed()
{
    if(this->database->HMiCT_SandForbidden_B1)
    {
        this->database->HMiCT_SandForbidden_B1 = false;
        ui->VehicleParaSet_Button_Sandforbidden->setStyleSheet(MY_BUTTON_UP);
    }else
    {
        this->database->HMiCT_SandForbidden_B1 = true;
        ui->VehicleParaSet_Button_Sandforbidden->setStyleSheet(MY_BUTTON_DOWN);
    }

}

void VehicleParaSet::on_VehicleParaSet_Button_FBRMC1_pressed()
{
    if(this->database->HMiCT_ForceBrakeReleaseMc1_B1)
    {
        this->database->HMiCT_ForceBrakeReleaseMc1_B1 = false;
        ui->VehicleParaSet_Button_FBRMC1->setStyleSheet(MY_BUTTON_UP);
    }else
    {
        this->database->HMiCT_ForceBrakeReleaseMc1_B1 = true;
        ui->VehicleParaSet_Button_FBRMC1->setStyleSheet(MY_BUTTON_DOWN);
    }
}



void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStartm_pressed()
{
    if(m_tempstart>-10)
    {
        m_tempstart--;
    }

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStartp_pressed()
{
    if(m_tempstart<5)
    {
        m_tempstart++;
    }
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStopm_pressed()
{
    if(m_tempstop>0)
    {
        m_tempstop--;
    }
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStopp_pressed()
{
    if(m_tempstop<15)
    {
        m_tempstop++;
    }
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStartset_pressed()
{
    this->database->HMiCT_TempStartSet_B1 = true;
    ui->VehicleParaSet_Button_HMiCT_TempStartset->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop1m_pressed()
{
    if(m_monthstop1>1)
    {
        m_monthstop1--;
    }
}
void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop1p_pressed()
{
    if(m_monthstop1<12)
    {
        m_monthstop1++;
    }
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop2m_pressed()
{
    if(m_monthstop2>1)
    {
        m_monthstop2--;
    }
}


void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop2p_pressed()
{
    if(m_monthstop2<12)
    {
        m_monthstop2++;
    }
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStopSet_B1_pressed()
{
    this->database->HMiCT_MonthStopSet_B1 = true;
    ui->VehicleParaSet_Button_HMiCT_MonthStopSet_B1->setStyleSheet(MY_BUTTON_DOWN);
}

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

    m_tempstart = this->database->DefaultStarttemp;
    m_tempstop = this->database->DefaultStoptemp;
    m_monthstop1 = this->database->DefaultStartmonth;
    m_monthstop2 = this->database->DefaultStopmonth;

    timer2sEB = timer2sEBS = inputmode = timer3scount[0] = timer3scount[1] = timer3scount[2] = timer3scount[3] = timer3scount[4] = 0;

}

VehicleParaSet::~VehicleParaSet()
{
    delete ui;
}
void VehicleParaSet::showEvent(QShowEvent *)
{
    this->ui->VehicleParaSet_Label_HMiCT_TempStart->setText(QString::number(m_tempstart));
    this->ui->VehicleParaSet_Label_HMiCT_TempStop->setText(QString::number(m_tempstop));
    this->ui->VehicleParaSet_Label_HMiCT_MonthStop1->setText(QString::number(m_monthstop1));
    this->ui->VehicleParaSet_Label_HMiCT_MonthStop2->setText(QString::number(m_monthstop2));

}
void VehicleParaSet::updatePage()
{

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

    this->ui->LBLTCUComsuption->setText(QString::number(this->database->TCUComsuption_U16)+"Kwh");

}






//void VehicleParaSet::on_VehicleParaSet_Button_quitbtn_pressed()
//{
//    changePage(uVehicleParaSetting);
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
    ui->VehicleParaSet_Label_HMiCT_TempStart->setText(QString::number(m_tempstart));

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStartp_pressed()
{
    if(m_tempstart<5)
    {
        m_tempstart++;
    }
    ui->VehicleParaSet_Label_HMiCT_TempStart->setText(QString::number(m_tempstart));

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStopm_pressed()
{
    if(m_tempstop>0)
    {
        m_tempstop--;
    }
    ui->VehicleParaSet_Label_HMiCT_TempStop->setText(QString::number(m_tempstop));

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStopp_pressed()
{
    if(m_tempstop<15)
    {
        m_tempstop++;
    }
    ui->VehicleParaSet_Label_HMiCT_TempStop->setText(QString::number(m_tempstop));

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_TempStartset_pressed()
{
    this->database->HMiCT_TempStartSet_B1 = true;
    ui->VehicleParaSet_Button_HMiCT_TempStartset->setStyleSheet(MY_BUTTON_DOWN);
    ParasettingPara->set("/Temperature/starttemperature",m_tempstart);
    ParasettingPara->set("/Temperature/stoptemperature",m_tempstop);
    this->database->DefaultStarttemp = m_tempstart;
    this->database->DefaultStoptemp = m_tempstop;

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop1m_pressed()
{
    if(m_monthstop1>1)
    {
        m_monthstop1--;
    }
    ui->VehicleParaSet_Label_HMiCT_MonthStop1->setText(QString::number(m_monthstop1));

}
void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop1p_pressed()
{
    if(m_monthstop1<12)
    {
        m_monthstop1++;
    }
    ui->VehicleParaSet_Label_HMiCT_MonthStop1->setText(QString::number(m_monthstop1));

}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop2m_pressed()
{
    if(m_monthstop2>1)
    {
        m_monthstop2--;
    }
    ui->VehicleParaSet_Label_HMiCT_MonthStop2->setText(QString::number(m_monthstop2));
}


void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStop2p_pressed()
{
    if(m_monthstop2<12)
    {
        m_monthstop2++;
    }
    ui->VehicleParaSet_Label_HMiCT_MonthStop2->setText(QString::number(m_monthstop2));
}

void VehicleParaSet::on_VehicleParaSet_Button_HMiCT_MonthStopSet_B1_pressed()
{
    this->database->HMiCT_MonthStopSet_B1 = true;
    ui->VehicleParaSet_Button_HMiCT_MonthStopSet_B1->setStyleSheet(MY_BUTTON_DOWN);
    ParasettingPara->set("/Month/startmonth",m_monthstop1);
    ParasettingPara->set("/Month/stopmonth",m_monthstop2);
    this->database->DefaultStartmonth = m_monthstop1;
    this->database->DefaultStopmonth = m_monthstop2;
}

void VehicleParaSet::on_VehicleWheelset_Button_PrePage_pressed()
{
    this->database->HMiCT_EmgyBroadcastCommd_B1 = false;
    this->database->HMiCT_EmgyBroadcastStop_B1 = false;
    this->database->HMiCT_TempStartSet_B1 = false;
    this->database->HMiCT_MonthStopSet_B1 = false;
    changePage(uVehicleWheelSetPage);
}

void VehicleParaSet::on_VehicleWheelset_Button_NextPage_pressed()
{

}

void VehicleParaSet::on_VehicleWheelset_Button_return_pressed()
{
    this->database->HMiCT_EmgyBroadcastCommd_B1 = false;
    this->database->HMiCT_EmgyBroadcastStop_B1 = false;
    this->database->HMiCT_TempStartSet_B1 = false;
    this->database->HMiCT_MonthStopSet_B1 = false;

    changePage(uVehicleParaSetting);
}

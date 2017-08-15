#include "headerpage.h"
#include "ui_headerpage.h"

HeaderPage::HeaderPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::HeaderPage)
{
    ui->setupUi(this);
    ui->CurrentFaultBtn->hide();

}

HeaderPage::~HeaderPage()
{
    delete ui;
}
void HeaderPage::GetcrrcFaultInfo(CrrcFault* CrrcFault)
{
    m_crrcfault = CrrcFault;
}

void HeaderPage::updatePage()
{


    ui->headerlabel_Date->setText(this->database->HMI_DateTime_foruse.date().toString("yyyy-MM-dd"));
    ui->headerlabel_Time->setText(this->database->HMI_DateTime_foruse.time().toString("hh:mm:ss"));
    ui->headerlabel_Voltage->setText(QString::number(this->database->wR3Word2_net_voltage)+" V");
    ui->headerlabel_Current->setText(QString::number(this->database->wR4Word3_net_current)+" A");
    ui->headerlabel_24VVoltage->setText(QString::number(this->database->wR3Word3_battery_voltage)+" V");
    ui->headerlabel_speed->setText(QString::number(this->database->wR2Word4_Speed)+"Km/h");
    if(this->database->wR3Word4_Speed_limitation == 0)
    {
        ui->headerlabel_limitspeed->setText("停车");
        ui->headerlabel_limitspeed->setStyleSheet("font: 75  18px ;color: rgb(255, 255, 255);background-color: rgb(115, 115, 115)");

    }else
    {
        ui->headerlabel_limitspeed->setText(QString::number(this->database->wR3Word4_Speed_limitation)+"Km/h");
        ui->headerlabel_limitspeed->setStyleSheet("font: 75  18px ;color: rgb(255, 255, 0);background-color: rgb(115, 115, 115)");

    }

    if(this->database->HMIPosition == 1)
    {
        ui->headerlabel_Positon->setText("本车MC1");
    }else if(this->database->HMIPosition == 2)
    {
        ui->headerlabel_Positon->setText("本车MC2");
    }else
    {
        ui->headerlabel_Positon->setText("");
    }
    // active cab press safetybrake,level shows
    if(bool((!this->database->riomSgnIn5Mc1) && this->database->MC1_Key_active) ||bool((!this->database->riomSgnIn5Mc2) && this->database->MC2_Key_active))
    {
        this->database->Master_controller_level = 11; // safety brake
    }else if((!this->database->riomDi2In18Mc1) || (!this->database->riomDi2In18Mc2)
           ||(!this->database->riomDi1In13M1) || (!this->database->riomDi1In13M2) )
    {
        this->database->Master_controller_level = 10; // force brake

    }
    switch(this->database->Master_controller_level)
    {
    case 11:
        ui->headerlabel_Level->setText("安全制动");
        break;
    case -7:
        ui->headerlabel_Level->setText("制动7级");
        break;
    case -6:
        ui->headerlabel_Level->setText("制动6级");
        break;
    case -5:
        ui->headerlabel_Level->setText("制动5级");
        break;
    case -4:
        ui->headerlabel_Level->setText("制动4级");
        break;
    case -3:
        ui->headerlabel_Level->setText("制动3级");
        break;
    case -2:
        ui->headerlabel_Level->setText("制动2级");
        break;
    case -1:
        ui->headerlabel_Level->setText("制动1级");
        break;
    case 0:
        ui->headerlabel_Level->setText("惰行");
        break;
    case 1:
        ui->headerlabel_Level->setText("牵引1级");
        break;
    case 2:
        ui->headerlabel_Level->setText("牵引2级");
        break;
    case 3:
        ui->headerlabel_Level->setText("牵引3级");
        break;
    case 4:
        ui->headerlabel_Level->setText("牵引4级");
        break;
    case 5:
        ui->headerlabel_Level->setText("牵引5级");
        break;
    case 6:
        ui->headerlabel_Level->setText("牵引6级");
        break;
    case 7:
        ui->headerlabel_Level->setText("牵引7级");
        break;
    case 8:
        ui->headerlabel_Level->setText("紧急制动");
        break;
    case 10:
        ui->headerlabel_Level->setText("强迫制动");
        break;
    default:
        ui->headerlabel_Level->setText("");
        break;
    }

    if(m_crrcfault->getConfirmFaultListSize() > 0)
    {
        ui->CurrentFaultBtn->show();

    }else
    {
        ui->CurrentFaultBtn->hide();

    }
}
void HeaderPage::showEvent(QShowEvent *e)
{

}
void HeaderPage::on_CurrentFaultBtn_pressed()
{

    changePage(uVehicleCurrentFaultPage);
}

void HeaderPage::showHelpBtn(bool flg)
{
    if(flg)
    {
        this->ui->HelpitemBtn->show();
    }else
    {
        this->ui->HelpitemBtn->hide();
    }
}


void HeaderPage::on_HelpitemBtn_pressed()
{
    emit HelpPageClicked();
}

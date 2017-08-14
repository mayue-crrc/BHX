#include "vehiclecurrentfaultpage.h"
#include "ui_vehiclecurrentfaultpage.h"

#define MAXFAULTPERPAGE 12
#define LABELSTYLE_LEVEL1 "border: 2px solid color(0, 0, 0);background-color: rgb(255, 255, 255);font: 14px;color: rgb(255, 0, 0);"
#define LABELSTYLE_LEVEL2 "border: 2px solid color(0, 0, 0);background-color: rgb(255, 255, 255);font: 14px;color: rgb(200, 100, 0)"
#define LABELSTYLE_LEVEL3 "border: 2px solid color(0, 0, 0);background-color: rgb(255, 255, 255);font: 14px;color: rgb(0, 0, 0)"

VehicleCurrentFaultPage::VehicleCurrentFaultPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleCurrentFaultPage)
{
    ui->setupUi(this);
    m_CurrentFault_PageID = 1;
    FaultDetailDlg = new CtrlFaultdetails(this);
    FaultDetailDlg->setGeometry(150,80,FaultDetailDlg->width(),FaultDetailDlg->height());
    FaultDetailDlg->hide();
}

VehicleCurrentFaultPage::~VehicleCurrentFaultPage()
{
    delete ui;
}
void VehicleCurrentFaultPage::GetcrrcFaultInfo(CrrcFault* CrrcFault)
{
    m_crrcfault = CrrcFault;
}

void VehicleCurrentFaultPage::updatePage()
{
    int t_savingnum;
    m_CurrentFault_MaxPageID = (m_crrcfault->getConfirmFaultListSize()-1)/12+1;
    if(m_crrcfault->getConfirmFaultListSize()%12 == 0 )
    {
        if(m_crrcfault->getConfirmFaultListSize() == 0)
            t_savingnum = 0;
        else
            t_savingnum = 12;

    }else
    {
        t_savingnum = m_crrcfault->getConfirmFaultListSize()%12;
    }

    QList <QLabel *>  ui_label[12];
    QList <QPushButton *>  ui_pushbutton,ui_confirm_pushbutton;


    ui_label[0] << ui->VF_label_F1_startdate<<ui->VF_label_F1_starttime<<ui->VF_label_F1_code<<ui->VF_label_F1_device<<ui->VF_label_F1_position<<ui->VF_label_F1_name;
    ui_label[1] << ui->VF_label_F2_startdate<<ui->VF_label_F2_starttime<<ui->VF_label_F2_code<<ui->VF_label_F2_device<<ui->VF_label_F2_position<<ui->VF_label_F2_name;
    ui_label[2] << ui->VF_label_F3_startdate<<ui->VF_label_F3_starttime<<ui->VF_label_F3_code<<ui->VF_label_F3_device<<ui->VF_label_F3_position<<ui->VF_label_F3_name;
    ui_label[3] << ui->VF_label_F4_startdate<<ui->VF_label_F4_starttime<<ui->VF_label_F4_code<<ui->VF_label_F4_device<<ui->VF_label_F4_position<<ui->VF_label_F4_name;
    ui_label[4] << ui->VF_label_F5_startdate<<ui->VF_label_F5_starttime<<ui->VF_label_F5_code<<ui->VF_label_F5_device<<ui->VF_label_F5_position<<ui->VF_label_F5_name;
    ui_label[5] << ui->VF_label_F6_startdate<<ui->VF_label_F6_starttime<<ui->VF_label_F6_code<<ui->VF_label_F6_device<<ui->VF_label_F6_position<<ui->VF_label_F6_name;
    ui_label[6] << ui->VF_label_F7_startdate<<ui->VF_label_F7_starttime<<ui->VF_label_F7_code<<ui->VF_label_F7_device<<ui->VF_label_F7_position<<ui->VF_label_F7_name;
    ui_label[7] << ui->VF_label_F8_startdate<<ui->VF_label_F8_starttime<<ui->VF_label_F8_code<<ui->VF_label_F8_device<<ui->VF_label_F8_position<<ui->VF_label_F8_name;
    ui_label[8] << ui->VF_label_F9_startdate<<ui->VF_label_F9_starttime<<ui->VF_label_F9_code<<ui->VF_label_F9_device<<ui->VF_label_F9_position<<ui->VF_label_F9_name;
    ui_label[9] << ui->VF_label_F10_startdate<<ui->VF_label_F10_starttime<<ui->VF_label_F10_code<<ui->VF_label_F10_device<<ui->VF_label_F10_position<<ui->VF_label_F10_name;
    ui_label[10] << ui->VF_label_F11_startdate<<ui->VF_label_F11_starttime<<ui->VF_label_F11_code<<ui->VF_label_F11_device<<ui->VF_label_F11_position<<ui->VF_label_F11_name;
    ui_label[11] << ui->VF_label_F12_startdate<<ui->VF_label_F12_starttime<<ui->VF_label_F12_code<<ui->VF_label_F12_device<<ui->VF_label_F12_position<<ui->VF_label_F12_name;

    ui_pushbutton<< ui->VF_button_F1_intro<<ui->VF_button_F2_intro<<ui->VF_button_F3_intro<<ui->VF_button_F4_intro<<ui->VF_button_F5_intro<<ui->VF_button_F6_intro<<
                    ui->VF_button_F7_intro<<ui->VF_button_F8_intro<<ui->VF_button_F9_intro<<ui->VF_button_F10_intro<<ui->VF_button_F11_intro<<ui->VF_button_F12_intro;
    ui_confirm_pushbutton<< ui->VF_button_F1_confirm<<ui->VF_button_F2_confirm<<ui->VF_button_F3_confirm<<ui->VF_button_F4_confirm<<ui->VF_button_F5_confirm<<ui->VF_button_F6_confirm<<
                            ui->VF_button_F7_confirm<<ui->VF_button_F8_confirm<<ui->VF_button_F9_confirm<<ui->VF_button_F10_confirm<<ui->VF_button_F11_confirm<<ui->VF_button_F12_confirm;

    if(m_CurrentFault_MaxPageID < m_CurrentFault_PageID)
    {
        m_CurrentFault_PageID = m_CurrentFault_MaxPageID;
    }
    else if(m_CurrentFault_MaxPageID == m_CurrentFault_PageID)
    {
        for(int i = 0 ; i < t_savingnum; i ++)
        {
            if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '1')// set level color
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL1);
                }
            }else if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '2')
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL2);
                }
            }else if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '3')
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL3);
                }
            }else
            {
                qDebug() << "fault level error!, please check it" << __FILE__ << __LINE__;
                return;
            }
            ui_pushbutton[i]->show();

            ui_pushbutton[i]->setStyleSheet("border-image: url(:/new/prefix1/images/button.png);");
            ui_pushbutton[i]->setDisabled(false);

            ui_confirm_pushbutton[i]->show();
            ui_confirm_pushbutton[i]->setStyleSheet(MY_BUTTON_UP);
            ui_confirm_pushbutton[i]->setDisabled(false);


            ui_label[i].at(0)->setText(m_crrcfault->getConfirmFaultDate((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(1)->setText(m_crrcfault->getConfirmFaultTime((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(2)->setText(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(3)->setText(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(4)->setText(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(5)->setText(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+i));
        }
        for(int i = t_savingnum ; i < MAXFAULTPERPAGE; i++)
        {
            //ui_pushbutton[i]->setText("");
            ui_pushbutton[i]->hide();

            ui_pushbutton[i]->setDisabled(true);

            ui_confirm_pushbutton[i]->hide();
            ui_confirm_pushbutton[i]->setDisabled(true);

            ui_label[i].at(0)->setText("");
            ui_label[i].at(1)->setText("");
            ui_label[i].at(2)->setText("");
            ui_label[i].at(3)->setText("");
            ui_label[i].at(4)->setText("");
            ui_label[i].at(5)->setText("");
        }
    }else
    {
        for(int i = 0 ; i < MAXFAULTPERPAGE; i ++)
        {
            if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '1')// set level color
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL1);
                }
            }else if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '2')
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL2);
                }
            }else if(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i).at(1) == '3')
            {
                for(int j = 0; j < 6 ; j++)
                {
                    ui_label[i].at(j)->setStyleSheet(LABELSTYLE_LEVEL3);
                }
            }else
            {
                qDebug() << "fault level error!, please check it" << __FILE__ << __LINE__;
                return;
            }

            //ui_pushbutton[i]->setText("点击");
            ui_pushbutton[i]->setStyleSheet("border-image: url(:/new/prefix1/images/button.png);");
            ui_pushbutton[i]->setDisabled(false);
            ui_pushbutton[i]->show();

            ui_confirm_pushbutton[i]->show();
            ui_confirm_pushbutton[i]->setStyleSheet(MY_BUTTON_UP);
            ui_confirm_pushbutton[i]->setDisabled(false);

            ui_label[i].at(0)->setText(m_crrcfault->getConfirmFaultDate((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(1)->setText(m_crrcfault->getConfirmFaultTime((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(2)->setText(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(3)->setText(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(4)->setText(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+i));
            ui_label[i].at(5)->setText(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+i));
        }
    }

    ui->VF_label_PAGE->setText( QString::number(m_CurrentFault_PageID)+ "/" + QString::number(m_CurrentFault_MaxPageID)  );
}
void VehicleCurrentFaultPage::showEvent(QShowEvent *)
{

}
void VehicleCurrentFaultPage::on_VehicleCurrentFaultPage_Button_NextPage_pressed()
{
    if(m_CurrentFault_PageID < m_CurrentFault_MaxPageID)
    {
        m_CurrentFault_PageID++;
    }
}

void VehicleCurrentFaultPage::on_VehicleCurrentFaultPage_Button_PrePage_pressed()
{
    if(m_CurrentFault_PageID >1)
    {
        m_CurrentFault_PageID--;
    }
}

void VehicleCurrentFaultPage::on_VehicleCurrentFaultPage_Button_quit_pressed()
{
    changePage(uVehicleRunPage);
}
void VehicleCurrentFaultPage::on_VF_button_F1_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F2_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+1));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+1));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+1));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+1));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+1));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F3_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+2));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+2));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+2));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+2));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+2));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F4_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+3));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+3));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+3));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+3));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+3));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F5_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+4));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+4));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+4));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+4));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+4));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F6_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+5));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+5));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+5));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+5));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+5));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F7_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+6));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+6));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+6));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+6));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+6));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F8_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+7));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+7));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+7));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+7));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+7));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F9_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+8));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+8));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+8));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+8));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+8));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F10_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+9));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+9));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+9));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+9));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+9));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F11_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+10));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+10));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+10));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+10));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+10));
    FaultDetailDlg->show();
}

void VehicleCurrentFaultPage::on_VF_button_F12_intro_pressed()
{
    FaultDetailDlg->SetFaultFname(m_crrcfault->getConfirmFaultName((m_CurrentFault_PageID-1)*12+11));
    FaultDetailDlg->SetFaultFcode(m_crrcfault->getConfirmFaultCode((m_CurrentFault_PageID-1)*12+11));
    FaultDetailDlg->SetFaultFdetail(m_crrcfault->getConfirmFaultDescription((m_CurrentFault_PageID-1)*12+11));
    FaultDetailDlg->SetFaultFdevice(m_crrcfault->getConfirmFaultDevice((m_CurrentFault_PageID-1)*12+11));
    FaultDetailDlg->SetFaultFposition(m_crrcfault->getConfirmFaultPosition((m_CurrentFault_PageID-1)*12+11));
    FaultDetailDlg->show();
}


void VehicleCurrentFaultPage::on_VF_button_F1_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12);

}
void VehicleCurrentFaultPage::on_VF_button_F2_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+1);

}
void VehicleCurrentFaultPage::on_VF_button_F3_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+2);

}
void VehicleCurrentFaultPage::on_VF_button_F4_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+3);

}
void VehicleCurrentFaultPage::on_VF_button_F5_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+4);

}
void VehicleCurrentFaultPage::on_VF_button_F6_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+5);

}
void VehicleCurrentFaultPage::on_VF_button_F7_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+6);

}
void VehicleCurrentFaultPage::on_VF_button_F8_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+7);

}
void VehicleCurrentFaultPage::on_VF_button_F9_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+8);

}
void VehicleCurrentFaultPage::on_VF_button_F10_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+9);

}
void VehicleCurrentFaultPage::on_VF_button_F11_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+10);

}
void VehicleCurrentFaultPage::on_VF_button_F12_confirm_pressed()
{
    m_crrcfault->deleteConfirmFault((m_CurrentFault_PageID-1)*12+11);

}

void VehicleCurrentFaultPage::on_VF_button_confirmALL_pressed()
{
    m_crrcfault->deleteAllconfirmFault();
}

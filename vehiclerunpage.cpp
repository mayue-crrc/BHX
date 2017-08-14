#include "vehiclerunpage.h"
#include "ui_vehiclerunpage.h"

VehicleRunPage::VehicleRunPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleRunPage)
{
    ui->setupUi(this);
    LevelBar = new CtrlLevelBar(this);
    LevelBar->setGeometry(10,5,LevelBar->width(),LevelBar->height());

    Speedometer = new CtrlSpeedometer(this);
    Speedometer->setGeometry(90,5,Speedometer->width(),Speedometer->height());

    TrainDiagram = new CtrlTrainDiagram(this);
    TrainDiagram->setGeometry(300,5,TrainDiagram->width(),TrainDiagram->height());

    Countdown = new CtrlCountdown(this);
    Countdown->setGeometry(145,250,Countdown->width(),Countdown->height());


    VCU1Lifesignal_old = 0;
    VCU2Lifesignal_old = 0;
    timer4s = 0;
}

VehicleRunPage::~VehicleRunPage()
{
    delete ui;
}
void VehicleRunPage::showEvent(QShowEvent *e)
{

}
void VehicleRunPage::updatePage()
{
    ui->VRun_label_totalmil->setText("累计行驶: "+QString::number(this->database->wR2Word2_Distance_high*65535 + this->database->wR2Word3_Distance_low) +" km");
    ui->VRun_label_todaymil->setText("今日行驶: "+QString::number(this->database->wR3Word3_wdiDistance) +" km");


    LevelBar->Ctrl_SetLevelvalue(this->database->Master_controller_level);
    Speedometer->setSpeenometerValue(this->database->wR2Word4_Speed);
    Countdown->CountdownInput(this->database->wR3Word4_deadman_counter);




    // online states
    updateOnlinestatus();
    // Running states
    updateRunstatus();
    // train states
    updateTrainstatus();
    this->update();

}
void VehicleRunPage::updateOnlinestatus()
{

    //update onlinestatus
    ///RIOM
    if(this->database->CANopenStatus_RIOM1)
    {
        ui->VRun_label_MC1S3->setStyleSheet(LABELONLINE_GREEN);
    }
    else
    {
        ui->VRun_label_MC1S3->setStyleSheet(LABELONLINE_WHITE);
    }


    if(this->database->CANopenStatus_RIOM2)
    {
        ui->VRun_label_M1S3->setStyleSheet(LABELONLINE_GREEN);
    }
    else
    {
        ui->VRun_label_M1S3->setStyleSheet(LABELONLINE_WHITE);
    }

    if(this->database->CANopenStatus_RIOM3)
    {
        ui->VRun_label_M2S3->setStyleSheet(LABELONLINE_GREEN);
    }
    else
    {
        ui->VRun_label_M2S3->setStyleSheet(LABELONLINE_WHITE);
    }

    if(this->database->CANopenStatus_RIOM4)
    {
        ui->VRun_label_MC2S3->setStyleSheet(LABELONLINE_GREEN);
    }
    else
    {
        ui->VRun_label_MC2S3->setStyleSheet(LABELONLINE_WHITE);
    }
    ///VCU

    if( this->database->CANopenStatus_VCU1)
    {
        if(this->database->VCU1_Master)
        {
            ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_YELLOW);
        }
        if(this->database->CANopenStatus_VCU2)
        {
            if(this->database->VCU2_Master)
            {
                ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_GREEN);
            }else
            {
                ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_YELLOW);
            }
        }else
        {
            ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_WHITE);
        }
    }else if(this->database->CANopenStatus_VCU2)
    {
        if(this->database->VCU2_Master)
        {
            ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_YELLOW);
        }
        if(this->database->CANopenStatus_VCU1)
        {
            if(this->database->VCU1_Master)
            {
                ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_GREEN);
            }else
            {
                ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_YELLOW);
            }
        }else
        {
            ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_WHITE);
        }
    }else
    {
        ui->VRun_label_MC1VCU->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_MC2VCU->setStyleSheet(LABELONLINE_WHITE);

    }

    //ERM


    if(this->database->CANopenStatus_ERM1)
    {
        ui->VRun_label_MC1ERM->setStyleSheet(LABELONLINE_GREEN);
        if( this->database->CANopenStatus_ERM2)
        {
            ui->VRun_label_MC2ERM->setStyleSheet(LABELONLINE_YELLOW);
        }else
        {
            ui->VRun_label_MC2ERM->setStyleSheet(LABELONLINE_WHITE);
        }
    }else
    {
        ui->VRun_label_MC1ERM->setStyleSheet(LABELONLINE_WHITE);
        if( this->database->CANopenStatus_ERM2)
        {
            ui->VRun_label_MC2ERM->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_MC2ERM->setStyleSheet(LABELONLINE_WHITE);
        }
    }
    ///HMI
    if(this->database->CANopenStatus_HMI1)
    {
        if(this->database->MC1_Key_active)
        {
            ui->VRun_label_MC1HMI->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_MC1HMI->setStyleSheet(LABELONLINE_YELLOW);

        }
    }else
    {
        ui->VRun_label_MC1HMI->setStyleSheet(LABELONLINE_WHITE);

    }

    if(this->database->CANopenStatus_HMI2)
    {
        if(this->database->MC2_Key_active)
        {
            ui->VRun_label_MC2HMI->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_MC2HMI->setStyleSheet(LABELONLINE_YELLOW);

        }
    }else
    {
        ui->VRun_label_MC2HMI->setStyleSheet(LABELONLINE_WHITE);

    }
    //BCU
    if(this->database->CANopenStatus_BCU1)
    {
        ui->VRun_label_TP1S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_TP1S1->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_BCU2)
    {
        ui->VRun_label_TP2S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_TP2S1->setStyleSheet(LABELONLINE_WHITE);
    }

    //PIS
    if(this->database->CANopenStatus_PIS1)
    {
        if(this->database->PIS1runningstate_U8 == 1)//master
        {
            ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_GREEN);

        }else if(this->database->PIS1runningstate_U8 == 3)//partmaster
        {
            ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_PINK);

        }else if(this->database->PIS1runningstate_U8 == 2)// slave
        {
            ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_YELLOW);

        }else if(this->database->PIS1runningstate_U8 == 0)// fault
        {
            ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_RED);

        }else//off
        {
            ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_NOINFO);
        }
    }else
    {
        ui->VRun_label_MC1PIS->setStyleSheet(LABELONLINE_WHITE);
    }

    if(this->database->CANopenStatus_PIS2)
    {
        if(this->database->PIS2runningstate_U8 == 1)//master
        {
            ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_GREEN);

        }else if(this->database->PIS2runningstate_U8 == 3)//partmaster
        {
            ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_PINK);

        }else if(this->database->PIS2runningstate_U8 == 2)// slave
        {
            ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_YELLOW);

        }else if(this->database->PIS2runningstate_U8 == 0)// fault
        {
            ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_RED);

        }else//off
        {
            ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_NOINFO);
        }
    }else
    {
        ui->VRun_label_MC2PIS->setStyleSheet(LABELONLINE_WHITE);
    }



    //HVAC
    if(this->database->CANopenStatus_HVAC1)
    {
        ui->VRun_label_MC1S4->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC1S4->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC2)
    {
        ui->VRun_label_M1S4->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M1S4->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC3)
    {
        ui->VRun_label_M2S4->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M2S4->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC4)
    {
        ui->VRun_label_MC2S4->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC2S4->setStyleSheet(LABELONLINE_WHITE);
    }
    ///ACU BCC
    if(this->database->CANopenStatus_ACU1)
    {
        ui->VRun_label_MC1S2->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC1S2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_ACU2)
    {
        ui->VRun_label_M1S2->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M1S2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_ACU3)
    {
        ui->VRun_label_M2S2->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M2S2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_ACU4)
    {
        ui->VRun_label_MC2S2->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC2S2->setStyleSheet(LABELONLINE_WHITE);
    }

    //TCU
    if(this->database->CANopenStatus_TCU1)
    {
        ui->VRun_label_MC1S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC1S1->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU2)
    {
        ui->VRun_label_M1S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M1S1->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU3)
    {
        ui->VRun_label_M2S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_M2S1->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU4)
    {
        ui->VRun_label_MC2S1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_MC2S1->setStyleSheet(LABELONLINE_WHITE);
    }


}
void VehicleRunPage::updateRunstatus()
{
    // BCC
    if(this->database->CANopenStatus_BCC1)
    {
        if(!this->database->BC1CT_BCCOK_B1)
        {
            ui->VRun_label_RECState1->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->BC1CT_Stop_B1)
        {
            ui->VRun_label_RECState1->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_RECState1->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_RECState1->setStyleSheet(LABELONLINE_WHITE);
    }

    if(this->database->CANopenStatus_BCC2)
    {
        if(!this->database->BC2CT_BCCOK_B1)
        {
            ui->VRun_label_RECState2->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->BC2CT_Stop_B1)
        {
            ui->VRun_label_RECState2->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_RECState2->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_RECState2->setStyleSheet(LABELONLINE_WHITE);

    }
    if(this->database->CANopenStatus_BCC3)
    {
        if(!this->database->BC3CT_BCCOK_B1)
        {
            ui->VRun_label_RECState3->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->BC3CT_Stop_B1)
        {
            ui->VRun_label_RECState3->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_RECState3->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_RECState3->setStyleSheet(LABELONLINE_WHITE);

    }
    if(this->database->CANopenStatus_BCC4)
    {
        if(!this->database->BC4CT_BCCOK_B1)
        {
            ui->VRun_label_RECState4->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->BC4CT_Stop_B1)
        {
            ui->VRun_label_RECState4->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_RECState4->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_RECState4->setStyleSheet(LABELONLINE_WHITE);

    }
    // ACU
    if(this->database->CANopenStatus_ACU1)
    {
        if(this->database->AU1CT_StateOK_B1 || (this->database->riomDi1In20Mc1))
        {
            ui->VRun_label_ACUState1->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->AU1CT_Stop_B1)
        {
            ui->VRun_label_ACUState1->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_ACUState1->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_ACUState1->setStyleSheet(LABELONLINE_WHITE);
    }

    if(this->database->CANopenStatus_ACU2)
    {
        if(this->database->AU2CT_StateOK_B1|| (this->database->riomDi1In20M1))
        {
            ui->VRun_label_ACUState2->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->AU2CT_Stop_B1)
        {
            ui->VRun_label_ACUState2->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_ACUState2->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_ACUState2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_ACU3)
    {
        if(this->database->AU3CT_StateOK_B1|| (this->database->riomDi1In20M2))
        {
            ui->VRun_label_ACUState3->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->AU3CT_Stop_B1)
        {
            ui->VRun_label_ACUState3->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_ACUState3->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_ACUState3->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_ACU4)
    {
        if(this->database->AU4CT_StateOK_B1|| (this->database->riomDi1In20Mc2))
        {
            ui->VRun_label_ACUState4->setStyleSheet(LABELONLINE_RED);
        }else if(!this->database->AU4CT_Stop_B1)
        {
            ui->VRun_label_ACUState4->setStyleSheet(LABELONLINE_GRAY);
        }else
        {
            ui->VRun_label_ACUState4->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_ACUState4->setStyleSheet(LABELONLINE_WHITE);
    }
    // HVAC
    if(this->database->CANopenStatus_HVAC1)
    {
        ui->VRun_label_HVACState1->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_HVACState1->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC2)
    {
        ui->VRun_label_HVACState2->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_HVACState2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC3)
    {
        ui->VRun_label_HVACState3->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_HVACState3->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_HVAC4)
    {
        ui->VRun_label_HVACState4->setStyleSheet(LABELONLINE_GREEN);
    }else
    {
        ui->VRun_label_HVACState4->setStyleSheet(LABELONLINE_WHITE);
    }
    // BCU
    if(this->database->CANopenStatus_RIOM1)
    {
        if(!this->database->riomDi1In22Mc1) // 制动故障
        {
            ui->VRun_label_BCUState1->setStyleSheet(LABELONLINE_RED);
        }else
        {
            ui->VRun_label_BCUState1->setStyleSheet(LABELONLINE_GREEN);

        }

        if(!this->database->riomDi2In20Mc1) // 制动故障
        {
            ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_RED);
        }
        else
        {
            ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_BCUState1->setStyleSheet(LABELONLINE_WHITE);

    }


    if(this->database->CANopenStatus_RIOM4)
    {
        if(!this->database->riomDi1In22Mc2) // 制动故障
        {
            ui->VRun_label_BCUState6->setStyleSheet(LABELONLINE_RED);
        }
        else
        {
            ui->VRun_label_BCUState6->setStyleSheet(LABELONLINE_GREEN);
        }
        if(!this->database->riomDi2In20Mc2) // 制动故障
        {
            ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_RED);
        }
        else
        {
            ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_GREEN);

        }
    }else
    {
        ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_BCUState6->setStyleSheet(LABELONLINE_WHITE);

    }

    if(this->database->CANopenStatus_RIOM2)
    {

        if(!this->database->riomDi1In22M1) // 制动故障
        {
            ui->VRun_label_BCUState3->setStyleSheet(LABELONLINE_RED);
        }
        else
        {
            ui->VRun_label_BCUState3->setStyleSheet(LABELONLINE_GREEN);

        }
    }else
    {
        ui->VRun_label_BCUState3->setStyleSheet(LABELONLINE_WHITE);

    }

    if(this->database->CANopenStatus_RIOM3)
    {

        if(!this->database->riomDi1In22M2) // 制动故障
        {
            ui->VRun_label_BCUState4->setStyleSheet(LABELONLINE_RED);
        }
        else
        {
            ui->VRun_label_BCUState4->setStyleSheet(LABELONLINE_GREEN);
        }
    }else
    {
        ui->VRun_label_BCUState4->setStyleSheet(LABELONLINE_WHITE);

    }




//    if(this->database->CANopenStatus_BCU1)
//    {

//        if(this->database->BR1CT_BSE_B1)
//        {
//            ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_RED);
//        }else if(this->database->BR1CT_BSW_B1)
//        {
//            ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_YELLOW);
//        }else
//        {
//            ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_GREEN);
//        }
//    }else
//    {
//        ui->VRun_label_BCUState2->setStyleSheet(LABELONLINE_WHITE);
//    }

//    if(this->database->CANopenStatus_BCU2)
//    {
//        if(this->database->BR2CT_BSE_B1)
//        {
//            ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_RED);
//        }else if(this->database->BR2CT_BSW_B1)
//        {
//            ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_YELLOW);
//        }else
//        {
//            ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_GREEN);
//        }
//    }else
//    {
//        ui->VRun_label_BCUState5->setStyleSheet(LABELONLINE_WHITE);
//    }


    // TCU
    if(this->database->CANopenStatus_TCU1)
    {
        if(this->database->TR1_1CT_Inverter1FaultM1_B1 )
        {
            ui->VRun_label_TCUState1->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR1_1CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState1->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR1_1CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState1->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState1->setStyleSheet(LABELONLINE_GRAY);
        }

        if(this->database->TR1_2CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState1_2->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR1_2CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState1_2->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR1_2CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState1_2->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState1_2->setStyleSheet(LABELONLINE_GRAY);
        }
    }else
    {
        ui->VRun_label_TCUState1->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_TCUState1_2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU2)
    {
        if(this->database->TR2_1CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState2->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR2_1CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState2->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR2_1CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState2->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState2->setStyleSheet(LABELONLINE_GRAY);
        }

        if(this->database->TR2_2CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState2_2->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR2_2CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState2_2->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR2_2CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState2_2->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState2_2->setStyleSheet(LABELONLINE_GRAY);
        }
    }else
    {
        ui->VRun_label_TCUState2->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_TCUState2_2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU3)
    {
        if(this->database->TR3_1CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState3->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR3_1CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState3->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR3_1CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState3->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState3->setStyleSheet(LABELONLINE_GRAY);
        }

        if(this->database->TR3_2CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState3_2->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR3_2CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState3_2->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR3_2CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState3_2->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState3_2->setStyleSheet(LABELONLINE_GRAY);
        }
    }else
    {
        ui->VRun_label_TCUState3->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_TCUState3_2->setStyleSheet(LABELONLINE_WHITE);
    }
    if(this->database->CANopenStatus_TCU4)
    {
        if(this->database->TR4_1CT_Inverter1FaultM1_B1 )
        {
            ui->VRun_label_TCUState4->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR4_1CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState4->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR4_1CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState4->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState4->setStyleSheet(LABELONLINE_GRAY);
        }

        if(this->database->TR4_2CT_Inverter1FaultM1_B1)
        {
            ui->VRun_label_TCUState4_2->setStyleSheet(LABELONLINE_RED);
        }else if(this->database->TR4_2CT_Inverter1WarnM1_B1)
        {
            ui->VRun_label_TCUState4_2->setStyleSheet(LABELONLINE_YELLOW);
        }else if(this->database->TR4_2CT_Inverter1WorkM1_B1)
        {
            ui->VRun_label_TCUState4_2->setStyleSheet(LABELONLINE_GREEN);
        }else
        {
            ui->VRun_label_TCUState4_2->setStyleSheet(LABELONLINE_GRAY);
        }
    }else
    {
        ui->VRun_label_TCUState4->setStyleSheet(LABELONLINE_WHITE);
        ui->VRun_label_TCUState4_2->setStyleSheet(LABELONLINE_WHITE);
    }
}
void VehicleRunPage::updateTrainstatus()
{
    // active
    TrainDiagram->SetKeyState(this->database->MC1_Key_active,this->database->MC2_Key_active);
    // 制动手动缓解
    TrainDiagram->SetBrakeMRLS(this->database->riomSgnIn7Mc1,this->database->riomSgnIn7M1,this->database->riomSgnIn7M2,this->database->riomSgnIn7Mc2);
    // forward or backward

    if(this->database->MC1_Key_active && !this->database->MC2_Key_active)
    {
        if(this->database->Direction_forward && !this->database->Direction_reverse)
        {
            ui->VehicleRun_forward->show();
            ui->VehicleRun_backward->hide();
        }else if(this->database->Direction_reverse && !this->database->Direction_forward)
        {
            ui->VehicleRun_forward->hide();
            ui->VehicleRun_backward->show();
        }else
        {
            ui->VehicleRun_forward->hide();
            ui->VehicleRun_backward->hide();
        }
    }else if(!this->database->MC1_Key_active && this->database->MC2_Key_active)
    {
        if(this->database->Direction_forward&& !this->database->Direction_reverse)
        {
            ui->VehicleRun_forward->hide();
            ui->VehicleRun_backward->show();
        }else if(this->database->Direction_reverse&& !this->database->Direction_forward)
        {
            ui->VehicleRun_forward->show();
            ui->VehicleRun_backward->hide();
        }else
        {
            ui->VehicleRun_forward->hide();
            ui->VehicleRun_backward->hide();
        }
    }else
    {
        ui->VehicleRun_forward->hide();
        ui->VehicleRun_backward->hide();
    }


    // door mc1
    int t_doorstate[8];
    t_doorstate[0] = setDoorstates(this->database->MC1drDoor1Opnedtx,
                                   this->database->MC1drDoor1Clsedtx,
                                   this->database->MC1drDoor1EmergencyUnlocktx,
                                   this->database->MC1drDoor1Isotx,
                                   this->database->MC1drDoor1Acting,
                                   this->database->MC1drDoor1Obstructetx,
                                   this->database->CANopenStatus_DOOR1);
    t_doorstate[1] = setDoorstates(this->database->MC1drDoor2Opnedtx,
                                   this->database->MC1drDoor2Clsedtx,
                                   this->database->MC1drDoor2EmergencyUnlocktx,
                                   this->database->MC1drDoor2Isotx,
                                   this->database->MC1drDoor2Acting,
                                   this->database->MC1drDoor2Obstructetx,
                                   this->database->CANopenStatus_DOOR2);
    t_doorstate[2] = setDoorstates(this->database->MC1drDoor3Opnedtx,
                                   this->database->MC1drDoor3Clsedtx,
                                   this->database->MC1drDoor3EmergencyUnlocktx,
                                   this->database->MC1drDoor3Isotx,
                                   this->database->MC1drDoor3Acting,
                                   this->database->MC1drDoor3Obstructetx,
                                   this->database->CANopenStatus_DOOR3);
    t_doorstate[3] = setDoorstates(this->database->MC1drDoor4Opnedtx,
                                   this->database->MC1drDoor4Clsedtx,
                                   this->database->MC1drDoor4EmergencyUnlocktx,
                                   this->database->MC1drDoor4Isotx,
                                   this->database->MC1drDoor4Acting,
                                   this->database->MC1drDoor4Obstructetx,
                                   this->database->CANopenStatus_DOOR4);
    t_doorstate[4] = setDoorstates(this->database->M1drDoor1Opnedtx,
                                   this->database->M1drDoor1Clsedtx,
                                   this->database->M1drDoor1EmergencyUnlocktx,
                                   this->database->M1drDoor1Isotx,
                                   this->database->M1drDoor1Acting,
                                   this->database->M1drDoor1Obstructetx,
                                   this->database->CANopenStatus_DOOR5);
    t_doorstate[5] = setDoorstates(this->database->M1drDoor2Opnedtx,
                                   this->database->M1drDoor2Clsedtx,
                                   this->database->M1drDoor2EmergencyUnlocktx,
                                   this->database->M1drDoor2Isotx,
                                   this->database->M1drDoor2Acting,
                                   this->database->M1drDoor2Obstructetx,
                                   this->database->CANopenStatus_DOOR6);
    t_doorstate[6] = setDoorstates(this->database->M1drDoor3Opnedtx,
                                   this->database->M1drDoor3Clsedtx,
                                   this->database->M1drDoor3EmergencyUnlocktx,
                                   this->database->M1drDoor3Isotx,
                                   this->database->M1drDoor3Acting,
                                   this->database->M1drDoor3Obstructetx,
                                   this->database->CANopenStatus_DOOR7);
    t_doorstate[7] = setDoorstates(this->database->M1drDoor4Opnedtx,
                                   this->database->M1drDoor4Clsedtx,
                                   this->database->M1drDoor4EmergencyUnlocktx,
                                   this->database->M1drDoor4Isotx,
                                   this->database->M1drDoor4Acting,
                                   this->database->M1drDoor4Obstructetx,
                                   this->database->CANopenStatus_DOOR8);
    TrainDiagram->SetMC1DoorStates(t_doorstate);
    // door MC2
    t_doorstate[0] = setDoorstates(this->database->MC2drDoor1Opnedtx,
                                   this->database->MC2drDoor1Clsedtx,
                                   this->database->MC2drDoor1EmergencyUnlocktx,
                                   this->database->MC2drDoor1Isotx,
                                   this->database->MC2drDoor1Acting,
                                   this->database->MC2drDoor1Obstructetx,
                                   this->database->CANopenStatus_DOOR9);
    t_doorstate[1] = setDoorstates(this->database->MC2drDoor2Opnedtx,
                                   this->database->MC2drDoor2Clsedtx,
                                   this->database->MC2drDoor2EmergencyUnlocktx,
                                   this->database->MC2drDoor2Isotx,
                                   this->database->MC2drDoor2Acting,
                                   this->database->MC2drDoor2Obstructetx,
                                   this->database->CANopenStatus_DOOR10);
    t_doorstate[2] = setDoorstates(this->database->MC2drDoor3Opnedtx,
                                   this->database->MC2drDoor3Clsedtx,
                                   this->database->MC2drDoor3EmergencyUnlocktx,
                                   this->database->MC2drDoor3Isotx,
                                   this->database->MC2drDoor3Acting,
                                   this->database->MC2drDoor3Obstructetx,
                                   this->database->CANopenStatus_DOOR11);
    t_doorstate[3] = setDoorstates(this->database->MC2drDoor4Opnedtx,
                                   this->database->MC2drDoor4Clsedtx,
                                   this->database->MC2drDoor4EmergencyUnlocktx,
                                   this->database->MC2drDoor4Isotx,
                                   this->database->MC2drDoor4Acting,
                                   this->database->MC2drDoor4Obstructetx,
                                   this->database->CANopenStatus_DOOR12);
    t_doorstate[4] = setDoorstates(this->database->M2drDoor1Opnedtx,
                                   this->database->M2drDoor1Clsedtx,
                                   this->database->M2drDoor1EmergencyUnlocktx,
                                   this->database->M2drDoor1Isotx,
                                   this->database->M2drDoor1Acting,
                                   this->database->M2drDoor1Obstructetx,
                                   this->database->CANopenStatus_DOOR13);
    t_doorstate[5] = setDoorstates(this->database->M2drDoor2Opnedtx,
                                   this->database->M2drDoor2Clsedtx,
                                   this->database->M2drDoor2EmergencyUnlocktx,
                                   this->database->M2drDoor2Isotx,
                                   this->database->M2drDoor2Acting,
                                   this->database->M2drDoor2Obstructetx,
                                   this->database->CANopenStatus_DOOR14);
    t_doorstate[6] = setDoorstates(this->database->M2drDoor3Opnedtx,
                                   this->database->M2drDoor3Clsedtx,
                                   this->database->M2drDoor3EmergencyUnlocktx,
                                   this->database->M2drDoor3Isotx,
                                   this->database->M2drDoor3Acting,
                                   this->database->M2drDoor3Obstructetx,
                                   this->database->CANopenStatus_DOOR15);
    t_doorstate[7] = setDoorstates(this->database->M2drDoor4Opnedtx,
                                   this->database->M2drDoor4Clsedtx,
                                   this->database->M2drDoor4EmergencyUnlocktx,
                                   this->database->M2drDoor4Isotx,
                                   this->database->M2drDoor4Acting,
                                   this->database->M2drDoor4Obstructetx,
                                   this->database->CANopenStatus_DOOR16);
    TrainDiagram->SetMC2DoorStates(t_doorstate);

    // panto up/down
    int t_pantostate_M1,t_pantostate_M2;
    if(this->database->riomSgnIn15M1)
    {
        t_pantostate_M1 = 1;
    }else if(this->database->riomSgnIn16M1)
    {
        t_pantostate_M1 = 2;
    }else
    {
        t_pantostate_M1 = 0;
    }

    if(this->database->riomSgnIn15M2)
    {
        t_pantostate_M2 = 1;
    }else if(this->database->riomSgnIn16M2)
    {
        t_pantostate_M2 = 2;
    }else
    {
        t_pantostate_M2 = 0;
    }
    TrainDiagram->SetPantState(t_pantostate_M1,t_pantostate_M2);
    // brake state
    //  applied: 3 red    rel: 2 green


    //MC
    if(this->database->riomSgnIn7Mc1)//制动手动缓解
    {
        TrainDiagram->SetMC1BrakeStates(2);
    }
    else if(!this->database->riomSgnIn5Mc1) // 安全制动
    {
        TrainDiagram->SetMC1BrakeStates(3);
    }
    else if(this->database->riomSgnIn4Mc1) //制动缓解
    {
        TrainDiagram->SetMC1BrakeStates(2);
    }else                               //制动施加
    {
        TrainDiagram->SetMC1BrakeStates(3);
    }

    if(this->database->riomSgnIn7Mc2)//制动手动缓解
    {
        TrainDiagram->SetMC2BrakeStates(2);
    }
    else if(!this->database->riomSgnIn5Mc2) // 安全制动
    {
        TrainDiagram->SetMC2BrakeStates(3);
    }
    else if(this->database->riomSgnIn4Mc2) //制动缓解
    {
        TrainDiagram->SetMC2BrakeStates(2);
    }else                               //制动施加
    {
        TrainDiagram->SetMC2BrakeStates(3);
    }
    //TC
    if(this->database->riomSgnIn14Mc1)   //制动缓解
    {
        TrainDiagram->SetT1BrakeStates(2);
    }else                           //制动施加
    {
        TrainDiagram->SetT1BrakeStates(3);
    }

    if(this->database->riomSgnIn14Mc2)   //制动缓解
    {
        TrainDiagram->SetT2BrakeStates(2);
    }else                           //制动施加
    {
        TrainDiagram->SetT2BrakeStates(3);
    }
    //M
    if(this->database->riomSgnIn7M1)//制动手动缓解
    {
        TrainDiagram->SetM1BrakeStates(2);
    }
    else if(!this->database->riomSgnIn5M1) // 安全制动
    {
        TrainDiagram->SetM1BrakeStates(3);
    }
    else if(this->database->riomSgnIn4M1) //制动缓解
    {
        TrainDiagram->SetM1BrakeStates(2);
    }else                               //制动施加
    {
        TrainDiagram->SetM1BrakeStates(3);
    }


    if(this->database->riomSgnIn7M2)//制动手动缓解
    {
        TrainDiagram->SetM2BrakeStates(2);
    }
    else if(!this->database->riomSgnIn5M2) // 安全制动
    {
        TrainDiagram->SetM2BrakeStates(3);
    }
    else if(this->database->riomSgnIn4M2) //制动缓解
    {
        TrainDiagram->SetM2BrakeStates(2);
    }else                               //制动施加
    {
        TrainDiagram->SetM2BrakeStates(3);
    }
}
int VehicleRunPage::setDoorstates(bool open,bool close,bool emlock,bool iso,bool atcing,bool orb,bool offline)
{
    /*
     priority
    5: OFFLINE
    4: BYPASS
    3: EMUNLOCK
    1: OPEN
    2: CLOSE
    6: ORB
    7: ACTING
    8: NOINRO
    9: FAULT
    */
    if(!offline)
    {
        return 0;
    }else
    {
        if(iso)
        {
            return 4;
        }else if(emlock)
        {
            return 3;
        }else if(orb)
        {
            return 6;
        }else if(atcing)
        {
            return 5;
        }else if(open)
        {
            return 1;
        }else if(close)
        {
            return 2;
        }else
        {
            return 8;
        }
    }
}

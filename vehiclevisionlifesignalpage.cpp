#include "vehiclevisionlifesignalpage.h"
#include "ui_vehiclevisionlifesignalpage.h"

VehicleVisionLifesignalPage::VehicleVisionLifesignalPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleVisionLifesignalPage)
{
    ui->setupUi(this);

    visionlifesignalform = new CtrlVisionLifesignalForm(this);
    visionlifesignalform->setGeometry(30,10,visionlifesignalform->width(),visionlifesignalform->height());


    LifesignaleVisionPageID = 1;
}

VehicleVisionLifesignalPage::~VehicleVisionLifesignalPage()
{
    delete ui;
}
void VehicleVisionLifesignalPage::updatePage()
{
    QList<QString> vision[2];
    QList<QString> signal[2];
    QList<QString> name[2];


    switch(LifesignaleVisionPageID)
    {
    case 1:
        vision[0]  << "V"+ QString::number((float)database->VCU1_Version/100,10,2) << "V" + QString::number((float)database->VCU2_Version/100,10,2)
                << "V" + QString::number((float)(database->HMIVision1)/10,10,1) << "V" + QString::number((float)(database->HMIVision2)/10,10,1)
                << "V" + QString::number((float)(database->ERMtoVCUVision1),10,1) << "V" + QString::number((float)(database->ERMtoVCUVision2),10,1)
                <<  "V" + QString::number((float)database->ERM1_PLC_version,10,1)<<  "V" + QString::number((float)database->ERM2_PLC_version,10,1)
                << "V" + QString::number((float)(database->ERMtoVCUGWVision1)/10,10,1) << "V" + QString::number((float)(database->ERMtoVCUGWVision2)/10,10,1)
                << "V" + QString::number((float)database->riomGwVersionMc1/10,10,1)<<"V" + QString::number((float)database->riomGwVersionMc2/10,10,1)
                << "V" + QString::number((float)database->riomGwVersionM1/10,10,1)<<"V" + QString::number((float)database->riomGwVersionM2/10,10,1)
                << "V" + QString::number((float)database->riomDiVersionMc1/10,10,1)<<"V" + QString::number((float)database->riomDiVersionMc2/10,10,1)
                << "V" + QString::number((float)database->riomDiVersionM1/10,10,1)<<"V" + QString::number((float)database->riomDiVersionM2/10,10,1)
                << "V" + QString::number((float)database->riomDoVersionMc1/10,10,1)<<"V" + QString::number((float)database->riomDoVersionMc2/10,10,1)
                << "V" + QString::number((float)database->riomDoVersionM1/10,10,1)<<"V" + QString::number((float)database->riomDoVersionM2/10,10,1)
                << "V" + QString::number((float)database->riomAxVersionMc1/10,10,1)<<"V" + QString::number((float)database->riomAxVersionMc2/10,10,1)
                << "V" + QString::number((float)database->riomAxVersionM1/10,10,1)<<"V" + QString::number((float)database->riomAxVersionM2/10,10,1)
                << "V" + QString::number((float)database->riomSgnVersionMc1/10,10,1)<<"V" + QString::number((float)database->riomSgnVersionMc2/10,10,1)
                << "V" + QString::number((float)database->riomSgnVersionM1/10,10,1)<<"V" + QString::number((float)database->riomSgnVersionM2/10,10,1)
                << "V" + QString::number((float)database->BR1CT_SWVersion_U8/100,10,2)<<"V" + QString::number((float)database->BR2CT_SWVersion_U8/100,10,2)
                << "V" + QString::number((float)database->AU1CT_SWVersion_U8/100,10,2)<<"V" + QString::number((float)database->AU2CT_SWVersion_U8/100,10,2)
                << "V" + QString::number((float)database->AU3CT_SWVersion_U8/100,10,2)<<"V" + QString::number((float)database->AU4CT_SWVersion_U8/100,10,2);
                //<< QString::number((float)database->BC3CT_SWVersion_U8,100,2)<<QString::number((float)database->BC4CT_SWVersion_U8/100,10,2)
                ;
        signal[0]  << QString::number(database->VCU1_Lifesignal) << QString::number(database->VCU2_Lifesignal)
                << QString::number(database->HMILifesignal1) << QString::number(database->HMILifesignal2)
                << QString::number(database->ERMtoVCULifesignal1) << QString::number(database->ERMtoVCULifesignal2)
                <<"--"<<"--"<<"--"<<"--"
                <<"--"<<"--"<<"--"<<"--"
                <<"--"<<"--"<<"--"<<"--"
                <<"--"<<"--"<<"--"<<"--"
                <<"--"<<"--"<<"--"<<"--"
                <<"--"<<"--"<<"--"<<"--"
                << QString::number(database->BR1CT_SWLifesignal_U8) << QString::number(database->BR2CT_SWLifesignal_U8)
                << QString::number(database->AU1CT_Lifesignal_U8) << QString::number(database->AU2CT_Lifesignal_U8)
                << QString::number(database->AU3CT_Lifesignal_U8) << QString::number(database->AU4CT_Lifesignal_U8);


        name[0] << "VCU MC1" << "VCU MC2" << "HMI MC1" << "HMI MC2" << "ERM MC1" << "ERM MC2"
                <<"ERM_PLC MC1"<<"ERM_PLC MC2"<<"ERM-GW MC1"<<"ERM-GW MC2"
                << "RIOM-GW MC1"<<"RIOM-GW MC2"<<"RIOM-GW M1"<<"RIOM-GW M2"
                << "RIOM-DI MC1"<<"RIOM-DI MC2"<<"RIOM-DI M1"<<"RIOM-DI M2"
                << "RIOM-DO MC1"<<"RIOM-DO MC2"<<"RIOM-DO M1"<<"RIOM-DO M2"
                << "RIOM-AX MC1"<<"RIOM-AX MC2"<<"RIOM-AX M1"<<"RIOM-AX M2"
                << "RIOM-SGN MC1"<<"RIOM-SGN MC2"<<"RIOM-SGN M1"<<"RIOM-SGN M2"
                << "BCU TP1"<< "BCU TP2"
                << "ACU MC1"<< "ACU M1"<<"ACU M2"<< "ACU MC2"
                ;
        break;
    case 2:
        vision[1] << "V" + QString::number((float)database->BC1CT_SWVersion_U8/100,10,2)<<"V" + QString::number((float)database->BC2CT_SWVersion_U8/100,10,2)
                 << "V" +  QString::number((float)database->BC3CT_SWVersion_U8/100,10,2)<< "V" + QString::number((float)database->BC4CT_SWVersion_U8/100,10,2)
                 << "V" +  QString::number((float)database->HVAC1CTSoftware_version_HB)+"."+QString::number((float)database->HVAC1CTSoftware_version_LB)
                 << "V" +  QString::number((float)database->HVAC2CTSoftware_version_HB)+"."+QString::number((float)database->HVAC2CTSoftware_version_LB)
                 << "V" +  QString::number((float)database->HVAC3CTSoftware_version_HB)+"."+QString::number((float)database->HVAC3CTSoftware_version_LB)
                 << "V" +  QString::number((float)database->HVAC4CTSoftware_version_HB)+"."+QString::number((float)database->HVAC4CTSoftware_version_LB)
                 << "V" +  QString::number((float)database->MC1DOOR1_Software_version_HB)+"."+QString::number((float)database->MC1DOOR1_Software_version_LB)
                 << "V" +  QString::number((float)database->MC1DOOR2_Software_version_HB)+"."+QString::number((float)database->MC1DOOR2_Software_version_LB)
                 << "V" +  QString::number((float)database->MC1DOOR3_Software_version_HB)+"."+QString::number((float)database->MC1DOOR3_Software_version_LB)
                 << "V" +  QString::number((float)database->MC1DOOR4_Software_version_HB)+"."+QString::number((float)database->MC1DOOR4_Software_version_LB)
                 << "V" +  QString::number((float)database->M1DOOR1_Software_version_HB)+"."+QString::number((float)database->M1DOOR1_Software_version_LB)
                 << "V" +  QString::number((float)database->M1DOOR2_Software_version_HB)+"."+QString::number((float)database->M1DOOR2_Software_version_LB)
                 << "V" +  QString::number((float)database->M1DOOR3_Software_version_HB)+"."+QString::number((float)database->M1DOOR3_Software_version_LB)
                 << "V" +  QString::number((float)database->M1DOOR4_Software_version_HB)+"."+QString::number((float)database->M1DOOR4_Software_version_LB)
                 << "V" +  QString::number((float)database->M2DOOR1_Software_version_HB)+"."+QString::number((float)database->M2DOOR1_Software_version_LB)
                 << "V" +  QString::number((float)database->M2DOOR2_Software_version_HB)+"."+QString::number((float)database->M2DOOR2_Software_version_LB)
                 << "V" +  QString::number((float)database->M2DOOR3_Software_version_HB)+"."+QString::number((float)database->M2DOOR3_Software_version_LB)
                 << "V" +  QString::number((float)database->M2DOOR4_Software_version_HB)+"."+QString::number((float)database->M2DOOR4_Software_version_LB)
                 << "V" +  QString::number((float)database->MC2DOOR1_Software_version_HB)+"."+QString::number((float)database->MC2DOOR1_Software_version_LB)
                 << "V" +  QString::number((float)database->MC2DOOR2_Software_version_HB)+"."+QString::number((float)database->MC2DOOR2_Software_version_LB)
                 << "V" +  QString::number((float)database->MC2DOOR3_Software_version_HB)+"."+QString::number((float)database->MC2DOOR3_Software_version_LB)
                 << "V" +  QString::number((float)database->MC2DOOR4_Software_version_HB)+"."+QString::number((float)database->MC2DOOR4_Software_version_LB)
                 << "V" +  QString::number((float)database->TR1_1CT_SWVersionM1_U8/100,10,2)<< "V" + QString::number((float)database->TR1_2CT_SWVersionM1_U8/100,10,2)
                 << "V" +  QString::number((float)database->TR2_1CT_SWVersionM1_U8/100,10,2)<< "V" + QString::number((float)database->TR2_2CT_SWVersionM1_U8/100,10,2)
                 << "V" +  QString::number((float)database->TR3_1CT_SWVersionM1_U8/100,10,2)<< "V" + QString::number((float)database->TR3_2CT_SWVersionM1_U8/100,10,2)
                 << "V" +  QString::number((float)database->TR4_1CT_SWVersionM1_U8/100,10,2)<< "V" + QString::number((float)database->TR4_2CT_SWVersionM1_U8/100,10,2)
                 ;
        signal[1]
                << QString::number(database->BC1CT_Lifesignal_U8) << QString::number(database->BC2CT_Lifesignal_U8)
                << QString::number(database->BC3CT_Lifesignal_U8) << QString::number(database->BC4CT_Lifesignal_U8)
                << QString::number(database->HVAC1CT_Life_signal) << QString::number(database->HVAC2CT_Life_signal)
                << QString::number(database->HVAC3CT_Life_signal) << QString::number(database->HVAC4CT_Life_signal)
                << QString::number(database->MC1DOOR1_drDoorNoOpnCMDtx) << QString::number(database->MC1DOOR2_drDoorNoOpnCMDtx)
                << QString::number(database->MC1DOOR3_drDoorNoOpnCMDtx) << QString::number(database->MC1DOOR4_drDoorNoOpnCMDtx)
                << QString::number(database->M1DOOR1_drDoorNoOpnCMDtx) << QString::number(database->M1DOOR2_drDoorNoOpnCMDtx)
                << QString::number(database->M1DOOR3_drDoorNoOpnCMDtx) << QString::number(database->M1DOOR4_drDoorNoOpnCMDtx)
                << QString::number(database->M2DOOR1_drDoorNoOpnCMDtx) << QString::number(database->M2DOOR2_drDoorNoOpnCMDtx)
                << QString::number(database->M2DOOR3_drDoorNoOpnCMDtx) << QString::number(database->M2DOOR4_drDoorNoOpnCMDtx)
                << QString::number(database->MC2DOOR1_drDoorNoOpnCMDtx) << QString::number(database->MC2DOOR2_drDoorNoOpnCMDtx)
                << QString::number(database->MC2DOOR3_drDoorNoOpnCMDtx) << QString::number(database->MC2DOOR4_drDoorNoOpnCMDtx)
                << QString::number(database->TR1_1CT_LifeSignalM1_U8) << QString::number(database->TR1_2CT_LifeSignalM1_U8)
                << QString::number(database->TR2_1CT_LifeSignalM1_U8) << QString::number(database->TR2_2CT_LifeSignalM1_U8)
                << QString::number(database->TR3_1CT_LifeSignalM1_U8) << QString::number(database->TR3_2CT_LifeSignalM1_U8)
                << QString::number(database->TR4_1CT_LifeSignalM1_U8) << QString::number(database->TR4_2CT_LifeSignalM1_U8)

                ;
        name[1]   << "BCC MC1"<< "BCC M1"<< "BCC M2" << "BCC MC2"<< "HVAC MC1" << "HVAC M1"<< "HVAC M2" << "HVAC MC2"<< "DOOR1 MC1" << "DOOR2 MC1"<< "DOOR3 MC1" << "DOOR4 MC1"
                  << "DOOR1 M1" << "DOOR2 M1"<< "DOOR3 M1" << "DOOR4 M1"<< "DOOR1 M2" << "DOOR2 M2"<< "DOOR3 M2" << "DOOR4 M2"
                  << "DOOR1 MC2" << "DOOR2 MC2"<< "DOOR3 MC2" << "DOOR4 MC2"
                  << "TCU1 MC1" << "TCU2 MC1"<< "TCU1 M1" << "TCU2 M1" << "TCU1 M2" << "TCU2 M2"<< "TCU1 MC2" << "TCU2 MC2";

        break;
    }
    visionlifesignalform->initialName(name[LifesignaleVisionPageID-1]);
    visionlifesignalform->updateVision(vision[LifesignaleVisionPageID-1]);
    visionlifesignalform->updateLifesignal(signal[LifesignaleVisionPageID-1]);
    ui->VehicleVisionLifesignalPage_Label_Page->setText(QString::number(LifesignaleVisionPageID)+ "\n/\n2");
}
void VehicleVisionLifesignalPage::showEvent(QShowEvent *)
{

}

void VehicleVisionLifesignalPage::on_VehicleVisionLifesignalPage_Button_back_clicked()
{
    changePage(uVehicleParaSetting);
}

void VehicleVisionLifesignalPage::on_VehicleVisionLifesignalPage_Button_prepage_clicked()
{
    if(LifesignaleVisionPageID >1)
        LifesignaleVisionPageID--;
}

void VehicleVisionLifesignalPage::on_VehicleVisionLifesignalPage_Button_nextpage_clicked()
{
    if(LifesignaleVisionPageID <2)
        LifesignaleVisionPageID++;
}

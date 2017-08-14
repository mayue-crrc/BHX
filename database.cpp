#include "database.h"
#include "crrccan.h"
#include "MainGetDefaultPara.h"
Database::Database()
{
    mydefaultpara = new MainGetDefaultPara();
    HMIPosition = mydefaultpara->getInt("/Position/HMI");
//    DefaultWheelValue = mydefaultpara->getInt("/Wheel/Wheel");
//    DefaultTrainCode = mydefaultpara->getInt("/TrainCode/Code");

    HMiCT_TrainNum_U8 = 0;//DefaultTrainCode;
    HMItoVCU_wheelvalue = 0;//DefaultWheelValue;
    this->HMI_15minscnt = 0;
    this->HMI_StopHVACtest_B1 = false;
    this->HMILifesignal = 0;
    this->HMItoVCUfactroytest = false;
    this->HMiCT_SaveTime_B1 = false;
    this->HMiCT_SaveTrainNum_B1 = false;
    this->HMiCT_SaveFirstStation_B1 = false;
    this->HMiCT_SaveLastStation_B1 = false;
    this->HMiCT_WheelSet_B1 = false;
    this->HMiCT_IDUDistanceSet_B1 = false;
    this->CANopenStatus_VCU1 = false;
    this->CANopenStatus_VCU2 = false;
    this->HMiCT_Reduce2_B1 = false;
    this->HMiCT_Reduce1_B1 = false;
    this->HMiCT_Add1_B1 = false;
    this->HMiCT_Add2_B1 = false;
    this->HMiCT_UICMode_B1 = false;
    this->HMiCT_AutoWarm_B1 = false;
    this->HMiCT_AutoCold_B1 = false;
    this->HMiCT_Ventilation_B1 = false;
    this->HMiCT_ForceWind_B1 = false;
    this->HMiCT_Stop_B1 = false;
    this->HMiCT_MGTest_B1 = false;
    this->HMiCT_TestWarm_B1 = false;
    this->HMiCT_TestCold_B1 = false;
    this->HMiCT_ReduceLoad_B1 = false;
    this->HMiCT_SandForbidden_B1 = false;
    this->HMiCT_ForceBrakeReleaseMc1_B1 = false;
    this->HMiCT_ForceBrakeReleaseMc2_B1 = false;
    this->HMiCT_MC1MSR1Enable_B1 = false;
    this->HMiCT_MC1MSR2Enable_B1 = false;
    this->HMiCT_M1MSR1Enable_B1 = false;
    this->HMiCT_M1MSR2Enable_B1 = false;
    this->HMiCT_M2MSR1Enable_B1 = false;
    this->HMiCT_M2MSR2Enable_B1 = false;
    this->HMiCT_MC2MSR1Enable_B1 = false;
    this->HMiCT_MC2MSR2Enable_B1 = false;
    this->HMiCT_IsolateRstMC1_B1 = false;
    this->HMiCT_IsolateRstM1_B1 = false;
    this->HMiCT_IsolateRstM2_B1 = false;
    this->HMiCT_IsolateRstMC2_B1 = false;
    this->HMiCT_ACU1Cutoff_B1 = false;
    this->HMiCT_ACU2Cutoff_B1 = false;
    this->HMiCT_ACU3Cutoff_B1 = false;
    this->HMiCT_ACU4Cutoff_B1 = false;
    this->HMiCT_ACU1Reset_B1 = false;
    this->HMiCT_ACU2Reset_B1 = false;
    this->HMiCT_ACU3Reset_B1 = false;
    this->HMiCT_ACU4Reset_B1 = false;
    this->HMiCT_BCC1Cutoff_B1 = false;
    this->HMiCT_BCC2Cutoff_B1 = false;
    this->HMiCT_BCC3Cutoff_B1 = false;
    this->HMiCT_BCC4Cutoff_B1 = false;
    this->HMiCT_BCC1Reset_B1 = false;
    this->HMiCT_BCC2Reset_B1 = false;
    this->HMiCT_BCC3Reset_B1 = false;
    this->HMiCT_BCC4Reset_B1 = false;
    this->HMiCT_ResetACU1Fult_B1 = false;
    this->HMiCT_ResetACU2Fult_B1 = false;
    this->HMiCT_ResetACU3Fult_B1 = false;
    this->HMiCT_ResetACU4Fult_B1 = false;
    this->HMiCT_FireAlarmRst_B1 = false;
    this->HMiCT_PISMODE_B1 = false;
    this->HMiCT_EmgyBroadcastCommd_B1 = false;
    this->HMiCT_EmgyBroadcastStop_B1 = false;
    //this->HMiCT_BCUSelfTestReq_B1 = false;
    this->HMiCT_Heat1_B1 = false;
    this->HMiCT_Heat2_B1 = false;
    this->HMiCT_TempStartSet_B1 = false;
    this->HMiCT_MonthStopSet_B1 = false;

    this->HMiCT_TempStart_U8 = 0;
    this->HMiCT_MonthStop_U8 = 0;
    this->VCU1_Lifesignalold = 0;
    this->VCU2_Lifesignalold = 0;
    this->HMiCT_DistanceSet_LW_U16 = 0;
    this->HMiCT_DistanceSet_HW_U16 = 0;

    this->HMiCT_FactoryTest_start_B1 = false;
    this->HMiCT_TCUtest_B1 = false;

    this->HMiCT_FactoryTest_start_B1 = this->HMiCT_FactoryTest_MC1DO1_1 = this->HMiCT_FactoryTest_MC1DO1_2 = this->HMiCT_FactoryTest_MC1DO1_3 = this->HMiCT_FactoryTest_MC1DO1_4 =
    this->HMiCT_FactoryTest_MC1DO1_5 = this->HMiCT_FactoryTest_MC1DO1_6 = this->HMiCT_FactoryTest_MC1DO1_7 = this->HMiCT_FactoryTest_MC1DO1_8 =
    this->HMiCT_FactoryTest_MC1DO1_9 = this->HMiCT_FactoryTest_MC1DO1_10 = this->HMiCT_FactoryTest_MC1DO1_11 = this->HMiCT_FactoryTest_MC1DO1_13 =
    this->HMiCT_FactoryTest_MC1DO2_1 = this->HMiCT_FactoryTest_MC1DO2_3 = this->HMiCT_FactoryTest_MC1DO2_4 = this->HMiCT_FactoryTest_MC1DO2_5 =
    this->HMiCT_FactoryTest_MC1DO2_7 = this->HMiCT_FactoryTest_MC1DO2_8 = this->HMiCT_FactoryTest_MC1DO2_9 = this->HMiCT_FactoryTest_M1DO1_2 =
    this->HMiCT_FactoryTest_M1DO1_3 = this->HMiCT_FactoryTest_M1DO1_5 = this->HMiCT_FactoryTest_M1DO1_8 = this->HMiCT_FactoryTest_M1DO1_9 = this->HMiCT_FactoryTest_M1DO1_10 = false;
    this->HMiCT_FactoryTest_start_B1 = this->HMiCT_FactoryTest_MC2DO1_1 = this->HMiCT_FactoryTest_MC2DO1_2 = this->HMiCT_FactoryTest_MC2DO1_3 = this->HMiCT_FactoryTest_MC2DO1_4 =
    this->HMiCT_FactoryTest_MC2DO1_5 = this->HMiCT_FactoryTest_MC2DO1_6 = this->HMiCT_FactoryTest_MC2DO1_7 = this->HMiCT_FactoryTest_MC2DO1_8 =
    this->HMiCT_FactoryTest_MC2DO1_9 = this->HMiCT_FactoryTest_MC2DO1_10 = this->HMiCT_FactoryTest_MC2DO1_11 = this->HMiCT_FactoryTest_MC2DO1_13 =
    this->HMiCT_FactoryTest_MC2DO2_1 = this->HMiCT_FactoryTest_MC2DO2_3 = this->HMiCT_FactoryTest_MC2DO2_4 = this->HMiCT_FactoryTest_MC2DO2_5 =
    this->HMiCT_FactoryTest_MC2DO2_7 = this->HMiCT_FactoryTest_MC2DO2_8 = this->HMiCT_FactoryTest_MC2DO2_9 = this->HMiCT_FactoryTest_M2DO1_2 =
    this->HMiCT_FactoryTest_M2DO1_3 = this->HMiCT_FactoryTest_M2DO1_5 = this->HMiCT_FactoryTest_M2DO1_8 = this->HMiCT_FactoryTest_M2DO1_9 = this->HMiCT_FactoryTest_M2DO1_10 = false;


    this->HMI_TrainPos = 1;
}

void Database::updateDatabse(CrrcCan *crrcCan)
{

    //init vision,lifesignal
    if (HMILifesignal++ > 254)
    {
        HMILifesignal = 0;
    }
    int HMIVision = 20;//VISION

    //  judge online 1.65s period


    //
    static int timervcu_3s = 0;
    if(timervcu_3s++ > 3)
    {
        if(this->HMIPosition == 1)
        {
            this->VCU1_Lifesignal = crrcCan->getUnsignedChar(0x215,0);
            this->VCU2_Lifesignal = crrcCan->getUnsignedChar(0x215,1);
        }else if(this->HMIPosition == 2)
        {
            this->VCU1_Lifesignal = crrcCan->getUnsignedChar(0x216,0);
            this->VCU2_Lifesignal = crrcCan->getUnsignedChar(0x216,1);

        }else
        {
            this->VCU1_Lifesignal = 0xff;
            this->VCU2_Lifesignal = 0xff;
        }
        if(VCU1_Lifesignal != VCU1_Lifesignalold)
        {
            this->CANopenStatus_VCU1 = true;

        }else
        {
            this->CANopenStatus_VCU1 = false;
        }

        VCU1_Lifesignalold = VCU1_Lifesignal;
        if(VCU2_Lifesignal != VCU2_Lifesignalold)
        {
            this->CANopenStatus_VCU2 = true;

        }else
        {
            this->CANopenStatus_VCU2 = false;
        }
        VCU2_Lifesignalold = VCU2_Lifesignal;
        timervcu_3s = 0;
    }

    // define local time for recording and showing
    QDateTime dateTimeLocal;

    if(this->CANopenStatus_VCU1||this->CANopenStatus_VCU2)
    {
//        Datestr = VCUtoALL_yearstr.sprintf("%d",this->database->VCUtoALL_year+2000)+"-"+
//                  VCUtoALL_monthstr.sprintf("%02d",this->database->VCUtoALL_month)+"-"+
//                  VCUtoALL_daystr.sprintf("%02d",this->database->VCUtoALL_day);
//        Timestr = VCUtoALL_hourstr.sprintf("%02d",this->database->VCUtoALL_hour)+":"+
//                  VCUtoALL_minutestr.sprintf("%02d",this->database->VCUtoALL_minute)+":"+
//                  VCUtoALL_secondstr.sprintf("%02d",this->database->VCUtoALL_second);
        QDate date( this->VCUtoALL_year+2000, this->VCUtoALL_month, this->VCUtoALL_day );
        QTime time( this->VCUtoALL_hour, this->VCUtoALL_minute, this->VCUtoALL_second);
        HMI_DateTime_foruse.setDate(date);
        HMI_DateTime_foruse.setTime(time);
        if(HMI_DateTime_foruse.isValid())
        {

        }else
        {
            HMI_DateTime_foruse.setDate(dateTimeLocal.currentDateTime().date());
            HMI_DateTime_foruse.setTime(dateTimeLocal.currentDateTime().time());
        }

    }else
    {
//        Datestr = dateTimeLocal.currentDateTime().date().toString("yyyy-MM-dd");
//        Timestr = dateTimeLocal.currentDateTime().time().toString("hh:mm:ss");
        HMI_DateTime_foruse.setDate(dateTimeLocal.currentDateTime().date());
        HMI_DateTime_foruse.setTime(dateTimeLocal.currentDateTime().time());
    }

    if(this->HMIPosition == 1)
    {

        ////VCU->HMI1 0x215-415
        this->VCU1_Version = crrcCan->getUnsignedChar(0x515,0);
        this->VCU2_Version = crrcCan->getUnsignedChar(0x515,1);
        this->VCU1_Lifesignal = crrcCan->getUnsignedChar(0x215,0);
        this->VCU2_Lifesignal = crrcCan->getUnsignedChar(0x215,1);

        this->CANopenStatus_BCU1 = crrcCan->getBool(0x215,2,0);
        this->CANopenStatus_BCU2 = crrcCan->getBool(0x215,2,1);
        this->CANopenStatus_RIOM1 = crrcCan->getBool(0x215,2,2);
        this->CANopenStatus_RIOM2 = crrcCan->getBool(0x215,2,3);
        this->CANopenStatus_RIOM3 = crrcCan->getBool(0x215,2,5);
        this->CANopenStatus_RIOM4 = crrcCan->getBool(0x215,2,4);
        this->CANopenStatus_TCU1 = crrcCan->getBool(0x215,2,6);
        this->CANopenStatus_TCU2 = crrcCan->getBool(0x215,2,7);

        this->CANopenStatus_TCU3 = crrcCan->getBool(0x215,3,0);
        this->CANopenStatus_TCU4 = crrcCan->getBool(0x215,3,1);
        this->CANopenStatus_ACU1 = crrcCan->getBool(0x215,3,2);
        this->CANopenStatus_ACU2 = crrcCan->getBool(0x215,3,3);
        this->CANopenStatus_ACU3 = crrcCan->getBool(0x215,3,4);
        this->CANopenStatus_ACU4 = crrcCan->getBool(0x215,3,5);
        this->CANopenStatus_PIS1 = crrcCan->getBool(0x215,3,6);
        this->CANopenStatus_PIS2 = crrcCan->getBool(0x215,3,7);

        this->CANopenStatus_HMI1 = crrcCan->getBool(0x215,4,0);
        this->CANopenStatus_HMI2 = crrcCan->getBool(0x215,4,1);
        this->CANopenStatus_HVAC1 = crrcCan->getBool(0x215,4,2);
        this->CANopenStatus_HVAC2 = crrcCan->getBool(0x215,4,3);
        this->CANopenStatus_HVAC3 = crrcCan->getBool(0x215,4,4);
        this->CANopenStatus_HVAC4 = crrcCan->getBool(0x215,4,5);
        this->CANopenStatus_DOOR1 = crrcCan->getBool(0x215,4,6);
        this->CANopenStatus_DOOR2 = crrcCan->getBool(0x215,4,7);

        this->CANopenStatus_DOOR3 = crrcCan->getBool(0x215,5,0);
        this->CANopenStatus_DOOR4 = crrcCan->getBool(0x215,5,1);
        this->CANopenStatus_DOOR5 = crrcCan->getBool(0x215,5,2);
        this->CANopenStatus_DOOR6 = crrcCan->getBool(0x215,5,3);
        this->CANopenStatus_DOOR7 = crrcCan->getBool(0x215,5,4);
        this->CANopenStatus_DOOR8 = crrcCan->getBool(0x215,5,5);
        this->CANopenStatus_DOOR9 = crrcCan->getBool(0x215,5,6);
        this->CANopenStatus_DOOR10 = crrcCan->getBool(0x215,5,7);

        this->CANopenStatus_DOOR11 = crrcCan->getBool(0x215,6,0);
        this->CANopenStatus_DOOR12 = crrcCan->getBool(0x215,6,1);
        this->CANopenStatus_DOOR13 = crrcCan->getBool(0x215,6,2);
        this->CANopenStatus_DOOR14 = crrcCan->getBool(0x215,6,3);
        this->CANopenStatus_DOOR15 = crrcCan->getBool(0x215,6,4);
        this->CANopenStatus_DOOR16 = crrcCan->getBool(0x215,6,5);
        this->CANopenStatus_ERM1 = crrcCan->getBool(0x215,6,6);
        this->CANopenStatus_ERM2 = crrcCan->getBool(0x215,6,7);
        this->CANopenStatus_BCC1 = crrcCan->getBool(0x415,7,0);
        this->CANopenStatus_BCC2 = crrcCan->getBool(0x415,7,1);
        this->CANopenStatus_BCC3 = crrcCan->getBool(0x415,7,2);
        this->CANopenStatus_BCC4 = crrcCan->getBool(0x415,7,3);
        this->VCU1_Master = crrcCan->getBool(0x215,7,0);
        this->VCU2_Master = crrcCan->getBool(0x215,7,1);

        HMIVision2 = crrcCan->getUnsignedChar(0x196,1);//other side vision
        HMILifesignal2 = crrcCan->getUnsignedChar(0x196,0);

        this->Direction_forward = crrcCan->getBool(0x315,0,0);
        this->Direction_reverse = crrcCan->getBool(0x315,0,1);
        this->CabActClash_B1 = crrcCan->getBool(0x315,0,2);
        this->DirectionBothAct = crrcCan->getBool(0x315,0,3);
        this->DirectionLose = crrcCan->getBool(0x315,0,4);
        this->TractionBrakeClash = crrcCan->getBool(0x315,0,5);
        this->PassengerRoomHeat1 = crrcCan->getBool(0x315,0,6);
        this->PassengerRoomHeat2 = crrcCan->getBool(0x315,0,7);

        this->wR2Word2_Distance_high = crrcCan->getUnsignedInt(0x315,2);
        this->wR2Word3_Distance_low = crrcCan->getUnsignedInt(0x315,4);
        this->wR2Word4_Speed = crrcCan->getUnsignedChar(0x315,6);
        this->wR3Word4_Speed_limitation = crrcCan->getUnsignedChar(0x315,7);
        this->wR3Word2_net_voltage = crrcCan->getUnsignedInt(0x415,2);
        this->wR3Word3_battery_voltage = crrcCan->getUnsignedChar(0x415,4);
        this->wR4Word3_net_current = crrcCan->getUnsignedInt(0x515,4);     //change to 0x515 w3
        this->wR3Word4_deadman_counter = crrcCan->getUnsignedChar(0x415,6);
        this->PassengerRoomHeat3 = crrcCan->getBool(0x415,7,5);
        this->PassengerRoomHeat4 = crrcCan->getBool(0x415,7,6);
        this->LoadError = crrcCan->getBool(0x415,7,7);
        this->ControllerCodeError = crrcCan->getBool(0x415,5,0);

        this->Master_controller_level = crrcCan->getSignedChar(0x315,1);
        this->MC1_Key_active = crrcCan->getBool(0x215,7,2);
        this->MC2_Key_active = crrcCan->getBool(0x215,7,3);
        this->wR3Word3_wdiDistance = crrcCan->getUnsignedInt(0x515,2);
        this->wR3Word3_wdiDistanceMW = crrcCan->getUnsignedInt(0x515,6);

        ///HMI->VCU
        HMIVision1 = HMIVision;
        HMILifesignal1 = HMILifesignal;
        crrcCan->setUnsignedChar(0x195,0,HMILifesignal1);
        crrcCan->setUnsignedChar(0x195,1,HMIVision1);
        crrcCan->setUnsignedChar(0x195,2,HMItoVCU_wheelvalue);

        crrcCan->setBool(0x195,6,0,HMItoVCUfactroytest);
        crrcCan->setBool(0x195,6,1,HMiCT_SaveTime_B1);
        crrcCan->setBool(0x195,6,2,HMiCT_SaveTrainNum_B1);
        crrcCan->setBool(0x195,6,3,HMiCT_SaveFirstStation_B1);
        crrcCan->setBool(0x195,6,4,HMiCT_SaveLastStation_B1);
        crrcCan->setBool(0x195,6,5,HMiCT_WheelSet_B1);
        crrcCan->setBool(0x195,6,6,HMiCT_IDUDistanceSet_B1);
        crrcCan->setBool(0x195,6,7,HMiCT_Reduce2_B1);
        crrcCan->setBool(0x195,7,0,HMiCT_Reduce1_B1);
        crrcCan->setBool(0x195,7,1,HMiCT_Add1_B1);
        crrcCan->setBool(0x195,7,2,HMiCT_Add2_B1);
        crrcCan->setBool(0x195,7,3,HMiCT_UICMode_B1);
        crrcCan->setBool(0x195,7,4,HMiCT_AutoWarm_B1);
        crrcCan->setBool(0x195,7,5,HMiCT_AutoCold_B1);
        crrcCan->setBool(0x195,7,6,HMiCT_Ventilation_B1);
        crrcCan->setBool(0x195,7,7,HMiCT_ForceWind_B1);

        crrcCan->setUnsignedChar(0x295,0,HMiCT_Year_U8);
        crrcCan->setUnsignedChar(0x295,1,HMiCT_Month_U8);
        crrcCan->setUnsignedChar(0x295,2,HMiCT_Day_U8);
        crrcCan->setUnsignedChar(0x295,3,HMiCT_Hour_U8);
        crrcCan->setUnsignedChar(0x295,4,HMiCT_Minute_U8);
        crrcCan->setUnsignedChar(0x295,5,HMiCT_Second_U8);
        crrcCan->setBool(0x295,7,0,HMiCT_Stop_B1);
        crrcCan->setBool(0x295,7,1,HMiCT_MGTest_B1);
        crrcCan->setBool(0x295,7,2,HMiCT_TestWarm_B1);
        crrcCan->setBool(0x295,7,3,HMiCT_TestCold_B1);
        crrcCan->setBool(0x295,7,4,HMiCT_ReduceLoad_B1);
        crrcCan->setBool(0x295,7,5,HMiCT_SandForbidden_B1);
        crrcCan->setBool(0x295,7,6,HMiCT_ForceBrakeReleaseMc1_B1);
        crrcCan->setBool(0x295,7,7,HMiCT_ForceBrakeReleaseMc2_B1);



        crrcCan->setBool(0x395,0,0,HMiCT_MC1MSR1Enable_B1);
        crrcCan->setBool(0x395,0,1,HMiCT_MC1MSR2Enable_B1);
        crrcCan->setBool(0x395,0,2,HMiCT_M1MSR1Enable_B1);
        crrcCan->setBool(0x395,0,3,HMiCT_M1MSR2Enable_B1);
        crrcCan->setBool(0x395,0,4,HMiCT_M2MSR1Enable_B1);
        crrcCan->setBool(0x395,0,5,HMiCT_M2MSR2Enable_B1);
        crrcCan->setBool(0x395,0,6,HMiCT_MC2MSR1Enable_B1);
        crrcCan->setBool(0x395,0,7,HMiCT_MC2MSR2Enable_B1);
        crrcCan->setBool(0x395,1,0,HMiCT_TempStartSet_B1);
        crrcCan->setBool(0x395,1,1,HMiCT_MonthStopSet_B1);
        crrcCan->setBool(0x395,1,4,HMiCT_ACU1Cutoff_B1);
        crrcCan->setBool(0x395,1,5,HMiCT_ACU2Cutoff_B1);
        crrcCan->setBool(0x395,1,6,HMiCT_ACU3Cutoff_B1);
        crrcCan->setBool(0x395,1,7,HMiCT_ACU4Cutoff_B1);
        crrcCan->setBool(0x395,2,0,HMiCT_ACU1Reset_B1);
        crrcCan->setBool(0x395,2,1,HMiCT_ACU2Reset_B1);
        crrcCan->setBool(0x395,2,2,HMiCT_ACU3Reset_B1);
        crrcCan->setBool(0x395,2,3,HMiCT_ACU4Reset_B1);
        crrcCan->setBool(0x395,2,4,HMiCT_ResetACU1Fult_B1);
        crrcCan->setBool(0x395,2,5,HMiCT_ResetACU2Fult_B1);
        crrcCan->setBool(0x395,2,6,HMiCT_ResetACU3Fult_B1);
        crrcCan->setBool(0x395,2,7,HMiCT_ResetACU4Fult_B1);
        crrcCan->setBool(0x395,3,0,HMiCT_FireAlarmRst_B1);
        crrcCan->setBool(0x395,3,1,HMiCT_PISMODE_B1);
        crrcCan->setBool(0x395,3,2,HMiCT_EmgyBroadcastCommd_B1);
        crrcCan->setBool(0x395,3,3,HMiCT_EmgyBroadcastStop_B1);
        //crrcCan->setBool(0x395,3,4,HMiCT_BCUSelfTestReq_B1);
        crrcCan->setBool(0x395,3,5,HMiCT_Heat1_B1);
        crrcCan->setBool(0x395,3,6,HMiCT_Heat2_B1);
        crrcCan->setBool(0x395,3,7,HMiCT_TCUtest_B1);


        crrcCan->setBool(0x395,6,0,HMiCT_BCC1Cutoff_B1);
        crrcCan->setBool(0x395,6,1,HMiCT_BCC2Cutoff_B1);
        crrcCan->setBool(0x395,6,2,HMiCT_BCC3Cutoff_B1);
        crrcCan->setBool(0x395,6,3,HMiCT_BCC4Cutoff_B1);
        crrcCan->setBool(0x395,6,4,HMiCT_BCC1Reset_B1);
        crrcCan->setBool(0x395,6,5,HMiCT_BCC2Reset_B1);
        crrcCan->setBool(0x395,6,6,HMiCT_BCC3Reset_B1);
        crrcCan->setBool(0x395,6,7,HMiCT_BCC4Reset_B1);
        crrcCan->setBool(0x395,7,0,HMiCT_IsolateRstMC1_B1);
        crrcCan->setBool(0x395,7,1,HMiCT_IsolateRstM1_B1);
        crrcCan->setBool(0x395,7,2,HMiCT_IsolateRstM2_B1);
        crrcCan->setBool(0x395,7,3,HMiCT_IsolateRstMC2_B1);

        crrcCan->setUnsignedInt(0x495,0,HMiCT_TrainNum_U8);
        crrcCan->setUnsignedInt(0x495,2,HMiCT_DistanceSet_LW_U16);
        crrcCan->setUnsignedInt(0x495,4,HMiCT_DistanceSet_HW_U16);
        crrcCan->setUnsignedChar(0x495,6,HMiCT_TempStart_U8);
        crrcCan->setUnsignedChar(0x495,7,HMiCT_MonthStop_U8);
        // set factory test signal
        crrcCan->setBool(0x395,1,2,HMiCT_FactoryTest_start_B1);

        //1
        crrcCan->setBool(0x19b,0,0,HMiCT_FactoryTest_MC1DO1_1);
        crrcCan->setBool(0x19b,0,1,HMiCT_FactoryTest_MC1DO1_2);
        crrcCan->setBool(0x19b,0,2,HMiCT_FactoryTest_MC1DO1_3);
        crrcCan->setBool(0x19b,0,3,HMiCT_FactoryTest_MC1DO1_4);
        crrcCan->setBool(0x19b,0,4,HMiCT_FactoryTest_MC1DO1_5);
        crrcCan->setBool(0x19b,0,5,HMiCT_FactoryTest_MC1DO1_6);
        crrcCan->setBool(0x19b,0,6,HMiCT_FactoryTest_MC1DO1_7);
        crrcCan->setBool(0x19b,0,7,HMiCT_FactoryTest_MC1DO1_8);
        crrcCan->setBool(0x19b,1,0,HMiCT_FactoryTest_MC1DO1_9);
        crrcCan->setBool(0x19b,1,1,HMiCT_FactoryTest_MC1DO1_10);
        crrcCan->setBool(0x19b,1,2,HMiCT_FactoryTest_MC1DO1_11);
        crrcCan->setBool(0x19b,1,4,HMiCT_FactoryTest_MC1DO1_13);

        crrcCan->setBool(0x19b,2,0,HMiCT_FactoryTest_MC1DO2_1);
        crrcCan->setBool(0x19b,2,2,HMiCT_FactoryTest_MC1DO2_3);
        crrcCan->setBool(0x19b,2,3,HMiCT_FactoryTest_MC1DO2_4);
        crrcCan->setBool(0x19b,2,4,HMiCT_FactoryTest_MC1DO2_5);
        crrcCan->setBool(0x19b,2,6,HMiCT_FactoryTest_MC1DO2_7);
        crrcCan->setBool(0x19b,2,7,HMiCT_FactoryTest_MC1DO2_8);
        crrcCan->setBool(0x19b,3,0,HMiCT_FactoryTest_MC1DO2_9);

        crrcCan->setBool(0x19b,3,1,HMiCT_FactoryTest_M1DO1_2);
        crrcCan->setBool(0x19b,3,2,HMiCT_FactoryTest_M1DO1_3);
        crrcCan->setBool(0x19b,3,3,HMiCT_FactoryTest_M1DO1_5);
        crrcCan->setBool(0x19b,3,4,HMiCT_FactoryTest_M1DO1_8);
        crrcCan->setBool(0x19b,3,5,HMiCT_FactoryTest_M1DO1_9);
        crrcCan->setBool(0x19b,3,6,HMiCT_FactoryTest_M1DO1_10);
        //2
        crrcCan->setBool(0x19b,4,0,HMiCT_FactoryTest_MC2DO1_1);
        crrcCan->setBool(0x19b,4,1,HMiCT_FactoryTest_MC2DO1_2);
        crrcCan->setBool(0x19b,4,2,HMiCT_FactoryTest_MC2DO1_3);
        crrcCan->setBool(0x19b,4,3,HMiCT_FactoryTest_MC2DO1_4);
        crrcCan->setBool(0x19b,4,4,HMiCT_FactoryTest_MC2DO1_5);
        crrcCan->setBool(0x19b,4,5,HMiCT_FactoryTest_MC2DO1_6);
        crrcCan->setBool(0x19b,4,6,HMiCT_FactoryTest_MC2DO1_7);
        crrcCan->setBool(0x19b,4,7,HMiCT_FactoryTest_MC2DO1_8);
        crrcCan->setBool(0x19b,5,0,HMiCT_FactoryTest_MC2DO1_9);
        crrcCan->setBool(0x19b,5,1,HMiCT_FactoryTest_MC2DO1_10);
        crrcCan->setBool(0x19b,5,2,HMiCT_FactoryTest_MC2DO1_11);
        crrcCan->setBool(0x19b,5,4,HMiCT_FactoryTest_MC2DO1_13);

        crrcCan->setBool(0x19b,6,0,HMiCT_FactoryTest_MC2DO2_1);
        crrcCan->setBool(0x19b,6,2,HMiCT_FactoryTest_MC2DO2_3);
        crrcCan->setBool(0x19b,6,3,HMiCT_FactoryTest_MC2DO2_4);
        crrcCan->setBool(0x19b,6,4,HMiCT_FactoryTest_MC2DO2_5);
        crrcCan->setBool(0x19b,6,6,HMiCT_FactoryTest_MC2DO2_7);
        crrcCan->setBool(0x19b,6,7,HMiCT_FactoryTest_MC2DO2_8);
        crrcCan->setBool(0x19b,7,0,HMiCT_FactoryTest_MC2DO2_9);

        crrcCan->setBool(0x19b,7,1,HMiCT_FactoryTest_M2DO1_2);
        crrcCan->setBool(0x19b,7,2,HMiCT_FactoryTest_M2DO1_3);
        crrcCan->setBool(0x19b,7,3,HMiCT_FactoryTest_M2DO1_5);
        crrcCan->setBool(0x19b,7,4,HMiCT_FactoryTest_M2DO1_8);
        crrcCan->setBool(0x19b,7,5,HMiCT_FactoryTest_M2DO1_9);
        crrcCan->setBool(0x19b,7,6,HMiCT_FactoryTest_M2DO1_10);


    }else if(this->HMIPosition == 2)
    {
        ////VCU->HMI2 0x216-416
        this->VCU1_Version = crrcCan->getUnsignedChar(0x516,0);
        this->VCU2_Version = crrcCan->getUnsignedChar(0x516,1);
        this->VCU1_Lifesignal = crrcCan->getUnsignedChar(0x216,0);
        this->VCU2_Lifesignal = crrcCan->getUnsignedChar(0x216,1);

        this->CANopenStatus_BCU1 = crrcCan->getBool(0x216,2,0);
        this->CANopenStatus_BCU2 = crrcCan->getBool(0x216,2,1);
        this->CANopenStatus_RIOM1 = crrcCan->getBool(0x216,2,2);
        this->CANopenStatus_RIOM2 = crrcCan->getBool(0x216,2,3);
        this->CANopenStatus_RIOM3 = crrcCan->getBool(0x216,2,5);
        this->CANopenStatus_RIOM4 = crrcCan->getBool(0x216,2,4);
        this->CANopenStatus_TCU1 = crrcCan->getBool(0x216,2,6);
        this->CANopenStatus_TCU2 = crrcCan->getBool(0x216,2,7);

        this->CANopenStatus_TCU3 = crrcCan->getBool(0x216,3,0);
        this->CANopenStatus_TCU4 = crrcCan->getBool(0x216,3,1);
        this->CANopenStatus_ACU1 = crrcCan->getBool(0x216,3,2);
        this->CANopenStatus_ACU2 = crrcCan->getBool(0x216,3,3);
        this->CANopenStatus_ACU3 = crrcCan->getBool(0x216,3,4);
        this->CANopenStatus_ACU4 = crrcCan->getBool(0x216,3,5);
        this->CANopenStatus_PIS1 = crrcCan->getBool(0x216,3,6);
        this->CANopenStatus_PIS2 = crrcCan->getBool(0x216,3,7);

        this->CANopenStatus_HMI1 = crrcCan->getBool(0x216,4,0);
        this->CANopenStatus_HMI2 = crrcCan->getBool(0x216,4,1);
        this->CANopenStatus_HVAC1 = crrcCan->getBool(0x216,4,2);
        this->CANopenStatus_HVAC2 = crrcCan->getBool(0x216,4,3);
        this->CANopenStatus_HVAC3 = crrcCan->getBool(0x216,4,4);
        this->CANopenStatus_HVAC4 = crrcCan->getBool(0x216,4,5);
        this->CANopenStatus_DOOR1 = crrcCan->getBool(0x216,4,6);
        this->CANopenStatus_DOOR2 = crrcCan->getBool(0x216,4,7);

        this->CANopenStatus_DOOR3 = crrcCan->getBool(0x216,5,0);
        this->CANopenStatus_DOOR4 = crrcCan->getBool(0x216,5,1);
        this->CANopenStatus_DOOR5 = crrcCan->getBool(0x216,5,2);
        this->CANopenStatus_DOOR6 = crrcCan->getBool(0x216,5,3);
        this->CANopenStatus_DOOR7 = crrcCan->getBool(0x216,5,4);
        this->CANopenStatus_DOOR8 = crrcCan->getBool(0x216,5,5);
        this->CANopenStatus_DOOR9 = crrcCan->getBool(0x216,5,6);
        this->CANopenStatus_DOOR10 = crrcCan->getBool(0x216,5,7);

        this->CANopenStatus_DOOR11 = crrcCan->getBool(0x216,6,0);
        this->CANopenStatus_DOOR12 = crrcCan->getBool(0x216,6,1);
        this->CANopenStatus_DOOR13 = crrcCan->getBool(0x216,6,2);
        this->CANopenStatus_DOOR14 = crrcCan->getBool(0x216,6,3);
        this->CANopenStatus_DOOR15 = crrcCan->getBool(0x216,6,4);
        this->CANopenStatus_DOOR16 = crrcCan->getBool(0x216,6,5);
        this->CANopenStatus_ERM1 = crrcCan->getBool(0x216,6,6);
        this->CANopenStatus_ERM2 = crrcCan->getBool(0x216,6,7);
        this->CANopenStatus_BCC1 = crrcCan->getBool(0x416,7,0);
        this->CANopenStatus_BCC2 = crrcCan->getBool(0x416,7,1);
        this->CANopenStatus_BCC3 = crrcCan->getBool(0x416,7,2);
        this->CANopenStatus_BCC4 = crrcCan->getBool(0x416,7,3);
        this->VCU1_Master = crrcCan->getBool(0x216,7,0);
        this->VCU2_Master = crrcCan->getBool(0x216,7,1);

        HMIVision1 = crrcCan->getUnsignedChar(0x195,1);//other side vision
        HMILifesignal1 = crrcCan->getUnsignedChar(0x195,0);

        this->Direction_forward = crrcCan->getBool(0x316,0,0);
        this->Direction_reverse = crrcCan->getBool(0x316,0,1);
        this->CabActClash_B1 = crrcCan->getBool(0x316,0,2);
        this->DirectionBothAct = crrcCan->getBool(0x316,0,3);
        this->DirectionLose = crrcCan->getBool(0x316,0,4);
        this->TractionBrakeClash = crrcCan->getBool(0x316,0,5);
        this->PassengerRoomHeat1 = crrcCan->getBool(0x316,0,6);
        this->PassengerRoomHeat2 = crrcCan->getBool(0x316,0,7);


        this->wR2Word2_Distance_high = crrcCan->getUnsignedInt(0x316,2);
        this->wR2Word3_Distance_low = crrcCan->getUnsignedInt(0x316,4);
        this->wR2Word4_Speed = crrcCan->getUnsignedChar(0x316,6);
        this->wR3Word4_Speed_limitation = crrcCan->getUnsignedChar(0x316,7);
        this->wR3Word2_net_voltage = crrcCan->getUnsignedInt(0x416,2);
        this->wR3Word3_battery_voltage = crrcCan->getUnsignedChar(0x416,4);
        this->wR4Word3_net_current = crrcCan->getUnsignedInt(0x516,4);     //change to 0x515 w3
        this->wR3Word4_deadman_counter = crrcCan->getUnsignedChar(0x416,6);
        this->PassengerRoomHeat3 = crrcCan->getBool(0x416,7,5);
        this->PassengerRoomHeat4 = crrcCan->getBool(0x416,7,6);
        this->LoadError = crrcCan->getBool(0x416,7,7);
        this->ControllerCodeError = crrcCan->getBool(0x416,5,0);

        this->Master_controller_level = crrcCan->getSignedChar(0x316,1);
        this->MC1_Key_active = crrcCan->getBool(0x216,7,2);
        this->MC2_Key_active = crrcCan->getBool(0x216,7,3);
        this->wR3Word3_wdiDistance = crrcCan->getUnsignedInt(0x516,2);
        this->wR3Word3_wdiDistanceMW = crrcCan->getUnsignedInt(0x516,6);


        ///HMI2->VCU
        HMIVision2 = HMIVision;
        HMILifesignal2 = HMILifesignal;
        crrcCan->setUnsignedChar(0x196,0,HMILifesignal2);
        crrcCan->setUnsignedChar(0x196,1,HMIVision2);
        crrcCan->setUnsignedChar(0x196,2,HMItoVCU_wheelvalue);
        crrcCan->setBool(0x196,6,0,HMItoVCUfactroytest);
        crrcCan->setBool(0x196,6,1,HMiCT_SaveTime_B1);
        crrcCan->setBool(0x196,6,2,HMiCT_SaveTrainNum_B1);
        crrcCan->setBool(0x196,6,3,HMiCT_SaveFirstStation_B1);
        crrcCan->setBool(0x196,6,4,HMiCT_SaveLastStation_B1);
        crrcCan->setBool(0x196,6,5,HMiCT_WheelSet_B1);
        crrcCan->setBool(0x196,6,6,HMiCT_IDUDistanceSet_B1);
        crrcCan->setBool(0x196,6,7,HMiCT_Reduce2_B1);

        crrcCan->setBool(0x196,7,0,HMiCT_Reduce1_B1);
        crrcCan->setBool(0x196,7,1,HMiCT_Add1_B1);
        crrcCan->setBool(0x196,7,2,HMiCT_Add2_B1);
        crrcCan->setBool(0x196,7,3,HMiCT_UICMode_B1);
        crrcCan->setBool(0x196,7,4,HMiCT_AutoWarm_B1);
        crrcCan->setBool(0x196,7,5,HMiCT_AutoCold_B1);
        crrcCan->setBool(0x196,7,6,HMiCT_Ventilation_B1);
        crrcCan->setBool(0x196,7,7,HMiCT_ForceWind_B1);

        crrcCan->setUnsignedChar(0x296,0,HMiCT_Year_U8);
        crrcCan->setUnsignedChar(0x296,1,HMiCT_Month_U8);
        crrcCan->setUnsignedChar(0x296,2,HMiCT_Day_U8);
        crrcCan->setUnsignedChar(0x296,3,HMiCT_Hour_U8);
        crrcCan->setUnsignedChar(0x296,4,HMiCT_Minute_U8);
        crrcCan->setUnsignedChar(0x296,5,HMiCT_Second_U8);
        crrcCan->setBool(0x296,7,0,HMiCT_Stop_B1);
        crrcCan->setBool(0x296,7,1,HMiCT_MGTest_B1);
        crrcCan->setBool(0x296,7,2,HMiCT_TestWarm_B1);
        crrcCan->setBool(0x296,7,3,HMiCT_TestCold_B1);
        crrcCan->setBool(0x296,7,4,HMiCT_ReduceLoad_B1);
        crrcCan->setBool(0x296,7,5,HMiCT_SandForbidden_B1);
        crrcCan->setBool(0x296,7,6,HMiCT_ForceBrakeReleaseMc1_B1);
        crrcCan->setBool(0x296,7,7,HMiCT_ForceBrakeReleaseMc2_B1);


        crrcCan->setBool(0x396,0,0,HMiCT_MC1MSR1Enable_B1);
        crrcCan->setBool(0x396,0,1,HMiCT_MC1MSR2Enable_B1);
        crrcCan->setBool(0x396,0,2,HMiCT_M1MSR1Enable_B1);
        crrcCan->setBool(0x396,0,3,HMiCT_M1MSR2Enable_B1);
        crrcCan->setBool(0x396,0,4,HMiCT_M2MSR1Enable_B1);
        crrcCan->setBool(0x396,0,5,HMiCT_M2MSR2Enable_B1);
        crrcCan->setBool(0x396,0,6,HMiCT_MC2MSR1Enable_B1);
        crrcCan->setBool(0x396,0,7,HMiCT_MC2MSR2Enable_B1);
        crrcCan->setBool(0x396,1,0,HMiCT_TempStartSet_B1);
        crrcCan->setBool(0x396,1,1,HMiCT_MonthStopSet_B1);
        crrcCan->setBool(0x396,1,4,HMiCT_ACU1Cutoff_B1);
        crrcCan->setBool(0x396,1,5,HMiCT_ACU2Cutoff_B1);
        crrcCan->setBool(0x396,1,6,HMiCT_ACU3Cutoff_B1);
        crrcCan->setBool(0x396,1,7,HMiCT_ACU4Cutoff_B1);
        crrcCan->setBool(0x396,2,0,HMiCT_ACU1Reset_B1);
        crrcCan->setBool(0x396,2,1,HMiCT_ACU2Reset_B1);
        crrcCan->setBool(0x396,2,2,HMiCT_ACU3Reset_B1);
        crrcCan->setBool(0x396,2,3,HMiCT_ACU4Reset_B1);
        crrcCan->setBool(0x396,2,4,HMiCT_ResetACU1Fult_B1);
        crrcCan->setBool(0x396,2,5,HMiCT_ResetACU2Fult_B1);
        crrcCan->setBool(0x396,2,6,HMiCT_ResetACU3Fult_B1);
        crrcCan->setBool(0x396,2,7,HMiCT_ResetACU4Fult_B1);
        crrcCan->setBool(0x396,3,0,HMiCT_FireAlarmRst_B1);
        crrcCan->setBool(0x396,3,1,HMiCT_PISMODE_B1);
        crrcCan->setBool(0x396,3,2,HMiCT_EmgyBroadcastCommd_B1);
        crrcCan->setBool(0x396,3,3,HMiCT_EmgyBroadcastStop_B1);
        crrcCan->setBool(0x396,3,7,HMiCT_TCUtest_B1);

        //crrcCan->setBool(0x396,3,4,HMiCT_BCUSelfTestReq_B1);
        crrcCan->setBool(0x396,3,5,HMiCT_Heat1_B1);
        crrcCan->setBool(0x396,3,6,HMiCT_Heat2_B1);
        crrcCan->setBool(0x396,6,0,HMiCT_BCC1Cutoff_B1);
        crrcCan->setBool(0x396,6,1,HMiCT_BCC2Cutoff_B1);
        crrcCan->setBool(0x396,6,2,HMiCT_BCC3Cutoff_B1);
        crrcCan->setBool(0x396,6,3,HMiCT_BCC4Cutoff_B1);
        crrcCan->setBool(0x396,6,4,HMiCT_BCC1Reset_B1);
        crrcCan->setBool(0x396,6,5,HMiCT_BCC2Reset_B1);
        crrcCan->setBool(0x396,6,6,HMiCT_BCC3Reset_B1);
        crrcCan->setBool(0x396,6,7,HMiCT_BCC4Reset_B1);
        crrcCan->setBool(0x396,7,0,HMiCT_IsolateRstMC1_B1);
        crrcCan->setBool(0x396,7,1,HMiCT_IsolateRstM1_B1);
        crrcCan->setBool(0x396,7,2,HMiCT_IsolateRstM2_B1);
        crrcCan->setBool(0x396,7,3,HMiCT_IsolateRstMC2_B1);

        crrcCan->setUnsignedInt(0x496,0,HMiCT_TrainNum_U8);
        crrcCan->setUnsignedInt(0x496,2,HMiCT_DistanceSet_LW_U16);
        crrcCan->setUnsignedInt(0x496,4,HMiCT_DistanceSet_HW_U16);
        crrcCan->setUnsignedChar(0x496,6,HMiCT_TempStart_U8);
        crrcCan->setUnsignedChar(0x496,7,HMiCT_MonthStop_U8);

        // set factory test signal
        crrcCan->setBool(0x396,1,2,HMiCT_FactoryTest_start_B1);

        //1
        crrcCan->setBool(0x29b,0,0,HMiCT_FactoryTest_MC1DO1_1);
        crrcCan->setBool(0x29b,0,1,HMiCT_FactoryTest_MC1DO1_2);
        crrcCan->setBool(0x29b,0,2,HMiCT_FactoryTest_MC1DO1_3);
        crrcCan->setBool(0x29b,0,3,HMiCT_FactoryTest_MC1DO1_4);
        crrcCan->setBool(0x29b,0,4,HMiCT_FactoryTest_MC1DO1_5);
        crrcCan->setBool(0x29b,0,5,HMiCT_FactoryTest_MC1DO1_6);
        crrcCan->setBool(0x29b,0,6,HMiCT_FactoryTest_MC1DO1_7);
        crrcCan->setBool(0x29b,0,7,HMiCT_FactoryTest_MC1DO1_8);
        crrcCan->setBool(0x29b,1,0,HMiCT_FactoryTest_MC1DO1_9);
        crrcCan->setBool(0x29b,1,1,HMiCT_FactoryTest_MC1DO1_10);
        crrcCan->setBool(0x29b,1,2,HMiCT_FactoryTest_MC1DO1_11);
        crrcCan->setBool(0x29b,1,4,HMiCT_FactoryTest_MC1DO1_13);

        crrcCan->setBool(0x29b,2,0,HMiCT_FactoryTest_MC1DO2_1);
        crrcCan->setBool(0x29b,2,2,HMiCT_FactoryTest_MC1DO2_3);
        crrcCan->setBool(0x29b,2,3,HMiCT_FactoryTest_MC1DO2_4);
        crrcCan->setBool(0x29b,2,4,HMiCT_FactoryTest_MC1DO2_5);
        crrcCan->setBool(0x29b,2,6,HMiCT_FactoryTest_MC1DO2_7);
        crrcCan->setBool(0x29b,2,7,HMiCT_FactoryTest_MC1DO2_8);
        crrcCan->setBool(0x29b,3,0,HMiCT_FactoryTest_MC1DO2_9);

        crrcCan->setBool(0x29b,3,1,HMiCT_FactoryTest_M1DO1_2);
        crrcCan->setBool(0x29b,3,2,HMiCT_FactoryTest_M1DO1_3);
        crrcCan->setBool(0x29b,3,3,HMiCT_FactoryTest_M1DO1_5);
        crrcCan->setBool(0x29b,3,4,HMiCT_FactoryTest_M1DO1_8);
        crrcCan->setBool(0x29b,3,5,HMiCT_FactoryTest_M1DO1_9);
        crrcCan->setBool(0x29b,3,6,HMiCT_FactoryTest_M1DO1_10);
        //2
        crrcCan->setBool(0x29b,4,0,HMiCT_FactoryTest_MC2DO1_1);
        crrcCan->setBool(0x29b,4,1,HMiCT_FactoryTest_MC2DO1_2);
        crrcCan->setBool(0x29b,4,2,HMiCT_FactoryTest_MC2DO1_3);
        crrcCan->setBool(0x29b,4,3,HMiCT_FactoryTest_MC2DO1_4);
        crrcCan->setBool(0x29b,4,4,HMiCT_FactoryTest_MC2DO1_5);
        crrcCan->setBool(0x29b,4,5,HMiCT_FactoryTest_MC2DO1_6);
        crrcCan->setBool(0x29b,4,6,HMiCT_FactoryTest_MC2DO1_7);
        crrcCan->setBool(0x29b,4,7,HMiCT_FactoryTest_MC2DO1_8);
        crrcCan->setBool(0x29b,5,0,HMiCT_FactoryTest_MC2DO1_9);
        crrcCan->setBool(0x29b,5,1,HMiCT_FactoryTest_MC2DO1_10);
        crrcCan->setBool(0x29b,5,2,HMiCT_FactoryTest_MC2DO1_11);
        crrcCan->setBool(0x29b,5,4,HMiCT_FactoryTest_MC2DO1_13);

        crrcCan->setBool(0x29b,6,0,HMiCT_FactoryTest_MC2DO2_1);
        crrcCan->setBool(0x29b,6,2,HMiCT_FactoryTest_MC2DO2_3);
        crrcCan->setBool(0x29b,6,3,HMiCT_FactoryTest_MC2DO2_4);
        crrcCan->setBool(0x29b,6,4,HMiCT_FactoryTest_MC2DO2_5);
        crrcCan->setBool(0x29b,6,6,HMiCT_FactoryTest_MC2DO2_7);
        crrcCan->setBool(0x29b,6,7,HMiCT_FactoryTest_MC2DO2_8);
        crrcCan->setBool(0x29b,7,0,HMiCT_FactoryTest_MC2DO2_9);

        crrcCan->setBool(0x29b,7,1,HMiCT_FactoryTest_M2DO1_2);
        crrcCan->setBool(0x29b,7,2,HMiCT_FactoryTest_M2DO1_3);
        crrcCan->setBool(0x29b,7,3,HMiCT_FactoryTest_M2DO1_5);
        crrcCan->setBool(0x29b,7,4,HMiCT_FactoryTest_M2DO1_8);
        crrcCan->setBool(0x29b,7,5,HMiCT_FactoryTest_M2DO1_9);
        crrcCan->setBool(0x29b,7,6,HMiCT_FactoryTest_M2DO1_10);

    }else
    {
        //todo clean alldata??
    }



    //public port
    this->VCUtoALL_year = crrcCan->getUnsignedChar(0x203,0);
    this->VCUtoALL_month = crrcCan->getUnsignedChar(0x203,1);
    this->VCUtoALL_day = crrcCan->getUnsignedChar(0x203,2);
    this->VCUtoALL_hour = crrcCan->getUnsignedChar(0x203,3);
    this->VCUtoALL_minute = crrcCan->getUnsignedChar(0x203,4);
    this->VCUtoALL_second = crrcCan->getUnsignedChar(0x203,5);
    this->VCUtoALL_codeHigh = crrcCan->getUnsignedChar(0x203,6);
    this->VCUtoALL_codeLow = crrcCan->getUnsignedChar(0x203,7);

    //RIOM->VCU
    {
        ////MC1 RIOM
        this->riomGwVersionMc1 = crrcCan->getUnsignedChar(0x186, 0);
        this->riomDiVersionMc1 = crrcCan->getUnsignedChar(0x186, 1);
        this->riomDoVersionMc1 = crrcCan->getUnsignedChar(0x186, 2);
        this->riomAxVersionMc1 = crrcCan->getUnsignedChar(0x186, 3);
        this->riomSgnVersionMc1 = crrcCan->getUnsignedChar(0x186, 4);

        this->RIOM_GW_LifesignalMc1 = crrcCan->getUnsignedChar(0x486,0);
        this->RIOM_DI1_LifesignalMc1 = crrcCan->getBool(0x486,1,0);
        this->RIOM_DI2_LifesignalMc1 = crrcCan->getBool(0x486,1,1);
        this->RIOM_DO1_LifesignalMc1 = crrcCan->getBool(0x486,1,6);
        this->RIOM_DO2_LifesignalMc1 = crrcCan->getBool(0x486,1,7);
        this->RIOM_AX_LifesignalMc1 = crrcCan->getBool(0x486,2,2);
        this->RIOM_SGN_LifesignalMc1 = crrcCan->getBool(0x486,2,6);

        this->riomAxAi1Mc1 = crrcCan->getUnsignedInt(0x1FF, 2);
        this->riomAxAi2Mc1 = crrcCan->getUnsignedInt(0x1FF, 4);
        this->riomAxAi3Mc1 = crrcCan->getUnsignedInt(0x1FF, 0);
        this->riomAxAi4Mc1 = crrcCan->getUnsignedInt(0x1FF, 6);

        this->riomDi1In1Mc1 = crrcCan->getBool(0x3FF, 0, 0);
        this->riomDi1In2Mc1 = crrcCan->getBool(0x3FF, 0, 1);
        this->riomDi1In3Mc1 = crrcCan->getBool(0x3FF, 0, 2);
        this->riomDi1In4Mc1 = crrcCan->getBool(0x3FF, 0, 3);
        this->riomDi1In5Mc1 = crrcCan->getBool(0x3FF, 0, 4);
        this->riomDi1In6Mc1 = crrcCan->getBool(0x3FF, 0, 5);
        this->riomDi1In7Mc1 = crrcCan->getBool(0x3FF, 0, 6);
        this->riomDi1In8Mc1 = crrcCan->getBool(0x3FF, 0, 7);
        this->riomDi1In9Mc1 = crrcCan->getBool(0x3FF, 1, 0);
        this->riomDi1In10Mc1 = crrcCan->getBool(0x3FF, 1, 1);
        this->riomDi1In11Mc1 = crrcCan->getBool(0x3FF, 1, 2);
        this->riomDi1In12Mc1 = crrcCan->getBool(0x3FF, 1, 3);
        this->riomDi1In13Mc1 = crrcCan->getBool(0x3FF, 1, 4);
        this->riomDi1In14Mc1 = crrcCan->getBool(0x3FF, 1, 5);
        this->riomDi1In15Mc1 = crrcCan->getBool(0x3FF, 1, 6);
        this->riomDi1In16Mc1 = crrcCan->getBool(0x3FF, 1, 7);
        this->riomDi1In17Mc1 = crrcCan->getBool(0x3FF, 2, 0);
        this->riomDi1In18Mc1 = crrcCan->getBool(0x3FF, 2, 1);
        this->riomDi1In19Mc1 = crrcCan->getBool(0x3FF, 2, 2);
        this->riomDi1In20Mc1 = crrcCan->getBool(0x3FF, 2, 3);
        this->riomDi1In21Mc1 = crrcCan->getBool(0x3FF, 2, 4);
        this->riomDi1In22Mc1 = crrcCan->getBool(0x3FF, 2, 5);
        this->riomDi1In23Mc1 = crrcCan->getBool(0x3FF, 2, 6);
        this->riomDi1In24Mc1 = crrcCan->getBool(0x3FF, 2, 7);

        this->riomDi2In1Mc1 = crrcCan->getBool(0x3FF, 3, 0);
        this->riomDi2In2Mc1 = crrcCan->getBool(0x3FF, 3, 1);
        this->riomDi2In3Mc1 = crrcCan->getBool(0x3FF, 3, 2);
        this->riomDi2In4Mc1 = crrcCan->getBool(0x3FF, 3, 3);
        this->riomDi2In5Mc1 = crrcCan->getBool(0x3FF, 3, 4);
        this->riomDi2In6Mc1 = crrcCan->getBool(0x3FF, 3, 5);
        this->riomDi2In7Mc1 = crrcCan->getBool(0x3FF, 3, 6);
        this->riomDi2In8Mc1 = crrcCan->getBool(0x3FF, 3, 7);
        this->riomDi2In9Mc1 = crrcCan->getBool(0x3FF, 4, 0);
        this->riomDi2In10Mc1 = crrcCan->getBool(0x3FF, 4, 1);
        this->riomDi2In11Mc1 = crrcCan->getBool(0x3FF, 4, 2);
        this->riomDi2In12Mc1 = crrcCan->getBool(0x3FF, 4, 3);
        this->riomDi2In13Mc1 = crrcCan->getBool(0x3FF, 4, 4);
        this->riomDi2In14Mc1 = crrcCan->getBool(0x3FF, 4, 5);
        this->riomDi2In15Mc1 = crrcCan->getBool(0x3FF, 4, 6);
        this->riomDi2In16Mc1 = crrcCan->getBool(0x3FF, 4, 7);
        this->riomDi2In17Mc1 = crrcCan->getBool(0x3FF, 5, 0);
        this->riomDi2In18Mc1 = crrcCan->getBool(0x3FF, 5, 1);
        this->riomDi2In19Mc1 = crrcCan->getBool(0x3FF, 5, 2);
        this->riomDi2In20Mc1 = crrcCan->getBool(0x3FF, 5, 3);
        this->riomDi2In21Mc1 = crrcCan->getBool(0x3FF, 5, 4);
        this->riomDi2In22Mc1 = crrcCan->getBool(0x3FF, 5, 5);
        this->riomDi2In23Mc1 = crrcCan->getBool(0x3FF, 5, 6);
        this->riomDi2In24Mc1 = crrcCan->getBool(0x3FF, 5, 7);

        this->riomSgnIn1Mc1 = crrcCan->getBool(0x4FF, 1, 0);
        this->riomSgnIn2Mc1 = crrcCan->getBool(0x4FF, 1, 1);
        this->riomSgnIn3Mc1 = crrcCan->getBool(0x4FF, 1, 2);
        this->riomSgnIn4Mc1 = crrcCan->getBool(0x4FF, 1, 3);
        this->riomSgnIn5Mc1 = crrcCan->getBool(0x4FF, 1, 4);
        this->riomSgnIn6Mc1 = crrcCan->getBool(0x4FF, 1, 5);
        this->riomSgnIn7Mc1 = crrcCan->getBool(0x4FF, 1, 6);
        this->riomSgnIn8Mc1 = crrcCan->getBool(0x4FF, 1, 7);
        this->riomSgnIn9Mc1 = crrcCan->getBool(0x4FF, 2, 0);
        this->riomSgnIn10Mc1 = crrcCan->getBool(0x4FF, 2, 1);
        this->riomSgnIn11Mc1 = crrcCan->getBool(0x4FF, 2, 2);
        this->riomSgnIn12Mc1 = crrcCan->getBool(0x4FF, 2, 3);
        this->riomSgnIn13Mc1 = crrcCan->getBool(0x4FF, 2, 4);
        this->riomSgnIn14Mc1 = crrcCan->getBool(0x4FF, 2, 5);
        this->riomSgnIn15Mc1 = crrcCan->getBool(0x4FF, 2, 6);
        this->riomSgnIn16Mc1 = crrcCan->getBool(0x4FF, 2, 7);
        this->riomSgnIn17Mc1 = crrcCan->getBool(0x4FF, 3, 0);
        this->riomSgnIn18Mc1 = crrcCan->getBool(0x4FF, 3, 1);
        this->riomSgnIn19Mc1 = crrcCan->getBool(0x4FF, 3, 2);
        this->riomSgnIn20Mc1 = crrcCan->getBool(0x4FF, 3, 3);
        this->riomSgnIn21Mc1 = crrcCan->getBool(0x4FF, 3, 4);
        this->riomSgnIn22Mc1 = crrcCan->getBool(0x4FF, 3, 5);
        this->riomSgnIn23Mc1 = crrcCan->getBool(0x4FF, 3, 6);
        this->riomSgnIn24Mc1 = crrcCan->getBool(0x4FF, 3, 7);

        this->riomDo1Out1Mc1 = crrcCan->getBool(0x406, 0, 0);
        this->riomDo1Out2Mc1 = crrcCan->getBool(0x406, 0, 1);
        this->riomDo1Out3Mc1 = crrcCan->getBool(0x406, 0, 2);
        this->riomDo1Out4Mc1 = crrcCan->getBool(0x406, 0, 3);
        this->riomDo1Out5Mc1 = crrcCan->getBool(0x406, 0, 4);
        this->riomDo1Out6Mc1 = crrcCan->getBool(0x406, 0, 5);
        this->riomDo1Out7Mc1 = crrcCan->getBool(0x406, 0, 6);
        this->riomDo1Out8Mc1 = crrcCan->getBool(0x406, 0, 7);
        this->riomDo1Out9Mc1 = crrcCan->getBool(0x406, 1, 0);
        this->riomDo1Out10Mc1 = crrcCan->getBool(0x406, 1, 1);
        this->riomDo1Out11Mc1 = crrcCan->getBool(0x406, 1, 2);
        this->riomDo1Out12Mc1 = crrcCan->getBool(0x406, 1, 3);
        this->riomDo1Out13Mc1 = crrcCan->getBool(0x406, 1, 4);
        this->riomDo1Out14Mc1 = crrcCan->getBool(0x406, 1, 5);
        this->riomDo1Out15Mc1 = crrcCan->getBool(0x406, 1, 6);
        this->riomDo1Out16Mc1 = crrcCan->getBool(0x406, 1, 7);

        this->riomDo2Out1Mc1 = crrcCan->getBool(0x406, 3, 0);
        this->riomDo2Out2Mc1 = crrcCan->getBool(0x406, 3, 1);
        this->riomDo2Out3Mc1 = crrcCan->getBool(0x406, 3, 2);
        this->riomDo2Out4Mc1 = crrcCan->getBool(0x406, 3, 3);
        this->riomDo2Out5Mc1 = crrcCan->getBool(0x406, 3, 4);
        this->riomDo2Out6Mc1 = crrcCan->getBool(0x406, 3, 5);
        this->riomDo2Out7Mc1 = crrcCan->getBool(0x406, 3, 6);
        this->riomDo2Out8Mc1 = crrcCan->getBool(0x406, 3, 7);
        this->riomDo2Out9Mc1 = crrcCan->getBool(0x406, 4, 0);
        this->riomDo2Out10Mc1 = crrcCan->getBool(0x406, 4, 1);
        this->riomDo2Out11Mc1 = crrcCan->getBool(0x406, 4, 2);
        this->riomDo2Out12Mc1 = crrcCan->getBool(0x406, 4, 3);
        this->riomDo2Out13Mc1 = crrcCan->getBool(0x406, 4, 4);
        this->riomDo2Out14Mc1 = crrcCan->getBool(0x406, 4, 5);
        this->riomDo2Out15Mc1 = crrcCan->getBool(0x406, 4, 6);
        this->riomDo2Out16Mc1 = crrcCan->getBool(0x406, 4, 7);

        ////MC2 RIOM
        this->riomGwVersionMc2 = crrcCan->getUnsignedChar(0x188, 0);
        this->riomDiVersionMc2 = crrcCan->getUnsignedChar(0x188, 1);
        this->riomDoVersionMc2 = crrcCan->getUnsignedChar(0x188, 2);
        this->riomAxVersionMc2 = crrcCan->getUnsignedChar(0x188, 3);
        this->riomSgnVersionMc2 = crrcCan->getUnsignedChar(0x188, 4);

        this->RIOM_GW_LifesignalMc2 = crrcCan->getUnsignedChar(0x488,0);
        this->RIOM_DI1_LifesignalMc2 = crrcCan->getBool(0x488,1,0);
        this->RIOM_DI2_LifesignalMc2 = crrcCan->getBool(0x488,1,1);
        this->RIOM_DO1_LifesignalMc2 = crrcCan->getBool(0x488,1,6);
        this->RIOM_DO2_LifesignalMc2 = crrcCan->getBool(0x488,1,7);
        this->RIOM_AX_LifesignalMc2 = crrcCan->getBool(0x488,2,2);
        this->RIOM_SGN_LifesignalMc2 = crrcCan->getBool(0x488,2,6);

        this->riomAxAi1Mc2 = crrcCan->getUnsignedInt(0x1F9, 2);
        this->riomAxAi2Mc2 = crrcCan->getUnsignedInt(0x1F9, 4);
        this->riomAxAi3Mc2 = crrcCan->getUnsignedInt(0x1F9, 0);
        this->riomAxAi4Mc2 = crrcCan->getUnsignedInt(0x1F9, 6);

        this->riomDi1In1Mc2 = crrcCan->getBool(0x3F9, 0, 0);
        this->riomDi1In2Mc2 = crrcCan->getBool(0x3F9, 0, 1);
        this->riomDi1In3Mc2 = crrcCan->getBool(0x3F9, 0, 2);
        this->riomDi1In4Mc2 = crrcCan->getBool(0x3F9, 0, 3);
        this->riomDi1In5Mc2 = crrcCan->getBool(0x3F9, 0, 4);
        this->riomDi1In6Mc2 = crrcCan->getBool(0x3F9, 0, 5);
        this->riomDi1In7Mc2 = crrcCan->getBool(0x3F9, 0, 6);
        this->riomDi1In8Mc2 = crrcCan->getBool(0x3F9, 0, 7);
        this->riomDi1In9Mc2 = crrcCan->getBool(0x3F9, 1, 0);
        this->riomDi1In10Mc2 = crrcCan->getBool(0x3F9, 1, 1);
        this->riomDi1In11Mc2 = crrcCan->getBool(0x3F9, 1, 2);
        this->riomDi1In12Mc2 = crrcCan->getBool(0x3F9, 1, 3);
        this->riomDi1In13Mc2 = crrcCan->getBool(0x3F9, 1, 4);
        this->riomDi1In14Mc2 = crrcCan->getBool(0x3F9, 1, 5);
        this->riomDi1In15Mc2 = crrcCan->getBool(0x3F9, 1, 6);
        this->riomDi1In16Mc2 = crrcCan->getBool(0x3F9, 1, 7);
        this->riomDi1In17Mc2 = crrcCan->getBool(0x3F9, 2, 0);
        this->riomDi1In18Mc2 = crrcCan->getBool(0x3F9, 2, 1);
        this->riomDi1In19Mc2 = crrcCan->getBool(0x3F9, 2, 2);
        this->riomDi1In20Mc2 = crrcCan->getBool(0x3F9, 2, 3);
        this->riomDi1In21Mc2 = crrcCan->getBool(0x3F9, 2, 4);
        this->riomDi1In22Mc2 = crrcCan->getBool(0x3F9, 2, 5);
        this->riomDi1In23Mc2 = crrcCan->getBool(0x3F9, 2, 6);
        this->riomDi1In24Mc2 = crrcCan->getBool(0x3F9, 2, 7);

        this->riomDi2In1Mc2 = crrcCan->getBool(0x3F9, 3, 0);
        this->riomDi2In2Mc2 = crrcCan->getBool(0x3F9, 3, 1);
        this->riomDi2In3Mc2 = crrcCan->getBool(0x3F9, 3, 2);
        this->riomDi2In4Mc2 = crrcCan->getBool(0x3F9, 3, 3);
        this->riomDi2In5Mc2 = crrcCan->getBool(0x3F9, 3, 4);
        this->riomDi2In6Mc2 = crrcCan->getBool(0x3F9, 3, 5);
        this->riomDi2In7Mc2 = crrcCan->getBool(0x3F9, 3, 6);
        this->riomDi2In8Mc2 = crrcCan->getBool(0x3F9, 3, 7);
        this->riomDi2In9Mc2 = crrcCan->getBool(0x3F9, 4, 0);
        this->riomDi2In10Mc2 = crrcCan->getBool(0x3F9, 4, 1);
        this->riomDi2In11Mc2 = crrcCan->getBool(0x3F9, 4, 2);
        this->riomDi2In12Mc2 = crrcCan->getBool(0x3F9, 4, 3);
        this->riomDi2In13Mc2 = crrcCan->getBool(0x3F9, 4, 4);
        this->riomDi2In14Mc2 = crrcCan->getBool(0x3F9, 4, 5);
        this->riomDi2In15Mc2 = crrcCan->getBool(0x3F9, 4, 6);
        this->riomDi2In16Mc2 = crrcCan->getBool(0x3F9, 4, 7);
        this->riomDi2In17Mc2 = crrcCan->getBool(0x3F9, 5, 0);
        this->riomDi2In18Mc2 = crrcCan->getBool(0x3F9, 5, 1);
        this->riomDi2In19Mc2 = crrcCan->getBool(0x3F9, 5, 2);
        this->riomDi2In20Mc2 = crrcCan->getBool(0x3F9, 5, 3);
        this->riomDi2In21Mc2 = crrcCan->getBool(0x3F9, 5, 4);
        this->riomDi2In22Mc2 = crrcCan->getBool(0x3F9, 5, 5);
        this->riomDi2In23Mc2 = crrcCan->getBool(0x3F9, 5, 6);
        this->riomDi2In24Mc2 = crrcCan->getBool(0x3F9, 5, 7);

        this->riomSgnIn1Mc2 = crrcCan->getBool(0x4F9, 1, 0);
        this->riomSgnIn2Mc2 = crrcCan->getBool(0x4F9, 1, 1);
        this->riomSgnIn3Mc2 = crrcCan->getBool(0x4F9, 1, 2);
        this->riomSgnIn4Mc2 = crrcCan->getBool(0x4F9, 1, 3);
        this->riomSgnIn5Mc2 = crrcCan->getBool(0x4F9, 1, 4);
        this->riomSgnIn6Mc2 = crrcCan->getBool(0x4F9, 1, 5);
        this->riomSgnIn7Mc2 = crrcCan->getBool(0x4F9, 1, 6);
        this->riomSgnIn8Mc2 = crrcCan->getBool(0x4F9, 1, 7);
        this->riomSgnIn9Mc2 = crrcCan->getBool(0x4F9, 2, 0);
        this->riomSgnIn10Mc2 = crrcCan->getBool(0x4F9, 2, 1);
        this->riomSgnIn11Mc2 = crrcCan->getBool(0x4F9, 2, 2);
        this->riomSgnIn12Mc2 = crrcCan->getBool(0x4F9, 2, 3);
        this->riomSgnIn13Mc2 = crrcCan->getBool(0x4F9, 2, 4);
        this->riomSgnIn14Mc2 = crrcCan->getBool(0x4F9, 2, 5);
        this->riomSgnIn15Mc2 = crrcCan->getBool(0x4F9, 2, 6);
        this->riomSgnIn16Mc2 = crrcCan->getBool(0x4F9, 2, 7);
        this->riomSgnIn17Mc2 = crrcCan->getBool(0x4F9, 3, 0);
        this->riomSgnIn18Mc2 = crrcCan->getBool(0x4F9, 3, 1);
        this->riomSgnIn19Mc2 = crrcCan->getBool(0x4F9, 3, 2);
        this->riomSgnIn20Mc2 = crrcCan->getBool(0x4F9, 3, 3);
        this->riomSgnIn21Mc2 = crrcCan->getBool(0x4F9, 3, 4);
        this->riomSgnIn22Mc2 = crrcCan->getBool(0x4F9, 3, 5);
        this->riomSgnIn23Mc2 = crrcCan->getBool(0x4F9, 3, 6);
        this->riomSgnIn24Mc2 = crrcCan->getBool(0x4F9, 3, 7);

        this->riomDo1Out1Mc2 = crrcCan->getBool(0x408, 0, 0);
        this->riomDo1Out2Mc2 = crrcCan->getBool(0x408, 0, 1);
        this->riomDo1Out3Mc2 = crrcCan->getBool(0x408, 0, 2);
        this->riomDo1Out4Mc2 = crrcCan->getBool(0x408, 0, 3);
        this->riomDo1Out5Mc2 = crrcCan->getBool(0x408, 0, 4);
        this->riomDo1Out6Mc2 = crrcCan->getBool(0x408, 0, 5);
        this->riomDo1Out7Mc2 = crrcCan->getBool(0x408, 0, 6);
        this->riomDo1Out8Mc2 = crrcCan->getBool(0x408, 0, 7);
        this->riomDo1Out9Mc2 = crrcCan->getBool(0x408, 1, 0);
        this->riomDo1Out10Mc2 = crrcCan->getBool(0x408, 1, 1);
        this->riomDo1Out11Mc2 = crrcCan->getBool(0x408, 1, 2);
        this->riomDo1Out12Mc2 = crrcCan->getBool(0x408, 1, 3);
        this->riomDo1Out13Mc2 = crrcCan->getBool(0x408, 1, 4);
        this->riomDo1Out14Mc2 = crrcCan->getBool(0x408, 1, 5);
        this->riomDo1Out15Mc2 = crrcCan->getBool(0x408, 1, 6);
        this->riomDo1Out16Mc2 = crrcCan->getBool(0x408, 1, 7);

        this->riomDo2Out1Mc2 = crrcCan->getBool(0x408, 3, 0);
        this->riomDo2Out2Mc2 = crrcCan->getBool(0x408, 3, 1);
        this->riomDo2Out3Mc2 = crrcCan->getBool(0x408, 3, 2);
        this->riomDo2Out4Mc2 = crrcCan->getBool(0x408, 3, 3);
        this->riomDo2Out5Mc2 = crrcCan->getBool(0x408, 3, 4);
        this->riomDo2Out6Mc2 = crrcCan->getBool(0x408, 3, 5);
        this->riomDo2Out7Mc2 = crrcCan->getBool(0x408, 3, 6);
        this->riomDo2Out8Mc2 = crrcCan->getBool(0x408, 3, 7);
        this->riomDo2Out9Mc2 = crrcCan->getBool(0x408, 4, 0);
        this->riomDo2Out10Mc2 = crrcCan->getBool(0x408, 4, 1);
        this->riomDo2Out11Mc2 = crrcCan->getBool(0x408, 4, 2);
        this->riomDo2Out12Mc2 = crrcCan->getBool(0x408, 4, 3);
        this->riomDo2Out13Mc2 = crrcCan->getBool(0x408, 4, 4);
        this->riomDo2Out14Mc2 = crrcCan->getBool(0x408, 4, 5);
        this->riomDo2Out15Mc2 = crrcCan->getBool(0x408, 4, 6);
        this->riomDo2Out16Mc2 = crrcCan->getBool(0x408, 4, 7);

        //M1 RIOM
        this->riomGwVersionM1 = crrcCan->getUnsignedChar(0x187, 0);
        this->riomDiVersionM1 = crrcCan->getUnsignedChar(0x187, 1);
        this->riomDoVersionM1 = crrcCan->getUnsignedChar(0x187, 2);
        this->riomAxVersionM1 = crrcCan->getUnsignedChar(0x187, 3);
        this->riomSgnVersionM1 = crrcCan->getUnsignedChar(0x187, 4);

        this->RIOM_GW_LifesignalM1 = crrcCan->getUnsignedChar(0x487,0);
        this->RIOM_DI1_LifesignalM1 = crrcCan->getBool(0x487,1,0);
        this->RIOM_DO1_LifesignalM1 = crrcCan->getBool(0x487,1,6);
        this->RIOM_AX_LifesignalM1 = crrcCan->getBool(0x487,2,2);
        this->RIOM_SGN_LifesignalM1 = crrcCan->getBool(0x487,2,6);

        this->riomAxAi1M1 = crrcCan->getUnsignedInt(0x1FC, 2);
        this->riomAxAi2M1 = crrcCan->getUnsignedInt(0x1FC, 4);
        this->riomAxAi3M1 = crrcCan->getUnsignedInt(0x1FC, 0);
        this->riomAxAi4M1 = crrcCan->getUnsignedInt(0x1FC, 6);

        this->riomDi1In1M1 = crrcCan->getBool(0x3FC, 0, 0);
        this->riomDi1In2M1 = crrcCan->getBool(0x3FC, 0, 1);
        this->riomDi1In3M1 = crrcCan->getBool(0x3FC, 0, 2);
        this->riomDi1In4M1 = crrcCan->getBool(0x3FC, 0, 3);
        this->riomDi1In5M1 = crrcCan->getBool(0x3FC, 0, 4);
        this->riomDi1In6M1 = crrcCan->getBool(0x3FC, 0, 5);
        this->riomDi1In7M1 = crrcCan->getBool(0x3FC, 0, 6);
        this->riomDi1In8M1 = crrcCan->getBool(0x3FC, 0, 7);
        this->riomDi1In9M1 = crrcCan->getBool(0x3FC, 1, 0);
        this->riomDi1In10M1 = crrcCan->getBool(0x3FC, 1, 1);
        this->riomDi1In11M1 = crrcCan->getBool(0x3FC, 1, 2);
        this->riomDi1In12M1 = crrcCan->getBool(0x3FC, 1, 3);
        this->riomDi1In13M1 = crrcCan->getBool(0x3FC, 1, 4);
        this->riomDi1In14M1 = crrcCan->getBool(0x3FC, 1, 5);
        this->riomDi1In15M1 = crrcCan->getBool(0x3FC, 1, 6);
        this->riomDi1In16M1 = crrcCan->getBool(0x3FC, 1, 7);
        this->riomDi1In17M1 = crrcCan->getBool(0x3FC, 2, 0);
        this->riomDi1In18M1 = crrcCan->getBool(0x3FC, 2, 1);
        this->riomDi1In19M1 = crrcCan->getBool(0x3FC, 2, 2);
        this->riomDi1In20M1 = crrcCan->getBool(0x3FC, 2, 3);
        this->riomDi1In21M1 = crrcCan->getBool(0x3FC, 2, 4);
        this->riomDi1In22M1 = crrcCan->getBool(0x3FC, 2, 5);
        this->riomDi1In23M1 = crrcCan->getBool(0x3FC, 2, 6);
        this->riomDi1In24M1 = crrcCan->getBool(0x3FC, 2, 7);

        this->riomSgnIn1M1 = crrcCan->getBool(0x4FC, 1, 0);
        this->riomSgnIn2M1 = crrcCan->getBool(0x4FC, 1, 1);
        this->riomSgnIn3M1 = crrcCan->getBool(0x4FC, 1, 2);
        this->riomSgnIn4M1 = crrcCan->getBool(0x4FC, 1, 3);
        this->riomSgnIn5M1 = crrcCan->getBool(0x4FC, 1, 4);
        this->riomSgnIn6M1 = crrcCan->getBool(0x4FC, 1, 5);
        this->riomSgnIn7M1 = crrcCan->getBool(0x4FC, 1, 6);
        this->riomSgnIn8M1 = crrcCan->getBool(0x4FC, 1, 7);
        this->riomSgnIn9M1 = crrcCan->getBool(0x4FC, 2, 0);
        this->riomSgnIn10M1 = crrcCan->getBool(0x4FC, 2, 1);
        this->riomSgnIn11M1 = crrcCan->getBool(0x4FC, 2, 2);
        this->riomSgnIn12M1 = crrcCan->getBool(0x4FC, 2, 3);
        this->riomSgnIn13M1 = crrcCan->getBool(0x4FC, 2, 4);
        this->riomSgnIn14M1 = crrcCan->getBool(0x4FC, 2, 5);
        this->riomSgnIn15M1 = crrcCan->getBool(0x4FC, 2, 6);
        this->riomSgnIn16M1 = crrcCan->getBool(0x4FC, 2, 7);
        this->riomSgnIn17M1 = crrcCan->getBool(0x4FC, 3, 0);
        this->riomSgnIn18M1 = crrcCan->getBool(0x4FC, 3, 1);
        this->riomSgnIn19M1 = crrcCan->getBool(0x4FC, 3, 2);
        this->riomSgnIn20M1 = crrcCan->getBool(0x4FC, 3, 3);
        this->riomSgnIn21M1 = crrcCan->getBool(0x4FC, 3, 4);
        this->riomSgnIn22M1 = crrcCan->getBool(0x4FC, 3, 5);
        this->riomSgnIn23M1 = crrcCan->getBool(0x4FC, 3, 6);
        this->riomSgnIn24M1 = crrcCan->getBool(0x4FC, 3, 7);

        this->riomDo1Out1M1 = crrcCan->getBool(0x407, 0, 0);
        this->riomDo1Out2M1 = crrcCan->getBool(0x407, 0, 1);
        this->riomDo1Out3M1 = crrcCan->getBool(0x407, 0, 2);
        this->riomDo1Out4M1 = crrcCan->getBool(0x407, 0, 3);
        this->riomDo1Out5M1 = crrcCan->getBool(0x407, 0, 4);
        this->riomDo1Out6M1 = crrcCan->getBool(0x407, 0, 5);
        this->riomDo1Out7M1 = crrcCan->getBool(0x407, 0, 6);
        this->riomDo1Out8M1 = crrcCan->getBool(0x407, 0, 7);
        this->riomDo1Out9M1 = crrcCan->getBool(0x407, 1, 0);
        this->riomDo1Out10M1 = crrcCan->getBool(0x407, 1, 1);
        this->riomDo1Out11M1 = crrcCan->getBool(0x407, 1, 2);
        this->riomDo1Out12M1 = crrcCan->getBool(0x407, 1, 3);
        this->riomDo1Out13M1 = crrcCan->getBool(0x407, 1, 4);
        this->riomDo1Out14M1 = crrcCan->getBool(0x407, 1, 5);
        this->riomDo1Out15M1 = crrcCan->getBool(0x407, 1, 6);
        this->riomDo1Out16M1 = crrcCan->getBool(0x407, 1, 7);

        //M2 RIOM
        this->RIOM_GW_LifesignalM2 = crrcCan->getUnsignedChar(0x489,0);
        this->RIOM_DI1_LifesignalM2 = crrcCan->getBool(0x489,1,0);
        this->RIOM_DO1_LifesignalM2 = crrcCan->getBool(0x489,1,6);
        this->RIOM_AX_LifesignalM2 = crrcCan->getBool(0x489,2,2);
        this->RIOM_SGN_LifesignalM2 = crrcCan->getBool(0x489,2,6);

        this->riomGwVersionM2 = crrcCan->getUnsignedChar(0x189, 0);
        this->riomDiVersionM2 = crrcCan->getUnsignedChar(0x189, 1);
        this->riomDoVersionM2 = crrcCan->getUnsignedChar(0x189, 2);
        this->riomAxVersionM2 = crrcCan->getUnsignedChar(0x189, 3);
        this->riomSgnVersionM2 = crrcCan->getUnsignedChar(0x189, 4);

        this->riomAxAi1M2 = crrcCan->getUnsignedInt(0x1F6, 2);
        this->riomAxAi2M2 = crrcCan->getUnsignedInt(0x1F6, 4);
        this->riomAxAi3M2 = crrcCan->getUnsignedInt(0x1F6, 0);
        this->riomAxAi4M2 = crrcCan->getUnsignedInt(0x1F6, 6);

        this->riomDi1In1M2 = crrcCan->getBool(0x3F6, 0, 0);
        this->riomDi1In2M2 = crrcCan->getBool(0x3F6, 0, 1);
        this->riomDi1In3M2 = crrcCan->getBool(0x3F6, 0, 2);
        this->riomDi1In4M2 = crrcCan->getBool(0x3F6, 0, 3);
        this->riomDi1In5M2 = crrcCan->getBool(0x3F6, 0, 4);
        this->riomDi1In6M2 = crrcCan->getBool(0x3F6, 0, 5);
        this->riomDi1In7M2 = crrcCan->getBool(0x3F6, 0, 6);
        this->riomDi1In8M2 = crrcCan->getBool(0x3F6, 0, 7);
        this->riomDi1In9M2 = crrcCan->getBool(0x3F6, 1, 0);
        this->riomDi1In10M2 = crrcCan->getBool(0x3F6, 1, 1);
        this->riomDi1In11M2 = crrcCan->getBool(0x3F6, 1, 2);
        this->riomDi1In12M2 = crrcCan->getBool(0x3F6, 1, 3);
        this->riomDi1In13M2 = crrcCan->getBool(0x3F6, 1, 4);
        this->riomDi1In14M2 = crrcCan->getBool(0x3F6, 1, 5);
        this->riomDi1In15M2 = crrcCan->getBool(0x3F6, 1, 6);
        this->riomDi1In16M2 = crrcCan->getBool(0x3F6, 1, 7);
        this->riomDi1In17M2 = crrcCan->getBool(0x3F6, 2, 0);
        this->riomDi1In18M2 = crrcCan->getBool(0x3F6, 2, 1);
        this->riomDi1In19M2 = crrcCan->getBool(0x3F6, 2, 2);
        this->riomDi1In20M2 = crrcCan->getBool(0x3F6, 2, 3);
        this->riomDi1In21M2 = crrcCan->getBool(0x3F6, 2, 4);
        this->riomDi1In22M2 = crrcCan->getBool(0x3F6, 2, 5);
        this->riomDi1In23M2 = crrcCan->getBool(0x3F6, 2, 6);
        this->riomDi1In24M2 = crrcCan->getBool(0x3F6, 2, 7);

        this->riomSgnIn1M2 = crrcCan->getBool(0x4F6, 1, 0);
        this->riomSgnIn2M2 = crrcCan->getBool(0x4F6, 1, 1);
        this->riomSgnIn3M2 = crrcCan->getBool(0x4F6, 1, 2);
        this->riomSgnIn4M2 = crrcCan->getBool(0x4F6, 1, 3);
        this->riomSgnIn5M2 = crrcCan->getBool(0x4F6, 1, 4);
        this->riomSgnIn6M2 = crrcCan->getBool(0x4F6, 1, 5);
        this->riomSgnIn7M2 = crrcCan->getBool(0x4F6, 1, 6);
        this->riomSgnIn8M2 = crrcCan->getBool(0x4F6, 1, 7);
        this->riomSgnIn9M2 = crrcCan->getBool(0x4F6, 2, 0);
        this->riomSgnIn10M2 = crrcCan->getBool(0x4F6, 2, 1);
        this->riomSgnIn11M2 = crrcCan->getBool(0x4F6, 2, 2);
        this->riomSgnIn12M2 = crrcCan->getBool(0x4F6, 2, 3);
        this->riomSgnIn13M2 = crrcCan->getBool(0x4F6, 2, 4);
        this->riomSgnIn14M2 = crrcCan->getBool(0x4F6, 2, 5);
        this->riomSgnIn15M2 = crrcCan->getBool(0x4F6, 2, 6);
        this->riomSgnIn16M2 = crrcCan->getBool(0x4F6, 2, 7);
        this->riomSgnIn17M2 = crrcCan->getBool(0x4F6, 3, 0);
        this->riomSgnIn18M2 = crrcCan->getBool(0x4F6, 3, 1);
        this->riomSgnIn19M2 = crrcCan->getBool(0x4F6, 3, 2);
        this->riomSgnIn20M2 = crrcCan->getBool(0x4F6, 3, 3);
        this->riomSgnIn21M2 = crrcCan->getBool(0x4F6, 3, 4);
        this->riomSgnIn22M2 = crrcCan->getBool(0x4F6, 3, 5);
        this->riomSgnIn23M2 = crrcCan->getBool(0x4F6, 3, 6);
        this->riomSgnIn24M2 = crrcCan->getBool(0x4F6, 3, 7);

        this->riomDo1Out1M2 = crrcCan->getBool(0x409, 0, 0);
        this->riomDo1Out2M2 = crrcCan->getBool(0x409, 0, 1);
        this->riomDo1Out3M2 = crrcCan->getBool(0x409, 0, 2);
        this->riomDo1Out4M2 = crrcCan->getBool(0x409, 0, 3);
        this->riomDo1Out5M2 = crrcCan->getBool(0x409, 0, 4);
        this->riomDo1Out6M2 = crrcCan->getBool(0x409, 0, 5);
        this->riomDo1Out7M2 = crrcCan->getBool(0x409, 0, 6);
        this->riomDo1Out8M2 = crrcCan->getBool(0x409, 0, 7);
        this->riomDo1Out9M2 = crrcCan->getBool(0x409, 1, 0);
        this->riomDo1Out10M2 = crrcCan->getBool(0x409, 1, 1);
        this->riomDo1Out11M2 = crrcCan->getBool(0x409, 1, 2);
        this->riomDo1Out12M2 = crrcCan->getBool(0x409, 1, 3);
        this->riomDo1Out13M2 = crrcCan->getBool(0x409, 1, 4);
        this->riomDo1Out14M2 = crrcCan->getBool(0x409, 1, 5);
        this->riomDo1Out15M2 = crrcCan->getBool(0x409, 1, 6);
        this->riomDo1Out16M2 = crrcCan->getBool(0x409, 1, 7);
    }
    ////ERM->VCU

    this->ERMtoVCUGWVision1 = crrcCan->getUnsignedChar(0x1B1,2);
    this->ERMtoVCULifesignal1 = crrcCan->getUnsignedChar(0x1B1,3);
    this->ERMtoVCUVision1 = crrcCan->getUnsignedChar(0x2B1,0)/16;
    this->ERM1_PLC_version = crrcCan->getUnsignedChar(0x2B1,0)%16;


    this->ERMtoVCUGWVision2 = crrcCan->getUnsignedChar(0x1B2,2);
    this->ERMtoVCULifesignal2 = crrcCan->getUnsignedChar(0x1B2,3);
    this->ERMtoVCUVision2 = crrcCan->getUnsignedChar(0x2B2,0)/16;
    this->ERM2_PLC_version = crrcCan->getUnsignedChar(0x2B2,0)%16;

    //BCU->VCU
    {
        this->BR1CT_HWSafBr_B1 = crrcCan->getBool(0x184,4,2);
        this->BR1CT_BrRel_B1 = crrcCan->getBool(0x184,4,4);
        this->BR1CT_BrApplied_B1 = crrcCan->getBool(0x184,4,5);
        this->BR1CT_HBOn_B1 = crrcCan->getBool(0x184,4,6);
        this->BR1CT_WSP_TC_B1 = crrcCan->getBool(0x184,4,7);
        this->BR1CT_BSE_B1 = crrcCan->getBool(0x184,5,0);
        this->BR1CT_BSW_B1 = crrcCan->getBool(0x184,5,1);
        this->BR1CT_SWLifesignal_U8 = crrcCan->getUnsignedChar(0x184,6);
        this->BR1CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x184,7);
        this->BR1CT_DiagnosisReg1_U16 = crrcCan->getUnsignedInt(0x284,0);
        this->BR1CT_DiagnosisReg2_U16 = crrcCan->getUnsignedInt(0x284,2);
        this->BR1CT_DiagnosisReg3_U16 = crrcCan->getUnsignedInt(0x284,4);
        this->BR1CT_DiagnosisReg4_U16 = crrcCan->getUnsignedInt(0x284,6);
        this->BR1CT_Speed1 = crrcCan->getUnsignedChar(0x384,0);
        this->BR1CT_Speed2 = crrcCan->getUnsignedChar(0x384,1);
        this->BR1CT_Speed3 = crrcCan->getUnsignedChar(0x384,2);
        this->BR1CT_Speed4 = crrcCan->getUnsignedChar(0x384,3);
        this->BR1CT_LoadSensor1_U16 = crrcCan->getUnsignedInt(0x384,4);
        this->BR1CT_LoadSensor2_U16 = crrcCan->getUnsignedInt(0x384,6);

        this->BR2CT_HWSafBr_B1 = crrcCan->getBool(0x185,4,2);
        this->BR2CT_BrRel_B1 = crrcCan->getBool(0x185,4,4);
        this->BR2CT_BrApplied_B1 = crrcCan->getBool(0x185,4,5);
        this->BR2CT_HBOn_B1 = crrcCan->getBool(0x185,4,6);
        this->BR2CT_WSP_TC_B1 = crrcCan->getBool(0x185,4,7);
        this->BR2CT_BSE_B1 = crrcCan->getBool(0x185,5,0);
        this->BR2CT_BSW_B1 = crrcCan->getBool(0x185,5,1);
        this->BR2CT_SWLifesignal_U8 = crrcCan->getUnsignedChar(0x185,6);
        this->BR2CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x185,7);
        this->BR2CT_DiagnosisReg1_U16 = crrcCan->getUnsignedInt(0x285,0);
        this->BR2CT_DiagnosisReg2_U16 = crrcCan->getUnsignedInt(0x285,2);
        this->BR2CT_DiagnosisReg3_U16 = crrcCan->getUnsignedInt(0x285,4);
        this->BR2CT_DiagnosisReg4_U16 = crrcCan->getUnsignedInt(0x285,6);
        this->BR2CT_Speed1 = crrcCan->getUnsignedChar(0x385,0);
        this->BR2CT_Speed2 = crrcCan->getUnsignedChar(0x385,1);
        this->BR2CT_Speed3 = crrcCan->getUnsignedChar(0x385,2);
        this->BR2CT_Speed4 = crrcCan->getUnsignedChar(0x385,3);
        this->BR2CT_LoadSensor1_U16 = crrcCan->getUnsignedInt(0x385,4);
        this->BR2CT_LoadSensor2_U16 = crrcCan->getUnsignedInt(0x385,6);

    }
    //ACU->VCU
    {
        //MC1
        this->AU1CT_OutputVolt_U16 = crrcCan->getUnsignedInt(0x18f,0);
        this->AU1CT_OutputCurr_U16 = crrcCan->getUnsignedInt(0x18f,2);
        this->AU1CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x18f,6);
        this->AU1CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x28f,2);
        this->AU1CT_FaultReg3_U16 = crrcCan->getUnsignedInt(0x28f,4);

        this->AU1CT_StateOK_B1 = crrcCan->getBool(0x28f,6,0);
        this->AU1CT_Stop_B1 = crrcCan->getBool(0x28f,6,1);
        this->AU1CT_OutContactor_B1 = crrcCan->getBool(0x28f,7,1);

        this->AU1CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x28f,0);
        this->AU1CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x28f,1);

        this->BC1CT_OutputVolt_U8 = crrcCan->getUnsignedChar(0x38f,0);
        this->BC1CT_ChargingCurr_U8 = crrcCan->getUnsignedChar(0x38f,1);
        this->BC1CT_BattTemp_U8 = crrcCan->getUnsignedChar(0x38f,2);
        this->BC1CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x38f,6);
        this->BC1CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x38f,7);

        this->BC1CT_battCurr_U16 = crrcCan->getUnsignedInt(0x38f,4);
        this->BC1CT_NetVolt_U16 = crrcCan->getUnsignedInt(0x48f,0);
        this->BC1CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x48f,2);
        this->BC1CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x48f,4);

        this->BC1CT_BCCOK_B1 = crrcCan->getBool(0x38f,3,0);
        this->BC1CT_Stop_B1 = crrcCan->getBool(0x38f,3,1);

        //M1
        this->AU2CT_OutputVolt_U16 = crrcCan->getUnsignedInt(0x190,0);
        this->AU2CT_OutputCurr_U16 = crrcCan->getUnsignedInt(0x190,2);
        this->AU2CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x190,6);
        this->AU2CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x290,2);
        this->AU2CT_FaultReg3_U16 = crrcCan->getUnsignedInt(0x290,4);

        this->AU2CT_StateOK_B1 = crrcCan->getBool(0x290,6,0);
        this->AU2CT_Stop_B1 = crrcCan->getBool(0x290,6,1);
        this->AU2CT_OutContactor_B1 = crrcCan->getBool(0x290,7,1);

        this->AU2CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x290,0);
        this->AU2CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x290,1);

        this->BC2CT_OutputVolt_U8 = crrcCan->getUnsignedChar(0x390,0);
        this->BC2CT_ChargingCurr_U8 = crrcCan->getUnsignedChar(0x390,1);
        this->BC2CT_BattTemp_U8 = crrcCan->getUnsignedChar(0x390,2);
        this->BC2CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x390,6);
        this->BC2CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x390,7);

        this->BC2CT_battCurr_U16 = crrcCan->getUnsignedInt(0x390,4);
        this->BC2CT_NetVolt_U16 = crrcCan->getUnsignedInt(0x490,0);
        this->BC2CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x490,2);
        this->BC2CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x490,4);

        this->BC2CT_BCCOK_B1 = crrcCan->getBool(0x390,3,0);
        this->BC2CT_Stop_B1 = crrcCan->getBool(0x390,3,1);

        //M2
        this->AU3CT_OutputVolt_U16 = crrcCan->getUnsignedInt(0x191,0);
        this->AU3CT_OutputCurr_U16 = crrcCan->getUnsignedInt(0x191,2);
        this->AU3CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x191,6);
        this->AU3CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x291,2);
        this->AU3CT_FaultReg3_U16 = crrcCan->getUnsignedInt(0x291,4);

        this->AU3CT_StateOK_B1 = crrcCan->getBool(0x291,6,0);
        this->AU3CT_Stop_B1 = crrcCan->getBool(0x291,6,1);
        this->AU3CT_OutContactor_B1 = crrcCan->getBool(0x291,7,1);

        this->AU3CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x291,0);
        this->AU3CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x291,1);

        this->BC3CT_OutputVolt_U8 = crrcCan->getUnsignedChar(0x391,0);
        this->BC3CT_ChargingCurr_U8 = crrcCan->getUnsignedChar(0x391,1);
        this->BC3CT_BattTemp_U8 = crrcCan->getUnsignedChar(0x391,2);
        this->BC3CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x391,6);
        this->BC3CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x391,7);

        this->BC3CT_battCurr_U16 = crrcCan->getUnsignedInt(0x391,4);
        this->BC3CT_NetVolt_U16 = crrcCan->getUnsignedInt(0x491,0);
        this->BC3CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x491,2);
        this->BC3CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x491,4);

        this->BC3CT_BCCOK_B1 = crrcCan->getBool(0x391,3,0);
        this->BC3CT_Stop_B1 = crrcCan->getBool(0x391,3,1);

        //MC2
        this->AU4CT_OutputVolt_U16 = crrcCan->getUnsignedInt(0x192,0);
        this->AU4CT_OutputCurr_U16 = crrcCan->getUnsignedInt(0x192,2);
        this->AU4CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x192,6);
        this->AU4CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x292,2);
        this->AU4CT_FaultReg3_U16 = crrcCan->getUnsignedInt(0x292,4);

        this->AU4CT_StateOK_B1 = crrcCan->getBool(0x292,6,0);
        this->AU4CT_Stop_B1 = crrcCan->getBool(0x292,6,1);
        this->AU4CT_OutContactor_B1 = crrcCan->getBool(0x292,7,1);

        this->AU4CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x292,0);
        this->AU4CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x292,1);

        this->BC4CT_OutputVolt_U8 = crrcCan->getUnsignedChar(0x392,0);
        this->BC4CT_ChargingCurr_U8 = crrcCan->getUnsignedChar(0x392,1);
        this->BC4CT_BattTemp_U8 = crrcCan->getUnsignedChar(0x392,2);
        this->BC4CT_Lifesignal_U8 = crrcCan->getUnsignedChar(0x392,6);
        this->BC4CT_SWVersion_U8 = crrcCan->getUnsignedChar(0x392,7);

        this->BC4CT_battCurr_U16 = crrcCan->getUnsignedInt(0x392,4);
        this->BC4CT_NetVolt_U16 = crrcCan->getUnsignedInt(0x492,0);
        this->BC4CT_FaultReg1_U16 = crrcCan->getUnsignedInt(0x492,2);
        this->BC4CT_FaultReg2_U16 = crrcCan->getUnsignedInt(0x492,4);

        this->BC4CT_BCCOK_B1 = crrcCan->getBool(0x392,3,0);
        this->BC4CT_Stop_B1 = crrcCan->getBool(0x392,3,1);

    }
    //TCU->VCU
    {
        //MC1_1
        this->TR1_1CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x18B,0);
        this->TR1_1CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x18B,1);
        this->TR1_1CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x38B,2);
        this->TR1_1CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x38B,3);
        this->TR1_1CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x38B,5);

        this->TR1_1CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x18B,2);
        this->TR1_1CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x18B,4);
        this->TR1_1CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x28B,0);
        this->TR1_1CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x28B,1);
        this->TR1_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x28B,2);
        //this->TR1_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x38B,6);
        this->TR1_1CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x28B,6);
        this->TR1_1CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x38B,0);

        this->TR1_1CT_SafBrM1_B1 = crrcCan->getBool(0x18B,6,0);
        this->TR1_1CT_EnTractionM1_B1 = crrcCan->getBool(0x18B,6,1);
        this->TR1_1CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x18B,6,2);
        this->TR1_1CT_BrOvertakeM1_B1 = crrcCan->getBool(0x18B,6,6);
        this->TR1_1CT_ForcedBrM1_B1 = crrcCan->getBool(0x18B,6,7);
        this->TR1_1CT_ChargingContactorM1_B1 = crrcCan->getBool(0x18B,7,0);
        this->TR1_1CT_MainContactorM1_B1 = crrcCan->getBool(0x18B,7,1);
        this->TR1_1CT_VVVFM1_B1 = crrcCan->getBool(0x18B,7,2);
        this->TR1_1CT_EnDriveM1_B1 = crrcCan->getBool(0x18B,7,3);
        this->TR1_1CT_SandingRecM1_B1 = crrcCan->getBool(0x18B,7,5);
        this->TR1_1CT_ZeroLockM1_B1 = crrcCan->getBool(0x18B,7,6);
        this->TR1_1CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x38B,4,0);
        this->TR1_1CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x38B,4,1);
        this->TR1_1CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x38B,4,2);
        this->TR1_1CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x38B,4,3);
        this->TR1_1CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x38B,4,4);
        this->TR1_1CT_Motor1SlideM1_B1 = crrcCan->getBool(0x38B,4,5);
        this->TR1_1CT_Motor1SlipM1_B1 = crrcCan->getBool(0x38B,4,6);
        this->TR1_1CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x38B,4,7);
        //MC1_2
        this->TR1_2CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x48B,0);
        this->TR1_2CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x48B,1);
        this->TR1_2CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x2EB,2);
        this->TR1_2CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x2EB,3);
        this->TR1_2CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x2EB,5);

        this->TR1_2CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x48B,2);
        this->TR1_2CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x48B,4);
        this->TR1_2CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x1EB,0);
        this->TR1_2CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x1EB,1);
        this->TR1_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x1EB,2);
        //this->TR1_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x2EB,6);
        this->TR1_2CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x1EB,6);
        this->TR1_2CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x2EB,0);

        this->TR1_2CT_SafBrM1_B1 = crrcCan->getBool(0x48B,6,0);
        this->TR1_2CT_EnTractionM1_B1 = crrcCan->getBool(0x48B,6,1);
        this->TR1_2CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x48B,6,2);
        this->TR1_2CT_BrOvertakeM1_B1 = crrcCan->getBool(0x48B,6,6);
        this->TR1_2CT_ForcedBrM1_B1 = crrcCan->getBool(0x48B,6,7);
        this->TR1_2CT_ChargingContactorM1_B1 = crrcCan->getBool(0x48B,7,0);
        this->TR1_2CT_MainContactorM1_B1 = crrcCan->getBool(0x48B,7,1);
        this->TR1_2CT_VVVFM1_B1 = crrcCan->getBool(0x48B,7,2);
        this->TR1_2CT_EnDriveM1_B1 = crrcCan->getBool(0x48B,7,3);
        this->TR1_2CT_SandingRecM1_B1 = crrcCan->getBool(0x48B,7,5);
        this->TR1_2CT_ZeroLockM1_B1 = crrcCan->getBool(0x48B,7,6);
        this->TR1_2CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x2EB,4,0);
        this->TR1_2CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x2EB,4,1);
        this->TR1_2CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x2EB,4,2);
        this->TR1_2CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x2EB,4,3);
        this->TR1_2CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x2EB,4,4);
        this->TR1_2CT_Motor1SlideM1_B1 = crrcCan->getBool(0x2EB,4,5);
        this->TR1_2CT_Motor1SlipM1_B1 = crrcCan->getBool(0x2EB,4,6);
        this->TR1_2CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x2EB,4,7);

        //M1_1
        this->TR2_1CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x18C,0);
        this->TR2_1CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x18C,1);
        this->TR2_1CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x38C,2);
        this->TR2_1CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x38C,3);
        this->TR2_1CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x38C,5);

        this->TR2_1CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x18C,2);
        this->TR2_1CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x18C,4);
        this->TR2_1CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x28C,0);
        this->TR2_1CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x28C,1);
        this->TR2_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x28C,2);
        //this->TR2_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x38C,6);
        this->TR2_1CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x28C,6);
        this->TR2_1CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x38C,0);

        this->TR2_1CT_SafBrM1_B1 = crrcCan->getBool(0x18C,6,0);
        this->TR2_1CT_EnTractionM1_B1 = crrcCan->getBool(0x18C,6,1);
        this->TR2_1CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x18C,6,2);
        this->TR2_1CT_BrOvertakeM1_B1 = crrcCan->getBool(0x18C,6,6);
        this->TR2_1CT_ForcedBrM1_B1 = crrcCan->getBool(0x18C,6,7);
        this->TR2_1CT_ChargingContactorM1_B1 = crrcCan->getBool(0x18C,7,0);
        this->TR2_1CT_MainContactorM1_B1 = crrcCan->getBool(0x18C,7,1);
        this->TR2_1CT_VVVFM1_B1 = crrcCan->getBool(0x18C,7,2);
        this->TR2_1CT_EnDriveM1_B1 = crrcCan->getBool(0x18C,7,3);
        this->TR2_1CT_SandingRecM1_B1 = crrcCan->getBool(0x18C,7,5);
        this->TR2_1CT_ZeroLockM1_B1 = crrcCan->getBool(0x18C,7,6);
        this->TR2_1CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x38C,4,0);
        this->TR2_1CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x38C,4,1);
        this->TR2_1CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x38C,4,2);
        this->TR2_1CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x38C,4,3);
        this->TR2_1CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x38C,4,4);
        this->TR2_1CT_Motor1SlideM1_B1 = crrcCan->getBool(0x38C,4,5);
        this->TR2_1CT_Motor1SlipM1_B1 = crrcCan->getBool(0x38C,4,6);
        this->TR2_1CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x38C,4,7);
        //M1_2
        this->TR2_2CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x48C,0);
        this->TR2_2CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x48C,1);
        this->TR2_2CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x2EC,2);
        this->TR2_2CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x2EC,3);
        this->TR2_2CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x2EC,5);

        this->TR2_2CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x48C,2);
        this->TR2_2CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x48C,4);
        this->TR2_2CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x1EC,0);
        this->TR2_2CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x1EC,1);
        this->TR2_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x1EC,2);
        //this->TR2_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x2EC,6);
        this->TR2_2CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x1EC,6);
        this->TR2_2CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x2EC,0);

        this->TR2_2CT_SafBrM1_B1 = crrcCan->getBool(0x48C,6,0);
        this->TR2_2CT_EnTractionM1_B1 = crrcCan->getBool(0x48C,6,1);
        this->TR2_2CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x48C,6,2);
        this->TR2_2CT_BrOvertakeM1_B1 = crrcCan->getBool(0x48C,6,6);
        this->TR2_2CT_ForcedBrM1_B1 = crrcCan->getBool(0x48C,6,7);
        this->TR2_2CT_ChargingContactorM1_B1 = crrcCan->getBool(0x48C,7,0);
        this->TR2_2CT_MainContactorM1_B1 = crrcCan->getBool(0x48C,7,1);
        this->TR2_2CT_VVVFM1_B1 = crrcCan->getBool(0x48C,7,2);
        this->TR2_2CT_EnDriveM1_B1 = crrcCan->getBool(0x48C,7,3);
        this->TR2_2CT_SandingRecM1_B1 = crrcCan->getBool(0x48C,7,5);
        this->TR2_2CT_ZeroLockM1_B1 = crrcCan->getBool(0x48C,7,6);
        this->TR2_2CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x2EC,4,0);
        this->TR2_2CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x2EC,4,1);
        this->TR2_2CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x2EC,4,2);
        this->TR2_2CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x2EC,4,3);
        this->TR2_2CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x2EC,4,4);
        this->TR2_2CT_Motor1SlideM1_B1 = crrcCan->getBool(0x2EC,4,5);
        this->TR2_2CT_Motor1SlipM1_B1 = crrcCan->getBool(0x2EC,4,6);
        this->TR2_2CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x2EC,4,7);

        //M2_1
        this->TR3_1CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x18D,0);
        this->TR3_1CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x18D,1);
        this->TR3_1CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x38D,2);
        this->TR3_1CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x38D,3);
        this->TR3_1CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x38D,5);

        this->TR3_1CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x18D,2);
        this->TR3_1CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x18D,4);
        this->TR3_1CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x28D,0);
        this->TR3_1CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x28D,1);
        this->TR3_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x28D,2);
        //this->TR3_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x38D,6);
        this->TR3_1CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x28D,6);
        this->TR3_1CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x38D,0);

        this->TR3_1CT_SafBrM1_B1 = crrcCan->getBool(0x18D,6,0);
        this->TR3_1CT_EnTractionM1_B1 = crrcCan->getBool(0x18D,6,1);
        this->TR3_1CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x18D,6,2);
        this->TR3_1CT_BrOvertakeM1_B1 = crrcCan->getBool(0x18D,6,6);
        this->TR3_1CT_ForcedBrM1_B1 = crrcCan->getBool(0x18D,6,7);
        this->TR3_1CT_ChargingContactorM1_B1 = crrcCan->getBool(0x18D,7,0);
        this->TR3_1CT_MainContactorM1_B1 = crrcCan->getBool(0x18D,7,1);
        this->TR3_1CT_VVVFM1_B1 = crrcCan->getBool(0x18D,7,2);
        this->TR3_1CT_EnDriveM1_B1 = crrcCan->getBool(0x18D,7,3);
        this->TR3_1CT_SandingRecM1_B1 = crrcCan->getBool(0x18D,7,5);
        this->TR3_1CT_ZeroLockM1_B1 = crrcCan->getBool(0x18D,7,6);
        this->TR3_1CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x38D,4,0);
        this->TR3_1CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x38D,4,1);
        this->TR3_1CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x38D,4,2);
        this->TR3_1CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x38D,4,3);
        this->TR3_1CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x38D,4,4);
        this->TR3_1CT_Motor1SlideM1_B1 = crrcCan->getBool(0x38D,4,5);
        this->TR3_1CT_Motor1SlipM1_B1 = crrcCan->getBool(0x38D,4,6);
        this->TR3_1CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x38D,4,7);
        //M2_2
        this->TR3_2CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x48D,0);
        this->TR3_2CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x48D,1);
        this->TR3_2CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x2ED,2);
        this->TR3_2CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x2ED,3);
        this->TR3_2CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x2ED,5);

        this->TR3_2CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x48D,2);
        this->TR3_2CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x48D,4);
        this->TR3_2CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x1ED,0);
        this->TR3_2CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x1ED,1);
        this->TR3_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x1ED,2);
        //this->TR3_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x2ED,6);
        this->TR3_2CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x1ED,6);
        this->TR3_2CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x2ED,0);

        this->TR3_2CT_SafBrM1_B1 = crrcCan->getBool(0x48D,6,0);
        this->TR3_2CT_EnTractionM1_B1 = crrcCan->getBool(0x48D,6,1);
        this->TR3_2CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x48D,6,2);
        this->TR3_2CT_BrOvertakeM1_B1 = crrcCan->getBool(0x48D,6,6);
        this->TR3_2CT_ForcedBrM1_B1 = crrcCan->getBool(0x48D,6,7);
        this->TR3_2CT_ChargingContactorM1_B1 = crrcCan->getBool(0x48D,7,0);
        this->TR3_2CT_MainContactorM1_B1 = crrcCan->getBool(0x48D,7,1);
        this->TR3_2CT_VVVFM1_B1 = crrcCan->getBool(0x48D,7,2);
        this->TR3_2CT_EnDriveM1_B1 = crrcCan->getBool(0x48D,7,3);
        this->TR3_2CT_SandingRecM1_B1 = crrcCan->getBool(0x48D,7,5);
        this->TR3_2CT_ZeroLockM1_B1 = crrcCan->getBool(0x48D,7,6);
        this->TR3_2CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x2ED,4,0);
        this->TR3_2CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x2ED,4,1);
        this->TR3_2CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x2ED,4,2);
        this->TR3_2CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x2ED,4,3);
        this->TR3_2CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x2ED,4,4);
        this->TR3_2CT_Motor1SlideM1_B1 = crrcCan->getBool(0x2ED,4,5);
        this->TR3_2CT_Motor1SlipM1_B1 = crrcCan->getBool(0x2ED,4,6);
        this->TR3_2CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x2ED,4,7);

        //MC2_1
        this->TR4_1CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x18E,0);
        this->TR4_1CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x18E,1);
        this->TR4_1CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x38E,2);
        this->TR4_1CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x38E,3);
        this->TR4_1CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x38E,5);

        this->TR4_1CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x18E,2);
        this->TR4_1CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x18E,4);
        this->TR4_1CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x28E,0);
        this->TR4_1CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x28E,1);
        this->TR4_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x28E,2);
        //this->TR4_1CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x38E,6);
        this->TR4_1CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x28E,6);
        this->TR4_1CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x38E,0);

        this->TR4_1CT_SafBrM1_B1 = crrcCan->getBool(0x18E,6,0);
        this->TR4_1CT_EnTractionM1_B1 = crrcCan->getBool(0x18E,6,1);
        this->TR4_1CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x18E,6,2);
        this->TR4_1CT_BrOvertakeM1_B1 = crrcCan->getBool(0x18E,6,6);
        this->TR4_1CT_ForcedBrM1_B1 = crrcCan->getBool(0x18E,6,7);
        this->TR4_1CT_ChargingContactorM1_B1 = crrcCan->getBool(0x18E,7,0);
        this->TR4_1CT_MainContactorM1_B1 = crrcCan->getBool(0x18E,7,1);
        this->TR4_1CT_VVVFM1_B1 = crrcCan->getBool(0x18E,7,2);
        this->TR4_1CT_EnDriveM1_B1 = crrcCan->getBool(0x18E,7,3);
        this->TR4_1CT_SandingRecM1_B1 = crrcCan->getBool(0x18E,7,5);
        this->TR4_1CT_ZeroLockM1_B1 = crrcCan->getBool(0x18E,7,6);
        this->TR4_1CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x38E,4,0);
        this->TR4_1CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x38E,4,1);
        this->TR4_1CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x38E,4,2);
        this->TR4_1CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x38E,4,3);
        this->TR4_1CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x38E,4,4);
        this->TR4_1CT_Motor1SlideM1_B1 = crrcCan->getBool(0x38E,4,5);
        this->TR4_1CT_Motor1SlipM1_B1 = crrcCan->getBool(0x38E,4,6);
        this->TR4_1CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x38E,4,7);
        //MC2_2
        this->TR4_2CT_SlipFreqM1_U8 = crrcCan->getUnsignedChar(0x48E,0);
        this->TR4_2CT_StatorFreqM1_U8 = crrcCan->getUnsignedChar(0x48E,1);
        this->TR4_2CT_LifeSignalM1_U8 = crrcCan->getUnsignedChar(0x2EE,2);
        this->TR4_2CT_SWVersionM1_U8 = crrcCan->getUnsignedChar(0x2EE,3);
        this->TR4_2CT_OutputFreqM1_U8 = crrcCan->getUnsignedChar(0x2EE,5);

        this->TR4_2CT_DynaCurrM1_U16 = crrcCan->getUnsignedInt(0x48E,2);
        this->TR4_2CT_OutputVoltM1_U16 = crrcCan->getUnsignedInt(0x48E,4);
        this->TR4_2CT_MotorSpeed_U8 = crrcCan->getUnsignedChar(0x1EE,0);
        this->TR4_2CT_MotorTemp_U8 = crrcCan->getUnsignedChar(0x1EE,1);
        this->TR4_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x1EE,2);
        //this->TR4_2CT_NetVoltM1_U16 = crrcCan->getUnsignedInt(0x2EE,6);
        this->TR4_2CT_Status3M1_U16 = crrcCan->getUnsignedInt(0x1EE,6);
        this->TR4_2CT_Status4M1_U16 = crrcCan->getUnsignedInt(0x2EE,0);

        this->TR4_2CT_SafBrM1_B1 = crrcCan->getBool(0x48E,6,0);
        this->TR4_2CT_EnTractionM1_B1 = crrcCan->getBool(0x48E,6,1);
        this->TR4_2CT_AllBrReleasedM1_B1 = crrcCan->getBool(0x48E,6,2);
        this->TR4_2CT_BrOvertakeM1_B1 = crrcCan->getBool(0x48E,6,6);
        this->TR4_2CT_ForcedBrM1_B1 = crrcCan->getBool(0x48E,6,7);
        this->TR4_2CT_ChargingContactorM1_B1 = crrcCan->getBool(0x48E,7,0);
        this->TR4_2CT_MainContactorM1_B1 = crrcCan->getBool(0x48E,7,1);
        this->TR4_2CT_VVVFM1_B1 = crrcCan->getBool(0x48E,7,2);
        this->TR4_2CT_EnDriveM1_B1 = crrcCan->getBool(0x48E,7,3);
        this->TR4_2CT_SandingRecM1_B1 = crrcCan->getBool(0x48E,7,5);
        this->TR4_2CT_ZeroLockM1_B1 = crrcCan->getBool(0x48E,7,6);
        this->TR4_2CT_Inverter1WarnM1_B1 = crrcCan->getBool(0x2EE,4,0);
        this->TR4_2CT_Inverter1FaultM1_B1 = crrcCan->getBool(0x2EE,4,1);
        this->TR4_2CT_Inverter1WorkM1_B1 = crrcCan->getBool(0x2EE,4,2);
        this->TR4_2CT_BrChop1WorkM1_B1 = crrcCan->getBool(0x2EE,4,3);
        this->TR4_2CT_MainContactor1ClosedM1_B1 = crrcCan->getBool(0x2EE,4,4);
        this->TR4_2CT_Motor1SlideM1_B1 = crrcCan->getBool(0x2EE,4,5);
        this->TR4_2CT_Motor1SlipM1_B1 = crrcCan->getBool(0x2EE,4,6);
        this->TR4_2CT_CoolingFanOKM1_B1 = crrcCan->getBool(0x2EE,4,7);
    }
    //VCU->TCU
    {
        this->CTTR1_CarLoad_U8 = crrcCan->getUnsignedChar(0x20B,3);
        this->CTTR2_CarLoad_U8 = crrcCan->getUnsignedChar(0x20C,3);
        this->CTTR3_CarLoad_U8 = crrcCan->getUnsignedChar(0x20D,3);
        this->CTTR4_CarLoad_U8 = crrcCan->getUnsignedChar(0x20E,3);
    }

    //HVAC->VCU
    {
        this->HVAC1CTevapraor_fan1_status = crrcCan->getBool(0x197,0,0);
        this->HVAC1CTcondenser_fan1_status = crrcCan->getBool(0x197,0,1);
        this->HVAC1CTcompressor1_status = crrcCan->getBool(0x197,0,2);
        this->HVAC1_Heater1_status = crrcCan->getBool(0x197,0,3);
        this->HVAC1CTevapraor_fan2_status = crrcCan->getBool(0x197,0,4);
        this->HVAC1CTcondenser_fan2_status = crrcCan->getBool(0x197,0,5);
        this->HVAC1CTcompressor2_status = crrcCan->getBool(0x197,0,6);
        this->HVAC1_Heater2_status = crrcCan->getBool(0x197,0,7);

        this->HVAC1CTauto_Warm_mode = crrcCan->getBool(0x197,1,0);
        this->HVAC1CTauto_Cold_mode = crrcCan->getBool(0x197,1,1);
        this->HVAC1CTventilation_mode = crrcCan->getBool(0x197,1,2);
        this->HVAC1CTemergency_ventilation_mode = crrcCan->getBool(0x197,1,3);
        this->HVAC1CTstop_mode = crrcCan->getBool(0x197,1,4);
        this->HVAC1CTReduce_Load_FB = crrcCan->getBool(0x197,1,5);
        this->HVAC1CTPre_Cold = crrcCan->getBool(0x197,1,6);
        this->HVAC1CTPre_Warm = crrcCan->getBool(0x197,1,7);
        this->HVAC1CTfresh_air_damper_status = crrcCan->getBool(0x197,2,0);
        this->HVAC1CTreturn_air_damper_status = crrcCan->getBool(0x197,2,1);
        this->HVAC1CTLocal_control = crrcCan->getBool(0x197,2,2);
        this->HVAC1CTTCMS_control = crrcCan->getBool(0x197,2,3);
        this->HVAC1CT_Coldtest = crrcCan->getBool(0x197,2,4);
        this->HVAC1CT_Warmtest = crrcCan->getBool(0x197,2,5);


        this->HVAC1CTTemp_Set = crrcCan->getUnsignedChar(0x197,5);
        this->HVAC1CTTemp_Inside = crrcCan->getUnsignedChar(0x197,6);
        this->HVAC1CTTemp_Outside = crrcCan->getUnsignedChar(0x197,7);
        this->HVAC1CTSoftware_version_HB = crrcCan->getUnsignedChar(0x297,6);
        this->HVAC1CTSoftware_version_LB = crrcCan->getUnsignedChar(0x297,7);
        this->HVAC1CT_Life_signal = crrcCan->getUnsignedChar(0x297,5);

        this->HVAC2CTevapraor_fan1_status = crrcCan->getBool(0x198,0,0);
        this->HVAC2CTcondenser_fan1_status = crrcCan->getBool(0x198,0,1);
        this->HVAC2CTcompressor1_status = crrcCan->getBool(0x198,0,2);
        this->HVAC2_Heater1_status = crrcCan->getBool(0x198,0,3);
        this->HVAC2CTevapraor_fan2_status = crrcCan->getBool(0x198,0,4);
        this->HVAC2CTcondenser_fan2_status = crrcCan->getBool(0x198,0,5);
        this->HVAC2CTcompressor2_status = crrcCan->getBool(0x198,0,6);
        this->HVAC2_Heater2_status = crrcCan->getBool(0x198,0,7);

        this->HVAC2CTauto_Warm_mode = crrcCan->getBool(0x198,1,0);
        this->HVAC2CTauto_Cold_mode = crrcCan->getBool(0x198,1,1);
        this->HVAC2CTventilation_mode = crrcCan->getBool(0x198,1,2);
        this->HVAC2CTemergency_ventilation_mode = crrcCan->getBool(0x198,1,3);
        this->HVAC2CTstop_mode = crrcCan->getBool(0x198,1,4);
        this->HVAC2CTReduce_Load_FB = crrcCan->getBool(0x198,1,5);
        this->HVAC2CTPre_Cold = crrcCan->getBool(0x198,1,6);
        this->HVAC2CTPre_Warm = crrcCan->getBool(0x198,1,7);
        this->HVAC2CTfresh_air_damper_status = crrcCan->getBool(0x198,2,0);
        this->HVAC2CTreturn_air_damper_status = crrcCan->getBool(0x198,2,1);
        this->HVAC2CTLocal_control = crrcCan->getBool(0x198,2,2);
        this->HVAC2CTTCMS_control = crrcCan->getBool(0x198,2,3);
        this->HVAC2CT_Coldtest = crrcCan->getBool(0x198,2,4);
        this->HVAC2CT_Warmtest = crrcCan->getBool(0x198,2,5);

        this->HVAC2CTTemp_Set = crrcCan->getUnsignedChar(0x198,5);
        this->HVAC2CTTemp_Inside = crrcCan->getUnsignedChar(0x198,6);
        this->HVAC2CTTemp_Outside = crrcCan->getUnsignedChar(0x198,7);
        this->HVAC2CTSoftware_version_HB = crrcCan->getUnsignedChar(0x298,6);
        this->HVAC2CTSoftware_version_LB = crrcCan->getUnsignedChar(0x298,7);
        this->HVAC2CT_Life_signal = crrcCan->getUnsignedChar(0x298,5);

        this->HVAC3CTevapraor_fan1_status = crrcCan->getBool(0x199,0,0);
        this->HVAC3CTcondenser_fan1_status = crrcCan->getBool(0x199,0,1);
        this->HVAC3CTcompressor1_status = crrcCan->getBool(0x199,0,2);
        this->HVAC3_Heater1_status = crrcCan->getBool(0x199,0,3);
        this->HVAC3CTevapraor_fan2_status = crrcCan->getBool(0x199,0,4);
        this->HVAC3CTcondenser_fan2_status = crrcCan->getBool(0x199,0,5);
        this->HVAC3CTcompressor2_status = crrcCan->getBool(0x199,0,6);
        this->HVAC3_Heater2_status = crrcCan->getBool(0x199,0,7);
        this->HVAC3CT_Coldtest = crrcCan->getBool(0x199,2,4);
        this->HVAC3CT_Warmtest = crrcCan->getBool(0x199,2,5);

        this->HVAC3CTauto_Warm_mode = crrcCan->getBool(0x199,1,0);
        this->HVAC3CTauto_Cold_mode = crrcCan->getBool(0x199,1,1);
        this->HVAC3CTventilation_mode = crrcCan->getBool(0x199,1,2);
        this->HVAC3CTemergency_ventilation_mode = crrcCan->getBool(0x199,1,3);
        this->HVAC3CTstop_mode = crrcCan->getBool(0x199,1,4);
        this->HVAC3CTReduce_Load_FB = crrcCan->getBool(0x199,1,5);
        this->HVAC3CTPre_Cold = crrcCan->getBool(0x199,1,6);
        this->HVAC3CTPre_Warm = crrcCan->getBool(0x199,1,7);
        this->HVAC3CTfresh_air_damper_status = crrcCan->getBool(0x199,2,0);
        this->HVAC3CTreturn_air_damper_status = crrcCan->getBool(0x199,2,1);
        this->HVAC3CTLocal_control = crrcCan->getBool(0x199,2,2);
        this->HVAC3CTTCMS_control = crrcCan->getBool(0x199,2,3);

        this->HVAC3CTTemp_Set = crrcCan->getUnsignedChar(0x199,5);
        this->HVAC3CTTemp_Inside = crrcCan->getUnsignedChar(0x199,6);
        this->HVAC3CTTemp_Outside = crrcCan->getUnsignedChar(0x199,7);
        this->HVAC3CTSoftware_version_HB = crrcCan->getUnsignedChar(0x299,6);
        this->HVAC3CTSoftware_version_LB = crrcCan->getUnsignedChar(0x299,7);
        this->HVAC3CT_Life_signal = crrcCan->getUnsignedChar(0x299,5);

        this->HVAC4CTevapraor_fan1_status = crrcCan->getBool(0x19A,0,0);
        this->HVAC4CTcondenser_fan1_status = crrcCan->getBool(0x19A,0,1);
        this->HVAC4CTcompressor1_status = crrcCan->getBool(0x19A,0,2);
        this->HVAC4_Heater1_status = crrcCan->getBool(0x19A,0,3);
        this->HVAC4CTevapraor_fan2_status = crrcCan->getBool(0x19A,0,4);
        this->HVAC4CTcondenser_fan2_status = crrcCan->getBool(0x19A,0,5);
        this->HVAC4CTcompressor2_status = crrcCan->getBool(0x19A,0,6);
        this->HVAC4_Heater2_status = crrcCan->getBool(0x19A,0,7);

        this->HVAC4CTauto_Warm_mode = crrcCan->getBool(0x19A,1,0);
        this->HVAC4CTauto_Cold_mode = crrcCan->getBool(0x19A,1,1);
        this->HVAC4CTventilation_mode = crrcCan->getBool(0x19A,1,2);
        this->HVAC4CTemergency_ventilation_mode = crrcCan->getBool(0x19A,1,3);
        this->HVAC4CTstop_mode = crrcCan->getBool(0x19A,1,4);
        this->HVAC4CTReduce_Load_FB = crrcCan->getBool(0x19A,1,5);
        this->HVAC4CTPre_Cold = crrcCan->getBool(0x19A,1,6);
        this->HVAC4CTPre_Warm = crrcCan->getBool(0x19A,1,7);
        this->HVAC4CTfresh_air_damper_status = crrcCan->getBool(0x19A,2,0);
        this->HVAC4CTreturn_air_damper_status = crrcCan->getBool(0x19A,2,1);
        this->HVAC4CTLocal_control = crrcCan->getBool(0x19A,2,2);
        this->HVAC4CTTCMS_control = crrcCan->getBool(0x19A,2,3);
        this->HVAC4CT_Coldtest = crrcCan->getBool(0x19A,2,4);
        this->HVAC4CT_Warmtest = crrcCan->getBool(0x19A,2,5);

        this->HVAC4CTTemp_Set = crrcCan->getUnsignedChar(0x19A,5);
        this->HVAC4CTTemp_Inside = crrcCan->getUnsignedChar(0x19A,6);
        this->HVAC4CTTemp_Outside = crrcCan->getUnsignedChar(0x19A,7);
        this->HVAC4CTSoftware_version_HB = crrcCan->getUnsignedChar(0x29A,6);
        this->HVAC4CTSoftware_version_LB = crrcCan->getUnsignedChar(0x29A,7);
        this->HVAC4CT_Life_signal = crrcCan->getUnsignedChar(0x29A,5);
    }
    //DOOR->VCU
    {
        //MC1DOOR1
        this->MC1DOOR1_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x19f,5);
        this->MC1DOOR1_Software_version_HB = crrcCan->getUnsignedChar(0x19f,6);
        this->MC1DOOR1_Software_version_LB = crrcCan->getUnsignedChar(0x19f,7);
        this->MC1drDoor1Clsedtx = crrcCan->getBool(0x19f,0,4);
        this->MC1drDoor1Opnedtx = crrcCan->getBool(0x19f,0,5);
        this->MC1drDoor1EmergencyUnlocktx = crrcCan->getBool(0x19f,0,6);
        this->MC1drDoor1Isotx = crrcCan->getBool(0x19f,0,7);
        this->MC1drDoor1Obstructetx = crrcCan->getBool(0x19f,1,0);
        this->MC1drDoor1Acting = crrcCan->getBool(0x19f,1,5);
        this->MC1drDoor1MaintenancePushbuttontx = crrcCan->getBool(0x19f,1,1);
        //MC1DOOR2
        this->MC1DOOR2_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A0,5);
        this->MC1DOOR2_Software_version_HB = crrcCan->getUnsignedChar(0x1A0,6);
        this->MC1DOOR2_Software_version_LB = crrcCan->getUnsignedChar(0x1A0,7);
        this->MC1drDoor2Clsedtx = crrcCan->getBool(0x1a0,0,4);
        this->MC1drDoor2Opnedtx = crrcCan->getBool(0x1a0,0,5);
        this->MC1drDoor2EmergencyUnlocktx = crrcCan->getBool(0x1a0,0,6);
        this->MC1drDoor2Isotx = crrcCan->getBool(0x1a0,0,7);
        this->MC1drDoor2Obstructetx = crrcCan->getBool(0x1a0,1,0);
        this->MC1drDoor2Acting = crrcCan->getBool(0x1a0,1,5);
        this->MC1drDoor2MaintenancePushbuttontx = crrcCan->getBool(0x1a0,1,1);
        //MC1DOOR3
        this->MC1DOOR3_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A1,5);
        this->MC1DOOR3_Software_version_HB = crrcCan->getUnsignedChar(0x1A1,6);
        this->MC1DOOR3_Software_version_LB = crrcCan->getUnsignedChar(0x1A1,7);
        this->MC1drDoor3Clsedtx = crrcCan->getBool(0x1a1,0,4);
        this->MC1drDoor3Opnedtx = crrcCan->getBool(0x1a1,0,5);
        this->MC1drDoor3EmergencyUnlocktx = crrcCan->getBool(0x1a1,0,6);
        this->MC1drDoor3Isotx = crrcCan->getBool(0x1a1,0,7);
        this->MC1drDoor3Obstructetx = crrcCan->getBool(0x1a1,1,0);
        this->MC1drDoor3Acting = crrcCan->getBool(0x1a1,1,5);
        this->MC1drDoor3MaintenancePushbuttontx = crrcCan->getBool(0x1a1,1,1);
        //MC1DOOR4
        this->MC1DOOR4_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A2,5);
        this->MC1DOOR4_Software_version_HB = crrcCan->getUnsignedChar(0x1A2,6);
        this->MC1DOOR4_Software_version_LB = crrcCan->getUnsignedChar(0x1A2,7);
        this->MC1drDoor4Clsedtx = crrcCan->getBool(0x1a2,0,4);
        this->MC1drDoor4Opnedtx = crrcCan->getBool(0x1a2,0,5);
        this->MC1drDoor4EmergencyUnlocktx = crrcCan->getBool(0x1a2,0,6);
        this->MC1drDoor4Isotx = crrcCan->getBool(0x1a2,0,7);
        this->MC1drDoor4Obstructetx = crrcCan->getBool(0x1a2,1,0);
        this->MC1drDoor4Acting = crrcCan->getBool(0x1a2,1,5);
        this->MC1drDoor4MaintenancePushbuttontx = crrcCan->getBool(0x1a2,1,1);
        //M1DOOR1
        this->M1DOOR1_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A3,5);
        this->M1DOOR1_Software_version_HB = crrcCan->getUnsignedChar(0x1A3,6);
        this->M1DOOR1_Software_version_LB = crrcCan->getUnsignedChar(0x1A3,7);
        this->M1drDoor1Clsedtx = crrcCan->getBool(0x1a3,0,4);
        this->M1drDoor1Opnedtx = crrcCan->getBool(0x1a3,0,5);
        this->M1drDoor1EmergencyUnlocktx = crrcCan->getBool(0x1a3,0,6);
        this->M1drDoor1Isotx = crrcCan->getBool(0x1a3,0,7);
        this->M1drDoor1Obstructetx = crrcCan->getBool(0x1a3,1,0);
        this->M1drDoor1Acting = crrcCan->getBool(0x1a3,1,5);
        this->M1drDoor1MaintenancePushbuttontx = crrcCan->getBool(0x1a3,1,1);
        //M1DOOR2
        this->M1DOOR2_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A4,5);
        this->M1DOOR2_Software_version_HB = crrcCan->getUnsignedChar(0x1A4,6);
        this->M1DOOR2_Software_version_LB = crrcCan->getUnsignedChar(0x1A4,7);
        this->M1drDoor2Clsedtx = crrcCan->getBool(0x1a4,0,4);
        this->M1drDoor2Opnedtx = crrcCan->getBool(0x1a4,0,5);
        this->M1drDoor2EmergencyUnlocktx = crrcCan->getBool(0x1a4,0,6);
        this->M1drDoor2Isotx = crrcCan->getBool(0x1a4,0,7);
        this->M1drDoor2Obstructetx = crrcCan->getBool(0x1a4,1,0);
        this->M1drDoor2Acting = crrcCan->getBool(0x1a4,1,5);
        this->M1drDoor2MaintenancePushbuttontx = crrcCan->getBool(0x1a4,1,1);
        //M1DOOR3
        this->M1DOOR3_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A5,5);
        this->M1DOOR3_Software_version_HB = crrcCan->getUnsignedChar(0x1A5,6);
        this->M1DOOR3_Software_version_LB = crrcCan->getUnsignedChar(0x1A5,7);
        this->M1drDoor3Clsedtx = crrcCan->getBool(0x1A5,0,4);
        this->M1drDoor3Opnedtx = crrcCan->getBool(0x1A5,0,5);
        this->M1drDoor3EmergencyUnlocktx = crrcCan->getBool(0x1A5,0,6);
        this->M1drDoor3Isotx = crrcCan->getBool(0x1A5,0,7);
        this->M1drDoor3Obstructetx = crrcCan->getBool(0x1A5,1,0);
        this->M1drDoor3Acting = crrcCan->getBool(0x1A5,1,5);
        this->M1drDoor3MaintenancePushbuttontx = crrcCan->getBool(0x1a5,1,1);
        //M1DOOR4
        this->M1DOOR4_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A6,5);
        this->M1DOOR4_Software_version_HB = crrcCan->getUnsignedChar(0x1A6,6);
        this->M1DOOR4_Software_version_LB = crrcCan->getUnsignedChar(0x1A6,7);
        this->M1drDoor4Clsedtx = crrcCan->getBool(0x1A6,0,4);
        this->M1drDoor4Opnedtx = crrcCan->getBool(0x1A6,0,5);
        this->M1drDoor4EmergencyUnlocktx = crrcCan->getBool(0x1A6,0,6);
        this->M1drDoor4Isotx = crrcCan->getBool(0x1A6,0,7);
        this->M1drDoor4Obstructetx = crrcCan->getBool(0x1A6,1,0);
        this->M1drDoor4Acting = crrcCan->getBool(0x1A6,1,5);
        this->M1drDoor4MaintenancePushbuttontx = crrcCan->getBool(0x1a6,1,1);

        // EDCU9 - > ???MC2DOOR1? M2DOOR4? 顺序待确认

        //M2DOOR1
        this->M2DOOR1_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1AB,5);
        this->M2DOOR1_Software_version_HB = crrcCan->getUnsignedChar(0x1AB,6);
        this->M2DOOR1_Software_version_LB = crrcCan->getUnsignedChar(0x1AB,7);
        this->M2drDoor1Clsedtx = crrcCan->getBool(0x1AB,0,4);
        this->M2drDoor1Opnedtx = crrcCan->getBool(0x1AB,0,5);
        this->M2drDoor1EmergencyUnlocktx = crrcCan->getBool(0x1AB,0,6);
        this->M2drDoor1Isotx = crrcCan->getBool(0x1AB,0,7);
        this->M2drDoor1Obstructetx = crrcCan->getBool(0x1AB,1,0);
        this->M2drDoor1Acting = crrcCan->getBool(0x1AB,1,5);
        this->M2drDoor1MaintenancePushbuttontx = crrcCan->getBool(0x1AB,1,1);
        //M2DOOR2
        this->M2DOOR2_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1AC,5);
        this->M2DOOR2_Software_version_HB = crrcCan->getUnsignedChar(0x1AC,6);
        this->M2DOOR2_Software_version_LB = crrcCan->getUnsignedChar(0x1AC,7);
        this->M2drDoor2Clsedtx = crrcCan->getBool(0x1AC,0,4);
        this->M2drDoor2Opnedtx = crrcCan->getBool(0x1AC,0,5);
        this->M2drDoor2EmergencyUnlocktx = crrcCan->getBool(0x1AC,0,6);
        this->M2drDoor2Isotx = crrcCan->getBool(0x1AC,0,7);
        this->M2drDoor2Obstructetx = crrcCan->getBool(0x1AC,1,0);
        this->M2drDoor2Acting = crrcCan->getBool(0x1AC,1,5);
        this->M2drDoor2MaintenancePushbuttontx = crrcCan->getBool(0x1aC,1,1);
        //M2DOOR3
        this->M2DOOR3_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1AD,5);
        this->M2DOOR3_Software_version_HB = crrcCan->getUnsignedChar(0x1AD,6);
        this->M2DOOR3_Software_version_LB = crrcCan->getUnsignedChar(0x1AD,7);
        this->M2drDoor3Clsedtx = crrcCan->getBool(0x1AD,0,4);
        this->M2drDoor3Opnedtx = crrcCan->getBool(0x1AD,0,5);
        this->M2drDoor3EmergencyUnlocktx = crrcCan->getBool(0x1AD,0,6);
        this->M2drDoor3Isotx = crrcCan->getBool(0x1AD,0,7);
        this->M2drDoor3Obstructetx = crrcCan->getBool(0x1AD,1,0);
        this->M2drDoor3Acting = crrcCan->getBool(0x1AD,1,5);
        this->M2drDoor3MaintenancePushbuttontx = crrcCan->getBool(0x1aD,1,1);
        //M2DOOR4
        this->M2DOOR4_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1AE,5);
        this->M2DOOR4_Software_version_HB = crrcCan->getUnsignedChar(0x1AE,6);
        this->M2DOOR4_Software_version_LB = crrcCan->getUnsignedChar(0x1AE,7);
        this->M2drDoor4Clsedtx = crrcCan->getBool(0x1AE,0,4);
        this->M2drDoor4Opnedtx = crrcCan->getBool(0x1AE,0,5);
        this->M2drDoor4EmergencyUnlocktx = crrcCan->getBool(0x1AE,0,6);
        this->M2drDoor4Isotx = crrcCan->getBool(0x1AE,0,7);
        this->M2drDoor4Obstructetx = crrcCan->getBool(0x1AE,1,0);
        this->M2drDoor4Acting = crrcCan->getBool(0x1AE,1,5);
        this->M2drDoor4MaintenancePushbuttontx = crrcCan->getBool(0x1aE,1,1);
        //MC2DOOR1
        this->MC2DOOR1_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A7,5);
        this->MC2DOOR1_Software_version_HB = crrcCan->getUnsignedChar(0x1A7,6);
        this->MC2DOOR1_Software_version_LB = crrcCan->getUnsignedChar(0x1A7,7);
        this->MC2drDoor1Clsedtx = crrcCan->getBool(0x1A7,0,4);
        this->MC2drDoor1Opnedtx = crrcCan->getBool(0x1A7,0,5);
        this->MC2drDoor1EmergencyUnlocktx = crrcCan->getBool(0x1A7,0,6);
        this->MC2drDoor1Isotx = crrcCan->getBool(0x1A7,0,7);
        this->MC2drDoor1Obstructetx = crrcCan->getBool(0x1A7,1,0);
        this->MC2drDoor1Acting = crrcCan->getBool(0x1A7,1,5);
        this->MC2drDoor1MaintenancePushbuttontx = crrcCan->getBool(0x1a7,1,1);
        //MC2DOOR2
        this->MC2DOOR2_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A8,5);
        this->MC2DOOR2_Software_version_HB = crrcCan->getUnsignedChar(0x1A8,6);
        this->MC2DOOR2_Software_version_LB = crrcCan->getUnsignedChar(0x1A8,7);
        this->MC2drDoor2Clsedtx = crrcCan->getBool(0x1A8,0,4);
        this->MC2drDoor2Opnedtx = crrcCan->getBool(0x1A8,0,5);
        this->MC2drDoor2EmergencyUnlocktx = crrcCan->getBool(0x1A8,0,6);
        this->MC2drDoor2Isotx = crrcCan->getBool(0x1A8,0,7);
        this->MC2drDoor2Obstructetx = crrcCan->getBool(0x1A8,1,0);
        this->MC2drDoor2Acting = crrcCan->getBool(0x1A8,1,5);
        this->MC2drDoor2MaintenancePushbuttontx = crrcCan->getBool(0x1a8,1,1);
        //MC2DOOR3
        this->MC2DOOR3_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1A9,5);
        this->MC2DOOR3_Software_version_HB = crrcCan->getUnsignedChar(0x1A9,6);
        this->MC2DOOR3_Software_version_LB = crrcCan->getUnsignedChar(0x1A9,7);
        this->MC2drDoor3Clsedtx = crrcCan->getBool(0x1A9,0,4);
        this->MC2drDoor3Opnedtx = crrcCan->getBool(0x1A9,0,5);
        this->MC2drDoor3EmergencyUnlocktx = crrcCan->getBool(0x1A9,0,6);
        this->MC2drDoor3Isotx = crrcCan->getBool(0x1A9,0,7);
        this->MC2drDoor3Obstructetx = crrcCan->getBool(0x1A9,1,0);
        this->MC2drDoor3Acting = crrcCan->getBool(0x1A9,1,5);
        this->MC2drDoor3MaintenancePushbuttontx = crrcCan->getBool(0x1a9,1,1);
        //MC2DOOR4
        this->MC2DOOR4_drDoorNoOpnCMDtx = crrcCan->getUnsignedChar(0x1AA,5);
        this->MC2DOOR4_Software_version_HB = crrcCan->getUnsignedChar(0x1AA,6);
        this->MC2DOOR4_Software_version_LB = crrcCan->getUnsignedChar(0x1AA,7);
        this->MC2drDoor4Clsedtx = crrcCan->getBool(0x1AA,0,4);
        this->MC2drDoor4Opnedtx = crrcCan->getBool(0x1AA,0,5);
        this->MC2drDoor4EmergencyUnlocktx = crrcCan->getBool(0x1AA,0,6);
        this->MC2drDoor4Isotx = crrcCan->getBool(0x1AA,0,7);
        this->MC2drDoor4Obstructetx = crrcCan->getBool(0x1AA,1,0);
        this->MC2drDoor4Acting = crrcCan->getBool(0x1AA,1,5);
        this->MC2drDoor4MaintenancePushbuttontx = crrcCan->getBool(0x1aA,1,1);
        //EDCU FAULTS
        this->EDCU1FaultWORD = crrcCan->getUnsignedInt(0x19f,2);
        this->EDCU2FaultWORD = crrcCan->getUnsignedInt(0x1a0,2);
        this->EDCU3FaultWORD = crrcCan->getUnsignedInt(0x1a1,2);
        this->EDCU4FaultWORD = crrcCan->getUnsignedInt(0x1a2,2);
        this->EDCU5FaultWORD = crrcCan->getUnsignedInt(0x1a3,2);
        this->EDCU6FaultWORD = crrcCan->getUnsignedInt(0x1a4,2);
        this->EDCU7FaultWORD = crrcCan->getUnsignedInt(0x1a5,2);
        this->EDCU8FaultWORD = crrcCan->getUnsignedInt(0x1a6,2);
        this->EDCU9FaultWORD = crrcCan->getUnsignedInt(0x1a7,2);
        this->EDCU10FaultWORD = crrcCan->getUnsignedInt(0x1a8,2);
        this->EDCU11FaultWORD = crrcCan->getUnsignedInt(0x1a9,2);
        this->EDCU12FaultWORD = crrcCan->getUnsignedInt(0x1aa,2);
        this->EDCU13FaultWORD = crrcCan->getUnsignedInt(0x1ab,2);
        this->EDCU14FaultWORD = crrcCan->getUnsignedInt(0x1ac,2);
        this->EDCU15FaultWORD = crrcCan->getUnsignedInt(0x1ad,2);
        this->EDCU16FaultWORD = crrcCan->getUnsignedInt(0x1ae,2);

        this->EDCU1FaultBYTE = crrcCan->getUnsignedChar(0x19f,4);
        this->EDCU2FaultBYTE = crrcCan->getUnsignedChar(0x1a0,4);
        this->EDCU3FaultBYTE = crrcCan->getUnsignedChar(0x1a1,4);
        this->EDCU4FaultBYTE = crrcCan->getUnsignedChar(0x1a2,4);
        this->EDCU5FaultBYTE = crrcCan->getUnsignedChar(0x1a3,4);
        this->EDCU6FaultBYTE = crrcCan->getUnsignedChar(0x1a4,4);
        this->EDCU7FaultBYTE = crrcCan->getUnsignedChar(0x1a5,4);
        this->EDCU8FaultBYTE = crrcCan->getUnsignedChar(0x1a6,4);
        this->EDCU9FaultBYTE = crrcCan->getUnsignedChar(0x1a7,4);
        this->EDCU10FaultBYTE = crrcCan->getUnsignedChar(0x1a8,4);
        this->EDCU11FaultBYTE = crrcCan->getUnsignedChar(0x1a9,4);
        this->EDCU12FaultBYTE = crrcCan->getUnsignedChar(0x1aa,4);
        this->EDCU13FaultBYTE = crrcCan->getUnsignedChar(0x1ab,4);
        this->EDCU14FaultBYTE = crrcCan->getUnsignedChar(0x1ac,4);
        this->EDCU15FaultBYTE = crrcCan->getUnsignedChar(0x1ad,4);
        this->EDCU16FaultBYTE = crrcCan->getUnsignedChar(0x1ae,4);
    }
    //PIS
    {
        this->PIS1runningstate_U8 = crrcCan->getUnsignedChar(0x193,0);
        this->PIS2runningstate_U8 = crrcCan->getUnsignedChar(0x194,0);
        this->PIDS1runningstate_U8 = crrcCan->getUnsignedChar(0x193,1);
        this->PIDS2runningstate_U8 = crrcCan->getUnsignedChar(0x194,1);

        if(!(this->CANopenStatus_PIS1||this->CANopenStatus_PIS2))
        {
            crrcCan->setSignedInt32(0xf01,0,0);
            crrcCan->setSignedInt32(0xf01,4,0);

            crrcCan->setSignedInt32(0xf02,0,0);
            crrcCan->setSignedInt32(0xf02,4,0);

            crrcCan->setSignedInt32(0xf03,0,0);
            crrcCan->setSignedInt32(0xf03,4,0);
        }
        else if(PIS1runningstate_U8 == 1)//master pis1
        {

            crrcCan->setSignedInt32(0xf01,0,crrcCan->getUnsignedInt32(0x193,0));
            crrcCan->setSignedInt32(0xf01,4,crrcCan->getUnsignedInt32(0x193,4));

            crrcCan->setSignedInt32(0xf02,0,crrcCan->getUnsignedInt32(0x293,0));
            crrcCan->setSignedInt32(0xf02,4,crrcCan->getUnsignedInt32(0x293,4));

            crrcCan->setSignedInt32(0xf03,0,crrcCan->getUnsignedInt32(0x393,0));
            crrcCan->setSignedInt32(0xf03,4,crrcCan->getUnsignedInt32(0x393,4));
        }else if(PIS2runningstate_U8 == 1)//master pis2
        {
            crrcCan->setSignedInt32(0xf01,0,crrcCan->getUnsignedInt32(0x194,0));
            crrcCan->setSignedInt32(0xf01,4,crrcCan->getUnsignedInt32(0x194,4));

            crrcCan->setSignedInt32(0xf02,0,crrcCan->getUnsignedInt32(0x294,0));
            crrcCan->setSignedInt32(0xf02,4,crrcCan->getUnsignedInt32(0x294,4));

            crrcCan->setSignedInt32(0xf03,0,crrcCan->getUnsignedInt32(0x394,0));
            crrcCan->setSignedInt32(0xf03,4,crrcCan->getUnsignedInt32(0x394,4));
        }
        else if(PIS1runningstate_U8 == 3)//partmaster pis1
        {

            crrcCan->setSignedInt32(0xf01,0,crrcCan->getUnsignedInt32(0x193,0));
            crrcCan->setSignedInt32(0xf01,4,crrcCan->getUnsignedInt32(0x193,4));

            crrcCan->setSignedInt32(0xf02,0,crrcCan->getUnsignedInt32(0x293,0));
            crrcCan->setSignedInt32(0xf02,4,crrcCan->getUnsignedInt32(0x293,4));

            crrcCan->setSignedInt32(0xf03,0,crrcCan->getUnsignedInt32(0x393,0));
            crrcCan->setSignedInt32(0xf03,4,crrcCan->getUnsignedInt32(0x393,4));
        }else if(PIS2runningstate_U8 == 3)//partmaster pis2
        {
            crrcCan->setSignedInt32(0xf01,0,crrcCan->getUnsignedInt32(0x194,0));
            crrcCan->setSignedInt32(0xf01,4,crrcCan->getUnsignedInt32(0x194,4));

            crrcCan->setSignedInt32(0xf02,0,crrcCan->getUnsignedInt32(0x294,0));
            crrcCan->setSignedInt32(0xf02,4,crrcCan->getUnsignedInt32(0x294,4));

            crrcCan->setSignedInt32(0xf03,0,crrcCan->getUnsignedInt32(0x394,0));
            crrcCan->setSignedInt32(0xf03,4,crrcCan->getUnsignedInt32(0x394,4));
        }else
        {
            // 当前无主状态，保持上一个时刻的数据
//            crrcCan->setSignedInt32(0xf01,0,0);
//            crrcCan->setSignedInt32(0xf01,4,0);

//            crrcCan->setSignedInt32(0xf02,0,0);
//            crrcCan->setSignedInt32(0xf02,4,0);

//            crrcCan->setSignedInt32(0xf03,0,0);
//            crrcCan->setSignedInt32(0xf03,4,0);
        }
        PISrunningstate_U8 = crrcCan->getUnsignedChar(0xf01,0);
        PIDSrunningstate_U8 = crrcCan->getUnsignedChar(0xf01,1);

        PIS_CurrentStation_U16 = crrcCan->getUnsignedInt(0x513,2);// current station id
    }
    //LOGIC FAULT
    {
        crrcCan->setBool(0xF00,0,0,this->CANopenStatus_VCU1);                                   // vcu1 offline
        crrcCan->setBool(0xF00,0,1,this->CANopenStatus_VCU2);                                   // vcu2 offline
        crrcCan->setBool(0xF00,0,2,this->wR3Word2_net_voltage>1050);                            // net V > 1050
        crrcCan->setBool(0xF00,0,3,bool(this->TR1_1CT_Inverter1FaultM1_B1&&
                                         this->TR1_2CT_Inverter1FaultM1_B1&&
                                         this->TR2_1CT_Inverter1FaultM1_B1&&
                                         this->TR2_2CT_Inverter1FaultM1_B1&&
                                         this->TR3_1CT_Inverter1FaultM1_B1&&
                                         this->TR3_2CT_Inverter1FaultM1_B1&&
                                         this->TR4_1CT_Inverter1FaultM1_B1&&
                                         this->TR4_2CT_Inverter1FaultM1_B1));                    // deadman count
        crrcCan->setBool(0xF00,0,5,!bool(this->CANopenStatus_VCU1 || this->CANopenStatus_VCU2));// both 2 VCU fault

    }

};

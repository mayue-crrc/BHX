#ifndef DATABASE_H
#define DATABASE_H
#include "QDateTime"

class CrrcCan;
class MainGetDefaultPara;
class Database
{
public:
    Database();
    void updateDatabse(CrrcCan *crrcCan);
    MainGetDefaultPara* mydefaultpara;
    // default para
    int HMIPosition,DefaultTrainCode,DefaultStarttemp,DefaultStoptemp,DefaultStartmonth,DefaultStopmonth,
        DefaultWheel1_TP1Value,DefaultWheel2_TP1Value,DefaultWheel3_TP1Value,DefaultWheel4_TP1Value,
        DefaultWheel1_TP2Value,DefaultWheel2_TP2Value,DefaultWheel3_TP2Value,DefaultWheel4_TP2Value;
public:
    // public port
    unsigned char VCUtoALL_year,VCUtoALL_month,VCUtoALL_day,VCUtoALL_hour,VCUtoALL_minute,VCUtoALL_second,VCUtoALL_codeHigh,VCUtoALL_codeLow;

    // HMI use for children class transmit
    int HMI_TrainPos;
    // define hvac 15mins cnt
    int HMI_15minscnt;
    bool HMI_StopHVACtest_B1;

    // define using time from loacl and vcu

    QDateTime HMI_DateTime_foruse;
    // the riom signals of mc1
    unsigned char riomGwVersionMc1, riomDiVersionMc1, riomDoVersionMc1, riomAxVersionMc1, riomSgnVersionMc1,RIOM_GW_LifesignalMc1;

    bool RIOM_DI1_LifesignalMc1, RIOM_DI2_LifesignalMc1, RIOM_DO1_LifesignalMc1, RIOM_DO2_LifesignalMc1, RIOM_AX_LifesignalMc1,RIOM_SGN_LifesignalMc1;

    unsigned short int riomAxAi1Mc1, riomAxAi2Mc1, riomAxAi3Mc1, riomAxAi4Mc1;

    bool riomDi1In1Mc1, riomDi1In2Mc1, riomDi1In3Mc1, riomDi1In4Mc1, riomDi1In5Mc1, riomDi1In6Mc1;
    bool riomDi1In7Mc1, riomDi1In8Mc1, riomDi1In9Mc1, riomDi1In10Mc1, riomDi1In11Mc1, riomDi1In12Mc1;
    bool riomDi1In13Mc1, riomDi1In14Mc1, riomDi1In15Mc1, riomDi1In16Mc1, riomDi1In17Mc1, riomDi1In18Mc1;
    bool riomDi1In19Mc1, riomDi1In20Mc1, riomDi1In21Mc1, riomDi1In22Mc1, riomDi1In23Mc1, riomDi1In24Mc1;

    bool riomDi2In1Mc1, riomDi2In2Mc1, riomDi2In3Mc1, riomDi2In4Mc1, riomDi2In5Mc1, riomDi2In6Mc1;
    bool riomDi2In7Mc1, riomDi2In8Mc1, riomDi2In9Mc1, riomDi2In10Mc1, riomDi2In11Mc1, riomDi2In12Mc1;
    bool riomDi2In13Mc1, riomDi2In14Mc1, riomDi2In15Mc1, riomDi2In16Mc1, riomDi2In17Mc1, riomDi2In18Mc1;
    bool riomDi2In19Mc1, riomDi2In20Mc1, riomDi2In21Mc1, riomDi2In22Mc1, riomDi2In23Mc1, riomDi2In24Mc1;

    bool riomSgnIn1Mc1, riomSgnIn2Mc1, riomSgnIn3Mc1, riomSgnIn4Mc1, riomSgnIn5Mc1, riomSgnIn6Mc1;
    bool riomSgnIn7Mc1, riomSgnIn8Mc1, riomSgnIn9Mc1, riomSgnIn10Mc1, riomSgnIn11Mc1, riomSgnIn12Mc1;
    bool riomSgnIn13Mc1, riomSgnIn14Mc1, riomSgnIn15Mc1, riomSgnIn16Mc1, riomSgnIn17Mc1, riomSgnIn18Mc1;
    bool riomSgnIn19Mc1, riomSgnIn20Mc1, riomSgnIn21Mc1, riomSgnIn22Mc1, riomSgnIn23Mc1, riomSgnIn24Mc1;

    bool riomDo1Out1Mc1, riomDo1Out2Mc1, riomDo1Out3Mc1, riomDo1Out4Mc1;
    bool riomDo1Out5Mc1, riomDo1Out6Mc1, riomDo1Out7Mc1, riomDo1Out8Mc1;
    bool riomDo1Out9Mc1, riomDo1Out10Mc1, riomDo1Out11Mc1, riomDo1Out12Mc1;
    bool riomDo1Out13Mc1, riomDo1Out14Mc1, riomDo1Out15Mc1, riomDo1Out16Mc1;

    bool riomDo2Out1Mc1, riomDo2Out2Mc1, riomDo2Out3Mc1, riomDo2Out4Mc1;
    bool riomDo2Out5Mc1, riomDo2Out6Mc1, riomDo2Out7Mc1, riomDo2Out8Mc1;
    bool riomDo2Out9Mc1, riomDo2Out10Mc1, riomDo2Out11Mc1, riomDo2Out12Mc1;
    bool riomDo2Out13Mc1, riomDo2Out14Mc1, riomDo2Out15Mc1, riomDo2Out16Mc1;

    // the riom signals of mc2
    unsigned char riomGwVersionMc2, riomDiVersionMc2, riomDoVersionMc2, riomAxVersionMc2, riomSgnVersionMc2,RIOM_GW_LifesignalMc2;

    bool RIOM_DI1_LifesignalMc2, RIOM_DI2_LifesignalMc2, RIOM_DO1_LifesignalMc2, RIOM_DO2_LifesignalMc2, RIOM_AX_LifesignalMc2,RIOM_SGN_LifesignalMc2;

    unsigned short int riomAxAi1Mc2, riomAxAi2Mc2, riomAxAi3Mc2, riomAxAi4Mc2;
    bool riomDi1In1Mc2, riomDi1In2Mc2, riomDi1In3Mc2, riomDi1In4Mc2, riomDi1In5Mc2, riomDi1In6Mc2;
    bool riomDi1In7Mc2, riomDi1In8Mc2, riomDi1In9Mc2, riomDi1In10Mc2, riomDi1In11Mc2, riomDi1In12Mc2;
    bool riomDi1In13Mc2, riomDi1In14Mc2, riomDi1In15Mc2, riomDi1In16Mc2, riomDi1In17Mc2, riomDi1In18Mc2;
    bool riomDi1In19Mc2, riomDi1In20Mc2, riomDi1In21Mc2, riomDi1In22Mc2, riomDi1In23Mc2, riomDi1In24Mc2;

    bool riomDi2In1Mc2, riomDi2In2Mc2, riomDi2In3Mc2, riomDi2In4Mc2, riomDi2In5Mc2, riomDi2In6Mc2;
    bool riomDi2In7Mc2, riomDi2In8Mc2, riomDi2In9Mc2, riomDi2In10Mc2, riomDi2In11Mc2, riomDi2In12Mc2;
    bool riomDi2In13Mc2, riomDi2In14Mc2, riomDi2In15Mc2, riomDi2In16Mc2, riomDi2In17Mc2, riomDi2In18Mc2;
    bool riomDi2In19Mc2, riomDi2In20Mc2, riomDi2In21Mc2, riomDi2In22Mc2, riomDi2In23Mc2, riomDi2In24Mc2;

    bool riomSgnIn1Mc2, riomSgnIn2Mc2, riomSgnIn3Mc2, riomSgnIn4Mc2, riomSgnIn5Mc2, riomSgnIn6Mc2;
    bool riomSgnIn7Mc2, riomSgnIn8Mc2, riomSgnIn9Mc2, riomSgnIn10Mc2, riomSgnIn11Mc2, riomSgnIn12Mc2;
    bool riomSgnIn13Mc2, riomSgnIn14Mc2, riomSgnIn15Mc2, riomSgnIn16Mc2, riomSgnIn17Mc2, riomSgnIn18Mc2;
    bool riomSgnIn19Mc2, riomSgnIn20Mc2, riomSgnIn21Mc2, riomSgnIn22Mc2, riomSgnIn23Mc2, riomSgnIn24Mc2;

    bool riomDo1Out1Mc2, riomDo1Out2Mc2, riomDo1Out3Mc2, riomDo1Out4Mc2;
    bool riomDo1Out5Mc2, riomDo1Out6Mc2, riomDo1Out7Mc2, riomDo1Out8Mc2;
    bool riomDo1Out9Mc2, riomDo1Out10Mc2, riomDo1Out11Mc2, riomDo1Out12Mc2;
    bool riomDo1Out13Mc2, riomDo1Out14Mc2, riomDo1Out15Mc2, riomDo1Out16Mc2;

    bool riomDo2Out1Mc2, riomDo2Out2Mc2, riomDo2Out3Mc2, riomDo2Out4Mc2;
    bool riomDo2Out5Mc2, riomDo2Out6Mc2, riomDo2Out7Mc2, riomDo2Out8Mc2;
    bool riomDo2Out9Mc2, riomDo2Out10Mc2, riomDo2Out11Mc2, riomDo2Out12Mc2;
    bool riomDo2Out13Mc2, riomDo2Out14Mc2, riomDo2Out15Mc2, riomDo2Out16Mc2;

    // the riom signals of m1
    unsigned char riomGwVersionM1, riomDiVersionM1, riomDoVersionM1, riomAxVersionM1, riomSgnVersionM1,RIOM_GW_LifesignalM1;

    bool RIOM_DI1_LifesignalM1, RIOM_DO1_LifesignalM1, RIOM_AX_LifesignalM1, RIOM_SGN_LifesignalM1;

    unsigned short int riomAxAi1M1, riomAxAi2M1, riomAxAi3M1, riomAxAi4M1;

    bool riomDi1In1M1, riomDi1In2M1, riomDi1In3M1, riomDi1In4M1, riomDi1In5M1, riomDi1In6M1;
    bool riomDi1In7M1, riomDi1In8M1, riomDi1In9M1, riomDi1In10M1, riomDi1In11M1, riomDi1In12M1;
    bool riomDi1In13M1, riomDi1In14M1, riomDi1In15M1, riomDi1In16M1, riomDi1In17M1, riomDi1In18M1;
    bool riomDi1In19M1, riomDi1In20M1, riomDi1In21M1, riomDi1In22M1, riomDi1In23M1, riomDi1In24M1;

    bool riomSgnIn1M1, riomSgnIn2M1, riomSgnIn3M1, riomSgnIn4M1, riomSgnIn5M1, riomSgnIn6M1;
    bool riomSgnIn7M1, riomSgnIn8M1, riomSgnIn9M1, riomSgnIn10M1, riomSgnIn11M1, riomSgnIn12M1;
    bool riomSgnIn13M1, riomSgnIn14M1, riomSgnIn15M1, riomSgnIn16M1, riomSgnIn17M1, riomSgnIn18M1;
    bool riomSgnIn19M1, riomSgnIn20M1, riomSgnIn21M1, riomSgnIn22M1, riomSgnIn23M1, riomSgnIn24M1;

    bool riomDo1Out1M1, riomDo1Out2M1, riomDo1Out3M1, riomDo1Out4M1;
    bool riomDo1Out5M1, riomDo1Out6M1, riomDo1Out7M1, riomDo1Out8M1;
    bool riomDo1Out9M1, riomDo1Out10M1, riomDo1Out11M1, riomDo1Out12M1;
    bool riomDo1Out13M1, riomDo1Out14M1, riomDo1Out15M1, riomDo1Out16M1;

    // the riom signals of M2
    unsigned char riomGwVersionM2, riomDiVersionM2, riomDoVersionM2, riomAxVersionM2, riomSgnVersionM2,RIOM_GW_LifesignalM2;

    bool RIOM_DI1_LifesignalM2, RIOM_DO1_LifesignalM2, RIOM_AX_LifesignalM2, RIOM_SGN_LifesignalM2;

    unsigned short int riomAxAi1M2, riomAxAi2M2, riomAxAi3M2, riomAxAi4M2;

    bool riomDi1In1M2, riomDi1In2M2, riomDi1In3M2, riomDi1In4M2, riomDi1In5M2, riomDi1In6M2;
    bool riomDi1In7M2, riomDi1In8M2, riomDi1In9M2, riomDi1In10M2, riomDi1In11M2, riomDi1In12M2;
    bool riomDi1In13M2, riomDi1In14M2, riomDi1In15M2, riomDi1In16M2, riomDi1In17M2, riomDi1In18M2;
    bool riomDi1In19M2, riomDi1In20M2, riomDi1In21M2, riomDi1In22M2, riomDi1In23M2, riomDi1In24M2;

    bool riomSgnIn1M2, riomSgnIn2M2, riomSgnIn3M2, riomSgnIn4M2, riomSgnIn5M2, riomSgnIn6M2;
    bool riomSgnIn7M2, riomSgnIn8M2, riomSgnIn9M2, riomSgnIn10M2, riomSgnIn11M2, riomSgnIn12M2;
    bool riomSgnIn13M2, riomSgnIn14M2, riomSgnIn15M2, riomSgnIn16M2, riomSgnIn17M2, riomSgnIn18M2;
    bool riomSgnIn19M2, riomSgnIn20M2, riomSgnIn21M2, riomSgnIn22M2, riomSgnIn23M2, riomSgnIn24M2;

    bool riomDo1Out1M2, riomDo1Out2M2, riomDo1Out3M2, riomDo1Out4M2;
    bool riomDo1Out5M2, riomDo1Out6M2, riomDo1Out7M2, riomDo1Out8M2;
    bool riomDo1Out9M2, riomDo1Out10M2, riomDo1Out11M2, riomDo1Out12M2;
    bool riomDo1Out13M2, riomDo1Out14M2, riomDo1Out15M2, riomDo1Out16M2;


    //   VCU->HMI
    unsigned char VCU1_Version,VCU2_Version,VCU1_Lifesignal,VCU2_Lifesignal,VCU1_Lifesignalold,VCU2_Lifesignalold,
             CTiHM_Wheel1_TP1_U8, CTiHM_Wheel2_TP1_U8, CTiHM_Wheel3_TP1_U8, CTiHM_Wheel4_TP1_U8
            ,CTiHM_Wheel1_TP2_U8,CTiHM_Wheel2_TP2_U8,CTiHM_Wheel3_TP2_U8,CTiHM_Wheel4_TP2_U8;

    bool CANopenStatus_ATC1,CANopenStatus_ATC2,CANopenStatus_VCU1,CANopenStatus_VCU2,CANopenStatus_BCU1,CANopenStatus_BCU2,
         CANopenStatus_RIOM1,CANopenStatus_RIOM2,CANopenStatus_RIOM3,CANopenStatus_RIOM4,
         CANopenStatus_TCU1,CANopenStatus_TCU2,CANopenStatus_TCU3,CANopenStatus_TCU4
        ,CANopenStatus_BCC1,CANopenStatus_BCC2,CANopenStatus_BCC3,CANopenStatus_BCC4
        ,CANopenStatus_ACU1,CANopenStatus_ACU2,CANopenStatus_ACU3,CANopenStatus_ACU4
        ,CANopenStatus_PIS1,CANopenStatus_PIS2,CANopenStatus_HMI1,CANopenStatus_HMI2
        ,CANopenStatus_HVAC1,CANopenStatus_HVAC2,CANopenStatus_HVAC3,CANopenStatus_HVAC4
        ,CANopenStatus_DOOR1,CANopenStatus_DOOR2,CANopenStatus_DOOR3,CANopenStatus_DOOR4
        ,CANopenStatus_DOOR5,CANopenStatus_DOOR6,CANopenStatus_DOOR7,CANopenStatus_DOOR8
        ,CANopenStatus_DOOR9,CANopenStatus_DOOR10,CANopenStatus_DOOR11,CANopenStatus_DOOR12
        ,CANopenStatus_DOOR13,CANopenStatus_DOOR14,CANopenStatus_DOOR15,CANopenStatus_DOOR16
        ,CANopenStatus_ERM1,CANopenStatus_ERM2,VCU1_Master, VCU2_Master,MC1_Key_active
        ,MC2_Key_active,Direction_forward,Direction_reverse,CabActClash_B1,DirectionBothAct
        ,DirectionLose,TractionBrakeClash,PassengerRoomHeat1,PassengerRoomHeat2,PassengerRoomHeat3,PassengerRoomHeat4,LoadError,ControllerCodeError;

    unsigned char wR2Word4_Speed,wR3Word4_Speed_limitation,wR3Word3_battery_voltage,wR3Word4_deadman_counter,ERM1_PLC_version,ERM2_PLC_version;
    int wR3Word2_net_voltage,wR4Word4_net_voltage,wR2Word2_Distance_high,wR2Word3_Distance_low,wR4Word3_net_current;
    signed char Master_controller_level;
    unsigned int wR3Word3_wdiDistance,wR3Word3_wdiDistanceMW,TCUComsuption_U16;

    //   HMI->VCU 0X195/6-0X495/6 0x5fc 0x5f6
    int HMILifesignal1,HMIVision1,HMILifesignal2,HMIVision2,HMILifesignal,HMiCT_TrainNum_U8,HMiCT_DistanceSet_LW_U16,HMiCT_DistanceSet_HW_U16;
    unsigned char HMItoVCU_wheelvalue,HMiCT_Year_U8,HMiCT_Month_U8,HMiCT_Day_U8,HMiCT_Hour_U8,HMiCT_Minute_U8,HMiCT_Second_U8,
                HMiCT_TempStart_U8,HMiCT_MonthStop_U8
                ,HMiCT_Wheel1_TP1_U8,HMiCT_Wheel2_TP1_U8,HMiCT_Wheel3_TP1_U8,HMiCT_Wheel4_TP1_U8,
                HMiCT_Wheel1_TP2_U8,HMiCT_Wheel2_TP2_U8,HMiCT_Wheel3_TP2_U8,HMiCT_Wheel4_TP2_U8;


    bool HMItoVCUfactroytest,HMiCT_IsolateMc1_B1,HMiCT_IsolateM1_B1,HMiCT_IsolateM2_B1,HMiCT_IsolateMc2_B1,
        HMiCT_MC1MSR1Enable_B1,HMiCT_MC1MSR2Enable_B1,HMiCT_M1MSR1Enable_B1,HMiCT_M1MSR2Enable_B1,
        HMiCT_M2MSR1Enable_B1,HMiCT_M2MSR2Enable_B1,HMiCT_MC2MSR1Enable_B1,HMiCT_MC2MSR2Enable_B1,
        HMiCT_BCC1Cutoff_B1,HMiCT_BCC2Cutoff_B1,HMiCT_BCC3Cutoff_B1,HMiCT_BCC4Cutoff_B1,
        HMiCT_BCC1Reset_B1,HMiCT_BCC2Reset_B1,HMiCT_BCC3Reset_B1,HMiCT_BCC4Reset_B1,
         HMiCT_IsolateRstMC1_B1,HMiCT_IsolateRstM1_B1,HMiCT_IsolateRstM2_B1,HMiCT_IsolateRstMC2_B1,
         HMiCT_ACU1Cutoff_B1,HMiCT_ACU2Cutoff_B1,HMiCT_ACU3Cutoff_B1,HMiCT_ACU4Cutoff_B1,
         HMiCT_ACU1Reset_B1,HMiCT_ACU2Reset_B1,HMiCT_ACU3Reset_B1,HMiCT_ACU4Reset_B1,
         HMiCT_ResetACU1Fult_B1,HMiCT_ResetACU2Fult_B1,HMiCT_ResetACU3Fult_B1,HMiCT_ResetACU4Fult_B1,
         HMiCT_FireAlarmRst_B1,HMiCT_PISMODE_B1,HMiCT_EmgyBroadcastCommd_B1,HMiCT_EmgyBroadcastStop_B1,HMiCT_BCUSelfTestReq_B1,
         HMiCT_Heat1_B1,HMiCT_Heat2_B1,HMiCT_IDUDistanceSet_B1
        ,HMiCT_SaveTime_B1,HMiCT_SaveTrainNum_B1,HMiCT_SaveFirstStation_B1,HMiCT_WheelSet_B1,HMiCT_SaveLastStation_B1
        ,HMiCT_Reduce2_B1,HMiCT_Reduce1_B1,HMiCT_Add1_B1,HMiCT_Add2_B1,HMiCT_UICMode_B1
        ,HMiCT_AutoWarm_B1,HMiCT_AutoCold_B1,HMiCT_Ventilation_B1,HMiCT_ForceWind_B1,HMiCT_Stop_B1
        ,HMiCT_MGTest_B1,HMiCT_TestWarm_B1,HMiCT_TestCold_B1,HMiCT_ReduceLoad_B1,HMiCT_SandForbidden_B1
        ,HMiCT_ForceBrakeReleaseMc1_B1,HMiCT_ForceBrakeReleaseMc2_B1,HMiCT_TempStartSet_B1,HMiCT_MonthStopSet_B1,
         HMiCT_TCUtest_B1;//2017/6/19 add tcutest
    // add factory test
    bool HMiCT_FactoryTest_start_B1,HMiCT_FactoryTest_MC1DO1_1,HMiCT_FactoryTest_MC1DO1_2,HMiCT_FactoryTest_MC1DO1_3,HMiCT_FactoryTest_MC1DO1_4,
         HMiCT_FactoryTest_MC1DO1_5,HMiCT_FactoryTest_MC1DO1_6,HMiCT_FactoryTest_MC1DO1_7,HMiCT_FactoryTest_MC1DO1_8,
         HMiCT_FactoryTest_MC1DO1_9,HMiCT_FactoryTest_MC1DO1_10,HMiCT_FactoryTest_MC1DO1_11,HMiCT_FactoryTest_MC1DO1_13,
         HMiCT_FactoryTest_MC1DO2_1,HMiCT_FactoryTest_MC1DO2_3,HMiCT_FactoryTest_MC1DO2_4,HMiCT_FactoryTest_MC1DO2_5,
         HMiCT_FactoryTest_MC1DO2_7,HMiCT_FactoryTest_MC1DO2_8,HMiCT_FactoryTest_MC1DO2_9,HMiCT_FactoryTest_M1DO1_2,
         HMiCT_FactoryTest_M1DO1_3,HMiCT_FactoryTest_M1DO1_5,HMiCT_FactoryTest_M1DO1_8,HMiCT_FactoryTest_M1DO1_9,HMiCT_FactoryTest_M1DO1_10;
    bool HMiCT_FactoryTest_MC2DO1_1,HMiCT_FactoryTest_MC2DO1_2,HMiCT_FactoryTest_MC2DO1_3,HMiCT_FactoryTest_MC2DO1_4,
         HMiCT_FactoryTest_MC2DO1_5,HMiCT_FactoryTest_MC2DO1_6,HMiCT_FactoryTest_MC2DO1_7,HMiCT_FactoryTest_MC2DO1_8,
         HMiCT_FactoryTest_MC2DO1_9,HMiCT_FactoryTest_MC2DO1_10,HMiCT_FactoryTest_MC2DO1_11,HMiCT_FactoryTest_MC2DO1_13,
         HMiCT_FactoryTest_MC2DO2_1,HMiCT_FactoryTest_MC2DO2_3,HMiCT_FactoryTest_MC2DO2_4,HMiCT_FactoryTest_MC2DO2_5,
         HMiCT_FactoryTest_MC2DO2_7,HMiCT_FactoryTest_MC2DO2_8,HMiCT_FactoryTest_MC2DO2_9,HMiCT_FactoryTest_M2DO1_2,
         HMiCT_FactoryTest_M2DO1_3,HMiCT_FactoryTest_M2DO1_5,HMiCT_FactoryTest_M2DO1_8,HMiCT_FactoryTest_M2DO1_9,HMiCT_FactoryTest_M2DO1_10;


         ;
    // ERM->VCU 0X1B1/2 0X2B1/2
    unsigned char ERMtoVCULifesignal1,ERMtoVCULifesignal2,ERMtoVCUGWVision1,ERMtoVCUGWVision2,ERMtoVCUVision1,ERMtoVCUVision2;


    //BCU->VCU 0X184/5- 0X384/5
    bool BR1CT_BrRel_B1,BR1CT_BrApplied_B1,BR1CT_HBOn_B1,BR1CT_WSP_TC_B1,BR1CT_BSE_B1,BR1CT_BSW_B1;
    int BR1CT_DiagnosisReg1_U16,BR1CT_DiagnosisReg2_U16,BR1CT_DiagnosisReg3_U16,BR1CT_DiagnosisReg4_U16;
    unsigned char BR1CT_SWVersion_U8,BR1CT_SWLifesignal_U8;
    bool BR2CT_BrRel_B1,BR2CT_BrApplied_B1,BR2CT_HBOn_B1,BR2CT_WSP_TC_B1,BR2CT_BSE_B1,BR2CT_BSW_B1;
    int BR2CT_DiagnosisReg1_U16,BR2CT_DiagnosisReg2_U16,BR2CT_DiagnosisReg3_U16,BR2CT_DiagnosisReg4_U16;
    unsigned char BR2CT_SWVersion_U8,BR2CT_SWLifesignal_U8;
    //20170531 add net safebrake for tp car
    bool BR1CT_HWSafBr_B1,BR2CT_HWSafBr_B1;
    //20170712 add t speed
    unsigned char BR1CT_Speed1,BR1CT_Speed2,BR1CT_Speed3,BR1CT_Speed4,BR2CT_Speed1,BR2CT_Speed2,BR2CT_Speed3,BR2CT_Speed4;
    unsigned int BR1CT_LoadSensor1_U16,BR1CT_LoadSensor2_U16,BR2CT_LoadSensor1_U16,BR2CT_LoadSensor2_U16;


    //ACU BCC->VCU MC1 0X18F-0X48F  MC2 0X192-0X492 M1 0X190-0X490  M2 0X191-0X491
        //MC1
    int AU1CT_OutputVolt_U16,AU1CT_OutputCurr_U16,AU1CT_FaultReg1_U16,AU1CT_StatusReg1_U16
       ,AU1CT_FaultReg2_U16,AU1CT_FaultReg3_U16,AU1CT_StatusReg2_U16;
    bool AU1CT_StateOK_B1,AU1CT_Stop_B1,AU1CT_OutContactor_B1;
    unsigned char AU1CT_Lifesignal_U8,AU1CT_SWVersion_U8;


    unsigned char BC1CT_OutputVolt_U8,BC1CT_ChargingCurr_U8,BC1CT_BattTemp_U8,BC1CT_Lifesignal_U8
                 ,BC1CT_SWVersion_U8;
    int BC1CT_StatusReg2_U16,BC1CT_battCurr_U16,BC1CT_StatusReg3_U16,BC1CT_NetVolt_U16,BC1CT_FaultReg1_U16
        ,BC1CT_FaultReg2_U16;
    bool BC1CT_BCCOK_B1,BC1CT_Stop_B1;

        //M1
    int AU2CT_OutputVolt_U16,AU2CT_OutputCurr_U16,AU2CT_FaultReg1_U16,AU2CT_StatusReg1_U16
       ,AU2CT_FaultReg2_U16,AU2CT_FaultReg3_U16,AU2CT_StatusReg2_U16;
    bool AU2CT_StateOK_B1,AU2CT_Stop_B1,AU2CT_OutContactor_B1;
    unsigned char AU2CT_Lifesignal_U8,AU2CT_SWVersion_U8;


    unsigned char BC2CT_OutputVolt_U8,BC2CT_ChargingCurr_U8,BC2CT_BattTemp_U8,BC2CT_Lifesignal_U8
                 ,BC2CT_SWVersion_U8;
    int BC2CT_StatusReg2_U16,BC2CT_battCurr_U16,BC2CT_StatusReg3_U16,BC2CT_NetVolt_U16,BC2CT_FaultReg1_U16
        ,BC2CT_FaultReg2_U16;
    bool BC2CT_BCCOK_B1,BC2CT_Stop_B1;

        //M2
    int AU3CT_OutputVolt_U16,AU3CT_OutputCurr_U16,AU3CT_FaultReg1_U16,AU3CT_StatusReg1_U16
       ,AU3CT_FaultReg2_U16,AU3CT_FaultReg3_U16,AU3CT_StatusReg2_U16;
    bool AU3CT_StateOK_B1,AU3CT_Stop_B1,AU3CT_OutContactor_B1;
    unsigned char AU3CT_Lifesignal_U8,AU3CT_SWVersion_U8;


    unsigned char BC3CT_OutputVolt_U8,BC3CT_ChargingCurr_U8,BC3CT_BattTemp_U8,BC3CT_Lifesignal_U8
                 ,BC3CT_SWVersion_U8;
    int BC3CT_StatusReg2_U16,BC3CT_battCurr_U16,BC3CT_StatusReg3_U16,BC3CT_NetVolt_U16,BC3CT_FaultReg1_U16
        ,BC3CT_FaultReg2_U16;
    bool BC3CT_BCCOK_B1,BC3CT_Stop_B1;

        //MC2
    int AU4CT_OutputVolt_U16,AU4CT_OutputCurr_U16,AU4CT_FaultReg1_U16,AU4CT_StatusReg1_U16
       ,AU4CT_FaultReg2_U16,AU4CT_FaultReg3_U16,AU4CT_StatusReg2_U16;
    bool AU4CT_StateOK_B1,AU4CT_Stop_B1,AU4CT_OutContactor_B1;
    unsigned char AU4CT_Lifesignal_U8,AU4CT_SWVersion_U8;


    unsigned char BC4CT_OutputVolt_U8,BC4CT_ChargingCurr_U8,BC4CT_BattTemp_U8,BC4CT_Lifesignal_U8
                 ,BC4CT_SWVersion_U8;
    int BC4CT_StatusReg2_U16,BC4CT_battCurr_U16,BC4CT_StatusReg3_U16,BC4CT_NetVolt_U16,BC4CT_FaultReg1_U16
        ,BC4CT_FaultReg2_U16;
    bool BC4CT_BCCOK_B1,BC4CT_Stop_B1;

    //TCU->VCU
    //MC1-1/2 0X18B-0X48B 0X1EB 0X2EB
    bool TR1_1CT_SafBrM1_B1,TR1_1CT_EnTractionM1_B1,TR1_1CT_AllBrReleasedM1_B1,TR1_1CT_BrOvertakeM1_B1,TR1_1CT_ForcedBrM1_B1
        ,TR1_1CT_ChargingContactorM1_B1,TR1_1CT_MainContactorM1_B1,TR1_1CT_VVVFM1_B1,TR1_1CT_EnDriveM1_B1,TR1_1CT_SandingRecM1_B1
        ,TR1_1CT_ZeroLockM1_B1 ,TR1_1CT_Inverter1WarnM1_B1,TR1_1CT_Inverter1FaultM1_B1,TR1_1CT_Inverter1WorkM1_B1,TR1_1CT_BrChop1WorkM1_B1
        ,TR1_1CT_MainContactor1ClosedM1_B1 ,TR1_1CT_Motor1SlideM1_B1,TR1_1CT_Motor1SlipM1_B1,TR1_1CT_CoolingFanOKM1_B1;
    unsigned char TR1_1CT_SlipFreqM1_U8,TR1_1CT_StatorFreqM1_U8 ,TR1_1CT_LifeSignalM1_U8,TR1_1CT_SWVersionM1_U8,TR1_1CT_OutputFreqM1_U8;
    int TR1_1CT_DynaCurrM1_U16,TR1_1CT_OutputVoltM1_U16,TR1_1CT_NetVoltM1_U16,TR1_1CT_NetCurrM1_U16,TR1_1CT_Status3M1_U16,TR1_1CT_Status4M1_U16;
    signed int TR1_1CT_MotorTemp_I16;
    unsigned int TR1_1CT_MotorSpeed_U16;

    bool TR1_2CT_SafBrM1_B1,TR1_2CT_EnTractionM1_B1,TR1_2CT_AllBrReleasedM1_B1,TR1_2CT_BrOvertakeM1_B1,TR1_2CT_ForcedBrM1_B1
        ,TR1_2CT_ChargingContactorM1_B1,TR1_2CT_MainContactorM1_B1,TR1_2CT_VVVFM1_B1,TR1_2CT_EnDriveM1_B1,TR1_2CT_SandingRecM1_B1
        ,TR1_2CT_ZeroLockM1_B1 ,TR1_2CT_Inverter1WarnM1_B1,TR1_2CT_Inverter1FaultM1_B1,TR1_2CT_Inverter1WorkM1_B1,TR1_2CT_BrChop1WorkM1_B1
        ,TR1_2CT_MainContactor1ClosedM1_B1 ,TR1_2CT_Motor1SlideM1_B1,TR1_2CT_Motor1SlipM1_B1,TR1_2CT_CoolingFanOKM1_B1;
    unsigned char TR1_2CT_SlipFreqM1_U8,TR1_2CT_StatorFreqM1_U8 ,TR1_2CT_LifeSignalM1_U8,TR1_2CT_SWVersionM1_U8,TR1_2CT_OutputFreqM1_U8;
    int TR1_2CT_DynaCurrM1_U16,TR1_2CT_OutputVoltM1_U16,TR1_2CT_NetVoltM1_U16,TR1_2CT_NetCurrM1_U16,TR1_2CT_Status3M1_U16,TR1_2CT_Status4M1_U16;
    signed int TR1_2CT_MotorTemp_I16;
    unsigned int TR1_2CT_MotorSpeed_U16;


    //M1-1/2 0X18c-0X48c 0X1Ec 0X2ec
    bool TR2_1CT_SafBrM1_B1,TR2_1CT_EnTractionM1_B1,TR2_1CT_AllBrReleasedM1_B1,TR2_1CT_BrOvertakeM1_B1,TR2_1CT_ForcedBrM1_B1
        ,TR2_1CT_ChargingContactorM1_B1,TR2_1CT_MainContactorM1_B1,TR2_1CT_VVVFM1_B1,TR2_1CT_EnDriveM1_B1,TR2_1CT_SandingRecM1_B1
        ,TR2_1CT_ZeroLockM1_B1 ,TR2_1CT_Inverter1WarnM1_B1,TR2_1CT_Inverter1FaultM1_B1,TR2_1CT_Inverter1WorkM1_B1,TR2_1CT_BrChop1WorkM1_B1
        ,TR2_1CT_MainContactor1ClosedM1_B1 ,TR2_1CT_Motor1SlideM1_B1,TR2_1CT_Motor1SlipM1_B1,TR2_1CT_CoolingFanOKM1_B1;
    unsigned char TR2_1CT_SlipFreqM1_U8,TR2_1CT_StatorFreqM1_U8 ,TR2_1CT_LifeSignalM1_U8,TR2_1CT_SWVersionM1_U8,TR2_1CT_OutputFreqM1_U8;
    int TR2_1CT_DynaCurrM1_U16,TR2_1CT_OutputVoltM1_U16,TR2_1CT_NetVoltM1_U16,TR2_1CT_NetCurrM1_U16,TR2_1CT_Status3M1_U16,TR2_1CT_Status4M1_U16;
    signed int TR2_1CT_MotorTemp_I16;
    unsigned int TR2_1CT_MotorSpeed_U16;

    bool TR2_2CT_SafBrM1_B1,TR2_2CT_EnTractionM1_B1,TR2_2CT_AllBrReleasedM1_B1,TR2_2CT_BrOvertakeM1_B1,TR2_2CT_ForcedBrM1_B1
        ,TR2_2CT_ChargingContactorM1_B1,TR2_2CT_MainContactorM1_B1,TR2_2CT_VVVFM1_B1,TR2_2CT_EnDriveM1_B1,TR2_2CT_SandingRecM1_B1
        ,TR2_2CT_ZeroLockM1_B1 ,TR2_2CT_Inverter1WarnM1_B1,TR2_2CT_Inverter1FaultM1_B1,TR2_2CT_Inverter1WorkM1_B1,TR2_2CT_BrChop1WorkM1_B1
        ,TR2_2CT_MainContactor1ClosedM1_B1 ,TR2_2CT_Motor1SlideM1_B1,TR2_2CT_Motor1SlipM1_B1,TR2_2CT_CoolingFanOKM1_B1;
    unsigned char TR2_2CT_SlipFreqM1_U8,TR2_2CT_StatorFreqM1_U8 ,TR2_2CT_LifeSignalM1_U8,TR2_2CT_SWVersionM1_U8,TR2_2CT_OutputFreqM1_U8;
    int TR2_2CT_DynaCurrM1_U16,TR2_2CT_OutputVoltM1_U16,TR2_2CT_NetVoltM1_U16,TR2_2CT_NetCurrM1_U16,TR2_2CT_Status3M1_U16,TR2_2CT_Status4M1_U16;
    signed int TR2_2CT_MotorTemp_I16;
    unsigned int TR2_2CT_MotorSpeed_U16;

    //M2-1/2 0X18d-0X48d 0X1Ed 0X2ed
    bool TR3_1CT_SafBrM1_B1,TR3_1CT_EnTractionM1_B1,TR3_1CT_AllBrReleasedM1_B1,TR3_1CT_BrOvertakeM1_B1,TR3_1CT_ForcedBrM1_B1
        ,TR3_1CT_ChargingContactorM1_B1,TR3_1CT_MainContactorM1_B1,TR3_1CT_VVVFM1_B1,TR3_1CT_EnDriveM1_B1,TR3_1CT_SandingRecM1_B1
        ,TR3_1CT_ZeroLockM1_B1 ,TR3_1CT_Inverter1WarnM1_B1,TR3_1CT_Inverter1FaultM1_B1,TR3_1CT_Inverter1WorkM1_B1,TR3_1CT_BrChop1WorkM1_B1
        ,TR3_1CT_MainContactor1ClosedM1_B1 ,TR3_1CT_Motor1SlideM1_B1,TR3_1CT_Motor1SlipM1_B1,TR3_1CT_CoolingFanOKM1_B1;
    unsigned char TR3_1CT_SlipFreqM1_U8,TR3_1CT_StatorFreqM1_U8 ,TR3_1CT_LifeSignalM1_U8,TR3_1CT_SWVersionM1_U8,TR3_1CT_OutputFreqM1_U8;
    int TR3_1CT_DynaCurrM1_U16,TR3_1CT_OutputVoltM1_U16,TR3_1CT_NetVoltM1_U16,TR3_1CT_NetCurrM1_U16,TR3_1CT_Status3M1_U16,TR3_1CT_Status4M1_U16;
    signed int TR3_1CT_MotorTemp_I16;
    unsigned int TR3_1CT_MotorSpeed_U16;


    bool TR3_2CT_SafBrM1_B1,TR3_2CT_EnTractionM1_B1,TR3_2CT_AllBrReleasedM1_B1,TR3_2CT_BrOvertakeM1_B1,TR3_2CT_ForcedBrM1_B1
        ,TR3_2CT_ChargingContactorM1_B1,TR3_2CT_MainContactorM1_B1,TR3_2CT_VVVFM1_B1,TR3_2CT_EnDriveM1_B1,TR3_2CT_SandingRecM1_B1
        ,TR3_2CT_ZeroLockM1_B1 ,TR3_2CT_Inverter1WarnM1_B1,TR3_2CT_Inverter1FaultM1_B1,TR3_2CT_Inverter1WorkM1_B1,TR3_2CT_BrChop1WorkM1_B1
        ,TR3_2CT_MainContactor1ClosedM1_B1 ,TR3_2CT_Motor1SlideM1_B1,TR3_2CT_Motor1SlipM1_B1,TR3_2CT_CoolingFanOKM1_B1;
    unsigned char TR3_2CT_SlipFreqM1_U8,TR3_2CT_StatorFreqM1_U8 ,TR3_2CT_LifeSignalM1_U8,TR3_2CT_SWVersionM1_U8,TR3_2CT_OutputFreqM1_U8;
    int TR3_2CT_DynaCurrM1_U16,TR3_2CT_OutputVoltM1_U16,TR3_2CT_NetVoltM1_U16,TR3_2CT_NetCurrM1_U16,TR3_2CT_Status3M1_U16,TR3_2CT_Status4M1_U16;
    signed int TR3_2CT_MotorTemp_I16;
    unsigned int TR3_2CT_MotorSpeed_U16;

    //MC2-1/2 0X18E-0X48E 0X1EE 0X2eE
    bool TR4_1CT_SafBrM1_B1,TR4_1CT_EnTractionM1_B1,TR4_1CT_AllBrReleasedM1_B1,TR4_1CT_BrOvertakeM1_B1,TR4_1CT_ForcedBrM1_B1
        ,TR4_1CT_ChargingContactorM1_B1,TR4_1CT_MainContactorM1_B1,TR4_1CT_VVVFM1_B1,TR4_1CT_EnDriveM1_B1,TR4_1CT_SandingRecM1_B1
        ,TR4_1CT_ZeroLockM1_B1 ,TR4_1CT_Inverter1WarnM1_B1,TR4_1CT_Inverter1FaultM1_B1,TR4_1CT_Inverter1WorkM1_B1,TR4_1CT_BrChop1WorkM1_B1
        ,TR4_1CT_MainContactor1ClosedM1_B1 ,TR4_1CT_Motor1SlideM1_B1,TR4_1CT_Motor1SlipM1_B1,TR4_1CT_CoolingFanOKM1_B1;
    unsigned char TR4_1CT_SlipFreqM1_U8,TR4_1CT_StatorFreqM1_U8 ,TR4_1CT_LifeSignalM1_U8,TR4_1CT_SWVersionM1_U8,TR4_1CT_OutputFreqM1_U8;
    int TR4_1CT_DynaCurrM1_U16,TR4_1CT_OutputVoltM1_U16,TR4_1CT_NetVoltM1_U16,TR4_1CT_NetCurrM1_U16,TR4_1CT_Status3M1_U16,TR4_1CT_Status4M1_U16;
    signed int TR4_1CT_MotorTemp_I16;
    unsigned int TR4_1CT_MotorSpeed_U16;


    bool TR4_2CT_SafBrM1_B1,TR4_2CT_EnTractionM1_B1,TR4_2CT_AllBrReleasedM1_B1,TR4_2CT_BrOvertakeM1_B1,TR4_2CT_ForcedBrM1_B1
        ,TR4_2CT_ChargingContactorM1_B1,TR4_2CT_MainContactorM1_B1,TR4_2CT_VVVFM1_B1,TR4_2CT_EnDriveM1_B1,TR4_2CT_SandingRecM1_B1
        ,TR4_2CT_ZeroLockM1_B1 ,TR4_2CT_Inverter1WarnM1_B1,TR4_2CT_Inverter1FaultM1_B1,TR4_2CT_Inverter1WorkM1_B1,TR4_2CT_BrChop1WorkM1_B1
        ,TR4_2CT_MainContactor1ClosedM1_B1 ,TR4_2CT_Motor1SlideM1_B1,TR4_2CT_Motor1SlipM1_B1,TR4_2CT_CoolingFanOKM1_B1;
    unsigned char TR4_2CT_SlipFreqM1_U8,TR4_2CT_StatorFreqM1_U8 ,TR4_2CT_LifeSignalM1_U8,TR4_2CT_SWVersionM1_U8,TR4_2CT_OutputFreqM1_U8;
    int TR4_2CT_DynaCurrM1_U16,TR4_2CT_OutputVoltM1_U16,TR4_2CT_NetVoltM1_U16,TR4_2CT_NetCurrM1_U16,TR4_2CT_Status3M1_U16,TR4_2CT_Status4M1_U16;
    signed int TR4_2CT_MotorTemp_I16;
    unsigned int TR4_2CT_MotorSpeed_U16;

    //VCU->TCU 0X20B-0X20E
    unsigned char CTTR1_CarLoad_U8,CTTR2_CarLoad_U8,CTTR3_CarLoad_U8,CTTR4_CarLoad_U8;


    //HVAC->VCU 0X1/297-0X1/29A
    bool HVAC1CTevapraor_fan1_status,HVAC1CTcondenser_fan1_status,HVAC1CTcompressor1_status,HVAC1CTheater1_status,HVAC1CTevapraor_fan2_status,
    HVAC1CTcondenser_fan2_status,HVAC1CTcompressor2_status,HVAC1CTheater2_status,HVAC1CTauto_Warm_mode,HVAC1CTauto_Cold_mode,
    HVAC1CTventilation_mode,HVAC1CTemergency_ventilation_mode,HVAC1CTstop_mode,HVAC1CTReduce_Load_FB,HVAC1CTPre_Cold,HVAC1_Heater1_status,HVAC1_Heater2_status,
    HVAC1CTPre_Warm,HVAC1CTfresh_air_damper_status,HVAC1CTreturn_air_damper_status,HVAC1CTLocal_control,HVAC1CTTCMS_control,HVAC1CT_Coldtest,HVAC1CT_Warmtest;
    unsigned char HVAC1CTTemp_Set,HVAC1CTTemp_Inside,HVAC1CTTemp_Outside,HVAC1CTSoftware_version_HB,HVAC1CTSoftware_version_LB,HVAC1CT_Life_signal;

    bool HVAC2CTevapraor_fan1_status,HVAC2CTcondenser_fan1_status,HVAC2CTcompressor1_status,HVAC2CTheater1_status,HVAC2CTevapraor_fan2_status,
    HVAC2CTcondenser_fan2_status,HVAC2CTcompressor2_status,HVAC2CTheater2_status,HVAC2CTauto_Warm_mode,HVAC2CTauto_Cold_mode,
    HVAC2CTventilation_mode,HVAC2CTemergency_ventilation_mode,HVAC2CTstop_mode,HVAC2CTReduce_Load_FB,HVAC2CTPre_Cold,HVAC2_Heater1_status,HVAC2_Heater2_status,
    HVAC2CTPre_Warm,HVAC2CTfresh_air_damper_status,HVAC2CTreturn_air_damper_status,HVAC2CTLocal_control,HVAC2CTTCMS_control,HVAC2CT_Coldtest,HVAC2CT_Warmtest;
    unsigned char HVAC2CTTemp_Set,HVAC2CTTemp_Inside,HVAC2CTTemp_Outside,HVAC2CTSoftware_version_HB,HVAC2CTSoftware_version_LB,HVAC2CT_Life_signal;

    bool HVAC3CTevapraor_fan1_status,HVAC3CTcondenser_fan1_status,HVAC3CTcompressor1_status,HVAC3CTheater1_status,HVAC3CTevapraor_fan2_status,
    HVAC3CTcondenser_fan2_status,HVAC3CTcompressor2_status,HVAC3CTheater2_status,HVAC3CTauto_Warm_mode,HVAC3CTauto_Cold_mode,
    HVAC3CTventilation_mode,HVAC3CTemergency_ventilation_mode,HVAC3CTstop_mode,HVAC3CTReduce_Load_FB,HVAC3CTPre_Cold,HVAC3_Heater1_status,HVAC3_Heater2_status,
    HVAC3CTPre_Warm,HVAC3CTfresh_air_damper_status,HVAC3CTreturn_air_damper_status,HVAC3CTLocal_control,HVAC3CTTCMS_control,HVAC3CT_Coldtest,HVAC3CT_Warmtest;
    unsigned char HVAC3CTTemp_Set,HVAC3CTTemp_Inside,HVAC3CTTemp_Outside,HVAC3CTSoftware_version_HB,HVAC3CTSoftware_version_LB,HVAC3CT_Life_signal;

    bool HVAC4CTevapraor_fan1_status,HVAC4CTcondenser_fan1_status,HVAC4CTcompressor1_status,HVAC4CTheater1_status,HVAC4CTevapraor_fan2_status,
    HVAC4CTcondenser_fan2_status,HVAC4CTcompressor2_status,HVAC4CTheater2_status,HVAC4CTauto_Warm_mode,HVAC4CTauto_Cold_mode,
    HVAC4CTventilation_mode,HVAC4CTemergency_ventilation_mode,HVAC4CTstop_mode,HVAC4CTReduce_Load_FB,HVAC4CTPre_Cold,HVAC4_Heater1_status,HVAC4_Heater2_status,
    HVAC4CTPre_Warm,HVAC4CTfresh_air_damper_status,HVAC4CTreturn_air_damper_status,HVAC4CTLocal_control,HVAC4CTTCMS_control,HVAC4CT_Coldtest,HVAC4CT_Warmtest;
    unsigned char HVAC4CTTemp_Set,HVAC4CTTemp_Inside,HVAC4CTTemp_Outside,HVAC4CTSoftware_version_HB,HVAC4CTSoftware_version_LB,HVAC4CT_Life_signal;

    //DOOR->VCU 0X19F--0X12E
    unsigned char MC1DOOR1_Software_version_HB,MC1DOOR1_Software_version_LB,MC1DOOR1_drDoorNoOpnCMDtx,
                MC1DOOR2_Software_version_HB,MC1DOOR2_Software_version_LB,MC1DOOR2_drDoorNoOpnCMDtx,
                MC1DOOR3_Software_version_HB,MC1DOOR3_Software_version_LB,MC1DOOR3_drDoorNoOpnCMDtx,
                MC1DOOR4_Software_version_HB,MC1DOOR4_Software_version_LB,MC1DOOR4_drDoorNoOpnCMDtx,
                M1DOOR1_Software_version_HB,M1DOOR1_Software_version_LB,M1DOOR1_drDoorNoOpnCMDtx,
                M1DOOR2_Software_version_HB,M1DOOR2_Software_version_LB,M1DOOR2_drDoorNoOpnCMDtx,
                M1DOOR3_Software_version_HB,M1DOOR3_Software_version_LB,M1DOOR3_drDoorNoOpnCMDtx,
                M1DOOR4_Software_version_HB,M1DOOR4_Software_version_LB,M1DOOR4_drDoorNoOpnCMDtx,
                M2DOOR1_Software_version_HB,M2DOOR1_Software_version_LB,M2DOOR1_drDoorNoOpnCMDtx,
                M2DOOR2_Software_version_HB,M2DOOR2_Software_version_LB,M2DOOR2_drDoorNoOpnCMDtx,
                M2DOOR3_Software_version_HB,M2DOOR3_Software_version_LB,M2DOOR3_drDoorNoOpnCMDtx,
                M2DOOR4_Software_version_HB,M2DOOR4_Software_version_LB,M2DOOR4_drDoorNoOpnCMDtx,
                MC2DOOR1_Software_version_HB,MC2DOOR1_Software_version_LB,MC2DOOR1_drDoorNoOpnCMDtx,
                MC2DOOR2_Software_version_HB,MC2DOOR2_Software_version_LB,MC2DOOR2_drDoorNoOpnCMDtx,
                MC2DOOR3_Software_version_HB,MC2DOOR3_Software_version_LB,MC2DOOR3_drDoorNoOpnCMDtx,
                MC2DOOR4_Software_version_HB,MC2DOOR4_Software_version_LB,MC2DOOR4_drDoorNoOpnCMDtx;

    bool MC1drDoor1Clsedtx,MC1drDoor1Opnedtx,MC1drDoor1EmergencyUnlocktx,MC1drDoor1Isotx,MC1drDoor1Obstructetx,MC1drDoor1Acting,MC1drDoor1MaintenancePushbuttontx,
         MC1drDoor2Clsedtx,MC1drDoor2Opnedtx,MC1drDoor2EmergencyUnlocktx,MC1drDoor2Isotx,MC1drDoor2Obstructetx,MC1drDoor2Acting,MC1drDoor2MaintenancePushbuttontx,
         MC1drDoor3Clsedtx,MC1drDoor3Opnedtx,MC1drDoor3EmergencyUnlocktx,MC1drDoor3Isotx,MC1drDoor3Obstructetx,MC1drDoor3Acting,MC1drDoor3MaintenancePushbuttontx,
         MC1drDoor4Clsedtx,MC1drDoor4Opnedtx,MC1drDoor4EmergencyUnlocktx,MC1drDoor4Isotx,MC1drDoor4Obstructetx,MC1drDoor4Acting,MC1drDoor4MaintenancePushbuttontx,
         M1drDoor1Clsedtx,M1drDoor1Opnedtx,M1drDoor1EmergencyUnlocktx,M1drDoor1Isotx,M1drDoor1Obstructetx,M1drDoor1Acting,M1drDoor1MaintenancePushbuttontx,
         M1drDoor2Clsedtx,M1drDoor2Opnedtx,M1drDoor2EmergencyUnlocktx,M1drDoor2Isotx,M1drDoor2Obstructetx,M1drDoor2Acting,M1drDoor2MaintenancePushbuttontx,
         M1drDoor3Clsedtx,M1drDoor3Opnedtx,M1drDoor3EmergencyUnlocktx,M1drDoor3Isotx,M1drDoor3Obstructetx,M1drDoor3Acting,M1drDoor3MaintenancePushbuttontx,
         M1drDoor4Clsedtx,M1drDoor4Opnedtx,M1drDoor4EmergencyUnlocktx,M1drDoor4Isotx,M1drDoor4Obstructetx,M1drDoor4Acting,M1drDoor4MaintenancePushbuttontx,
         M2drDoor1Clsedtx,M2drDoor1Opnedtx,M2drDoor1EmergencyUnlocktx,M2drDoor1Isotx,M2drDoor1Obstructetx,M2drDoor1Acting,M2drDoor1MaintenancePushbuttontx,
         M2drDoor2Clsedtx,M2drDoor2Opnedtx,M2drDoor2EmergencyUnlocktx,M2drDoor2Isotx,M2drDoor2Obstructetx,M2drDoor2Acting,M2drDoor2MaintenancePushbuttontx,
         M2drDoor3Clsedtx,M2drDoor3Opnedtx,M2drDoor3EmergencyUnlocktx,M2drDoor3Isotx,M2drDoor3Obstructetx,M2drDoor3Acting,M2drDoor3MaintenancePushbuttontx,
         M2drDoor4Clsedtx,M2drDoor4Opnedtx,M2drDoor4EmergencyUnlocktx,M2drDoor4Isotx,M2drDoor4Obstructetx,M2drDoor4Acting,M2drDoor4MaintenancePushbuttontx,
         MC2drDoor1Clsedtx,MC2drDoor1Opnedtx,MC2drDoor1EmergencyUnlocktx,MC2drDoor1Isotx,MC2drDoor1Obstructetx,MC2drDoor1Acting,MC2drDoor1MaintenancePushbuttontx,
         MC2drDoor2Clsedtx,MC2drDoor2Opnedtx,MC2drDoor2EmergencyUnlocktx,MC2drDoor2Isotx,MC2drDoor2Obstructetx,MC2drDoor2Acting,MC2drDoor2MaintenancePushbuttontx,
         MC2drDoor3Clsedtx,MC2drDoor3Opnedtx,MC2drDoor3EmergencyUnlocktx,MC2drDoor3Isotx,MC2drDoor3Obstructetx,MC2drDoor3Acting,MC2drDoor3MaintenancePushbuttontx,
         MC2drDoor4Clsedtx,MC2drDoor4Opnedtx,MC2drDoor4EmergencyUnlocktx,MC2drDoor4Isotx,MC2drDoor4Obstructetx,MC2drDoor4Acting,MC2drDoor4MaintenancePushbuttontx;
    unsigned char EDCU1FaultBYTE,EDCU2FaultBYTE,EDCU3FaultBYTE,EDCU4FaultBYTE,EDCU5FaultBYTE,EDCU6FaultBYTE,EDCU7FaultBYTE,EDCU8FaultBYTE,
                  EDCU9FaultBYTE,EDCU10FaultBYTE,EDCU11FaultBYTE,EDCU12FaultBYTE,EDCU13FaultBYTE,EDCU14FaultBYTE,EDCU15FaultBYTE,EDCU16FaultBYTE;
    unsigned int  EDCU1FaultWORD,EDCU2FaultWORD,EDCU3FaultWORD,EDCU4FaultWORD,EDCU5FaultWORD,EDCU6FaultWORD,EDCU7FaultWORD,EDCU8FaultWORD,
                  EDCU9FaultWORD,EDCU10FaultWORD,EDCU11FaultWORD,EDCU12FaultWORD,EDCU13FaultWORD,EDCU14FaultWORD,EDCU15FaultWORD,EDCU16FaultWORD;
    // PIS -> VCU 0X193 0X293 0X393
    unsigned int PIS1runningstate_U8,PIS2runningstate_U8,PIDS1runningstate_U8,PIDS2runningstate_U8,PISrunningstate_U8,PIDSrunningstate_U8;
    // VCU -> PIS 0X213 0X313 0X413 0X513
    int PIS_CurrentStation_U16;

};

#endif // DATABASE_H

#ifndef VEHICLEPARASET_H
#define VEHICLEPARASET_H

#include "basepage.h"
#include "ctrlinputmodule.h"
#include "MainGetDefaultPara.h"

namespace Ui {
    class VehicleParaSet;
}

class VehicleParaSet : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleParaSet(QWidget *parent = 0);
    ~VehicleParaSet();
    void showEvent(QShowEvent *);
    void updatePage();
    int inputmode;
private:
    Ui::VehicleParaSet *ui;
    CtrlInputModule *inputmodule;
    MainGetDefaultPara* ParasettingPara;
    int timer3scount[5];
    int timer2sEB,timer2sEBS;
    int m_tempstart,m_tempstop,m_monthstop1,m_monthstop2;

private slots:
    void on_VehicleParaSet_Button_HMiCT_MonthStopSet_B1_pressed();
    void on_VehicleParaSet_Button_HMiCT_MonthStop2p_pressed();
    void on_VehicleParaSet_Button_HMiCT_MonthStop1p_pressed();
    void on_VehicleParaSet_Button_HMiCT_MonthStop2m_pressed();
    void on_VehicleParaSet_Button_HMiCT_MonthStop1m_pressed();
    void on_VehicleParaSet_Button_HMiCT_TempStartset_pressed();
    void on_VehicleParaSet_Button_HMiCT_TempStopp_pressed();
    void on_VehicleParaSet_Button_HMiCT_TempStopm_pressed();
    void on_VehicleParaSet_Button_HMiCT_TempStartp_pressed();
    void on_VehicleParaSet_Button_HMiCT_TempStartm_pressed();
    void on_VehicleParaSet_Button_quitbtn_pressed();
    void on_VehicleParaSet_Button_milesetconfirm_pressed();
    void on_VehicleParaSet_Button_traincodesetconfirm_pressed();
    void on_VehicleParaSet_Button_wheeldiasetconfirm_pressed();
    void on_VehicleParaSet_Button_mileset_pressed();
    void on_VehicleParaSet_Button_carcodeset_pressed();
    void on_VehicleParaSet_Button_wheeldiaset_pressed();
    void on_VehicleParaSet_Button_FBRMC1_pressed();
    void on_VehicleParaSet_Button_Sandforbidden_pressed();
    //void on_VehicleParaSet_Button_forcewind_released();
    void on_VehicleParaSet_Button_EBStop_pressed();
    void on_VehicleParaSet_Button_EB_pressed();
    //void on_VehicleParaSet_Button_forcewind_pressed();
};

#endif // VEHICLEPARASET_H

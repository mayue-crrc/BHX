#ifndef VEHICLERUNPAGE_H
#define VEHICLERUNPAGE_H

#include "basepage.h"
#include "ctrllevelbar.h"
#include "ctrlspeedometer.h"
#include "ctrltraindiagram.h"
#include "ctrlcountdown.h"
#include "crrcfault.h"

namespace Ui {
    class VehicleRunPage;
}

class VehicleRunPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleRunPage(QWidget *parent = 0);
    ~VehicleRunPage();
    void showEvent(QShowEvent *);
    void updatePage();
    void GetcrrcFaultInfo(CrrcFault* CrrcFault);
    void startRollingFault(bool flg);

private:
    Ui::VehicleRunPage *ui;
    CtrlLevelBar *LevelBar;
    CtrlSpeedometer *Speedometer;
    CtrlTrainDiagram * TrainDiagram;
    CtrlCountdown *Countdown;
    unsigned short int VCU1Lifesignal_old,VCU2Lifesignal_old;
    void updateOnlinestatus();
    void updateRunstatus();
    void updateTrainstatus();
    int timer4s;///0.333*13
    int setDoorstates(bool open,bool close,bool emlock,bool iso,bool atcing,bool orb,bool offline);

    CrrcFault* m_crrcFault;
    int m_FaultIndex;
    bool m_rollingfaultstart;
    int m_rollingfaultcnt;

    void updateConfirmFault();


private slots:
    void on_VRun_btn_confirmall_pressed();
    void on_VRun_btn_confirm_pressed();
};

#endif // VEHICLERUNPAGE_H

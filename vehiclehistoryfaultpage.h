#ifndef VEHICLEHISTORYFAULTPAGE_H
#define VEHICLEHISTORYFAULTPAGE_H

#include <basepage.h>
#include <crrcfault.h>
#include "ctrlfaultdetails.h"




namespace Ui {
    class VehicleHistoryFaultPage;
}

class VehicleHistoryFaultPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleHistoryFaultPage(QWidget *parent = 0);
    ~VehicleHistoryFaultPage();
    void updatePage();
    void showEvent(QShowEvent *);
    void GetcrrcFaultInfo(CrrcFault* CrrcFault);
private:
    Ui::VehicleHistoryFaultPage *ui;
    CrrcFault* m_crrcfault;
    int m_HistoryFault_PageID;
    int m_HistoryFault_MaxPageID;
    CtrlFaultdetails* FaultDetailDlg;
private slots:
    void on_VF_button_F12_intro_pressed();
    void on_VF_button_F11_intro_pressed();
    void on_VF_button_F10_intro_pressed();
    void on_VF_button_F9_intro_pressed();
    void on_VF_button_F8_intro_pressed();
    void on_VF_button_F7_intro_pressed();
    void on_VF_button_F6_intro_pressed();
    void on_VF_button_F5_intro_pressed();
    void on_VF_button_F4_intro_pressed();
    void on_VF_button_F3_intro_pressed();
    void on_VF_button_F2_intro_pressed();
    void on_VF_button_F1_intro_pressed();
    void on_VehicleHistoryFaultPage_Button_quit_pressed();
    void on_VehicleHistoryFaultPage_Button_PrePage_pressed();
    void on_VehicleHistoryFaultPage_Button_NextPage_pressed();
};

#endif // VEHICLEHISTORYFAULTPAGE_H

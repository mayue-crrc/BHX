#ifndef VEHICLEINSTRUCTIONSETPAGE_H
#define VEHICLEINSTRUCTIONSETPAGE_H

#include "basepage.h"

namespace Ui {
    class VehicleInstructionSetPage;
}

class VehicleInstructionSetPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleInstructionSetPage(QWidget *parent = 0);
    ~VehicleInstructionSetPage();

private:
    Ui::VehicleInstructionSetPage *ui;
    void updatePage();
    void showEvent(QShowEvent *);
    int timer2sEB,timer2sEBS;

private slots:
    void on_VehicleInstructionSetPage_Button_FBRMC2_pressed();
    void on_VehicleInstructionSetPage_Button_FBRMC1_pressed();
    void on_VehicleInstructionSetPage_Button_Sandforbidden_pressed();
    void on_VehicleInstructionSetPage_Button_quit_pressed();
    void on_VehicleInstructionSetPage_Button_forcewind_released();
    void on_VehicleInstructionSetPage_Button_EBStop_pressed();
    void on_VehicleInstructionSetPage_Button_EB_pressed();
    void on_VehicleInstructionSetPage_Button_forcewind_pressed();
};

#endif // VEHICLEINSTRUCTIONSETPAGE_H

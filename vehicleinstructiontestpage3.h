#ifndef VEHICLEINSTRUCTIONTESTPAGE3_H
#define VEHICLEINSTRUCTIONTESTPAGE3_H

#include "basepage.h"

namespace Ui {
    class VehicleInstructionTestPage3;
}

class VehicleInstructionTestPage3 : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleInstructionTestPage3(QWidget *parent = 0);
    ~VehicleInstructionTestPage3();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleInstructionTestPage3 *ui;
    bool RL[3][4];///3 LINES 4 ROWS
    int timer3sreset[5];

private slots:
    void on_VITest3_Button_L3R2_released();
    void on_VITest3_Button_closePage_pressed();
    void on_VITest3_Button_nextPage_pressed();
    void on_VITest3_Button_prePage_pressed();
    void on_VITest3_Button_L3R4_pressed();
    void on_VITest3_Button_L3R3_pressed();
    void on_VITest3_Button_L3R2_pressed();
    void on_VITest3_Button_L3R1_pressed();
    void on_VITest3_Button_L2R4_pressed();
    void on_VITest3_Button_L2R3_pressed();
    void on_VITest3_Button_L2R2_pressed();
    void on_VITest3_Button_L2R1_pressed();
    void on_VITest3_Button_L1R4_pressed();
    void on_VITest3_Button_L1R3_pressed();
    void on_VITest3_Button_L1R2_pressed();
    void on_VITest3_Button_L1R1_pressed();
};

#endif // VEHICLEINSTRUCTIONTESTPAGE3_H

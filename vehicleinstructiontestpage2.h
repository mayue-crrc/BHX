#ifndef VEHICLEINSTRUCTIONTESTPAGE2_H
#define VEHICLEINSTRUCTIONTESTPAGE2_H

#include "basepage.h"

namespace Ui {
    class VehicleInstructionTestPage2;
}

class VehicleInstructionTestPage2 : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleInstructionTestPage2(QWidget *parent = 0);
    ~VehicleInstructionTestPage2();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleInstructionTestPage2 *ui;
    bool RL[3][4];///3 LINES 4 ROWS
    int timer3sreset[8];
private slots:
    void on_VITest2_Button_nextPage_pressed();
    void on_VITest2_Button_L3R4_pressed();
    void on_VITest2_Button_L3R3_pressed();
    void on_VITest2_Button_L3R2_pressed();
    void on_VITest2_Button_L3R1_pressed();
    void on_VITest2_Button_L2R4_pressed();
    void on_VITest2_Button_L2R3_pressed();
    void on_VITest2_Button_L2R2_pressed();
    void on_VITest2_Button_L2R1_pressed();
    void on_VITest2_Button_L1R4_pressed();
    void on_VITest2_Button_L1R3_pressed();
    void on_VITest2_Button_L1R2_pressed();
    void on_VITest2_Button_L1R1_pressed();
    void on_VITest2_Button_closePage_pressed();
    void on_VITest2_Button_prePage_pressed();
};

#endif // VEHICLEINSTRUCTIONTESTPAGE2_H

#ifndef VEHICLEINSTRUCTIONTESTPAGE_H
#define VEHICLEINSTRUCTIONTESTPAGE_H

#include "basepage.h"
namespace Ui {
    class VehicleInstructionTestPage;
}

class VehicleInstructionTestPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleInstructionTestPage(QWidget *parent = 0);
    ~VehicleInstructionTestPage();
    void showEvent(QShowEvent *);
    void updatePage();
    void hideEvent(QHideEvent *);
private:
    Ui::VehicleInstructionTestPage *ui;
    bool RL[3][4];///3 LINES 4 ROWS
    int timer3sreset[4];
private slots:
    void on_VITest_Button_TCUTest_pressed();
    void on_VITest_Button_L3R4_pressed();
    void on_VITest_Button_L3R3_pressed();
    void on_VITest_Button_L3R2_pressed();
    void on_VITest_Button_L3R1_pressed();
    void on_VITest_Button_L2R4_pressed();
    void on_VITest_Button_L2R3_pressed();
    void on_VITest_Button_L2R2_pressed();
    void on_VITest_Button_L2R1_pressed();
    void on_VITest_Button_L1R4_pressed();
    void on_VITest_Button_L1R3_pressed();
    void on_VITest_Button_L1R2_pressed();
    void on_VITest_Button_L1R1_pressed();
    void on_VITest_Button_nextPage_pressed();
    void on_VITest_Button_closePage_pressed();
};

#endif // VEHICLEINSTRUCTIONTESTPAGE_H

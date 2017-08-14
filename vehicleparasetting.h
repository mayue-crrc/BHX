#ifndef VEHICLEPARASETTING_H
#define VEHICLEPARASETTING_H

#include "basepage.h"
#include "vehicleeditpwpage.h"

namespace Ui {
    class VehicleParaSetting;
}

class VehicleParaSetting : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleParaSetting(QWidget *parent = 0);
    ~VehicleParaSetting();
    void showEvent(QShowEvent *);
    //void updatePage();
private:
    Ui::VehicleParaSetting *ui;
    VehicleEditPWPage *vehicleeditpwpage;

private slots:
    void on_VParaSetting_Button_factorytest_pressed();
    void on_VParaSetting_Button_HistoryFault_pressed();
    void on_VParaSetting_Button_parasetting_pressed();
    void on_VParaSetting_Button_datetimeset_pressed();
    void on_VParaSetting_Button_factroyset_pressed();
    void on_VParaSetting_Button_visionlifesignal_pressed();
    void on_VParaSetting_Button_candataPage_pressed();
    void on_VParaSetting_Button_Initset_pressed();
    void on_VParaSetting_Button_IOpage_pressed();
    void on_VParaSetting_Button_EditPW_pressed();
    void on_VParaSetting_Button_test_pressed();
};

#endif // VEHICLEPARASETTING_H

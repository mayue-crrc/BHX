#ifndef VEHICLEMC2RIOMIOPAGE_H
#define VEHICLEMC2RIOMIOPAGE_H


#include "basepage.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
namespace Ui {
    class VehicleMC2RIOMIOPage;
}

class VehicleMC2RIOMIOPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleMC2RIOMIOPage(QWidget *parent = 0);
    ~VehicleMC2RIOMIOPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleMC2RIOMIOPage *ui;
    DiControl* dicontrol1;
    DiControl* dicontrol2;
    DoControl* docontrol1;
    DoControl* docontrol2;
    DiControl* dicontrol3;
    AxControl* axcontrol;
    int pageID;
    void hideallcontrol();
private slots:
    void on_VehicleMC2RIOMIOPage_button_back_pressed();
    void on_VehicleMC2RIOMIOPage_button_nextpage_pressed();
    void on_VehicleMC2RIOMIOPage_button_prepage_pressed();
    void on_VehicleMC2RIOMIOPage_button_MC2_clicked();
    void on_VehicleMC2RIOMIOPage_button_M2_clicked();
    void on_VehicleMC2RIOMIOPage_button_M1_clicked();
    void on_VehicleMC2RIOMIOPage_button_MC1_clicked();
};

#endif // VEHICLEMC2RIOMIOPAGE_H

#ifndef VEHICLEM2RIOMIOPAGE_H
#define VEHICLEM2RIOMIOPAGE_H

#include "basepage.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
namespace Ui {
    class VehicleM2RIOMIOPage;
}

class VehicleM2RIOMIOPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleM2RIOMIOPage(QWidget *parent = 0);
    ~VehicleM2RIOMIOPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleM2RIOMIOPage *ui;
    DiControl* dicontrol1;
    DiControl* dicontrol2;
    DoControl* docontrol1;
    AxControl* axcontrol;
    int pageID;
    void hideallcontrol();
private slots:
    void on_VehicleM2RIOMIOPage_button_back_pressed();
    void on_VehicleM2RIOMIOPage_button_nextpage_pressed();
    void on_VehicleM2RIOMIOPage_button_prepage_pressed();
    void on_VehicleM2RIOMIOPage_button_MC2_clicked();
    void on_VehicleM2RIOMIOPage_button_M2_clicked();
    void on_VehicleM2RIOMIOPage_button_M1_clicked();
    void on_VehicleM2RIOMIOPage_button_MC1_clicked();
};

#endif // VEHICLEM2RIOMIOPAGE_H

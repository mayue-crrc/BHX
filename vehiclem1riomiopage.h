#ifndef VEHICLEM1RIOMIOPAGE_H
#define VEHICLEM1RIOMIOPAGE_H

#include "basepage.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
namespace Ui {
    class VehicleM1RIOMIOPage;
}

class VehicleM1RIOMIOPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleM1RIOMIOPage(QWidget *parent = 0);
    ~VehicleM1RIOMIOPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleM1RIOMIOPage *ui;
    DiControl* dicontrol1;
    DiControl* dicontrol2;
    DoControl* docontrol1;
    AxControl* axcontrol;
    int pageID;
    void hideallcontrol();
private slots:
    void on_VehicleM1RIOMIOPage_button_back_pressed();
    void on_VehicleM1RIOMIOPage_button_nextpage_pressed();
    void on_VehicleM1RIOMIOPage_button_prepage_pressed();
    void on_VehicleM1RIOMIOPage_button_MC2_clicked();
    void on_VehicleM1RIOMIOPage_button_M2_clicked();
    void on_VehicleM1RIOMIOPage_button_M1_clicked();
    void on_VehicleM1RIOMIOPage_button_MC1_clicked();
};

#endif // VEHICLEM1RIOMIOPAGE_H

#ifndef VEHICLERIOMIOPAGE_H
#define VEHICLERIOMIOPAGE_H

#include "basepage.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"
namespace Ui {
    class VehicleRIOMIOPage;
}

class VehicleRIOMIOPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleRIOMIOPage(QWidget *parent = 0);
    ~VehicleRIOMIOPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleRIOMIOPage *ui;
    DiControl* dicontrol1;
    DiControl* dicontrol2;
    DoControl* docontrol1;
    DoControl* docontrol2;
    DiControl* dicontrol3;
    AxControl* axcontrol;
    int pageID;
    void hideallcontrol();
private slots:
    void on_VehicleRIOMIOPage_button_MC2_clicked();
    void on_VehicleRIOMIOPage_button_M2_clicked();
    void on_VehicleRIOMIOPage_button_M1_clicked();
    void on_VehicleRIOMIOPage_button_MC1_clicked();
    void on_VehicleRIOMIOPage_button_nextpage_pressed();
    void on_VehicleRIOMIOPage_button_prepage_pressed();
    void on_VehicleRIOMIOPage_button_back_pressed();
};

#endif // VEHICLERIOMIOPAGE_H

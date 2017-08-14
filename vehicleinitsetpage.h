#ifndef VEHICLEINITSETPAGE_H
#define VEHICLEINITSETPAGE_H

#include "basepage.h"
#include "MainGetDefaultPara.h"
namespace Ui {
    class VehicleInitsetPage;
}

class VehicleInitsetPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleInitsetPage(QWidget *parent = 0);
    ~VehicleInitsetPage();

private:
    Ui::VehicleInitsetPage *ui;
    MainGetDefaultPara *HMIPos;
    QString currentpos;
    void updatePage();
private slots:
    void on_VehicleInitsetPage_Button_back_clicked();
    void on_VehicleInitsetPage_Button_reboot_clicked();
    void on_VehicleInitsetPage_Button_HMI2_pressed();
    void on_VehicleInitsetPage_Button_HMI1_pressed();
};

#endif // VEHICLEINITSETPAGE_H

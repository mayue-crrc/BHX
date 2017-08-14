#ifndef VEHICLEACUPAGE_H
#define VEHICLEACUPAGE_H

#define ACUMAXPage 2
#include "basepage.h"
#include "statesbox8x4.h"

namespace Ui {
    class VehicleACUPage;
}

class VehicleACUPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleACUPage(QWidget *parent = 0);
    ~VehicleACUPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleACUPage *ui;
    StatesBox8x4* ACUstatesBox;
    int ACUPageID;

private slots:
    void on_VehicleACUPage_Button_NextPage_pressed();
    void on_VehicleACUPage_Button_PrePage_pressed();
};

#endif // VEHICLEACUPAGE_H

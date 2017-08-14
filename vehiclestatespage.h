#ifndef VEHICLESTATESPAGE_H
#define VEHICLESTATESPAGE_H

#include "basepage.h"
#include "statesbox8x4.h"
#include "statesbox8x2.h"
namespace Ui {
    class VehicleStatesPage;
}

class VehicleStatesPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleStatesPage(QWidget *parent = 0);
    ~VehicleStatesPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleStatesPage *ui;
    StatesBox8x4 *statesbox8x4;
    StatesBox8x2 *statesbox8x2;
    int StatepageID;
    int StatesMaxPage;
private slots:
    void on_VehicleStatesPage_Button_NextPage_pressed();
    void on_VehicleStatesPage_Button_PrePage_pressed();
};

#endif // VEHICLESTATESPAGE_H

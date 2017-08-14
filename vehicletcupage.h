#ifndef VEHICLETCUPAGE_H
#define VEHICLETCUPAGE_H

#include "basepage.h"
#include "statesbox8x4.h"

namespace Ui {
    class VehicleTCUPage;
}

class VehicleTCUPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleTCUPage(QWidget *parent = 0);
    ~VehicleTCUPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleTCUPage *ui;
    int TCUPageID,TCUMaxPage;
    StatesBox8x4* TCUstatesBox;

private slots:
    void on_VehicleTCUPage_Button_PrePage_pressed();
    void on_VehicleTCUPage_Button_NextPage_pressed();
};

#endif // VEHICLETCUPAGE_H

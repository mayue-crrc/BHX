#ifndef VEHICLEBCUPAGE_H
#define VEHICLEBCUPAGE_H

#define BCUMAXPage 2
#include "basepage.h"
#include "statesbox8x4.h"

namespace Ui {
    class VehicleBCUPage;
}

class VehicleBCUPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleBCUPage(QWidget *parent = 0);
    ~VehicleBCUPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleBCUPage *ui;
    int BCUPageID;

private slots:
    void on_VehicleBCUPage_Button_NextPage_pressed();
    void on_VehicleBCUPage_Button_PrePage_pressed();
};

#endif // VEHICLEBCUPAGE_H

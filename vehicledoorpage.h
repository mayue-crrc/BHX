#ifndef VEHICLEDOORPAGE_H
#define VEHICLEDOORPAGE_H
#include "basepage.h"
#include "statesbox8x4.h"
namespace Ui {
    class VehicleDoorPage;
}

class VehicleDoorPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleDoorPage(QWidget *parent = 0);
    ~VehicleDoorPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleDoorPage *ui;

private slots:
    void on_VehicleDoorPage_StateMC2_pressed();
    void on_VehicleDoorPage_StateM2_pressed();
    void on_VehicleDoorPage_StateM1_pressed();
    void on_VehicleDoorPage_StateMC1_pressed();
};

#endif // VEHICLEDOORPAGE_H

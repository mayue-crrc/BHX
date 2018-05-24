#ifndef VEHICLEWHEELSETPAGE_H
#define VEHICLEWHEELSETPAGE_H

#include "basepage.h"
#include "ctrlinputmodule.h"
#include "MainGetDefaultPara.h"

namespace Ui {
    class VehicleWheelSetPage;
}

class VehicleWheelSetPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleWheelSetPage(QWidget *parent = 0);
    ~VehicleWheelSetPage();

    void updatePage();

private:
    Ui::VehicleWheelSetPage *ui;
    CtrlInputModule *inputmodule;
    MainGetDefaultPara* ParasettingPara;
    QString m_inputtype;
    int timer3scount[3];
private slots:
    void on_VehicleWheelset_accmileconfirmbtn_pressed();
    void on_VehicleWheelset_traincodeconfirmbtn_pressed();
    void on_VehicleWheelset_wheelconfirmbtn_pressed();
    void on_VehicleWheelset_Button_return_pressed();
    void on_VehicleWheelset_Button_NextPage_pressed();
    void on_VehicleWheelset_Button_PrePage_pressed();

    void InputSelectEvent();
};

#endif // VEHICLEWHEELSETPAGE_H

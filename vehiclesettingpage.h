#ifndef VEHICLESETTINGPAGE_H
#define VEHICLESETTINGPAGE_H

#include "basepage.h"
#include "statesbox8x4.h"
#include "MainGetDefaultPara.h"
#include "warnningdialog.h"
namespace Ui {
    class VehicleSettingPage;
}

class VehicleSettingPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleSettingPage(QWidget *parent = 0);
    ~VehicleSettingPage();
    void showEvent(QShowEvent *);
    void updatePage();
private:
    Ui::VehicleSettingPage *ui;
    QString inputPW,PW;
    MainGetDefaultPara* getdefaultpara;
    WarnningDialog* warningdialog;
private slots:
    void on_VSetting_Button_confirm_pressed();
    void on_VSetting_Button_clear_pressed();
    void on_VSetting_Button_Num9_pressed();
    void on_VSetting_Button_Num8_pressed();
    void on_VSetting_Button_Num7_pressed();
    void on_VSetting_Button_Num6_pressed();
    void on_VSetting_Button_Num5_pressed();
    void on_VSetting_Button_Num4_pressed();
    void on_VSetting_Button_Num3_pressed();
    void on_VSetting_Button_Num2_pressed();
    void on_VSetting_Button_Num1_pressed();
    void on_VSetting_Button_Num0_pressed();
};

#endif // VEHICLESETTINGPAGE_H

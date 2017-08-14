#ifndef VEHICLEEDITPWPAGE_H
#define VEHICLEEDITPWPAGE_H

#include <QWidget>
#include "MainGetDefaultPara.h"
#include "QDebug"
namespace Ui {
    class VehicleEditPWPage;
}

class VehicleEditPWPage : public QWidget
{
    Q_OBJECT

public:
    explicit VehicleEditPWPage(QWidget *parent = 0);
    ~VehicleEditPWPage();
private:
    Ui::VehicleEditPWPage *ui;
    QString PW;
    QString old_EditPWstr,old_InputPW;
    QString new_EditPWstr,new_InputPW;
    bool oldPWOK_flg;
    MainGetDefaultPara* getdefaultpara;

private slots:
    void on_VEPW_Button_back_pressed();
    void on_VEPW_Button_clear_pressed();
    void on_VEPW_Button_Num9_pressed();
    void on_VEPW_Button_Num8_pressed();
    void on_VEPW_Button_Num7_pressed();
    void on_VEPW_Button_Num5_pressed();
    void on_VEPW_Button_Num4_pressed();
    void on_VEPW_Button_Num3_pressed();
    void on_VEPW_Button_Num2_pressed();
    void on_VEPW_Button_Num1_pressed();
    void on_VEPW_Button_Num0_pressed();
    void on_VEPW_Button_Num6_pressed();
    void on_VEPW_Button_confirm_pressed();
};

#endif // VEHICLEEDITPWPAGE_H

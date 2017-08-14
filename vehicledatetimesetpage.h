#ifndef VEHICLEDATETIMESETPAGE_H
#define VEHICLEDATETIMESETPAGE_H

#include "basepage.h"
#include "QLineEdit"
#include "warnningdialog.h"




namespace Ui {
    class VehicleDatetimeSetPage;
}

class VehicleDatetimeSetPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleDatetimeSetPage(QWidget *parent = 0);
    ~VehicleDatetimeSetPage();
    void updatePage();
    void showEvent(QShowEvent *);

private:
    Ui::VehicleDatetimeSetPage *ui;
    QString inputnum;
    int count3s;
    int Btnselected;
    void ResetAllBtn();
    WarnningDialog* warningdialog;
private slots:
    void on_VehicleDatetimeSetPage_Button_secset_pressed();
    void on_VehicleDatetimeSetPage_Button_minset_pressed();
    void on_VehicleDatetimeSetPage_Button_hourset_pressed();
    void on_VehicleDatetimeSetPage_Button_dayset_pressed();
    void on_VehicleDatetimeSetPage_Button_monthset_pressed();
    void on_VehicleDatetimeSetPage_Button_yearset_pressed();
    void on_VehicleDatetimeSetPage_Button_clear_2_pressed();
    void on_VehicleDatetimeSetPage_Button_Num0_clicked();
    void on_VehicleDatetimeSetPage_Button_confirm_clicked();
    void on_VehicleDatetimeSetPage_Button_clear_clicked();
    void on_VehicleDatetimeSetPage_Button_Num9_clicked();
    void on_VehicleDatetimeSetPage_Button_Num8_clicked();
    void on_VehicleDatetimeSetPage_Button_Num7_clicked();
    void on_VehicleDatetimeSetPage_Button_Num6_clicked();
    void on_VehicleDatetimeSetPage_Button_Num5_clicked();
    void on_VehicleDatetimeSetPage_Button_Num4_clicked();
    void on_VehicleDatetimeSetPage_Button_Num3_clicked();
    void on_VehicleDatetimeSetPage_Button_Num2_clicked();
    void on_VehicleDatetimeSetPage_Button_Num1_clicked();
};

#endif // VEHICLEDATETIMESETPAGE_H

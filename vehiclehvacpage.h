#ifndef VEHICLEHVACPAGE_H
#define VEHICLEHVACPAGE_H

#include "basepage.h"
#include "statesbox8x4.h"
#include "QVector"
#include "QPushButton"

namespace Ui {
    class VehicleHVACPage;
}

class VehicleHVACPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleHVACPage(QWidget *parent = 0);
    ~VehicleHVACPage();
    void showEvent(QShowEvent *);
    void updatePage();
    void UpdateHVACState(QList<QString> str,QList<int> color);
    void UpdateHVACName(QList<QString> str,QList<QString> intro);

private:
    Ui::VehicleHVACPage *ui;
    void ResetAllHVACBtn();
    int HVACPageNum;
    void HideFirstPage();
    void ShowFirstPage();
    StatesBox8x4* HVACStatesPage;
    int HVACMaxPage;
    QVector<QPushButton* > tempbtn,ctrlbtn,testbtn;
    int tempbtnID,ctrlbtnID,testbtnID;
    void resetctrlbtn();
    void resettempbtn();
    int m_15mincnt;
    //void resettestbtn();

private slots:
    void on_VHVAC_Button_heat2_pressed();
    void on_VHVAC_Button_heat1_pressed();
    void on_VHVAC_Button_HVACVcoldtest_pressed();
    void on_VHVAC_Button_HVACVwarmtest_pressed();
    void on_VHVAC_Button_Tempminus2_pressed();
    void on_VHVAC_Button_Tempminus1_pressed();
    void on_VHVAC_Button_Tempplus2_pressed();
    void on_VHVAC_Button_Tempplus1_pressed();
    void on_VHVAC_Button_HVACStop_pressed();
    void on_VHVAC_Button_HVACVen_pressed();
    void on_VHVAC_Button_HVACAutoCold_pressed();
    void on_VHVAC_Button_HVACAutoWarm_pressed();
    void on_VHVAC_Button_PrePage_pressed();
    void on_VHVAC_Button_NextPage_pressed();

};

#endif // VEHICLEHVACPAGE_H

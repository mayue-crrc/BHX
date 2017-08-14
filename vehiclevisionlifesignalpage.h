#ifndef VEHICLEVISIONLIFESIGNALPAGE_H
#define VEHICLEVISIONLIFESIGNALPAGE_H

#include "basepage.h"
#include "ctrlvisionlifesignalform.h"
namespace Ui {
    class VehicleVisionLifesignalPage;
}

class VehicleVisionLifesignalPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleVisionLifesignalPage(QWidget *parent = 0);
    ~VehicleVisionLifesignalPage();
    void updatePage();
    void showEvent(QShowEvent *);
private:
    Ui::VehicleVisionLifesignalPage *ui;
    CtrlVisionLifesignalForm* visionlifesignalform;
    int LifesignaleVisionPageID;
private slots:
    void on_VehicleVisionLifesignalPage_Button_nextpage_clicked();
    void on_VehicleVisionLifesignalPage_Button_prepage_clicked();
    void on_VehicleVisionLifesignalPage_Button_back_clicked();
};

#endif // VEHICLEVISIONLIFESIGNALPAGE_H

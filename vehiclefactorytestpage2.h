#ifndef VEHICLEFACTORYTESTPAGE2_H
#define VEHICLEFACTORYTESTPAGE2_H

#include <basepage.h>
#include <qpushbutton.h>
#include <qlabel.h>
namespace Ui {
    class VehicleFactoryTestPage2;
}

class VehicleFactoryTestPage2 : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleFactoryTestPage2(QWidget *parent = 0);
    ~VehicleFactoryTestPage2();
    void showEvent(QShowEvent *event);
    void updatePage();
private:
    Ui::VehicleFactoryTestPage2 *ui;
    void resetPisData();
    QList<QPushButton*> buttons;
    QList<QLabel*> labels;
    QList<bool> sendingsignals;
private slots:
    void on_VehicleFactoryTestPage_button_MDO1_10_pressed();
    void on_VehicleFactoryTestPage_button_MDO1_9_pressed();
    void on_VehicleFactoryTestPage_button_MDO1_8_pressed();
    void on_VehicleFactoryTestPage_button_MDO1_5_pressed();
    void on_VehicleFactoryTestPage_button_MDO1_3_pressed();
    void on_VehicleFactoryTestPage_button_MDO1_2_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_12_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_8_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_7_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_5_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_4_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_3_pressed();
    void on_VehicleFactoryTestPage_button_MCDO2_1_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_13_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_11_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_10_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_9_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_8_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_7_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_6_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_5_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_4_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_3_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_2_pressed();
    void on_VehicleFactoryTestPage_button_MCDO1_1_pressed();
    void on_VehicleFactoryTestPage_button_teststart_pressed();
    void on_VehicleFactoryTestPage_button_1car_pressed();
    void on_VehicleFactoryTestPage_button_back_pressed();
};

#endif // VEHICLEFACTORYTESTPAGE2_H

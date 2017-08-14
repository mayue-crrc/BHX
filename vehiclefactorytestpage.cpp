#include "vehiclefactorytestpage.h"
#include "ui_vehiclefactorytestpage.h"

#define MY_FACTORYTEST_BTN_DOWN "	font: 12px;color: black;border:2px solid gray;background-color: qlineargradient(x1: 0, y1 :0, x2: 1, y2: 1,stop:0 black, stop: 0.618 rgb(213, 213, 238), stop: 1 black);"
#define MY_FACTORYTEST_BTN_UP    "	font: 12px;color: black;border:2px solid gray;background-color: qlineargradient(x1: 0, y1 :0, x2: 1, y2: 1,stop:0 white, stop: 0.618 rgb(213, 213, 238), stop: 1 white);"

VehicleFactoryTestPage::VehicleFactoryTestPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleFactoryTestPage)
{
    ui->setupUi(this);
}

VehicleFactoryTestPage::~VehicleFactoryTestPage()
{
    delete ui;
}
void VehicleFactoryTestPage::showEvent(QShowEvent *event)
{


    if(!this->database->HMiCT_FactoryTest_start_B1)
    {
        ui->VehicleFactoryTestPage_button_teststart->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleFactoryTestPage_button_teststart->setText("点击按键\n进入测试模式");
    }else
    {
        ui->VehicleFactoryTestPage_button_teststart->setStyleSheet(MY_BUTTON_DOWN);
        ui->VehicleFactoryTestPage_button_teststart->setText("点击按键\n退出测试模式");
    }


    ui->VehicleFactoryTestPage_button_1car->setStyleSheet(MY_BUTTON_DOWN);
    ui->VehicleFactoryTestPage_button_2car->setStyleSheet(MY_BUTTON_UP);
}
void VehicleFactoryTestPage::updatePage()
{
    QList<bool> signal;

    signal<<this->database->riomDo1Out1Mc1<<this->database->riomDo1Out2Mc1<<this->database->riomDo1Out3Mc1<<
            this->database->riomDo1Out4Mc1<<this->database->riomDo1Out5Mc1<<this->database->riomDo1Out6Mc1<<
            this->database->riomDo1Out7Mc1<<this->database->riomDo1Out8Mc1<<this->database->riomDo1Out9Mc1<<
            this->database->riomDo1Out10Mc1<<this->database->riomDo1Out11Mc1<<this->database->riomDo1Out13Mc1<<
            this->database->riomDo2Out1Mc1<<this->database->riomDo2Out3Mc1<<this->database->riomDo2Out4Mc1<<
            this->database->riomDo2Out5Mc1<<this->database->riomDo2Out7Mc1<<this->database->riomDo2Out8Mc1<<
            this->database->riomDo2Out12Mc1<<this->database->riomDo1Out2M1<<this->database->riomDo1Out3M1<<
            this->database->riomDo1Out5M1<<this->database->riomDo1Out8M1<<this->database->riomDo1Out9M1<<
            this->database->riomDo1Out10M1;


    QList<QLabel*> labels;
    labels<< ui->lVehicleFactoryTestPage_blMCDo1State_1 << ui->lVehicleFactoryTestPage_blMCDo1State_2 <<
             ui->lVehicleFactoryTestPage_blMCDo1State_3 << ui->lVehicleFactoryTestPage_blMCDo1State_4 <<
             ui->lVehicleFactoryTestPage_blMCDo1State_5 << ui->lVehicleFactoryTestPage_blMCDo1State_6 <<
             ui->lVehicleFactoryTestPage_blMCDo1State_7 << ui->lVehicleFactoryTestPage_blMCDo1State_8 <<
             ui->lVehicleFactoryTestPage_blMCDo1State_9 << ui->lVehicleFactoryTestPage_blMCDo1State_10 <<
             ui->lVehicleFactoryTestPage_blMCDo1State_11 << ui->lVehicleFactoryTestPage_blMCDo1State_13 <<
             ui->lVehicleFactoryTestPage_blMCDo2State_1 << ui->lVehicleFactoryTestPage_blMCDo2State_3 <<
             ui->lVehicleFactoryTestPage_blMCDo2State_4 << ui->lVehicleFactoryTestPage_blMCDo2State_5 <<
             ui->lVehicleFactoryTestPage_blMCDo2State_7 << ui->lVehicleFactoryTestPage_blMCDo2State_8 <<
             ui->lVehicleFactoryTestPage_blMCDo2State_12 << ui->lVehicleFactoryTestPage_blMDo1State_2 <<
             ui->lVehicleFactoryTestPage_blMDo1State_3 << ui->lVehicleFactoryTestPage_blMDo1State_5 <<
             ui->lVehicleFactoryTestPage_blMDo1State_8 << ui->lVehicleFactoryTestPage_blMDo1State_9 <<
             ui->lVehicleFactoryTestPage_blMDo1State_10;


    QList<QPushButton*> buttons;
    buttons<<   ui->VehicleFactoryTestPage_button_MCDO1_1 << ui->VehicleFactoryTestPage_button_MCDO1_2 <<
                ui->VehicleFactoryTestPage_button_MCDO1_3 << ui->VehicleFactoryTestPage_button_MCDO1_4 <<
                ui->VehicleFactoryTestPage_button_MCDO1_5 << ui->VehicleFactoryTestPage_button_MCDO1_6 <<
                ui->VehicleFactoryTestPage_button_MCDO1_7 << ui->VehicleFactoryTestPage_button_MCDO1_8 <<
                ui->VehicleFactoryTestPage_button_MCDO1_9 << ui->VehicleFactoryTestPage_button_MCDO1_10 <<
                ui->VehicleFactoryTestPage_button_MCDO1_11 << ui->VehicleFactoryTestPage_button_MCDO1_13 <<
                ui->VehicleFactoryTestPage_button_MCDO2_1 << ui->VehicleFactoryTestPage_button_MCDO2_3 <<
                ui->VehicleFactoryTestPage_button_MCDO2_4 << ui->VehicleFactoryTestPage_button_MCDO2_5 <<
                ui->VehicleFactoryTestPage_button_MCDO2_7 << ui->VehicleFactoryTestPage_button_MCDO2_8 <<
                ui->VehicleFactoryTestPage_button_MCDO2_12 << ui->VehicleFactoryTestPage_button_MDO1_2 <<
                ui->VehicleFactoryTestPage_button_MDO1_3 << ui->VehicleFactoryTestPage_button_MDO1_5 <<
                ui->VehicleFactoryTestPage_button_MDO1_8 << ui->VehicleFactoryTestPage_button_MDO1_9 <<
                ui->VehicleFactoryTestPage_button_MDO1_10;
    for(int i = 0; i < signal.size();i++)
    {
        if(signal.at(i))
        {
            labels[i]->setStyleSheet(ON_STATE);
        }else
        {
            labels[i]->setStyleSheet(OFF_STATE);

        }
    }
    if(this->database->HMiCT_FactoryTest_start_B1)// press start   enable buttons
    {
        for(int i = 0; i < buttons.size(); i++)
        {
            buttons[i]->setDisabled(false);
        }
    }else
    {
        resetPisData();
    }

    buttons.clear();
    labels.clear();
    signal.clear();

}
void VehicleFactoryTestPage::resetPisData()
{

    QList<QPushButton*> buttons;
    buttons<<   ui->VehicleFactoryTestPage_button_MCDO1_1 << ui->VehicleFactoryTestPage_button_MCDO1_2 <<
                ui->VehicleFactoryTestPage_button_MCDO1_3 << ui->VehicleFactoryTestPage_button_MCDO1_4 <<
                ui->VehicleFactoryTestPage_button_MCDO1_5 << ui->VehicleFactoryTestPage_button_MCDO1_6 <<
                ui->VehicleFactoryTestPage_button_MCDO1_7 << ui->VehicleFactoryTestPage_button_MCDO1_8 <<
                ui->VehicleFactoryTestPage_button_MCDO1_9 << ui->VehicleFactoryTestPage_button_MCDO1_10 <<
                ui->VehicleFactoryTestPage_button_MCDO1_11 << ui->VehicleFactoryTestPage_button_MCDO1_13 <<
                ui->VehicleFactoryTestPage_button_MCDO2_1 << ui->VehicleFactoryTestPage_button_MCDO2_3 <<
                ui->VehicleFactoryTestPage_button_MCDO2_4 << ui->VehicleFactoryTestPage_button_MCDO2_5 <<
                ui->VehicleFactoryTestPage_button_MCDO2_7 << ui->VehicleFactoryTestPage_button_MCDO2_8 <<
                ui->VehicleFactoryTestPage_button_MCDO2_12 << ui->VehicleFactoryTestPage_button_MDO1_2 <<
                ui->VehicleFactoryTestPage_button_MDO1_3 << ui->VehicleFactoryTestPage_button_MDO1_5 <<
                ui->VehicleFactoryTestPage_button_MDO1_8 << ui->VehicleFactoryTestPage_button_MDO1_9 <<
                ui->VehicleFactoryTestPage_button_MDO1_10;

    for(int i = 0; i < buttons.size(); i++)
    {
        buttons[i]->setStyleSheet("OFF_STATE");
        buttons[i]->setDisabled(true);
        this->database->HMiCT_FactoryTest_start_B1 = this->database->HMiCT_FactoryTest_MC1DO1_1 = this->database->HMiCT_FactoryTest_MC1DO1_2 = this->database->HMiCT_FactoryTest_MC1DO1_3 = this->database->HMiCT_FactoryTest_MC1DO1_4 =
        this->database->HMiCT_FactoryTest_MC1DO1_5 = this->database->HMiCT_FactoryTest_MC1DO1_6 = this->database->HMiCT_FactoryTest_MC1DO1_7 = this->database->HMiCT_FactoryTest_MC1DO1_8 =
        this->database->HMiCT_FactoryTest_MC1DO1_9 = this->database->HMiCT_FactoryTest_MC1DO1_10 = this->database->HMiCT_FactoryTest_MC1DO1_11 = this->database->HMiCT_FactoryTest_MC1DO1_13 =
        this->database->HMiCT_FactoryTest_MC1DO2_1 = this->database->HMiCT_FactoryTest_MC1DO2_3 = this->database->HMiCT_FactoryTest_MC1DO2_4 = this->database->HMiCT_FactoryTest_MC1DO2_5 =
        this->database->HMiCT_FactoryTest_MC1DO2_7 = this->database->HMiCT_FactoryTest_MC1DO2_8 = this->database->HMiCT_FactoryTest_MC1DO2_9 = this->database->HMiCT_FactoryTest_M1DO1_2 =
        this->database->HMiCT_FactoryTest_M1DO1_3 = this->database->HMiCT_FactoryTest_M1DO1_5 = this->database->HMiCT_FactoryTest_M1DO1_8 = this->database->HMiCT_FactoryTest_M1DO1_9 = this->database->HMiCT_FactoryTest_M1DO1_10 = false;
        this->database->HMiCT_FactoryTest_start_B1 = this->database->HMiCT_FactoryTest_MC2DO1_1 = this->database->HMiCT_FactoryTest_MC2DO1_2 = this->database->HMiCT_FactoryTest_MC2DO1_3 = this->database->HMiCT_FactoryTest_MC2DO1_4 =
        this->database->HMiCT_FactoryTest_MC2DO1_5 = this->database->HMiCT_FactoryTest_MC2DO1_6 = this->database->HMiCT_FactoryTest_MC2DO1_7 = this->database->HMiCT_FactoryTest_MC2DO1_8 =
        this->database->HMiCT_FactoryTest_MC2DO1_9 = this->database->HMiCT_FactoryTest_MC2DO1_10 = this->database->HMiCT_FactoryTest_MC2DO1_11 = this->database->HMiCT_FactoryTest_MC2DO1_13 =
        this->database->HMiCT_FactoryTest_MC2DO2_1 = this->database->HMiCT_FactoryTest_MC2DO2_3 = this->database->HMiCT_FactoryTest_MC2DO2_4 = this->database->HMiCT_FactoryTest_MC2DO2_5 =
        this->database->HMiCT_FactoryTest_MC2DO2_7 = this->database->HMiCT_FactoryTest_MC2DO2_8 = this->database->HMiCT_FactoryTest_MC2DO2_9 = this->database->HMiCT_FactoryTest_M2DO1_2 =
        this->database->HMiCT_FactoryTest_M2DO1_3 = this->database->HMiCT_FactoryTest_M2DO1_5 = this->database->HMiCT_FactoryTest_M2DO1_8 = this->database->HMiCT_FactoryTest_M2DO1_9 = this->database->HMiCT_FactoryTest_M2DO1_10 = false;

    }
    buttons.clear();
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_back_pressed()
{
    changePage(uVehicleParaSetting);
}
void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_teststart_pressed()
{
    if(this->database->HMiCT_FactoryTest_start_B1)
    {
        ui->VehicleFactoryTestPage_button_teststart->setStyleSheet(MY_BUTTON_UP);
        ui->VehicleFactoryTestPage_button_teststart->setText("点击按键\n进入测试模式");
        resetPisData();
        this->database->HMiCT_FactoryTest_start_B1 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_teststart->setStyleSheet(MY_BUTTON_DOWN);
        ui->VehicleFactoryTestPage_button_teststart->setText("点击按键\n退出测试模式");
        this->database->HMiCT_FactoryTest_start_B1 = true;

    }
}







void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_1car_pressed()
{

}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_2car_pressed()
{
    changePage(uVehicleFactoryTestPage2);
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_1_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_1)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_1->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_1 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_1->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_1 = true;
    }
}
void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_2_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_2)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_2->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_2 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_2->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_2 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_3_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_3)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_3->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_3 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_3->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_3 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_4_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_4)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_4->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_4 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_4->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_4 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_5_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_5)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_5->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_5 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_5->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_5 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_6_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_6)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_6->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_6 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_6->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_6 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_7_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_7)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_7->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_7 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_7->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_7 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_8_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_8)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_8->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_8 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_8->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_8 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_9_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_9)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_9->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_9 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_9->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_9 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_10_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_10)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_10->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_10 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_10->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_10 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_11_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_11)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_11->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_11 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_11->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_11 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO1_13_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO1_13)
    {
        ui->VehicleFactoryTestPage_button_MCDO1_13->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO1_13 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO1_13->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO1_13 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_1_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_1)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_1->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_1 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_1->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_1 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_3_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_3)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_3->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_3 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_3->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_3 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_4_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_4)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_4->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_4 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_4->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_4 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_5_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_5)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_5->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_5 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_5->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_5 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_7_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_7)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_7->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_7 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_7->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_7 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_8_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_8)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_8->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_8 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_8->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_8 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MCDO2_12_pressed()
{
    if(this->database->HMiCT_FactoryTest_MC1DO2_9)
    {
        ui->VehicleFactoryTestPage_button_MCDO2_12->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_MC1DO2_9 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MCDO2_12->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_MC1DO2_9 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_2_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_2)
    {
        ui->VehicleFactoryTestPage_button_MDO1_2->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_2 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_2->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_2 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_3_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_3)
    {
        ui->VehicleFactoryTestPage_button_MDO1_3->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_3 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_3->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_3 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_5_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_5)
    {
        ui->VehicleFactoryTestPage_button_MDO1_5->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_5 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_5->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_5 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_8_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_8)
    {
        ui->VehicleFactoryTestPage_button_MDO1_8->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_8 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_8->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_8 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_9_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_9)
    {
        ui->VehicleFactoryTestPage_button_MDO1_9->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_9 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_9->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_9 = true;
    }
}

void VehicleFactoryTestPage::on_VehicleFactoryTestPage_button_MDO1_10_pressed()
{
    if(this->database->HMiCT_FactoryTest_M1DO1_10)
    {
        ui->VehicleFactoryTestPage_button_MDO1_10->setStyleSheet(MY_FACTORYTEST_BTN_UP);
        this->database->HMiCT_FactoryTest_M1DO1_10 = false;
    }else
    {
        ui->VehicleFactoryTestPage_button_MDO1_10->setStyleSheet(MY_FACTORYTEST_BTN_DOWN);
        this->database->HMiCT_FactoryTest_M1DO1_10 = true;
    }
}

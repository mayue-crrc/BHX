#include "navigatorpage.h"
#include "ui_navigatorpage.h"



NavigatorPage::NavigatorPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::NavigatorPage)
{
    ui->setupUi(this);
    ui->NButton1->setStyleSheet(MY_BUTTON_DOWN);

}

NavigatorPage::~NavigatorPage()
{
    delete ui;
}
void NavigatorPage::showEvent(QShowEvent *e)
{

}

void NavigatorPage::on_NButton1_pressed()
{
    ResetAllBtnUP();
    ui->NButton1->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleRunPage);
}

void NavigatorPage::on_NButton2_pressed()
{
    ResetAllBtnUP();
    ui->NButton2->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleStatePage);

}

void NavigatorPage::on_NButton3_pressed()
{
    ResetAllBtnUP();
    ui->NButton3->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleTCUPage);

}

void NavigatorPage::on_NButton4_pressed()
{
    ResetAllBtnUP();
    ui->NButton4->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleBCUPage);
}

void NavigatorPage::on_NButton5_pressed()
{
    ResetAllBtnUP();
    ui->NButton5->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleACUPage);

}

void NavigatorPage::on_NButton6_pressed()
{
    ResetAllBtnUP();
    ui->NButton6->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleHVACPage);

}

void NavigatorPage::on_NButton7_pressed()
{
    ResetAllBtnUP();
    ui->NButton7->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleDoorPage);

}

void NavigatorPage::on_NButton8_pressed()
{
    ResetAllBtnUP();
    ui->NButton8->setStyleSheet(MY_BUTTON_DOWN);
    changePage(uVehicleSettingPage);

}
void NavigatorPage::ResetAllBtnUP()
{
    ui->NButton1->setStyleSheet(MY_BUTTON_UP);
    ui->NButton2->setStyleSheet(MY_BUTTON_UP);
    ui->NButton3->setStyleSheet(MY_BUTTON_UP);
    ui->NButton4->setStyleSheet(MY_BUTTON_UP);
    ui->NButton5->setStyleSheet(MY_BUTTON_UP);
    ui->NButton6->setStyleSheet(MY_BUTTON_UP);
    ui->NButton7->setStyleSheet(MY_BUTTON_UP);
    ui->NButton8->setStyleSheet(MY_BUTTON_UP);

}

#include "vehiclehelppage.h"
#include "ui_vehiclehelppage.h"

VehicleHelpPage::VehicleHelpPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VehicleHelpPage)
{
    ui->setupUi(this);
}

VehicleHelpPage::~VehicleHelpPage()
{
    delete ui;
}

void VehicleHelpPage::on_BHelp_Button_return_pressed()
{
    this->close();
}

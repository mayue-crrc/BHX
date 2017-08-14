#include "vehicledoorpage.h"
#include "ui_vehicledoorpage.h"


#define LABEL_DOOROPEN     "border: 1px groove black;background-color:  blue;font: 16px;"
#define LABEL_DOORCLOSED     "border: 1px groove black;background-color:  green;font: 16px;"
#define LABEL_DOORFAULT     "border: 1px groove black;background-color:  red;font: 16px;"
#define LABEL_DOOROFFLINE    "border: 1px groove black;background-color:  white;font: 16px;"
#define LABEL_DOOREMERGYLOCK     "border: 1px groove black;background-color:  yellow;font: 16px;"
#define LABEL_DOOROBS     "border: 1px groove black;background-color:  brown;font: 16px;"
#define LABEL_DOORACTING     "border: 1px groove black;background-color:  orange;font: 16px;"
#define LABEL_DOORNOINFOR     "border: 1px groove black;background-color:  rgb(160,32,240);font: 16px;"
#define LABEL_DOORBYPASS     "border: 1px groove black;background-color: rgb(80, 80, 80);border-image: url(:/new/prefix1/images/dooriso.bmp);font: 16px;"

#define BUTTON_DOOROK     "border-radius: 16px;border: 2px groove black;background-color:  green;font: 16px;"
#define BUTTON_DOOROFFLINE "border-radius: 16px;border: 2px groove black;background-color:  white;font: 16px;"
#define BUTTON_DOORRED "border-radius: 16px;border: 2px groove black;background-color:  red;font: 16px;"





VehicleDoorPage::VehicleDoorPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDoorPage)
{
    ui->setupUi(this);
}

VehicleDoorPage::~VehicleDoorPage()
{
    delete ui;
}
void VehicleDoorPage::showEvent(QShowEvent *)
{

}
void VehicleDoorPage::updatePage()
{

    if(this->database->CANopenStatus_DOOR1) //mc1door1
    {
        if(this->database->MC1drDoor1Isotx)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC1drDoor1EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC1drDoor1Obstructetx)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC1drDoor1Acting)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC1drDoor1Opnedtx)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC1drDoor1Clsedtx)
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR2) //mc1door2
    {
        if(this->database->MC1drDoor2Isotx)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC1drDoor2EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC1drDoor2Obstructetx)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC1drDoor2Acting)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC1drDoor2Opnedtx)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC1drDoor2Clsedtx)
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR3) //mc1door3
    {
        if(this->database->MC1drDoor3Isotx)
            this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC1drDoor3EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC1drDoor3Obstructetx)
           this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC1drDoor3Acting)
           this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC1drDoor3Opnedtx)
           this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC1drDoor3Clsedtx)
           this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORCLOSED);
        else
           this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR4) //mc1door4
    {

        if(this->database->MC1drDoor4Isotx)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC1drDoor4EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC1drDoor4Obstructetx)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC1drDoor4Acting)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC1drDoor4Opnedtx)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC1drDoor4Clsedtx)
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR5) //mc1door5
    {

        if(this->database->M1drDoor1Isotx)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M1drDoor1EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M1drDoor1Obstructetx)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M1drDoor1Acting)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M1drDoor1Opnedtx)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M1drDoor1Clsedtx)
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door5->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR6) //m1door2
    {
        if(this->database->M1drDoor2Isotx)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M1drDoor2EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M1drDoor2Obstructetx)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M1drDoor2Acting)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M1drDoor2Opnedtx)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M1drDoor2Clsedtx)
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door6->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR7) //m1door3
    {
        if(this->database->M1drDoor3Isotx)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M1drDoor3EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M1drDoor3Obstructetx)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M1drDoor3Acting)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M1drDoor3Opnedtx)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M1drDoor3Clsedtx)
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door7->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR8) //m1door4
    {
        if(this->database->M1drDoor4Isotx)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M1drDoor4EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M1drDoor4Obstructetx)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M1drDoor4Acting)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M1drDoor4Opnedtx)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M1drDoor4Clsedtx)
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC1Door8->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR9) //m2door1
    {
        if(this->database->MC2drDoor1Isotx)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC2drDoor1EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC2drDoor1Obstructetx)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC2drDoor1Acting)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC2drDoor1Opnedtx)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC2drDoor1Clsedtx)
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOROFFLINE);
    }


    if(this->database->CANopenStatus_DOOR10) //m2door2
    {
        if(this->database->MC2drDoor2Isotx)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC2drDoor2EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC2drDoor2Obstructetx)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC2drDoor2Acting)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC2drDoor2Opnedtx)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC2drDoor2Clsedtx)
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR11) //m2door3
    {
        if(this->database->MC2drDoor3Isotx)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC2drDoor3EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC2drDoor3Obstructetx)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC2drDoor3Acting)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC2drDoor3Opnedtx)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC2drDoor3Clsedtx)
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORNOINFOR);

    }else
    {
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOROFFLINE);

    }

    if(this->database->CANopenStatus_DOOR12) //m2door4
    {
        if(this->database->MC2drDoor4Isotx)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->MC2drDoor4EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->MC2drDoor4Obstructetx)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->MC2drDoor4Acting)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->MC2drDoor4Opnedtx)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->MC2drDoor4Clsedtx)
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORNOINFOR);

    }else
    {
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOROFFLINE);

    }

    if(this->database->CANopenStatus_DOOR13) //m2door1
    {
        if(this->database->M2drDoor1Isotx)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M2drDoor1EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M2drDoor1Obstructetx)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M2drDoor1Acting)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M2drDoor1Opnedtx)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M2drDoor1Clsedtx)
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC2Door5->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR14) //MC2door2
    {
        if(this->database->M2drDoor2Isotx)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M2drDoor2EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M2drDoor2Obstructetx)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M2drDoor2Acting)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M2drDoor2Opnedtx)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M2drDoor2Clsedtx)
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOORNOINFOR);

    }else
    {
        this->ui->VehicleDoorPage_MC2Door6->setStyleSheet(LABEL_DOOROFFLINE);

    }

    if(this->database->CANopenStatus_DOOR15) //MC2door3
    {
        if(this->database->M2drDoor3Isotx)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M2drDoor3EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M2drDoor3Obstructetx)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M2drDoor3Acting)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M2drDoor3Opnedtx)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M2drDoor3Clsedtx)
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC2Door7->setStyleSheet(LABEL_DOOROFFLINE);

    }


    if(this->database->CANopenStatus_DOOR16) //MC2door2
    {
        if(this->database->M2drDoor4Isotx)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOORBYPASS);
        else if(this->database->M2drDoor4EmergencyUnlocktx)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOOREMERGYLOCK);
        else if(this->database->M2drDoor4Obstructetx)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOOROBS);
        else if(this->database->M2drDoor4Acting)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOORACTING);
        else if(this->database->M2drDoor4Opnedtx)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOOROPEN);
        else if(this->database->M2drDoor4Clsedtx)
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOORCLOSED);
        else
            this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOORNOINFOR);
    }else
    {
        this->ui->VehicleDoorPage_MC2Door8->setStyleSheet(LABEL_DOOROFFLINE);

    }

  /*
    // 隔离 紧急解锁 障碍 动作中 故障 门开 门关
    //MC1  DOOR1
    if(this->database->MC1drDoor1Isotx)
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor1EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor1Obstructetx)
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOROBS);
);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor1Opnedtx)
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor1Clsedtx)
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC1Door1->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  DOOR2
    if(this->database->MC1drDoor2Isotx)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor2EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor2Obstructetx)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor2Acting)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor2Opnedtx)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor2Clsedtx)
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC1Door2->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  DOOR3
    if(this->database->MC1drDoor3Isotx)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor3EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor3Obstructetx)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor3Acting)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor3Opnedtx)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor3Clsedtx)
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC1Door3->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault

    //MC1  DOOR4
    if(this->database->MC1drDoor4Isotx)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor4EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor4Obstructetx)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor4Acting)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor4Opnedtx)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor4Clsedtx)
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC1Door4->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  Door5
    if(this->database->MC1drDoor5Isotx)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor5EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor5Obstructetx)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor5Acting)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor5Opnedtx)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor5Clsedtx)
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M1Door5->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  Door6
    if(this->database->MC1drDoor6Isotx)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor6EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor6Obstructetx)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor6Acting)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor6Opnedtx)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor6Clsedtx)
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M1Door6->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  Door7
    if(this->database->MC1drDoor7Isotx)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor7EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor7Obstructetx)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor7Acting)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor7Opnedtx)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor7Clsedtx)
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M1Door7->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC1  Door8
    if(this->database->MC1drDoor8Isotx)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC1drDoor8EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC1drDoor8Obstructetx)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC1drDoor8Acting)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC1drDoor8Opnedtx)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC1drDoor8Clsedtx)
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M1Door8->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault

    //MC2  Door1
    if(this->database->MC2drDoor1Isotx)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor1EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor1Obstructetx)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor1Acting)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor1Opnedtx)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor1Clsedtx)
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC2Door1->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault

    //MC2  DOOR2
    if(this->database->MC2drDoor2Isotx)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor2EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor2Obstructetx)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor2Acting)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor2Opnedtx)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor2Clsedtx)
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC2Door2->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC2  DOOR3
    if(this->database->MC2drDoor3Isotx)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor3EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor3Obstructetx)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor3Acting)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor3Opnedtx)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor3Clsedtx)
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC2Door3->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault

    //MC2  DOOR4
    if(this->database->MC2drDoor4Isotx)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor4EmergencyUnlocktx)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor4Obstructetx)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor4Acting)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor4Opnedtx)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor4Clsedtx)
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_MC2Door4->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC2  Door5
    if(this->database->MC2drDoor5Isotx)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor5EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor5Obstructetx)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor5Acting)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor5Opnedtx)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor5Clsedtx)
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M2Door5->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC2  Door6
    if(this->database->MC2drDoor6Isotx)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor6EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor6Obstructetx)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor6Acting)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor6Opnedtx)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor6Clsedtx)
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M2Door6->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC2  Door7
    if(this->database->MC2drDoor7Isotx)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor7EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor7Obstructetx)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor7Acting)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor7Opnedtx)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor7Clsedtx)
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M2Door7->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault
    //MC2  Door8
    if(this->database->MC2drDoor8Isotx)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOORISO);
    else if(this->database->MC2drDoor8EmergencyUnlocktx)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOOREMERGYLOCK);
    else if(this->database->MC2drDoor8Obstructetx)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOOROBS);
    else if(this->database->MC2drDoor8Acting)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOORACTING);
    else if(0)// fault
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOORFAULT);
    else if(this->database->MC2drDoor8Opnedtx)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOOROPEN);
    else if(this->database->MC2drDoor8Clsedtx)
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOORCLOSED);
    else
        this->ui->VehicleDoorPage_M2Door8->setStyleSheet(LABEL_DOORFAULT);//  no status  :  fault

    */

    //MC1
    if((!this->database->CANopenStatus_DOOR1)||(!this->database->CANopenStatus_DOOR2)||
       (!this->database->CANopenStatus_DOOR3)||(!this->database->CANopenStatus_DOOR4))
    {
        ui->VehicleDoorPage_StateMC1->setStyleSheet(BUTTON_DOOROFFLINE);
    }else if((this->database->EDCU1FaultBYTE !=0)||(this->database->EDCU1FaultWORD !=0) ||
             (this->database->EDCU2FaultBYTE !=0)||(this->database->EDCU2FaultWORD !=0) ||
             (this->database->EDCU3FaultBYTE !=0)||(this->database->EDCU3FaultWORD !=0) ||
             (this->database->EDCU4FaultBYTE !=0)||(this->database->EDCU4FaultWORD !=0) )
    {
        ui->VehicleDoorPage_StateMC1->setStyleSheet(BUTTON_DOORRED);
    }else
    {
        ui->VehicleDoorPage_StateMC1->setStyleSheet(BUTTON_DOOROK);
    }
    //M1
    if((!this->database->CANopenStatus_DOOR5)||(!this->database->CANopenStatus_DOOR6)||
       (!this->database->CANopenStatus_DOOR7)||(!this->database->CANopenStatus_DOOR8))
    {
        ui->VehicleDoorPage_StateM1->setStyleSheet(BUTTON_DOOROFFLINE);
    }else if((this->database->EDCU5FaultBYTE !=0)||(this->database->EDCU5FaultWORD !=0) ||
             (this->database->EDCU6FaultBYTE !=0)||(this->database->EDCU6FaultWORD !=0) ||
             (this->database->EDCU7FaultBYTE !=0)||(this->database->EDCU7FaultWORD !=0) ||
             (this->database->EDCU8FaultBYTE !=0)||(this->database->EDCU8FaultWORD !=0) )
    {
        ui->VehicleDoorPage_StateM1->setStyleSheet(BUTTON_DOORRED);
    }else
    {
        ui->VehicleDoorPage_StateM1->setStyleSheet(BUTTON_DOOROK);
    }
    //MC2
    if((!this->database->CANopenStatus_DOOR9)||(!this->database->CANopenStatus_DOOR10)||
       (!this->database->CANopenStatus_DOOR11)||(!this->database->CANopenStatus_DOOR12))
    {
        ui->VehicleDoorPage_StateMC2->setStyleSheet(BUTTON_DOOROFFLINE);
    }else if((this->database->EDCU9FaultBYTE !=0)||(this->database->EDCU9FaultWORD !=0) ||
             (this->database->EDCU10FaultBYTE !=0)||(this->database->EDCU10FaultWORD !=0) ||
             (this->database->EDCU11FaultBYTE !=0)||(this->database->EDCU11FaultWORD !=0) ||
             (this->database->EDCU12FaultBYTE !=0)||(this->database->EDCU12FaultWORD !=0) )
    {
        ui->VehicleDoorPage_StateMC2->setStyleSheet(BUTTON_DOORRED);
    }else
    {
        ui->VehicleDoorPage_StateMC2->setStyleSheet(BUTTON_DOOROK);
    }
    //MC2
    if((!this->database->CANopenStatus_DOOR13)||(!this->database->CANopenStatus_DOOR14)||
       (!this->database->CANopenStatus_DOOR15)||(!this->database->CANopenStatus_DOOR16))
    {
        ui->VehicleDoorPage_StateM2->setStyleSheet(BUTTON_DOOROFFLINE);
    }else if((this->database->EDCU13FaultBYTE !=0)||(this->database->EDCU13FaultWORD !=0) ||
             (this->database->EDCU14FaultBYTE !=0)||(this->database->EDCU14FaultWORD !=0) ||
             (this->database->EDCU15FaultBYTE !=0)||(this->database->EDCU15FaultWORD !=0) ||
             (this->database->EDCU16FaultBYTE !=0)||(this->database->EDCU16FaultWORD !=0) )
    {
        ui->VehicleDoorPage_StateM2->setStyleSheet(BUTTON_DOORRED);
    }else
    {
        ui->VehicleDoorPage_StateM2->setStyleSheet(BUTTON_DOOROK);
    }
}

void VehicleDoorPage::on_VehicleDoorPage_StateMC1_pressed()
{
    this->database->HMI_TrainPos = 1;
    changePage(uVehicleDoorDetailStatesPage);
}

void VehicleDoorPage::on_VehicleDoorPage_StateM1_pressed()
{
    this->database->HMI_TrainPos = 3;
    changePage(uVehicleDoorDetailStatesPage);

}

void VehicleDoorPage::on_VehicleDoorPage_StateM2_pressed()
{
    this->database->HMI_TrainPos = 4;
    changePage(uVehicleDoorDetailStatesPage);

}

void VehicleDoorPage::on_VehicleDoorPage_StateMC2_pressed()
{
    this->database->HMI_TrainPos = 6;
    changePage(uVehicleDoorDetailStatesPage);

}

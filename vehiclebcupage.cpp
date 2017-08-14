#include "vehiclebcupage.h"
#include "ui_vehiclebcupage.h"

VehicleBCUPage::VehicleBCUPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleBCUPage)
{
    ui->setupUi(this);
    this->BCUPageID = 1;
}

VehicleBCUPage::~VehicleBCUPage()
{
    delete ui;
}
void VehicleBCUPage::showEvent(QShowEvent *)
{

}
void VehicleBCUPage::updatePage()
{
    switch(BCUPageID)
    {
    case 1:
        //PAGE1
        {
            ui->name_2->setText("制动系统故障");
            ui->name_3->setText("制动系统报警");
            ui->name_4->setText("制动施加/缓解");
            ui->name_5->setText("打滑保护");
            ui->name_6->setText("速度1");
            ui->name_7->setText("速度2");
            ui->name_8->setText("速度3");
            ui->name_9->setText("速度4");
            if(this->database->BR1CT_BSE_B1)
            {
                this->ui->state1_2->setStyleSheet(LABELCOLOR_RED);
                this->ui->state1_2->setText("故障");
            }else
            {
                this->ui->state1_2->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state1_2->setText("无");
            }

            if(this->database->BR1CT_BSW_B1)
            {
                this->ui->state1_3->setStyleSheet(LABELCOLOR_YELLOW);
                this->ui->state1_3->setText("报警");
            }else
            {
                this->ui->state1_3->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state1_3->setText("无");
            }

            if(this->database->BR1CT_BrApplied_B1)
            {
                this->ui->state1_4->setStyleSheet(LABELCOLOR_GREEN);
                this->ui->state1_4->setText("施加");
            }else if(this->database->BR1CT_BrRel_B1)
            {
                this->ui->state1_4->setStyleSheet(LABELCOLOR_WHITE);
                this->ui->state1_4->setText("缓解");
            }else
            {
                this->ui->state1_4->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state1_4->setText("无");
            }

            if(this->database->BR1CT_WSP_TC_B1)
            {
                this->ui->state1_5->setStyleSheet(LABELCOLOR_YELLOW);
                this->ui->state1_5->setText("有");
            }else
            {
                this->ui->state1_5->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state1_5->setText("无");
            }

            if(this->database->BR2CT_BSE_B1)
            {
                this->ui->state2_2->setStyleSheet(LABELCOLOR_RED);
                this->ui->state2_2->setText("故障");
            }else
            {
                this->ui->state2_2->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state2_2->setText("无");
            }

            if(this->database->BR2CT_BSW_B1)
            {
                this->ui->state2_3->setStyleSheet(LABELCOLOR_YELLOW);
                this->ui->state2_3->setText("报警");
            }else
            {
                this->ui->state2_3->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state2_3->setText("无");
            }

            if(this->database->BR2CT_BrApplied_B1)
            {
                this->ui->state2_4->setStyleSheet(LABELCOLOR_GREEN);
                this->ui->state2_4->setText("施加");
            }else if(this->database->BR2CT_BrRel_B1)
            {
                this->ui->state2_4->setStyleSheet(LABELCOLOR_WHITE);
                this->ui->state2_4->setText("缓解");
            }else
            {
                this->ui->state2_4->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state2_4->setText("无");
            }

            if(this->database->BR2CT_WSP_TC_B1)
            {
                this->ui->state2_5->setStyleSheet(LABELCOLOR_YELLOW);
                this->ui->state2_5->setText("有");
            }else
            {
                this->ui->state2_5->setStyleSheet(LABELCOLOR_LIGHTGRAY);
                this->ui->state2_5->setText("无");
            }


            this->ui->intro_2->setText("");
            this->ui->intro_3->setText("");
            this->ui->intro_6->setText("km/h");
            this->ui->intro_7->setText("km/h");
            this->ui->intro_8->setText("km/h");
            this->ui->intro_9->setText("km/h");

            this->ui->state1_6->setText(QString::number(this->database->BR1CT_Speed1));
            this->ui->state1_7->setText(QString::number(this->database->BR1CT_Speed2));
            this->ui->state1_8->setText(QString::number(this->database->BR1CT_Speed3));
            this->ui->state1_9->setText(QString::number(this->database->BR1CT_Speed4));

            this->ui->state2_6->setText(QString::number(this->database->BR2CT_Speed1));
            this->ui->state2_7->setText(QString::number(this->database->BR2CT_Speed2));
            this->ui->state2_8->setText(QString::number(this->database->BR2CT_Speed3));
            this->ui->state2_9->setText(QString::number(this->database->BR2CT_Speed4));
        }

        break;
    case 2:
        //PAGE2
        {
            ui->name_2->setText("载荷传感器1");
            ui->name_3->setText("载荷传感器2");
            ui->name_4->setText("");
            ui->name_5->setText("");
            ui->name_6->setText("");
            ui->name_7->setText("");
            ui->name_8->setText("");
            ui->name_9->setText("");

            this->ui->state1_2->setText(QString::number((float)database->BR1CT_LoadSensor1_U16/100,10,2));
            this->ui->state1_3->setText(QString::number((float)database->BR1CT_LoadSensor2_U16/100,10,2));
            this->ui->state1_4->setText("");
            this->ui->state1_5->setText("");
            this->ui->state1_6->setText("");
            this->ui->state1_7->setText("");
            this->ui->state1_8->setText("");
            this->ui->state1_9->setText("");

            this->ui->state1_2->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_3->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_4->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_5->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_6->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_7->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_8->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state1_9->setStyleSheet(LABELCOLOR_BACKGROUND);

            this->ui->state2_2->setText(QString::number((float)database->BR2CT_LoadSensor1_U16/100,10,2));
            this->ui->state2_3->setText(QString::number((float)database->BR2CT_LoadSensor2_U16/100,10,2));
            this->ui->state2_4->setText("");
            this->ui->state2_5->setText("");
            this->ui->state2_6->setText("");
            this->ui->state2_7->setText("");
            this->ui->state2_8->setText("");
            this->ui->state2_9->setText("");


            this->ui->state2_2->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_3->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_4->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_5->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_6->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_7->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_8->setStyleSheet(LABELCOLOR_BACKGROUND);
            this->ui->state2_9->setStyleSheet(LABELCOLOR_BACKGROUND);


            this->ui->intro_2->setText("mA");
            this->ui->intro_3->setText("mA");
            this->ui->intro_6->setText("");
            this->ui->intro_7->setText("");
            this->ui->intro_8->setText("");
            this->ui->intro_9->setText("");
        }

        break;
    default:
        break;
    }




    this->ui->VehicleBCUPage_Label_Page->setText("当前"+QString::number(BCUPageID)+"页/共"+QString::number(BCUMAXPage)+"页");

}

void VehicleBCUPage::on_VehicleBCUPage_Button_PrePage_pressed()
{
    if(BCUPageID > 1)
        BCUPageID--;
}

void VehicleBCUPage::on_VehicleBCUPage_Button_NextPage_pressed()
{
    if(BCUPageID < BCUMAXPage)
        BCUPageID++;
}

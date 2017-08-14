#include "vehicledoordetailstatespage.h"
#include "ui_vehicledoordetailstatespage.h"

VehicleDoorDetailStatesPage::VehicleDoorDetailStatesPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDoorDetailStatesPage)
{
    ui->setupUi(this);
}

VehicleDoorDetailStatesPage::~VehicleDoorDetailStatesPage()
{
    delete ui;
}
void VehicleDoorDetailStatesPage::updatePage()
{
    QList<int> color;

    switch(this->database->HMI_TrainPos)
    {
    case 1:
        {
            if(this->database->MC1drDoor1EmergencyUnlocktx)//MC1 紧急解锁
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor2EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor3EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor4EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor1Isotx)//MC1 门隔离
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor2Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor3Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor4Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor1Obstructetx)//MC1 障碍物检测被激活
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor2Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor3Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor4Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor1MaintenancePushbuttontx)//MC1 门维护按钮动作
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor2MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor3MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC1drDoor4MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            color.push_back(9);// reserve
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
        }
        break;
    case 3:
        {
            if(this->database->M1drDoor1EmergencyUnlocktx)//M1 紧急解锁
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor2EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor3EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor4EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor1Isotx)//M1 门隔离
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor2Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor3Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor4Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor1Obstructetx)//M1 障碍物检测被激活
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor2Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor3Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor4Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor1MaintenancePushbuttontx)//M1 门维护按钮动作
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor2MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor3MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M1drDoor4MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            color.push_back(9);// reserve
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
        }
        break;
    case 4:
        {
            if(this->database->M2drDoor1EmergencyUnlocktx)//M2 紧急解锁
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor2EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor3EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor4EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor1Isotx)//M2 门隔离
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor2Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor3Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor4Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor1Obstructetx)//M2 障碍物检测被激活
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor2Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor3Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor4Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor1MaintenancePushbuttontx)//M2 门维护按钮动作
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor2MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor3MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->M2drDoor4MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            color.push_back(9);// reserve
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
        }
        break;
    case 6:
        {
            if(this->database->MC2drDoor1EmergencyUnlocktx)//MC2 紧急解锁
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor2EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor3EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor4EmergencyUnlocktx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor1Isotx)//MC2 门隔离
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor2Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor3Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor4Isotx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor1Obstructetx)//MC2 障碍物检测被激活
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor2Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor3Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor4Obstructetx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor1MaintenancePushbuttontx)//MC2 门维护按钮动作
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor2MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor3MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            if(this->database->MC2drDoor4MaintenancePushbuttontx)
            {
                color.push_back(1);
            }else
            {
                color.push_back(4);
            }
            color.push_back(9);// reserve
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);

            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
            color.push_back(9);
        }
        break;
    default:
        break;
    }
    UpdateDoorStates(color);
}

void VehicleDoorDetailStatesPage::on_VehicleDoorDetailStatesPage_button_back_pressed()
{
    changePage(uVehicleDoorPage);
}

void VehicleDoorDetailStatesPage::showEvent(QShowEvent *)
{
    ui->name1->setText("紧急解锁");
    ui->name2->setText("门隔离");
    ui->name3->setText("障碍物检测被激活");
    ui->name4->setText("门维护按钮动作");
    ui->name5->setText("");
    ui->name6->setText("");
    ui->name7->setText("");
    ui->name8->setText("");

}
void VehicleDoorDetailStatesPage::UpdateDoorStates(QList<int> color)
{
    QList<QLabel *> labels;
    labels << ui->state1 << ui->state1_2 << ui->state1_3 << ui->state1_4
           << ui->state2 << ui->state2_2 << ui->state2_3 << ui->state2_4
           << ui->state3 << ui->state3_2 << ui->state3_3 << ui->state3_4
           << ui->state4 << ui->state4_2 << ui->state4_3 << ui->state4_4
           << ui->state5 << ui->state5_2 << ui->state5_3 << ui->state5_4
           << ui->state6 << ui->state6_2 << ui->state6_3 << ui->state6_4;

    for (int i = 0; i < labels.length(); i ++)
    {
        //set color
        // 1--green
        // 2--red
        // 3--gray
        // 4--lightgray
        if(color.at(i)>10)
        {
            _LOG << "color value invalid";

            return;
        }
        switch(color.at(i))
        {
        case 4:
            labels.at(i)->setStyleSheet(LABELCOLOR_LIGHTGRAY);
            break;
        case 1:
            labels.at(i)->setStyleSheet(LABELCOLOR_GREEN);
            break;
        case 2:
            labels.at(i)->setStyleSheet(LABELCOLOR_RED);
            break;
        case 3:
            labels.at(i)->setStyleSheet(LABELCOLOR_GRAY);
            break;
        case 9:
            labels.at(i)->setStyleSheet(LABELCOLOR_BACKGROUND);
            break;
        }
    }
}

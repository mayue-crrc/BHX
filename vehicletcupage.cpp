#include "vehicletcupage.h"
#include "ui_vehicletcupage.h"

VehicleTCUPage::VehicleTCUPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleTCUPage)
{
    ui->setupUi(this);
    TCUPageID = 1;
    TCUMaxPage = 4;
    TCUstatesBox = new StatesBox8x4(this);
    TCUstatesBox->setGeometry(60,10,TCUstatesBox->width(),TCUstatesBox->height());
    TCUstatesBox->SetBoxTitle(0);
}

VehicleTCUPage::~VehicleTCUPage()
{
    delete ui;
}
void VehicleTCUPage::showEvent(QShowEvent *)
{

}
void VehicleTCUPage::updatePage()
{
    QList<QString> names[TCUMaxPage],intro[TCUMaxPage],states[TCUMaxPage];
    QList<int> color[TCUMaxPage];
    //page1
    {
        intro[0] <<""<<""<<""<<""<<""<<""<<""<<"";
        names[0] <<"模块1工作"<<"模块2工作"<<"模块1制动"<<"模块2制动"
              <<"模块1报警"<<"模块2报警"<<"模块1故障"<<"模块2故障";
        if(this->database->TR1_1CT_Inverter1WorkM1_B1)//逆变器状态module1
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR2_1CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR3_1CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR4_1CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }

        if(this->database->TR1_2CT_Inverter1WorkM1_B1)//逆变器状态module2
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR2_2CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR3_2CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR4_2CT_Inverter1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }

        if(this->database->TR1_1CT_BrChop1WorkM1_B1)//制动module1
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR2_1CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR3_1CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR4_1CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }

        if(this->database->TR1_2CT_BrChop1WorkM1_B1)//制动module 2
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR2_2CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR3_2CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR4_2CT_BrChop1WorkM1_B1)
        {
            states[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->TR1_1CT_Inverter1WarnM1_B1)//报警module1
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR2_1CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR3_1CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR4_1CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR1_2CT_Inverter1WarnM1_B1)//报警module2
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR2_2CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR3_2CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR4_2CT_Inverter1WarnM1_B1)
        {
            states[0].push_back("报警");
            color[0].push_back(5);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR1_1CT_Inverter1FaultM1_B1)//故障module1
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR2_1CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR3_1CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR4_1CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }

        if(this->database->TR1_2CT_Inverter1FaultM1_B1)//故障module2
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR2_2CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR3_2CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
        if(this->database->TR4_2CT_Inverter1FaultM1_B1)
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }else
        {
            states[0].push_back("无");
            color[0].push_back(4);
        }
    }

    //page2
    {
        intro[1] <<""<<""<<""<<""<<""<<""<<""<<"";
        names[1] <<"模块1接触器"<<"模块2接触器"<<"模块1防滑"<<"模块2防滑"
              <<"模块1防空转"<<"模块2防空转"<<"模块1风机状态"<<"模块2风机状态";
        if(this->database->TR1_1CT_MainContactor1ClosedM1_B1)//模块1接触器
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR2_1CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR3_1CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR4_1CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }

        if(this->database->TR1_2CT_MainContactor1ClosedM1_B1)//模块2接触器
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR2_2CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR3_2CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }
        if(this->database->TR4_2CT_MainContactor1ClosedM1_B1)
        {
            states[1].push_back("闭合");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("断开");
            color[1].push_back(4);
        }

        if(this->database->TR1_1CT_Motor1SlideM1_B1)//模块1防滑
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR2_1CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR3_1CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR4_1CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }

        if(this->database->TR1_2CT_Motor1SlideM1_B1)//模块2防滑
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR2_2CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR3_2CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR4_2CT_Motor1SlideM1_B1)
        {
            states[1].push_back("防滑报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }

        if(this->database->TR1_1CT_Motor1SlipM1_B1)//模块1空转
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR2_1CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR3_1CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR4_1CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }

        if(this->database->TR1_2CT_Motor1SlipM1_B1)//模块2空转
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR2_2CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR3_2CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }
        if(this->database->TR4_2CT_Motor1SlipM1_B1)
        {
            states[1].push_back("空转报警");
            color[1].push_back(5);
        }else
        {
            states[1].push_back("无");
            color[1].push_back(4);
        }

        if(this->database->TR1_1CT_CoolingFanOKM1_B1)//风机状态模块1
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR2_1CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR3_1CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR4_1CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR1_2CT_CoolingFanOKM1_B1)//风机状态模块2
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR2_2CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR3_2CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
        if(this->database->TR4_2CT_CoolingFanOKM1_B1)
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }else
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }
    }

    //page3
    {
        intro[2] <<"Hz"<<"Hz"<<"A"<<"A"<<"V"<<"V"<<"V"<<"V";
        names[2] <<"模块1输出频率"<<"模块2输出频率"<<"模块1电机电流"<<"模块2电机电流"
              <<"模块1输出电压"<<"模块2输出电压"<<"模块1输入电压"<<"模块2输入电压";
        for(int i = 0; i < 32 ; i++)
        {
            color[2].push_back(9);
        }
        states[2].push_back(QString::number(this->database->TR1_1CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR2_1CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR3_1CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR4_1CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR1_2CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR2_2CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR3_2CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR4_2CT_OutputFreqM1_U8));
        states[2].push_back(QString::number(this->database->TR1_1CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR2_1CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR3_1CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR4_1CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR1_2CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR2_2CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR3_2CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR4_2CT_DynaCurrM1_U16));
        states[2].push_back(QString::number(this->database->TR1_1CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR2_1CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR3_1CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR4_1CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR1_2CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR2_2CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR3_2CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR4_2CT_OutputVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR1_1CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR2_1CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR3_1CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR4_1CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR1_2CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR2_2CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR3_2CT_NetVoltM1_U16));
        states[2].push_back(QString::number(this->database->TR4_2CT_NetVoltM1_U16));
    }

    //page4
    {
        intro[3] <<"km/h"<<"km/h"<<"℃"<<"℃"<<"mA"<<"mA"<<"ton"<<"";
        names[3] <<"电机1速度"<<"电机2速度"<<"电机1温度"<<"电机2温度"
                 <<"载荷传感器1"<<"载荷传感器2"<<"车重"<<"";

        states[3].push_back(QString::number(this->database->TR1_1CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR2_1CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR3_1CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR4_1CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR1_2CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR2_2CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR3_2CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR4_2CT_MotorSpeed_U8));
        states[3].push_back(QString::number(this->database->TR1_1CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR2_1CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR3_1CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR4_1CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR1_2CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR2_2CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR3_2CT_MotorTemp_U8));
        states[3].push_back(QString::number(this->database->TR4_2CT_MotorTemp_U8));

        states[3].push_back(QString::number((float)this->database->riomAxAi1Mc1/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi1M1/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi1M2/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi1Mc2/100,10,2));

        states[3].push_back(QString::number((float)this->database->riomAxAi2Mc1/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi2M1/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi2M2/100,10,2));
        states[3].push_back(QString::number((float)this->database->riomAxAi2Mc2/100,10,2));

        states[3].push_back(QString::number(this->database->CTTR1_CarLoad_U8));
        states[3].push_back(QString::number(this->database->CTTR2_CarLoad_U8));
        states[3].push_back(QString::number(this->database->CTTR3_CarLoad_U8));
        states[3].push_back(QString::number(this->database->CTTR4_CarLoad_U8));

        for(int i = 0; i < 32 ; i++)
        {
            color[3].push_back(9);
            if(i > 28)
            {
                states[3].push_back("");
            }
        }
    }
    TCUstatesBox->Updatestate_statename(names[TCUPageID-1],intro[TCUPageID-1]);
    TCUstatesBox->Updatestate_boxstate(states[TCUPageID-1],color[TCUPageID-1]);
    TCUstatesBox->SetBoxNameFontsize(16);
    this->ui->VehicleTCUPage_Label_Page->setText("当前"+QString::number(TCUPageID)+"页/共"+QString::number(TCUMaxPage)+"页");
}

void VehicleTCUPage::on_VehicleTCUPage_Button_NextPage_pressed()
{
    if(TCUPageID < TCUMaxPage)
        TCUPageID++;
}

void VehicleTCUPage::on_VehicleTCUPage_Button_PrePage_pressed()
{
    if(TCUPageID > 1)
        TCUPageID--;
}

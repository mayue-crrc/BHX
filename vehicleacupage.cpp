#include "vehicleacupage.h"
#include "ui_vehicleacupage.h"

VehicleACUPage::VehicleACUPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleACUPage)
{
    ui->setupUi(this);
    ACUstatesBox = new StatesBox8x4(this);
    ACUstatesBox->setGeometry(60,10,ACUstatesBox->width(),ACUstatesBox->height());
    ACUstatesBox->SetBoxTitle(0);
    ACUPageID = 1;
}

VehicleACUPage::~VehicleACUPage()
{
    delete ui;
}
void VehicleACUPage::showEvent(QShowEvent *)
{

}
void VehicleACUPage::updatePage()
{
    QList<QString> names[ACUMAXPage],intro[ACUMAXPage],states[ACUMAXPage];
    QList<int> color[ACUMAXPage];


    //按顺序 push 内容 一次push一整行
    //page1
    {
        names[0] << "辅助逆变器状态" << "辅助逆变器停机"<< "辅助输出电压" << "辅助输出电流"
                 << "辅助接触器状态" <<""  <<"" <<"";
        intro[0] << "" << ""<< "V" << "A"<< "" << ""<< "" << "";

        if(!this->database->AU1CT_StateOK_B1)//acu ok
        {
            states[0].push_back("正常");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }
        if(!this->database->AU2CT_StateOK_B1)//acu ok
        {
            states[0].push_back("正常");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }
        if(!this->database->AU3CT_StateOK_B1)//acu ok
        {
            states[0].push_back("正常");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }
        if(!this->database->AU4CT_StateOK_B1)//acu ok
        {
            states[0].push_back("正常");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("故障");
            color[0].push_back(2);
        }
        if(this->database->AU1CT_Stop_B1)//acu working
        {
            states[0].push_back("运行");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("停机");
            color[0].push_back(5);
        }
        if(this->database->AU2CT_Stop_B1)//acu working
        {
            states[0].push_back("运行");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("停机");
            color[0].push_back(5);
        }
        if(this->database->AU3CT_Stop_B1)//acu working
        {
            states[0].push_back("运行");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("停机");
            color[0].push_back(5);
        }
        if(this->database->AU4CT_Stop_B1)//acu working
        {
            states[0].push_back("运行");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("停机");
            color[0].push_back(5);
        }


        states[0].push_back(QString::number(this->database->AU1CT_OutputVolt_U16));//辅助输出电压
        states[0].push_back(QString::number(this->database->AU2CT_OutputVolt_U16));
        states[0].push_back(QString::number(this->database->AU3CT_OutputVolt_U16));
        states[0].push_back(QString::number(this->database->AU4CT_OutputVolt_U16));
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);

        states[0].push_back(QString::number(this->database->AU1CT_OutputCurr_U16));//辅助输出电流
        states[0].push_back(QString::number(this->database->AU2CT_OutputCurr_U16));
        states[0].push_back(QString::number(this->database->AU3CT_OutputCurr_U16));
        states[0].push_back(QString::number(this->database->AU4CT_OutputCurr_U16));
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);

        if(this->database->AU1CT_OutContactor_B1)//acu 接触器状态
        {
            states[0].push_back("闭合");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("断开");
            color[0].push_back(4);
        }
        if(this->database->AU2CT_OutContactor_B1)
        {
            states[0].push_back("闭合");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("断开");
            color[0].push_back(4);
        }
        if(this->database->AU3CT_OutContactor_B1)
        {
            states[0].push_back("闭合");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("断开");
            color[0].push_back(4);
        }
        if(this->database->AU4CT_OutContactor_B1)
        {
            states[0].push_back("闭合");
            color[0].push_back(1);
        }else
        {
            states[0].push_back("断开");
            color[0].push_back(4);
        }
//        QString t_4format;
//        t_4format.sprintf("%04X",this->database->AU1CT_FaultReg1_U16);//acu故障编码1
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU2CT_FaultReg1_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU3CT_FaultReg1_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU4CT_FaultReg1_U16);
//        states[0].push_back(t_4format);

//        t_4format.sprintf("%04X",this->database->AU1CT_FaultReg2_U16);//acu故障编码2
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU2CT_FaultReg2_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU3CT_FaultReg2_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU4CT_FaultReg2_U16);
//        states[0].push_back(t_4format);

//        t_4format.sprintf("%04X",this->database->AU1CT_FaultReg3_U16);//acu故障编码3
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU2CT_FaultReg3_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU3CT_FaultReg3_U16);
//        states[0].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->AU4CT_FaultReg3_U16);
//        states[0].push_back(t_4format);

        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");
        states[0].push_back("");

        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);

    }

    //page2
    {
        names[1] << "充电机状态" << "充电机停机"<< "充电机输出电压" << "充电机充电电流"
                 << "充电机负载电流" <<"蓄电池温度"  <<"" <<"";
        intro[1] << "" << ""<< "V" << "A"<< "A" << "℃"<< "" << "";


        if(this->database->BC1CT_BCCOK_B1)//bcc ok
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }
        if(this->database->BC2CT_BCCOK_B1)
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }
        if(this->database->BC3CT_BCCOK_B1)
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }
        if(this->database->BC4CT_BCCOK_B1)
        {
            states[1].push_back("正常");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("故障");
            color[1].push_back(2);
        }


        if(this->database->BC1CT_Stop_B1)//bcc working
        {
            states[1].push_back("运行");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("停机");
            color[1].push_back(5);
        }
        if(this->database->BC2CT_Stop_B1)
        {
            states[1].push_back("运行");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("停机");
            color[1].push_back(5);
        }
        if(this->database->BC3CT_Stop_B1)
        {
            states[1].push_back("运行");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("停机");
            color[1].push_back(5);
        }
        if(this->database->BC4CT_Stop_B1)
        {
            states[1].push_back("运行");
            color[1].push_back(1);
        }else
        {
            states[1].push_back("停机");
            color[1].push_back(5);
        }

        states[1].push_back(QString::number(this->database->BC1CT_OutputVolt_U8));//充电机输出电压
        states[1].push_back(QString::number(this->database->BC2CT_OutputVolt_U8));
        states[1].push_back(QString::number(this->database->BC3CT_OutputVolt_U8));
        states[1].push_back(QString::number(this->database->BC4CT_OutputVolt_U8));

        states[1].push_back(QString::number(this->database->BC1CT_ChargingCurr_U8));//充电电流
        states[1].push_back(QString::number(this->database->BC2CT_ChargingCurr_U8));
        states[1].push_back(QString::number(this->database->BC3CT_ChargingCurr_U8));
        states[1].push_back(QString::number(this->database->BC4CT_ChargingCurr_U8));

        states[1].push_back(QString::number(this->database->BC1CT_battCurr_U16));//负载电流
        states[1].push_back(QString::number(this->database->BC2CT_battCurr_U16));
        states[1].push_back(QString::number(this->database->BC3CT_battCurr_U16));
        states[1].push_back(QString::number(this->database->BC4CT_battCurr_U16));

//        QString t_4format;
//        t_4format.sprintf("%04X",this->database->BC1CT_FaultReg1_U16);//bcc故障编码1
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC2CT_FaultReg1_U16);
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC3CT_FaultReg1_U16);
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC4CT_FaultReg1_U16);
//        states[1].push_back(t_4format);

//        t_4format.sprintf("%04X",this->database->BC1CT_FaultReg2_U16);//bcc故障编码2
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC2CT_FaultReg2_U16);
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC3CT_FaultReg2_U16);
//        states[1].push_back(t_4format);
//        t_4format.sprintf("%04X",this->database->BC4CT_FaultReg2_U16);
//        states[1].push_back(t_4format);
        if(this->database->BC1CT_BattTemp_U8>220)                       //蓄电池温度
        {
            states[1].push_back("##");
        }else
        {
            states[1].push_back(QString::number(this->database->BC1CT_BattTemp_U8-100));
        }
        if(this->database->BC2CT_BattTemp_U8>220)
        {
            states[1].push_back("##");
        }else
        {
            states[1].push_back(QString::number(this->database->BC2CT_BattTemp_U8-100));
        }
        if(this->database->BC3CT_BattTemp_U8>220)
        {
            states[1].push_back("##");
        }else
        {
            states[1].push_back(QString::number(this->database->BC3CT_BattTemp_U8-100));
        }
        if(this->database->BC4CT_BattTemp_U8>220)
        {
            states[1].push_back("##");
        }else
        {
            states[1].push_back(QString::number(this->database->BC4CT_BattTemp_U8-100));
        }

        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");
        states[1].push_back("");

        for(int i = 0; i<24 ;i++)
        {
            color[1].push_back(9);
        }

    }

    ACUstatesBox->Updatestate_boxstate(states[ACUPageID-1],color[ACUPageID-1]);
    ACUstatesBox->Updatestate_statename(names[ACUPageID-1],intro[ACUPageID-1]);
    ACUstatesBox->SetBoxNameFontsize(16);
    this->ui->VehicleACUPage_Label_Page->setText("当前"+QString::number(ACUPageID)+"页/共"+QString::number(ACUMAXPage)+"页");
}

void VehicleACUPage::on_VehicleACUPage_Button_PrePage_pressed()
{
    if(ACUPageID > 1)
        ACUPageID--;
}

void VehicleACUPage::on_VehicleACUPage_Button_NextPage_pressed()
{
    if(ACUPageID < ACUMAXPage)
        ACUPageID++;
}

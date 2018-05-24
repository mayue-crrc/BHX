#include "vehiclehvacpage.h"
#include "ui_vehiclehvacpage.h"
VehicleHVACPage::VehicleHVACPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleHVACPage)
{
    ui->setupUi(this);
    HVACPageNum = 1;
    HVACMaxPage = 2;
    HVACStatesPage = new StatesBox8x4(this);
    HVACStatesPage->setGeometry(50,0,HVACStatesPage->width(),HVACStatesPage->height());
    HVACStatesPage->SetBoxTitle(0);
    HVACStatesPage->hide();
    ResetAllHVACBtn();
    tempbtnID = 0;
    tempbtn.push_back(ui->VHVAC_Button_Tempminus1);
    tempbtn.push_back(ui->VHVAC_Button_Tempminus2);
    tempbtn.push_back(ui->VHVAC_Button_Tempplus1);
    tempbtn.push_back(ui->VHVAC_Button_Tempplus2);
    //tempbtn.push_back(ui->VHVAC_Button_HVACUIC);

    ctrlbtnID = 0;
    ctrlbtn.push_back(ui->VHVAC_Button_HVACAutoCold);
    ctrlbtn.push_back(ui->VHVAC_Button_HVACAutoWarm);
    ctrlbtn.push_back(ui->VHVAC_Button_HVACVen);
    ctrlbtn.push_back(ui->VHVAC_Button_HVACStop);
    ctrlbtn.push_back(ui->VHVAC_Button_HVACVwarmtest);
    ctrlbtn.push_back(ui->VHVAC_Button_HVACVcoldtest);

    m_15mincnt = 0;
    testbtnID = 0;
    //testbtn.push_back(ui->VHVAC_Button_HVACVcoldtest);
    //testbtn.push_back(ui->VHVAC_Button_HVACVwarmtest);
    //testbtn.push_back(ui->VHVAC_Button_HVACVentest);
}

VehicleHVACPage::~VehicleHVACPage()
{
    delete ui;
}
void VehicleHVACPage::showEvent(QShowEvent *)
{

    ui->VHVAC_Label_Page->setText("当前"+QString::number(HVACPageNum)+"页\n共"+QString::number(HVACMaxPage)+"页");

}
void VehicleHVACPage::updatePage()
{
    QList<QString> signal[HVACMaxPage];
    QList<QString> name[HVACMaxPage];
    QList<QString> intro[HVACMaxPage];
    QList<int> color[HVACMaxPage];
    //page1
    {
        intro[0] <<"" <<"" <<"℃" <<"℃" <<"" <<""<<"℃";
        name[0] << "控制模式"<< "运行模式"<<"室内温度" << "室外温度"<<"通风机1"<<"通风机2"<<"设定温度";
        if(this->database->HVAC1CTTCMS_control)//控制模式
        {
            signal[0].push_back("网络控制");
        }else if(this->database->HVAC1CTLocal_control)
        {
            signal[0].push_back("本地控制");
        }else
        {
            signal[0].push_back("无");
        }
        if(this->database->HVAC2CTTCMS_control)
        {
            signal[0].push_back("网络控制");
        }else if(this->database->HVAC2CTLocal_control)
        {
            signal[0].push_back("本地控制");
        }else
        {
            signal[0].push_back("无");
        }
        if(this->database->HVAC3CTTCMS_control)
        {
            signal[0].push_back("网络控制");
        }else if(this->database->HVAC3CTLocal_control)
        {
            signal[0].push_back("本地控制");
        }else
        {
            signal[0].push_back("无");
        }
        if(this->database->HVAC4CTTCMS_control)
        {
            signal[0].push_back("网络控制");
        }else if(this->database->HVAC4CTLocal_control)
        {
            signal[0].push_back("本地控制");
        }else
        {
            signal[0].push_back("无");
        }

        if(this->database->HVAC1CTstop_mode)//运行模式1
        {
            signal[0].push_back("停机");
        }else if(this->database->HVAC1CTReduce_Load_FB)
        {
            signal[0].push_back("减载");
        }else if(this->database->HVAC1CT_Coldtest)
        {
            signal[0].push_back("制冷测试");
        }else if(this->database->HVAC1CT_Warmtest)
        {
            signal[0].push_back("制暖测试");
        }else if(this->database->HVAC1CTventilation_mode)
        {
            signal[0].push_back("通风");
        }else if(this->database->HVAC1CTPre_Cold)
        {
            signal[0].push_back("预冷");
        }else if(this->database->HVAC1CTPre_Warm)
        {
            signal[0].push_back("预暖");
        }else if(this->database->HVAC1CTauto_Cold_mode)
        {
            signal[0].push_back("自动冷");
        }else if(this->database->HVAC1CTauto_Warm_mode)
        {
            signal[0].push_back("自动暖");
        }else
        {
            signal[0].push_back("无");
        }

        if(this->database->HVAC2CTstop_mode)//运行模式1
        {
            signal[0].push_back("停机");
        }else if(this->database->HVAC2CTReduce_Load_FB)
        {
            signal[0].push_back("减载");
        }else if(this->database->HVAC2CT_Coldtest)
        {
            signal[0].push_back("制冷测试");
        }else if(this->database->HVAC2CT_Warmtest)
        {
            signal[0].push_back("制暖测试");
        }else if(this->database->HVAC2CTventilation_mode)
        {
            signal[0].push_back("通风");
        }else if(this->database->HVAC2CTPre_Cold)
        {
            signal[0].push_back("预冷");
        }else if(this->database->HVAC2CTPre_Warm)
        {
            signal[0].push_back("预暖");
        }else if(this->database->HVAC2CTauto_Cold_mode)
        {
            signal[0].push_back("自动冷");
        }else if(this->database->HVAC2CTauto_Warm_mode)
        {
            signal[0].push_back("自动暖");
        }else
        {
            signal[0].push_back("无");
        }

        if(this->database->HVAC3CTstop_mode)//运行模式1
        {
            signal[0].push_back("停机");
        }else if(this->database->HVAC3CTReduce_Load_FB)
        {
            signal[0].push_back("减载");
        }else if(this->database->HVAC3CT_Coldtest)
        {
            signal[0].push_back("制冷测试");
        }else if(this->database->HVAC3CT_Warmtest)
        {
            signal[0].push_back("制暖测试");
        }else if(this->database->HVAC3CTventilation_mode)
        {
            signal[0].push_back("通风");
        }else if(this->database->HVAC3CTPre_Cold)
        {
            signal[0].push_back("预冷");
        }else if(this->database->HVAC3CTPre_Warm)
        {
            signal[0].push_back("预暖");
        }else if(this->database->HVAC3CTauto_Cold_mode)
        {
            signal[0].push_back("自动冷");
        }else if(this->database->HVAC3CTauto_Warm_mode)
        {
            signal[0].push_back("自动暖");
        }else
        {
            signal[0].push_back("无");
        }

        if(this->database->HVAC4CTstop_mode)//运行模式1
        {
            signal[0].push_back("停机");
        }else if(this->database->HVAC4CTReduce_Load_FB)
        {
            signal[0].push_back("减载");
        }else if(this->database->HVAC4CT_Coldtest)
        {
            signal[0].push_back("制冷测试");
        }else if(this->database->HVAC4CT_Warmtest)
        {
            signal[0].push_back("制暖测试");
        }else if(this->database->HVAC4CTventilation_mode)
        {
            signal[0].push_back("通风");
        }else if(this->database->HVAC4CTPre_Cold)
        {
            signal[0].push_back("预冷");
        }else if(this->database->HVAC4CTPre_Warm)
        {
            signal[0].push_back("预暖");
        }else if(this->database->HVAC4CTauto_Cold_mode)
        {
            signal[0].push_back("自动冷");
        }else if(this->database->HVAC4CTauto_Warm_mode)
        {
            signal[0].push_back("自动暖");
        }else
        {
            signal[0].push_back("无");
        }


        signal[0].push_back(QString::number(this->database->HVAC1CTTemp_Inside - 30));
        signal[0].push_back(QString::number(this->database->HVAC2CTTemp_Inside - 30));
        signal[0].push_back(QString::number(this->database->HVAC3CTTemp_Inside - 30));
        signal[0].push_back(QString::number(this->database->HVAC4CTTemp_Inside - 30));
        signal[0].push_back(QString::number(this->database->HVAC1CTTemp_Outside - 30));
        signal[0].push_back(QString::number(this->database->HVAC2CTTemp_Outside - 30));
        signal[0].push_back(QString::number(this->database->HVAC3CTTemp_Outside - 30));
        signal[0].push_back(QString::number(this->database->HVAC4CTTemp_Outside - 30));
        for(int i = 0; i < 16; i++)
        {
            color[0].push_back(9);
        }
        if(this->database->HVAC1CTevapraor_fan1_status)//通风机1
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC2CTevapraor_fan1_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC3CTevapraor_fan1_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC4CTevapraor_fan1_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }

        if(this->database->HVAC1CTevapraor_fan2_status)//通风机2
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC2CTevapraor_fan2_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC3CTevapraor_fan2_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        if(this->database->HVAC4CTevapraor_fan2_status)
        {
            signal[0].push_back("工作");
            color[0].push_back(1);
        }else
        {
            signal[0].push_back("未工作");
            color[0].push_back(4);
        }
        signal[0].push_back(QString::number(this->database->HVAC1CTTemp_Set - 30));
        signal[0].push_back(QString::number(this->database->HVAC2CTTemp_Set - 30));
        signal[0].push_back(QString::number(this->database->HVAC3CTTemp_Set - 30));
        signal[0].push_back(QString::number(this->database->HVAC4CTTemp_Set - 30));
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);
        color[0].push_back(9);

        //ui->VHVAC_Label_Tempshow->setText(QString::number(this->database->HVAC1CTTemp_Set-30)+"℃");
    }

    //page2
    {
        intro[1] <<"" <<"" <<"" <<"" <<"" <<""<<""<<"";
        name[1] << "冷凝机1"<< "冷凝机2"<<"压缩机1" << "压缩机2"<<"电加热1"<<"电加热2"<<"新风阀状态"<<"回风阀状态";
        if(this->database->HVAC1CTcondenser_fan1_status)//冷凝机1
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTcondenser_fan1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTcondenser_fan1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTcondenser_fan1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }

        if(this->database->HVAC1CTcondenser_fan2_status)//冷凝机2
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTcondenser_fan2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTcondenser_fan2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTcondenser_fan2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }

        if(this->database->HVAC1CTcompressor1_status)//压缩机1
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTcompressor1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTcompressor1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTcompressor1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC1CTcompressor2_status)//压缩机2
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTcompressor2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTcompressor2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTcompressor2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC1_Heater1_status)//电加热状态
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2_Heater1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3_Heater1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4_Heater1_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC1_Heater2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC2_Heater2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC3_Heater2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC4_Heater2_status)
        {
            signal[1].push_back("工作");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("未工作");
            color[1].push_back(4);
        }
        if(this->database->HVAC1CTfresh_air_damper_status)//新风阀状态
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTfresh_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTfresh_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTfresh_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC1CTreturn_air_damper_status)//回风阀状态
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC2CTreturn_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC3CTreturn_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }
        if(this->database->HVAC4CTreturn_air_damper_status)
        {
            signal[1].push_back("打开");
            color[1].push_back(1);
        }else
        {
            signal[1].push_back("关闭");
            color[1].push_back(4);
        }


    }
    if(HVACPageNum == 1)
    {
        ShowFirstPage();
        UpdateHVACName(name[0],intro[0]);
        UpdateHVACState(signal[0],color[0]);

        if(tempbtnID > 0)
        {
            for(int i = 0; i < tempbtn.size(); i++)
            {
                if(i == tempbtnID-1)
                {
                    tempbtn.at(i)->setStyleSheet(MY_HVACBUTTON_DOWN);

                }else
                {
                    tempbtn.at(i)->setStyleSheet(MY_HVACBUTTON_UP);
                }
            }
        }else
        {
            for(int i = 0; i < tempbtn.size(); i++)
            {
                tempbtn.at(i)->setStyleSheet(MY_HVACBUTTON_UP);
            }
        }

        if(!(this->database->HMiCT_AutoWarm_B1  || this->database->HMiCT_AutoCold_B1) ) // 只有自动模式才可以调节温度
        {
            resettempbtn();
            tempbtnID = 0;
            for(int i = 0; i < tempbtn.size(); i++)
            {
                tempbtn.at(i)->setStyleSheet(MY_HVACBUTTON_UP);
            }
        }



        if(ctrlbtnID > 0)
        {
            for(int i = 0; i < ctrlbtn.size(); i++)
            {
                if(i == ctrlbtnID-1)
                {
                    ctrlbtn.at(i)->setStyleSheet(MY_HVACBUTTON_DOWN);
                }else
                {
                    ctrlbtn.at(i)->setStyleSheet(MY_HVACBUTTON_UP);

                }
            }
        }else
        {
            for(int i = 0; i < ctrlbtn.size(); i++)
            {
                ctrlbtn.at(i)->setStyleSheet(MY_HVACBUTTON_UP);
            }
        }



        if(this->database->HMI_StopHVACtest_B1)
        {
            this->database->HMI_StopHVACtest_B1 = false;
            this->database->HMI_15minscnt = 0;
            this->database->HMiCT_TestCold_B1 = false;
            this->database->HMiCT_TestWarm_B1  = false;
            this->database->HMiCT_Stop_B1 = true;
            ui->VHVAC_Button_HVACVcoldtest->setStyleSheet(MY_HVACBUTTON_UP);
            ui->VHVAC_Button_HVACVwarmtest->setStyleSheet(MY_HVACBUTTON_UP);

            ctrlbtnID = 0;
        }

    }else
    {
        HideFirstPage();
        this->HVACStatesPage->Updatestate_statename(name[HVACPageNum-1],intro[HVACPageNum-1]);
        this->HVACStatesPage->Updatestate_boxstate(signal[HVACPageNum-1],color[HVACPageNum-1]);
        this->HVACStatesPage->SetBoxNameFontsize(16);

    }
    ui->VHVAC_Label_Page->setText("当前"+QString::number(HVACPageNum)+"页\n共"+QString::number(HVACMaxPage)+"页");



}
void VehicleHVACPage::UpdateHVACState(QList<QString> str,QList<int> color)
{
    QList<QLabel *> labels;
    labels << ui->state1 << ui->state1_2 << ui->state1_3 << ui->state1_4
           << ui->state2 << ui->state2_2 << ui->state2_3 << ui->state2_4
           << ui->state3 << ui->state3_2 << ui->state3_3 << ui->state3_4
           << ui->state4 << ui->state4_2 << ui->state4_3 << ui->state4_4
           << ui->state5 << ui->state5_2 << ui->state5_3 << ui->state5_4
           << ui->state6 << ui->state6_2 << ui->state6_3 << ui->state6_4
           << ui->state7 << ui->state7_2 << ui->state7_3 << ui->state7_4;

    if(str.length() == labels.length())
    {
        for (int i = 0; i < labels.length(); i ++)
        {
            labels.at(i)->setText(str.at(i));
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
    }else
    {
        _LOG << "HVAC labels and signals "<< QString::number(str.length())<< "not equals in Page " + QString::number(HVACPageNum);

    }


}
void VehicleHVACPage::UpdateHVACName(QList<QString> str,QList<QString> intro)
{
    QList<QLabel *> labels;

    labels << ui->name1
           << ui->name2
           << ui->name3
           << ui->name4
           << ui->name5
           << ui->name6
           << ui->name7
           << ui->intro1
            << ui->intro2
            << ui->intro3
            << ui->intro4
            << ui->intro5
            << ui->intro6
            << ui->intro7
            <<ui->intro
            <<ui->M1
            <<ui->M2
            <<ui->MC1
            <<ui->MC2
            <<ui->name;


//    for (int i = 0; i < labels.length(); i ++)
//    {
//        labels.at(i)->setStyleSheet(LABELCOLOR_LIGHTGRAY);
//    }
    if(str.length() == intro.length())
    {
        for (int i = 0; i < str.length(); i ++)
        {
            labels.at(i)->setText(str.at(i));
            labels.at(i+7)->setText(intro.at(i));
        }

    }else
    {
        _LOG << "HVAC name and intro not equals in Page " + QString::number(HVACPageNum);
    }

}




void VehicleHVACPage::on_VHVAC_Button_NextPage_pressed()
{
    if(HVACPageNum<HVACMaxPage)
    {
        HVACPageNum++;
    }
}
void VehicleHVACPage::on_VHVAC_Button_PrePage_pressed()
{
    if(HVACPageNum>1)
    {
        HVACPageNum--;
    }
}

void VehicleHVACPage::HideFirstPage()
{
    ui->name1->hide();
    ui->name2->hide();
    ui->name3->hide();
    ui->name4->hide();
    ui->name5->hide();
    ui->name6->hide();
    ui->name7->hide();

    ui->intro1->hide();
    ui->intro2->hide();
    ui->intro3->hide();
    ui->intro4->hide();
    ui->intro5->hide();
    ui->intro6->hide();
    ui->intro7->hide();

    ui->intro->hide();
    ui->M1->hide();
    ui->M2->hide();
    ui->MC1->hide();
    ui->MC2->hide();
    ui->name->hide();
    ui->state1->hide();
    ui->state1_2->hide();
    ui->state1_3->hide();
    ui->state1_4->hide();
    ui->state2->hide();
    ui->state2_2->hide();
    ui->state2_3->hide();
    ui->state2_4->hide();
    ui->state3->hide();
    ui->state3_2->hide();
    ui->state3_3->hide();
    ui->state3_4->hide();
    ui->state4->hide();
    ui->state4_2->hide();
    ui->state4_3->hide();
    ui->state4_4->hide();
    ui->state5->hide();
    ui->state5_2->hide();
    ui->state5_3->hide();
    ui->state5_4->hide();
    ui->state6->hide();
    ui->state6_2->hide();
    ui->state6_3->hide();
    ui->state6_4->hide();
    ui->state7->hide();
    ui->state7_2->hide();
    ui->state7_3->hide();
    ui->state7_4->hide();
    ui->VHVAC_Button_HVACAutoCold->hide();
    ui->VHVAC_Button_HVACAutoWarm->hide();
    ui->VHVAC_Button_HVACVen->hide();
    ui->VHVAC_Button_HVACStop->hide();
    ui->VHVAC_Button_Tempminus1->hide();
    ui->VHVAC_Button_Tempminus2->hide();
    ui->VHVAC_Button_Tempplus1->hide();
    ui->VHVAC_Button_Tempplus2->hide();
    ui->VHVAC_Button_HVACVcoldtest->hide();
    ui->VHVAC_Button_HVACVwarmtest->hide();
    //ui->VHVAC_Button_HVACVentest->hide();
    //ui->VHVAC_Button_HVACUIC->hide();
    HVACStatesPage->show();
    //ui->VHVAC_Label_Page->hide();
    //ui->VHVAC_Label_Tempshow->hide();
    ui->label_line1->hide();
    ui->label_line2->hide();
    ui->label_line3->hide();
    ui->label_line4->hide();
    ui->label_line5->hide();
    ui->label_line6->hide();
    ui->label_line7->hide();

    ui->label_row1->hide();
    ui->label_row2->hide();
    ui->label_row3->hide();
    ui->VHVAC_Button_heat1->hide();
    ui->VHVAC_Button_heat2->hide();
    //ui->VHVAC_Label_Tempshow_2->hide();
    ui->VehicleHVACPage_background->hide();
    ui->VHVAC_Label_help->hide();
    ui->VHVAC_helpbackground->hide();
    ui->VHVAC_helpbackground_2->hide();

}
void VehicleHVACPage::ShowFirstPage()
{

    ui->name1->show();
    ui->name2->show();
    ui->name3->show();
    ui->name4->show();
    ui->name5->show();
    ui->name6->show();
    ui->name7->show();

    ui->intro1->show();
    ui->intro2->show();
    ui->intro3->show();
    ui->intro4->show();
    ui->intro5->show();
    ui->intro6->show();
    ui->intro7->show();

    ui->intro->show();
    ui->M1->show();
    ui->M2->show();
    ui->MC1->show();
    ui->MC2->show();
    ui->name->show();
    ui->state1->show();
    ui->state1_2->show();
    ui->state1_3->show();
    ui->state1_4->show();
    ui->state2->show();
    ui->state2_2->show();
    ui->state2_3->show();
    ui->state2_4->show();
    ui->state3->show();
    ui->state3_2->show();
    ui->state3_3->show();
    ui->state3_4->show();
    ui->state4->show();
    ui->state4_2->show();
    ui->state4_3->show();
    ui->state4_4->show();
    ui->state5->show();
    ui->state5_2->show();
    ui->state5_3->show();
    ui->state5_4->show();
    ui->state6->show();
    ui->state6_2->show();
    ui->state6_3->show();
    ui->state6_4->show();
    ui->state7->show();
    ui->state7_2->show();
    ui->state7_3->show();
    ui->state7_4->show();
    ui->VHVAC_Button_HVACAutoCold->show();
    ui->VHVAC_Button_HVACAutoWarm->show();
    ui->VHVAC_Button_HVACVen->show();
    ui->VHVAC_Button_HVACStop->show();
    ui->VHVAC_Button_Tempminus1->show();
    ui->VHVAC_Button_Tempminus2->show();
    ui->VHVAC_Button_Tempplus1->show();
    ui->VHVAC_Button_Tempplus2->show();
    ui->VHVAC_Button_HVACVcoldtest->show();
    ui->VHVAC_Button_HVACVwarmtest->show();
    //ui->VHVAC_Button_HVACVentest->hide();
    //ui->VHVAC_Button_HVACUIC->show();
    HVACStatesPage->hide();
    //ui->VHVAC_Label_Page->show();
    //ui->VHVAC_Label_Tempshow->show();
    ui->label_line1->show();
    ui->label_line2->show();
    ui->label_line3->show();
    ui->label_line4->show();
    ui->label_line5->show();
    ui->label_line6->show();
    ui->label_line7->show();

    ui->label_row1->show();
    ui->label_row2->show();
    ui->label_row3->show();
    ui->VHVAC_Button_heat1->show();
    ui->VHVAC_Button_heat2->show();
    ui->VehicleHVACPage_background->show();
    ui->VHVAC_Label_help->show();
    ui->VHVAC_helpbackground->show();
    ui->VHVAC_helpbackground_2->show();

    //ui->VHVAC_Label_Tempshow_2->show();

}
void VehicleHVACPage::ResetAllHVACBtn()
{
    ui->VHVAC_Button_HVACAutoCold->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_HVACAutoWarm->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_HVACVen->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_HVACStop->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_Tempminus1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_Tempminus2->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_Tempplus1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_Tempplus2->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_HVACVcoldtest->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_HVACVwarmtest->setStyleSheet(MY_HVACBUTTON_UP);
    //ui->VHVAC_Button_HVACVentest->setStyleSheet(MY_HVACBUTTON_UP);
    //ui->VHVAC_Button_HVACUIC->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_UP);

}

void VehicleHVACPage::on_VHVAC_Button_HVACAutoCold_pressed()
{
    if(ctrlbtnID == 1)
    {
//        this->database->HMiCT_AutoCold_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 1;
    resetctrlbtn();
    this->database->HMiCT_AutoCold_B1  =true;
}

void VehicleHVACPage::on_VHVAC_Button_HVACAutoWarm_pressed()
{
    if(ctrlbtnID == 2)
    {
//        this->database->HMiCT_AutoWarm_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 2;
    resetctrlbtn();
    this->database->HMiCT_AutoWarm_B1 = true;


}



void VehicleHVACPage::on_VHVAC_Button_HVACVen_pressed()
{
    if(ctrlbtnID == 3)
    {
//        this->database->HMiCT_Ventilation_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 3;
    resetctrlbtn();
    this->database->HMiCT_Ventilation_B1 = true;
}

/*void VehicleHVACPage::on_VHVAC_Button_HVACEmVen_pressed()
{
    if(ctrlbtnID == 4)
    {
        //this->database->HMiCT_EmcyVentilation_B1 = false;
        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 4;
    resetctrlbtn();
    //this->database->HMiCT_EmcyVentilation_B1  =true;
}

void VehicleHVACPage::on_VHVAC_Button_HVACReduceload_pressed()
{
    if(ctrlbtnID == 5)
    {
        //this->database->HMiCT_ReduceLoad_B1 = false;
        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 5;
    resetctrlbtn();
    //this->database->HMiCT_ReduceLoad_B1 = true;
}
*/
void VehicleHVACPage::on_VHVAC_Button_HVACStop_pressed()
{
    if(ctrlbtnID == 4)
    {
//        this->database->HMiCT_Stop_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 4;
    resetctrlbtn();
    this->database->HMiCT_Stop_B1 = true;
}
void VehicleHVACPage::resetctrlbtn()
{
    this->database->HMiCT_AutoWarm_B1 = false;
    this->database->HMiCT_AutoCold_B1 = false;
    this->database->HMiCT_Ventilation_B1 = false;
    this->database->HMiCT_Stop_B1 = false;
    this->database->HMiCT_TestCold_B1 = false;
    this->database->HMiCT_TestWarm_B1 = false;
}
void VehicleHVACPage::on_VHVAC_Button_Tempplus1_pressed()
{
    if(this->database->HMiCT_AutoWarm_B1  || this->database->HMiCT_AutoCold_B1 )
    {
        if(tempbtnID == 3)
        {
            this->database->HMiCT_Add1_B1 = false;
            tempbtnID = 0;
            return;
        }
        tempbtnID = 3;
        resettempbtn();
        this->database->HMiCT_Add1_B1 = true;
    }

}

void VehicleHVACPage::on_VHVAC_Button_Tempplus2_pressed()
{
    if(this->database->HMiCT_AutoWarm_B1  || this->database->HMiCT_AutoCold_B1 )
    {
        if(tempbtnID == 4)
        {
            this->database->HMiCT_Add2_B1 = false;
            tempbtnID = 0;
            return;
        }
        tempbtnID = 4;
        resettempbtn();
        this->database->HMiCT_Add2_B1 = true;
    }

}

void VehicleHVACPage::on_VHVAC_Button_Tempminus1_pressed()
{
    if(this->database->HMiCT_AutoWarm_B1  || this->database->HMiCT_AutoCold_B1 )
    {
        if(tempbtnID == 1)
        {
            this->database->HMiCT_Reduce1_B1 = false;
            tempbtnID = 0;
            return;
        }
        tempbtnID = 1;
        resettempbtn();
        this->database->HMiCT_Reduce1_B1 = true;
    }


}

void VehicleHVACPage::on_VHVAC_Button_Tempminus2_pressed()
{
    if(this->database->HMiCT_AutoWarm_B1  || this->database->HMiCT_AutoCold_B1 )
    {
        if(tempbtnID == 2)
        {
            this->database->HMiCT_Reduce2_B1 = false;
            tempbtnID = 0;
            return;
        }
        tempbtnID = 2;
        resettempbtn();
        this->database->HMiCT_Reduce2_B1 = true;
    }

}

/*void VehicleHVACPage::on_VHVAC_Button_HVACUIC_pressed()
{
    if(tempbtnID == 5)
    {
        this->database->HMiCT_UICMode_B1 = false;
        tempbtnID = 0;
        return;
    }
    tempbtnID = 5;
    resettempbtn();
    this->database->HMiCT_UICMode_B1 = true;
}*/
void VehicleHVACPage::resettempbtn()
{
    this->database->HMiCT_Add1_B1 = false;
    this->database->HMiCT_Add2_B1 = false;
    this->database->HMiCT_Reduce1_B1 = false;
    this->database->HMiCT_Reduce2_B1 = false;
    this->database->HMiCT_UICMode_B1 = false;

}


void VehicleHVACPage::on_VHVAC_Button_HVACVwarmtest_pressed()
{
    if(this->database->HMiCT_TestWarm_B1)
    {
//        this->database->HMiCT_TestWarm_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 5;
    m_15mincnt = 0;
    resetctrlbtn();
    this->database->HMiCT_TestWarm_B1 = true;
}


void VehicleHVACPage::on_VHVAC_Button_HVACVcoldtest_pressed()
{
    if(this->database->HMiCT_TestCold_B1)
    {
//        this->database->HMiCT_TestCold_B1 = false;
//        ctrlbtnID = 0;
        return;
    }
    ctrlbtnID = 6;
    m_15mincnt = 0;
    resetctrlbtn();
    this->database->HMiCT_TestCold_B1 = true;
}

void VehicleHVACPage::on_VHVAC_Button_heat1_pressed()
{
    if(this->database->HMiCT_Heat1_B1)
    {
        this->database->HMiCT_Heat1_B1 = false;
        ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_UP);
    }
    else
    {
        this->database->HMiCT_Heat1_B1 = true;
        ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_DOWN);
        this->database->HMiCT_Heat2_B1 = false;
        ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_UP);
    }
}

void VehicleHVACPage::on_VHVAC_Button_heat2_pressed()
{
    if(this->database->HMiCT_Heat2_B1)
    {
        this->database->HMiCT_Heat2_B1 = false;
        ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_UP);
    }
    else
    {
        this->database->HMiCT_Heat2_B1 = true;
        ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_DOWN);
        this->database->HMiCT_Heat1_B1 = false;
        ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_UP);
    }
}

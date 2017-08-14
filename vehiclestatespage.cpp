#include "vehiclestatespage.h"
#include "ui_vehiclestatespage.h"

VehicleStatesPage::VehicleStatesPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleStatesPage)
{
    ui->setupUi(this);
    statesbox8x4 = new StatesBox8x4(this);
    statesbox8x4->setGeometry(60,10,statesbox8x4->width(),statesbox8x4->height());
    statesbox8x4->SetBoxTitle(1);
    statesbox8x4->SetBoxTitleStr("1 2 3 车","4 5 6 车");
    statesbox8x2 = new StatesBox8x2(this);
    statesbox8x2->setGeometry(60,10,statesbox8x2->width(),statesbox8x2->height());
    statesbox8x2->hide();
    //statesbox8x2->SetBoxTitle(1);
    StatesMaxPage = 5;
    StatepageID = 1;

}

VehicleStatesPage::~VehicleStatesPage()
{
    delete ui;
}
void VehicleStatesPage::showEvent(QShowEvent *)
{

}
void VehicleStatesPage::updatePage()
{
    QList<QString> names[StatesMaxPage],intro[StatesMaxPage],states[StatesMaxPage];
    QList<int> color[StatesMaxPage];
    //PAGE1
    {
        intro[0] <<"列车线"<<"列车线"<<"列车线"<<"列车线"
                 <<"列车线"<<"列车线"<<"列车线"<<"列车线";
        names[0] <<"司控器"<<"司控器"<<"司控器"<<"司控器"
                 <<"司控器"<<"司控器"<<"牵引"<<"制动";
        states[0]<<"牵引"<<"制动"<<"制动"<<"牵引"
                 <<"紧急制动"<<"警惕按键"<<"警惕按键"<<"紧急制动"
                 <<"MC1向前"<<"MC1向后"<<"MC2向后"<<"MC2向前"
                 <<"级位编码1"<<"级位编码2"<<"级位编码2"<<"级位编码1"
                 <<"级位编码3"<<"预留"<<"预留"<<"级位编码3"
                 <<"MC1激活"<<"预留"<<"预留"<<"MC2激活"
                 <<"MC1牵引OK"<<"M1牵引OK"<<"M2牵引OK"<<"MC2牵引OK"
                 <<"全列缓解"<<""<<""<<"全列缓解";

        if(this->database->riomDi1In1Mc1)//司控器 牵引、制动
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In2Mc1)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In2Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In1Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In3Mc1)//司控器 紧急、警惕
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomSgnIn1Mc1)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomSgnIn1Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In3Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In4Mc1)//司控器 向后 向前
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In5Mc1)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In5Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In4Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In7Mc1)//司控器 CODE1 CODE2
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In8Mc1)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In8Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In7Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In9Mc1)//司控器 CODE3 NULL
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        color[0].push_back(4);
        color[0].push_back(4);

        if(this->database->riomDi1In9Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomSgnIn2Mc1)//司控器 MC1激活,MC2激活
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        color[0].push_back(4);
        color[0].push_back(4);

        if(this->database->riomSgnIn2Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In15Mc1)//牵引 牵引OK
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In15M1)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In15M2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        if(this->database->riomDi1In15Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }

        if(this->database->riomDi2In8Mc1)//制动 全列缓解
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }
        color[0].push_back(9);
        color[0].push_back(9);

        if(this->database->riomDi2In8Mc2)
        {
            color[0].push_back(1);
        }else
        {
            color[0].push_back(4);
        }

    }
    //PAGE2
    {
        intro[1] <<"列车线"<<"列车线"<<"半列线"<<"半列线"
                <<"半列线"<<"半列线"<<"半列线"<<"半列线";
        names[1] <<"牵引"<<"牵引"<<"制动"<<"制动"
                <<"制动"<<"制动"<<"制动"<<"辅助";
        states[1]<<"MC电制动1\n正常"<<"MC电制动2\n正常"<<"MC电制动2\n正常"<<"MC电制动1\n正常"
                 <<"M电制动1\n正常"<<"M电制动2\n正常"<<"M电制动2\n正常"<<"M电制动1\n正常"
                 <<"MC1保持\n制动施加"<<"M1保持\n制动施加"<<"M2保持\n制动施加"<<"MC2保持\n制动施加"
                 <<"TP1缓解"<<"预留"<<"预留"<<"TP2缓解"
                 <<"TP1制动故障"<<"TP1制动报警"<<"TP2制动报警"<<"TP2制动故障"
                 <<"MC1制动故障"<<"M1制动故障"<<"M2制动故障"<<"MC2制动故障"
                 <<"MC1制动缓解"<<"M1制动缓解"<<"M2制动缓解"<<"MC2制动缓解"
                 <<"MC1辅逆\n正常"<<"M1辅逆\n正常"<<"M2辅逆\n正常"<<"MC2辅逆\n正常";

        if(this->database->riomDi1In16Mc1)//牵引 MC电制动\n正常
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In17Mc1)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In17Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In16Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In16M1)//牵引 M电制动\n正常
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In17M1)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In17M2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In16M2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In18Mc1)//制动 保持制动施加
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In18M1)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In18M2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In18Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }

        if(this->database->riomSgnIn14Mc1)//制动  tp缓解
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        color[1].push_back(4);
        color[1].push_back(4);

        if(this->database->riomSgnIn14Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }

        if(this->database->riomDi2In20Mc1)//制动 制动系统无故障 报警
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi2In21Mc1)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi2In21Mc2)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi2In20Mc2)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }

        if(this->database->riomDi1In22Mc1)//制动 MC1\M1 制动故障
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi1In22M1)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi1In22M2)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }
        if(this->database->riomDi1In22Mc2)
        {
            color[1].push_back(4);
        }else
        {
            color[1].push_back(2);
        }

        if(this->database->riomSgnIn4Mc1)//制动 MC1\M1 制动缓解
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomSgnIn4M1)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomSgnIn4M2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomSgnIn4Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }

        if(this->database->riomDi1In20Mc1)//辅助逆变器正常
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In20M1)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In20M2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
        if(this->database->riomDi1In20Mc2)
        {
            color[1].push_back(1);
        }else
        {
            color[1].push_back(4);
        }
    }
    //PAGE3
    {
        intro[2] <<"半列线"<<"半列线"<<"半列线"<<"列车线"
                <<"半列线"<<"半列线"<<"半列线"<<"半列线";
        names[2] <<"辅助"<<"磁轨制动"<<"司机室按钮"<<"司机室按钮"
                <<"司机室按钮"<<"司机室按钮"<<"受电弓"<<"受电弓";
        states[2]<<"MC1充电机\n正常"<<"M1充电机\n正常"<<"M2充电机\n正常"<<"MC2充电机\n正常"
                 <<"MC1磁轨制动"<<"M1磁轨制动"<<"M2磁轨制动"<<"MC2磁轨制动"
                 <<"蘑菇按钮"<<"洗车模式"<<"洗车模式"<<"蘑菇按钮"
                 <<"手动缓解"<<"撒沙请求"<<"撒沙请求"<<"手动缓解"
                 <<"牵引安全"<<"零速旁路"<<"零速旁路"<<"牵引安全"
                 <<"升弓指令"<<"降弓指令"<<"降弓指令"<<"升弓指令"
                 <<"TP1升弓到位"<<"TP2升弓到位"<<"TP2升弓到位"<<"TP1升弓到位"
                 <<"TP1降弓到位"<<"TP2降弓到位"<<"TP2降弓到位"<<"TP1降弓到位";

         //
//         color[2].push_back(4);
//         color[2].push_back(4);
//         color[2].push_back(4);
//         color[2].push_back(4);

         if(this->database->BC1CT_Stop_B1)//辅助 MC1充电机\n正常
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->BC2CT_Stop_B1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->BC3CT_Stop_B1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->BC4CT_Stop_B1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }

         if(this->database->riomSgnIn6Mc1)//磁轨制动 磁轨制动
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn6M1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn6M2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn6Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }


         if(this->database->riomSgnIn5Mc1)//司机室按钮 蘑菇按钮/洗车模式
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In4Mc1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In4Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn5Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }



         if(this->database->riomSgnIn7Mc1)//司机室按钮 手动缓解/撒沙请求
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi1In13Mc1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi1In13Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn7Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In18Mc1)//司机室按钮 牵引安全/零速旁路
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In7Mc1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In7Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In18Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In10Mc1)//司机室按钮 升弓指令/降弓指令
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In11Mc1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In11Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomDi2In10Mc2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn15M1)//受电弓 升弓到位（本车、他车）
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn17M1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn15M2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn17M2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn16M1)//受电弓 降弓到位（本车、他车）
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn18M1)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn16M2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
         if(this->database->riomSgnIn18M2)
         {
             color[2].push_back(1);
         }else
         {
             color[2].push_back(4);
         }
    }
    //PAGE4
    {
         intro[3] <<"半列线"<<"列车线"<<"半列线"<<""
                 <<""<<""<<""<<"";
         names[3] <<"车辆"<<"ATP"<<"门"<<""
                 <<""<<""<<""<<"";
         states[3]<<"升弓电机空开"<<"TP1车间电源"<<"TP2车间电源"<<"升弓电机空开"
                  <<"ATP运行"<<"预留"<<"预留"<<"ATP运行"
                  <<"车门"<<"预留"<<"预留"<<"车门"
                  <<""<<""<<""<<""
                  <<""<<""<<""<<""
                  <<""<<""<<""<<""
                  <<""<<""<<""<<""
                  <<""<<""<<""<<"";


         if(this->database->riomSgnIn19M1)//车辆 升弓空开/车间电源
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         if(this->database->riomSgnIn20Mc1)
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         if(this->database->riomSgnIn20Mc2)
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         if(this->database->riomSgnIn19M2)
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }

         if(this->database->riomSgnIn19Mc1)//ATP ATP运行
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         color[3].push_back(4);
         color[3].push_back(4);

         if(this->database->riomSgnIn19Mc2)
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         if(this->database->riomSgnIn9Mc1)//车门 门全关闭
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }
         color[3].push_back(4);
         color[3].push_back(4);

         if(this->database->riomSgnIn9Mc2)
         {
             color[3].push_back(1);
         }else
         {
             color[3].push_back(4);
         }

         color[3].push_back(9); // 预留
         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);

         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);

         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);

         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);

         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);
         color[3].push_back(9);
    }
    //PAGE5
    {
         intro[4] <<""<<""<<""<<""
                 <<""<<""<<""<<"";
         names[4] <<"VCU输出"<<"VCU输出"<<"VCU输出"<<"VCU输出"
                 <<""<<""<<""<<"";
         states[4]<<"零速信号"<<"磁轨施加"<<"磁轨施加"<<"零速信号"
                  <<"MC1撒沙输出"<<"M1撒沙输出"<<"M2撒沙输出"<<"MC2撒沙输出"
                  <<"MC1替代制动"<<"M1替代制动"<<"M2替代制动"<<"MC2替代制动"
                  <<"停车制动"<<"预留"<<"预留"<<"停车制动"
                  <<""<<""<<""<<""
                  <<""<<""<<""<<""
                  <<""<<""<<""<<""
                  <<""<<""<<""<<"";
         if(this->database->riomDo1Out2Mc1)//VCU输出 零速信号/磁轨施加
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out1Mc1)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out1Mc2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out2Mc2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }

         if(this->database->riomDo1Out3Mc1)//VCU输出 撒沙信号
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out3M1)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out3M2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out3Mc2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out6Mc1)//VCU输出 替代制动
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out5M1)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out5M2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out6Mc2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         if(this->database->riomDo1Out4Mc1)//VCU输出 停车制动
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }
         color[4].push_back(4);
         color[4].push_back(4);

         if(this->database->riomDo1Out4Mc2)
         {
             color[4].push_back(1);
         }else
         {
             color[4].push_back(4);
         }


         color[4].push_back(9); // 预留
         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);

         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);

         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);

         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);
         color[4].push_back(9);
    }
//        switch(StatepageID)
//        {
//        case 1:
//            statesbox8x4->Updatestate_boxstate(states[0],color[0]);
//            statesbox8x4->Updatestate_statename(names[0],intro[0]);
//            statesbox8x4->SetBoxNameFontsize(18);
//            break;
//        case 2:
//            statesbox8x4->Updatestate_boxstate(states[1],color[1]);
//            statesbox8x4->Updatestate_statename(names[1],intro[1]);
//            statesbox8x4->SetBoxNameFontsize(18);
//            break;
//        }

    statesbox8x4->Updatestate_boxstate(states[StatepageID-1],color[StatepageID-1]);
    statesbox8x4->Updatestate_statename(names[StatepageID-1],intro[StatepageID-1]);
    statesbox8x4->SetBoxNameFontsize(18);
    statesbox8x4->SetBoxStateFontsize(";font: 13px;");

    ui->VehicleStatesPage_Label_Page->setText("当前"+QString::number(StatepageID)+"页/共5页");


}

void VehicleStatesPage::on_VehicleStatesPage_Button_PrePage_pressed()
{
    if(StatepageID > 1)
        StatepageID--;
}

void VehicleStatesPage::on_VehicleStatesPage_Button_NextPage_pressed()
{
    if(StatepageID < 5)
        StatepageID++;
}

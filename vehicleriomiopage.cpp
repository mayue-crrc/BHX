#include "vehicleriomiopage.h"
#include "ui_vehicleriomiopage.h"
#include <QList>

VehicleRIOMIOPage::VehicleRIOMIOPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleRIOMIOPage)
{
    ui->setupUi(this);

    dicontrol1 = new DiControl(this);
    dicontrol1->setGeometry(40,5,dicontrol1->width(),dicontrol1->height());
    dicontrol1->hide();


    dicontrol2 = new DiControl(this);
    dicontrol2->setGeometry(40,230,dicontrol2->width(),dicontrol2->height());
    dicontrol2->hide();


    docontrol1 = new DoControl(this);
    docontrol1->setGeometry(40,5,docontrol1->width(),docontrol1->height());
    docontrol1->hide();

    docontrol2 = new DoControl(this);
    docontrol2->setGeometry(40,155,docontrol2->width(),docontrol2->height());
    docontrol2->hide();

    axcontrol = new AxControl(this);
    axcontrol->setGeometry(40,230,axcontrol->width(),axcontrol->height());
    axcontrol->hide();

    dicontrol3 = new DiControl(this);
    dicontrol3->setGeometry(40,5,dicontrol3->width(),dicontrol3->height());
    dicontrol3->hide();

    ui->VehicleRIOMIOPage_button_MC1->setStyleSheet(MY_HVACBUTTON_DOWN);
    ui->VehicleRIOMIOPage_button_MC2->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleRIOMIOPage_button_M1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleRIOMIOPage_button_M2->setStyleSheet(MY_HVACBUTTON_UP);

    pageID = 1;

}

VehicleRIOMIOPage::~VehicleRIOMIOPage()
{
    delete ui;
}
void VehicleRIOMIOPage::updatePage()
{
    switch(pageID)
    {
    case 1:
        hideallcontrol();
        dicontrol1->show();
        dicontrol2->show();

        break;
    case 2:
        hideallcontrol();
        docontrol1->show();
        docontrol2->show();
        break;
    case 3:
        hideallcontrol();
        axcontrol->show();
        dicontrol3->show();
        break;
    }
    ui->VehicleRIOMIOPage_Label_Page->setText(QString::number(pageID)+" / 3");

    QList<bool> states;
    states << this->database->riomDi1In1Mc1 << this->database->riomDi1In2Mc1 << this->database->riomDi1In3Mc1 << this->database->riomDi1In4Mc1
           << this->database->riomDi1In5Mc1 << this->database->riomDi1In6Mc1 << this->database->riomDi1In7Mc1 << this->database->riomDi1In8Mc1
           << this->database->riomDi1In9Mc1 << this->database->riomDi1In10Mc1 << this->database->riomDi1In11Mc1 << this->database->riomDi1In12Mc1
           << this->database->riomDi1In13Mc1 << this->database->riomDi1In14Mc1 << this->database->riomDi1In15Mc1 << this->database->riomDi1In16Mc1
           << this->database->riomDi1In17Mc1 << this->database->riomDi1In18Mc1 << this->database->riomDi1In19Mc1 << this->database->riomDi1In20Mc1
           << this->database->riomDi1In21Mc1 << this->database->riomDi1In22Mc1 << this->database->riomDi1In23Mc1 << this->database->riomDi1In24Mc1;
    this->dicontrol1->updateDi(states);
    states.clear();

    states << this->database->riomDi2In1Mc1 << this->database->riomDi2In2Mc1 << this->database->riomDi2In3Mc1 << this->database->riomDi2In4Mc1
           << this->database->riomDi2In5Mc1 << this->database->riomDi2In6Mc1 << this->database->riomDi2In7Mc1 << this->database->riomDi2In8Mc1
           << this->database->riomDi2In9Mc1 << this->database->riomDi2In10Mc1 << this->database->riomDi2In11Mc1 << this->database->riomDi2In12Mc1
           << this->database->riomDi2In13Mc1 << this->database->riomDi2In14Mc1 << this->database->riomDi2In15Mc1 << this->database->riomDi2In16Mc1
           << this->database->riomDi2In17Mc1 << this->database->riomDi2In18Mc1 << this->database->riomDi2In19Mc1 << this->database->riomDi2In20Mc1
           << this->database->riomDi2In21Mc1 << this->database->riomDi2In22Mc1 << this->database->riomDi2In23Mc1 << this->database->riomDi2In24Mc1;
    this->dicontrol2->updateDi(states);
    states.clear();

    states << this->database->riomSgnIn1Mc1 << this->database->riomSgnIn2Mc1 << this->database->riomSgnIn3Mc1 << this->database->riomSgnIn4Mc1
           << this->database->riomSgnIn5Mc1 << this->database->riomSgnIn6Mc1 << this->database->riomSgnIn7Mc1 << this->database->riomSgnIn8Mc1
           << this->database->riomSgnIn9Mc1 << this->database->riomSgnIn10Mc1 << this->database->riomSgnIn11Mc1 << this->database->riomSgnIn12Mc1
           << this->database->riomSgnIn13Mc1 << this->database->riomSgnIn14Mc1 << this->database->riomSgnIn15Mc1 << this->database->riomSgnIn16Mc1
           << this->database->riomSgnIn17Mc1 << this->database->riomSgnIn18Mc1 << this->database->riomSgnIn19Mc1 << this->database->riomSgnIn20Mc1
           << this->database->riomSgnIn21Mc1 << this->database->riomSgnIn22Mc1 << this->database->riomSgnIn23Mc1 << this->database->riomSgnIn24Mc1;
    this->dicontrol3->updateDi(states);
    states.clear();

    states << this->database->riomDo1Out1Mc1 << this->database->riomDo1Out2Mc1 << this->database->riomDo1Out3Mc1 << this->database->riomDo1Out4Mc1
           << this->database->riomDo1Out5Mc1 << this->database->riomDo1Out6Mc1 << this->database->riomDo1Out7Mc1 << this->database->riomDo1Out8Mc1
           << this->database->riomDo1Out9Mc1 << this->database->riomDo1Out10Mc1 << this->database->riomDo1Out11Mc1 << this->database->riomDo1Out12Mc1
           << this->database->riomDo1Out13Mc1 << this->database->riomDo1Out14Mc1 << this->database->riomDo1Out15Mc1 << this->database->riomDo1Out16Mc1;
    this->docontrol1->updateDo(states);
    states.clear();

    states << this->database->riomDo2Out1Mc1 << this->database->riomDo2Out2Mc1 << this->database->riomDo2Out3Mc1 << this->database->riomDo2Out4Mc1
           << this->database->riomDo2Out5Mc1 << this->database->riomDo2Out6Mc1 << this->database->riomDo2Out7Mc1 << this->database->riomDo2Out8Mc1
           << this->database->riomDo2Out9Mc1 << this->database->riomDo2Out10Mc1 << this->database->riomDo2Out11Mc1 << this->database->riomDo2Out12Mc1
           << this->database->riomDo2Out13Mc1 << this->database->riomDo2Out14Mc1 << this->database->riomDo2Out15Mc1 << this->database->riomDo2Out16Mc1;
    this->docontrol2->updateDo(states);
    states.clear();

    QList<QString> axStates;

    axStates << QString::number((float)this->database->riomAxAi1Mc1/100,10,2) + "  mA"<< QString("")
           << QString::number((float)this->database->riomAxAi2Mc1/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi3Mc1/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi4Mc1/100,10,2) + "  mA"<< QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->axcontrol->updateAx(axStates);

}
void VehicleRIOMIOPage::showEvent(QShowEvent *)
{
    QList<QString> MC1name;
    MC1name << QString("DI1")
         << QString("I1 牵引状态") << QString("I2 制动状态") << QString("I3 紧急制动状态") << QString("I4 方向指令F")
         << QString("I5 方向指令B") << QString("I6 惰行位") << QString("I7 ENcode1") << QString("I8 ENcode2")
         << QString("I9 ENcode3") << QString("I10 牵引熔断器状态") << QString("I11 辅助熔断器状态") << QString("I12 ATO保持制动")
         << QString("I13 撒沙指令") << QString("I14 试灯按钮") << QString("I15 牵引准备就绪") << QString("I16 电制动1正常")
         << QString("I17 电制动2正常") << QString("I18 保持制动施加") << QString("I19 车辆滑行指示") << QString("I20 辅助逆变器正常")
         << QString("I21 ATP切除") << QString("I22 制动无故障(MC)") << QString("I23 左侧沙箱沙位") << QString("I24 右侧沙箱沙位");
    dicontrol1->initialName(MC1name);
    MC1name.clear();



    MC1name << QString("DI2")
         << QString("I1 ATO模式") << QString("I2 折返") << QString("I3 客室电热") << QString("I4 洗车开关")
         << QString("I5 出库模式开关") << QString("I6 电热玻璃") << QString("I7 零速旁路") << QString("I8 制动全部缓解")
         << QString("I9 牵引冷却风机空开") << QString("I10 升弓指令") << QString("I11 降弓指令") << QString("I12 车门允许(左)")
         << QString("I13 车门允许(右)") << QString("I14 左开门指令(左)") << QString("I15 右开门指令(右)") << QString("I16 左关门指令")
         << QString("I17 右关门指令") << QString("I18 牵引安全") << QString("I19 撒沙风泵状态") << QString("I20 制动无故障(TP)")
         << QString("I21 制动无报警(TP)") << QString("I22 防滑保护激活(TP)") << QString("I23 轮缘轮滑故障") << QString("I24 ATP门旁路开关");
    dicontrol2->initialName(MC1name);
    MC1name.clear();



    MC1name << QString("DO1")
         << QString("O1 磁轨制动施加指令") << QString("O2 3KM信号(零速信号)") << QString("O3 撒沙信号") << QString("O4 停车制动")
         << QString("O5 保持制动") << QString("O6 替代制动") << QString("O7 Deadman事件") << QString("O8 蜂鸣器")
         << QString("O9 升弓到位指示灯") << QString("O10 降弓到位指示灯") << QString("O11 牵引准备就绪指示灯") << QString("O12 备用")
         << QString("O13 电制动工作指示灯") << QString("O14 备用") << QString("O15 备用") << QString("O16 备用");
    docontrol1->initialName(MC1name);
    MC1name.clear();

    MC1name << QString("DO2")
         << QString("O1 牵引封锁旁路指示灯") << QString("O2 备用") << QString("O3 强迫泵风") << QString("O4 电热1路")
         << QString("O5 电热2路") << QString("O6 备用") << QString("O7 蓄电池伴热") << QString("O8 照明减载")
         << QString("O9 备用") << QString("O10 备用") << QString("O11 备用") << QString("O12 里程计")
         << QString("O13 备用") << QString("O14 备用") << QString("O15 备用") << QString("O16 备用");
    docontrol2->initialName(MC1name);
    MC1name.clear();


    MC1name << QString("AX1")
         << QString("AI1 载荷传感器1") << QString("AI2 载荷传感器2") << QString("AI3 压力传感器") << QString("AI4 备用")
         << QString("AI5 备用") << QString("AI6 备用") << QString("AI7 备用") << QString("AI8 备用");
    axcontrol->initialName(MC1name);
    MC1name.clear();


    MC1name << QString("SGN1")
         << QString("I1 死人按钮") << QString("I2 司机钥匙") << QString("I3 门旁路开关") << QString("I4 制动缓解(MC)")
         << QString("I5 安全制动") << QString("I6 磁轨制动(MC)") << QString("I7 制动手动缓解(MC)") << QString("I8 牵车开关信号")
         << QString("I9 门全关闭") << QString("I10 蓄电池接触器") << QString("I11 蓄电池电热") << QString("I12 交流输出接触器")
         << QString("I13 拖车磁轨制动(TP)") << QString("I14 拖车制动缓解(TP)") << QString("I15 左零速") << QString("I16 右零速")
         << QString("I17 列车完整性旁路") << QString("I18 切除牵引") << QString("I19 ATP运行") << QString("I20 隔离开关")
         << QString("I21 备用") << QString("I22 备用") << QString("I23 备用") << QString("I24 备用");
    dicontrol3->initialName(MC1name);
    MC1name.clear();

}


void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_back_pressed()
{
    changePage(uVehicleParaSetting);

}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_prepage_pressed()
{
    if(pageID >1)
        pageID--;
}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_nextpage_pressed()
{
    if(pageID <3)
        pageID++;
}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_MC1_clicked()
{

}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_M1_clicked()
{
    changePage(uVehicleM1RIOMIOPage);
}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_M2_clicked()
{
    changePage(uVehicleM2RIOMIOPage);

}

void VehicleRIOMIOPage::on_VehicleRIOMIOPage_button_MC2_clicked()
{
    changePage(uVehicleMC2RIOMIOPage);

}
void VehicleRIOMIOPage::hideallcontrol()
{
    dicontrol1->hide();
    dicontrol2->hide();
    docontrol1->hide();
    docontrol2->hide();
    axcontrol->hide();
    dicontrol3->hide();

}

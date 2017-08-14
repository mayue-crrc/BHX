#include "vehiclem2riomiopage.h"
#include "ui_vehiclem2riomiopage.h"

VehicleM2RIOMIOPage::VehicleM2RIOMIOPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleM2RIOMIOPage)
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

    axcontrol = new AxControl(this);
    axcontrol->setGeometry(40,155,axcontrol->width(),axcontrol->height());
    axcontrol->hide();



    pageID = 1;

    ui->VehicleM2RIOMIOPage_button_MC1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleM2RIOMIOPage_button_MC2->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleM2RIOMIOPage_button_M1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleM2RIOMIOPage_button_M2->setStyleSheet(MY_HVACBUTTON_DOWN);
}

VehicleM2RIOMIOPage::~VehicleM2RIOMIOPage()
{
    delete ui;
}
void VehicleM2RIOMIOPage::updatePage()
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
        axcontrol->show();
        break;


    }
    ui->VehicleM2RIOMIOPage_Label_Page->setText(QString::number(pageID)+" / 2");

    QList<bool> states;
    states << this->database->riomDi1In1M2 << this->database->riomDi1In2M2 << this->database->riomDi1In3M2 << this->database->riomDi1In4M2
           << this->database->riomDi1In5M2 << this->database->riomDi1In6M2 << this->database->riomDi1In7M2 << this->database->riomDi1In8M2
           << this->database->riomDi1In9M2 << this->database->riomDi1In10M2 << this->database->riomDi1In11M2 << this->database->riomDi1In12M2
           << this->database->riomDi1In13M2 << this->database->riomDi1In14M2 << this->database->riomDi1In15M2 << this->database->riomDi1In16M2
           << this->database->riomDi1In17M2 << this->database->riomDi1In18M2 << this->database->riomDi1In19M2 << this->database->riomDi1In20M2
           << this->database->riomDi1In21M2 << this->database->riomDi1In22M2 << this->database->riomDi1In23M2 << this->database->riomDi1In24M2;
    this->dicontrol1->updateDi(states);
    states.clear();

    states << this->database->riomSgnIn1M2 << this->database->riomSgnIn2M2 << this->database->riomSgnIn3M2 << this->database->riomSgnIn4M2
           << this->database->riomSgnIn5M2 << this->database->riomSgnIn6M2 << this->database->riomSgnIn7M2 << this->database->riomSgnIn8M2
           << this->database->riomSgnIn9M2 << this->database->riomSgnIn10M2 << this->database->riomSgnIn11M2 << this->database->riomSgnIn12M2
           << this->database->riomSgnIn13M2 << this->database->riomSgnIn14M2 << this->database->riomSgnIn15M2 << this->database->riomSgnIn16M2
           << this->database->riomSgnIn17M2 << this->database->riomSgnIn18M2 << this->database->riomSgnIn19M2 << this->database->riomSgnIn20M2
           << this->database->riomSgnIn21M2 << this->database->riomSgnIn22M2 << this->database->riomSgnIn23M2 << this->database->riomSgnIn24M2;
    this->dicontrol2->updateDi(states);
    states.clear();

    states << this->database->riomDo1Out1M2 << this->database->riomDo1Out2M2 << this->database->riomDo1Out3M2 << this->database->riomDo1Out4M2
           << this->database->riomDo1Out5M2 << this->database->riomDo1Out6M2 << this->database->riomDo1Out7M2 << this->database->riomDo1Out8M2
           << this->database->riomDo1Out9M2 << this->database->riomDo1Out10M2 << this->database->riomDo1Out11M2 << this->database->riomDo1Out12M2
           << this->database->riomDo1Out13M2 << this->database->riomDo1Out14M2 << this->database->riomDo1Out15M2 << this->database->riomDo1Out16M2;
    this->docontrol1->updateDo(states);
    states.clear();

    QList<QString> axStates;
    axStates << QString::number((float)this->database->riomAxAi1M2/100,10,2) + "  mA"<< QString("")
           << QString::number((float)this->database->riomAxAi2M2/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi3M2/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi4M2/100,10,2) + "  mA"<< QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->axcontrol->updateAx(axStates);



}
void VehicleM2RIOMIOPage::showEvent(QShowEvent *)
{
    QList<QString> M2name;

    M2name << QString("DI1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 备用")
         << QString("I5 客室电热") << QString("I6 牵引熔断器2状态") << QString("I7 备用") << QString("I8 辅助熔断器2状态")
         << QString("I9 撒砂风泵状态") << QString("I10 备用") << QString("I11 制动全部缓解") << QString("I12 牵引冷却风机空开")
         << QString("I13 牵引安全") << QString("I14 备用") << QString("I15 牵引准备就绪") << QString("I16 电制动1正常")
         << QString("I17 电制动2正常") << QString("I18 保持制动施加") << QString("I19 车辆滑行指示") << QString("I20 辅助逆变器正常")
         << QString("I21 备用") << QString("I22 制动无故障(M)") << QString("I23 左侧沙箱沙位") << QString("I24 右侧沙箱沙位");
    dicontrol1->initialName(M2name);
    M2name.clear();


    M2name << QString("SGN1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 制动缓解(M)")
         << QString("I5 安全制动") << QString("I6 磁轨制动(M)") << QString("I7  制动手动缓解（M)") << QString("I8 备用")
         << QString("I9 蓄电池接触器") << QString("I10 备用") << QString("I11 蓄电池电热") << QString("I12 交流输出接触器")
         << QString("I13 备用") << QString("I14 备用") << QString("I15 本车升弓到位") << QString("I16 本车降弓到位")
         << QString("I17 他车升弓到位") << QString("I18 他车降弓到位") << QString("I19 本车升弓空开(TP)") << QString("I20 备用")
         << QString("I21 备用") << QString("I22 备用") << QString("I23 备用") << QString("I24 备用");
    dicontrol2->initialName(M2name);
    M2name.clear();


    M2name << QString("DO1")
         << QString("O1 备用") << QString("O2 强迫泵风") << QString("O3 撒沙信号") << QString("O4 备用")
         << QString("O5 替代制动") << QString("O6 备用") << QString("O7  备用") << QString("O8 电热1路")
         << QString("O9 电热2路") << QString("O10 蓄电池伴热") << QString("O11 备用") << QString("O12 备用")
         << QString("O13 备用") << QString("O14 备用") << QString("O15 备用") << QString("O16 备用");
    docontrol1->initialName(M2name);
    M2name.clear();


    M2name << QString("AX1")
         << QString("AI1 载荷传感器1") << QString("AI2 载荷传感器2") << QString("AI3 压力传感器") << QString("AI4 备用")
         << QString("AI5 备用") << QString("AI6 备用") << QString("AI7 备用") << QString("AI8 备用");
    axcontrol->initialName(M2name);
    M2name.clear();
}
void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_MC1_clicked()
{
    changePage(uVehicleRIOMIOPage);

}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_M1_clicked()
{
    changePage(uVehicleM1RIOMIOPage);

}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_M2_clicked()
{

}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_MC2_clicked()
{
    changePage(uVehicleMC2RIOMIOPage);

}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_prepage_pressed()
{
    if(pageID >1)
        pageID--;
}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_nextpage_pressed()
{
    if(pageID <2)
        pageID++;
}

void VehicleM2RIOMIOPage::on_VehicleM2RIOMIOPage_button_back_pressed()
{
    changePage(uVehicleParaSetting);
}
void VehicleM2RIOMIOPage::hideallcontrol()
{
    dicontrol1->hide();
    dicontrol2->hide();
    docontrol1->hide();
    axcontrol->hide();
}

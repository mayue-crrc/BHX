#include "vehiclem1riomiopage.h"
#include "ui_vehiclem1riomiopage.h"
#include <QList>
VehicleM1RIOMIOPage::VehicleM1RIOMIOPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleM1RIOMIOPage)
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


    ui->VehicleM1RIOMIOPage_button_MC1->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleM1RIOMIOPage_button_MC2->setStyleSheet(MY_HVACBUTTON_UP);
    ui->VehicleM1RIOMIOPage_button_M1->setStyleSheet(MY_HVACBUTTON_DOWN);
    ui->VehicleM1RIOMIOPage_button_M2->setStyleSheet(MY_HVACBUTTON_UP);

}

VehicleM1RIOMIOPage::~VehicleM1RIOMIOPage()
{
    delete ui;
}
void VehicleM1RIOMIOPage::updatePage()
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
    ui->VehicleM1RIOMIOPage_Label_Page->setText(QString::number(pageID)+" / 2");


    QList<bool> states;
    states << this->database->riomDi1In1M1 << this->database->riomDi1In2M1 << this->database->riomDi1In3M1 << this->database->riomDi1In4M1
           << this->database->riomDi1In5M1 << this->database->riomDi1In6M1 << this->database->riomDi1In7M1 << this->database->riomDi1In8M1
           << this->database->riomDi1In9M1 << this->database->riomDi1In10M1 << this->database->riomDi1In11M1 << this->database->riomDi1In12M1
           << this->database->riomDi1In13M1 << this->database->riomDi1In14M1 << this->database->riomDi1In15M1 << this->database->riomDi1In16M1
           << this->database->riomDi1In17M1 << this->database->riomDi1In18M1 << this->database->riomDi1In19M1 << this->database->riomDi1In20M1
           << this->database->riomDi1In21M1 << this->database->riomDi1In22M1 << this->database->riomDi1In23M1 << this->database->riomDi1In24M1;
    this->dicontrol1->updateDi(states);
    states.clear();

    states << this->database->riomSgnIn1M1 << this->database->riomSgnIn2M1 << this->database->riomSgnIn3M1 << this->database->riomSgnIn4M1
           << this->database->riomSgnIn5M1 << this->database->riomSgnIn6M1 << this->database->riomSgnIn7M1 << this->database->riomSgnIn8M1
           << this->database->riomSgnIn9M1 << this->database->riomSgnIn10M1 << this->database->riomSgnIn11M1 << this->database->riomSgnIn12M1
           << this->database->riomSgnIn13M1 << this->database->riomSgnIn14M1 << this->database->riomSgnIn15M1 << this->database->riomSgnIn16M1
           << this->database->riomSgnIn17M1 << this->database->riomSgnIn18M1 << this->database->riomSgnIn19M1 << this->database->riomSgnIn20M1
           << this->database->riomSgnIn21M1 << this->database->riomSgnIn22M1 << this->database->riomSgnIn23M1 << this->database->riomSgnIn24M1;
    this->dicontrol2->updateDi(states);
    states.clear();

    states << this->database->riomDo1Out1M1 << this->database->riomDo1Out2M1 << this->database->riomDo1Out3M1 << this->database->riomDo1Out4M1
           << this->database->riomDo1Out5M1 << this->database->riomDo1Out6M1 << this->database->riomDo1Out7M1 << this->database->riomDo1Out8M1
           << this->database->riomDo1Out9M1 << this->database->riomDo1Out10M1 << this->database->riomDo1Out11M1 << this->database->riomDo1Out12M1
           << this->database->riomDo1Out13M1 << this->database->riomDo1Out14M1 << this->database->riomDo1Out15M1 << this->database->riomDo1Out16M1;
    this->docontrol1->updateDo(states);
    states.clear();

    QList<QString> axStates;
    axStates << QString::number((float)this->database->riomAxAi1M1/100,10,2) + "  mA"<< QString("")
           << QString::number((float)this->database->riomAxAi2M1/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi3M1/100,10,2) + "  mA" << QString("")
           << QString::number((float)this->database->riomAxAi4M1/100,10,2) + "  mA"<< QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("")
           << QString("") << QString("");
    this->axcontrol->updateAx(axStates);


}
void VehicleM1RIOMIOPage::showEvent(QShowEvent *)
{
    QList<QString> M1name;

    M1name << QString("DI1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 备用")
         << QString("I5 客室电热") << QString("I6 牵引熔断器2状态") << QString("I7 备用") << QString("I8 辅助熔断器2状态")
         << QString("I9 撒砂风泵状态") << QString("I10 备用") << QString("I11 制动全部缓解") << QString("I12 牵引冷却风机空开")
         << QString("I13 牵引安全") << QString("I14 备用") << QString("I15 牵引准备就绪") << QString("I16 电制动1正常")
         << QString("I17 电制动2正常") << QString("I18 保持制动施加") << QString("I19 车辆滑行指示") << QString("I20 辅助逆变器正常")
         << QString("I21 备用") << QString("I22 制动无故障(M)") << QString("I23 左侧沙箱沙位") << QString("I24 右侧沙箱沙位");
    dicontrol1->initialName(M1name);
    M1name.clear();


    M1name << QString("SGN1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 制动缓解(M)")
         << QString("I5 安全制动") << QString("I6 磁轨制动(M)") << QString("I7  制动手动缓解（M)") << QString("I8 备用")
         << QString("I9 蓄电池接触器") << QString("I10 备用") << QString("I11 蓄电池电热") << QString("I12 交流输出接触器")
         << QString("I13 备用") << QString("I14 备用") << QString("I15 本车升弓到位") << QString("I16 本车降弓到位")
         << QString("I17 他车升弓到位") << QString("I18 他车降弓到位") << QString("I19 本车升弓空开(TP)") << QString("I20 备用")
         << QString("I21 备用") << QString("I22 备用") << QString("I23 备用") << QString("I24 备用");
    dicontrol2->initialName(M1name);
    M1name.clear();


    M1name << QString("DO1")
         << QString("O1 备用") << QString("O2 强迫泵风") << QString("O3 撒沙信号") << QString("O4 备用")
         << QString("O5 替代制动") << QString("O6 备用") << QString("O7  备用") << QString("O8 电热1路")
         << QString("O9 电热2路") << QString("O10 蓄电池伴热") << QString("O11 备用") << QString("O12 备用")
         << QString("O13 备用") << QString("O14 备用") << QString("O15 备用") << QString("O16 备用");
    docontrol1->initialName(M1name);
    M1name.clear();


    M1name << QString("AX1")
         << QString("AI1 载荷传感器1") << QString("AI2 载荷传感器2") << QString("AI3 压力传感器") << QString("AI4 备用")
         << QString("AI5 备用") << QString("AI6 备用") << QString("AI7 备用") << QString("AI8 备用");
    axcontrol->initialName(M1name);
    M1name.clear();


}
void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_MC1_clicked()
{
    changePage(uVehicleRIOMIOPage);

}

void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_M1_clicked()
{

}

void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_M2_clicked()
{
    changePage(uVehicleM2RIOMIOPage);

}

void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_MC2_clicked()
{
    changePage(uVehicleMC2RIOMIOPage);

}



void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_prepage_pressed()
{
    if(pageID >1)
        pageID--;
}

void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_nextpage_pressed()
{
    if(pageID <2)
        pageID++;
}

void VehicleM1RIOMIOPage::on_VehicleM1RIOMIOPage_button_back_pressed()
{
    changePage(uVehicleParaSetting);
}
void VehicleM1RIOMIOPage::hideallcontrol()
{
    dicontrol1->hide();
    dicontrol2->hide();
    docontrol1->hide();
    axcontrol->hide();
}

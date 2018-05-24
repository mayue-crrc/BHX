#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "database.h"
#include "crrccan.h"
#include "basepage.h"
#include "vehiclerunpage.h"
#include "navigatorpage.h"
#include "headerpage.h"
#include "vehiclestatespage.h"
#include "vehicletcupage.h"
#include "vehiclebcupage.h"
#include "vehicleacupage.h"
#include "vehicledoorpage.h"
#include "vehiclehvacpage.h"
#include "vehiclesettingpage.h"
#include "vehicleparasetting.h"
#include "vehicleinstructiontestpage.h"
#include "vehicleinstructiontestpage2.h"
#include "vehicleinitsetpage.h"
#include "vehicleriomiopage.h"
#include "vehiclem1riomiopage.h"
#include "vehiclem2riomiopage.h"
#include "vehiclemc2riomiopage.h"
#include "candebugpage.h"
#include "vehiclevisionlifesignalpage.h"
#include "vehicledatetimesetpage.h"
#include "ctrldebugpage.h"
#include "vehicleparaset.h"
#include "vehiclehistoryfaultpage.h"
#include "crrcfault.h"
#include "vehicledoordetailstatespage.h"
#include "vehicleinstructionsetpage.h"
#include "vehicleinstructiontestpage3.h"
#include "vehiclecurrentfaultpage.h"
#include "vehiclefactorytestpage.h"
#include "vehiclefactorytestpage2.h"
#include "vehiclewheelsetpage.h"
// 2017-8-14 add sandbox
#include "ctrlalarmbarh.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();

    this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);

    // initialize the dababase at first
    this->database = new Database();

    // binding the database with MyBase
    // this time the database is unavailiable because there is no operation of sychronization
    BasePage::database = this->database;

    // init faultfile no
    m_FileNo = getdefaultpara->getInt("/FaultFileNo/FileNo");
    crrcCan = new CrrcCan();
//    crrcFault = new CrrcFault(":/new/prefix1/ErrorList.txt","./HisFaultList.txt");
    crrcFault = new CrrcFault("./ErrorList.txt","./HisFaultList.txt");

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePage()));
    count10stimer = 0; // for timimg with VCU


    this->headerPage = new HeaderPage(this);
    this->headerPage->setMyBase(uTop, QString("标题栏"));
    this->headerPage->show();
    this->headerPage->GetcrrcFaultInfo(crrcFault);

    // add help widget page
    vehiclehelppage = new VehicleHelpPage(this);
    vehiclehelppage->setGeometry(100,100,vehiclehelppage->width(),vehiclehelppage->height());
    vehiclehelppage->hide();
    connect(headerPage,SIGNAL(HelpPageClicked()),this,SLOT(showHelpPage()));

    vehicleAlarmWidget = new VehicleAlarmWidget(this);
    vehicleAlarmWidget->setGeometry(150,200,vehiclehelppage->width(),vehiclehelppage->height());
    vehicleAlarmWidget->hide();


    TwoCabActAlarmWidget = new VehicleAlarmWidget(this);
    TwoCabActAlarmWidget->setGeometry(150,200,TwoCabActAlarmWidget->width(),TwoCabActAlarmWidget->height());
    TwoCabActAlarmWidget->hide();

    sandboxAlarm = new CtrlAlarmBarH(this);
    sandboxAlarm->setGeometry(270,270,sandboxAlarm->width(),sandboxAlarm->height());
    sandboxAlarm->hide();


    this->navigatorPage = new NavigatorPage(this);
    this->navigatorPage->setMyBase(uBottom, QString("导航栏"));
    this->navigatorPage->show();

    this->vehicleRunPage = new VehicleRunPage(this);
    this->vehicleRunPage->setMyBase(uMiddle, QString("运行页面"));
    this->vehicleRunPage->GetcrrcFaultInfo(crrcFault);

    this->vehicleStatesPage = new VehicleStatesPage(this);
    this->vehicleStatesPage->setMyBase(uMiddle,QString("车辆页面"));

    this->vehicleTCUPage = new VehicleTCUPage(this);
    this->vehicleTCUPage->setMyBase(uMiddle,QString("牵引页面"));

    this->vehicleBCUPage = new VehicleBCUPage(this);
    this->vehicleBCUPage->setMyBase(uMiddle,QString("制动页面"));

    this->vehicleACUPage = new VehicleACUPage(this);
    this->vehicleACUPage->setMyBase(uMiddle,QString("辅助页面"));

    this->vehicleHVACPage = new VehicleHVACPage(this);
    this->vehicleHVACPage->setMyBase(uMiddle,QString("空调页面"));

    this->vehicleDoorPage = new VehicleDoorPage(this);
    this->vehicleDoorPage->setMyBase(uMiddle,QString("车门页面"));

    this->vehicleSettingPage = new VehicleSettingPage(this);
    this->vehicleSettingPage->setMyBase(uMiddle,QString("设定页面"));

    this->vehicleparasettingPage = new VehicleParaSetting(this);
    this->vehicleparasettingPage->setMyBase(uMiddle,QString("参数设定"));

    this->vehicleinstructionPage = new VehicleInstructionTestPage(this);
    this->vehicleinstructionPage->setMyBase(uMiddle,QString("指令测试1"));

    this->vehicleinstructionPage2 = new VehicleInstructionTestPage2(this);
    this->vehicleinstructionPage2->setMyBase(uMiddle,QString("指令测试2"));

    this->vehicleinstructionPage3 = new VehicleInstructionTestPage3(this);
    this->vehicleinstructionPage3->setMyBase(uMiddle,QString("指令测试3"));

    this->vehicleinitsetPage = new VehicleInitsetPage(this);
    this->vehicleinitsetPage->setMyBase(uMiddle,QString("初始设置"));

    this->vehicleRIOMIOPage = new VehicleRIOMIOPage(this);
    this->vehicleRIOMIOPage->setMyBase(uMiddle,QString("IO页面(MC1)"));

    this->vehicleM1RIOMIOPage = new VehicleM1RIOMIOPage(this);
    this->vehicleM1RIOMIOPage->setMyBase(uMiddle,QString("IO页面(M1)"));

    this->vehicleM2RIOMIOPage = new VehicleM2RIOMIOPage(this);
    this->vehicleM2RIOMIOPage->setMyBase(uMiddle,QString("IO页面(M2)"));

    this->vehicleMC2RIOMIOPage = new VehicleMC2RIOMIOPage(this);
    this->vehicleMC2RIOMIOPage->setMyBase(uMiddle,QString("IO页面(MC2)"));

    this->vehicleFactoryTestPage = new VehicleFactoryTestPage(this);
    this->vehicleFactoryTestPage->setMyBase(uMiddle,QString("出厂测试页面"));

    this->vehicleFactoryTestPage2 = new VehicleFactoryTestPage2(this);
    this->vehicleFactoryTestPage2->setMyBase(uMiddle,QString("出厂测试页面"));

    this->canDebugPage = new CanDebugPage(this);
    this->canDebugPage->setMyBase(uMiddle,QString("通信测试"));

    this->vehicleVisionLifesignalPage = new VehicleVisionLifesignalPage(this);
    this->vehicleVisionLifesignalPage->setMyBase(uMiddle,QString("版本页面"));

    this->vehicleDatetimeSetPage = new VehicleDatetimeSetPage(this);
    this->vehicleDatetimeSetPage->setMyBase(uMiddle,QString("时间设定"));

    this->debugpage = new CtrlDebugPage();
    this->debugpage->setGeometry(150,100,debugpage->width(),debugpage->height());
    this->debugpage->hide();

    this->vehicleParaSet = new VehicleParaSet(this);
    this->vehicleParaSet->setMyBase(uMiddle,QString("参数设定"));

    this->vehicleHistoryFaultPage = new VehicleHistoryFaultPage(this);
    this->vehicleHistoryFaultPage->setMyBase(uMiddle,QString("历史故障"));
    vehicleHistoryFaultPage->GetcrrcFaultInfo(crrcFault);


    this->vehicleDoorDetailStatesPage = new VehicleDoorDetailStatesPage(this);
    this->vehicleDoorDetailStatesPage->setMyBase(uMiddle,QString("车门详尽信息"));

    this->vehicleInstructionSetPage = new VehicleInstructionSetPage(this);
    this->vehicleInstructionSetPage->setMyBase(uMiddle,QString("指令控制"));

    this->vehicleCurrentFaultPage = new VehicleCurrentFaultPage(this);
    this->vehicleCurrentFaultPage->setMyBase(uMiddle,QString("当前故障"));
    vehicleCurrentFaultPage->GetcrrcFaultInfo(crrcFault);

    this->vehicleWheelSetPage = new VehicleWheelSetPage(this);
    this->vehicleWheelSetPage->setMyBase(uMiddle,QString("参数设定1"));

    // connect the window with the enum
    this->widgets.insert(uNavigator,this->navigatorPage);
    this->widgets.insert(uVehicleRunPage, this->vehicleRunPage);
    this->widgets.insert(uVehicleStatePage, this->vehicleStatesPage);
    this->widgets.insert(uVehicleTCUPage, this->vehicleTCUPage);
    this->widgets.insert(uVehicleBCUPage, this->vehicleBCUPage);
    this->widgets.insert(uVehicleHVACPage, this->vehicleHVACPage);
    this->widgets.insert(uVehicleDoorPage, this->vehicleDoorPage);
    this->widgets.insert(uVehicleACUPage, this->vehicleACUPage);
    this->widgets.insert(uVehicleSettingPage, this->vehicleSettingPage);
    this->widgets.insert(uVehicleParaSetting,this->vehicleparasettingPage);
    this->widgets.insert(uVehicleInstructionPage,this->vehicleinstructionPage);
    this->widgets.insert(uVehicleInstructionPage2,this->vehicleinstructionPage2);
    this->widgets.insert(uVehicleInstructionPage3,this->vehicleinstructionPage3);
    this->widgets.insert(uVehicleInitSetPage,this->vehicleinitsetPage);
    this->widgets.insert(uVehicleRIOMIOPage,this->vehicleRIOMIOPage);
    this->widgets.insert(uVehicleM1RIOMIOPage,this->vehicleM1RIOMIOPage);
    this->widgets.insert(uVehicleM2RIOMIOPage,this->vehicleM2RIOMIOPage);
    this->widgets.insert(uVehicleMC2RIOMIOPage,this->vehicleMC2RIOMIOPage);
    this->widgets.insert(uCandebugPage,this->canDebugPage);
    this->widgets.insert(uVehicleVisionLifesignalPage,this->vehicleVisionLifesignalPage);
    this->widgets.insert(uVehicleDatetimeSetPage,this->vehicleDatetimeSetPage);
    this->widgets.insert(uVehicleParaSetPage,this->vehicleParaSet);
    this->widgets.insert(uVehicleHistoryFaultPage,this->vehicleHistoryFaultPage);
    this->widgets.insert(uVehicleDoorDetailStatesPage,this->vehicleDoorDetailStatesPage);
    this->widgets.insert(uVehicleInstructionSetPage,this->vehicleInstructionSetPage);
    this->widgets.insert(uVehicleCurrentFaultPage,this->vehicleCurrentFaultPage);
    this->widgets.insert(uVehicleFactoryTestPage,this->vehicleFactoryTestPage);
    this->widgets.insert(uVehicleFactoryTestPage2,this->vehicleFactoryTestPage2);
    this->widgets.insert(uVehicleWheelSetPage,this->vehicleWheelSetPage);

}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::updatePage()
{
    static int counter = 1;     // a counter uesd to counter time, each one represent 0.33 second

    // update the header and the navigator every 0.33 second
    this->headerPage->updatePage();
    this->navigatorPage->updatePage();

    // update the middle area every 0.33 second
    this->widgets[BasePage::currentPage]->updatePage();


    // refresh the mvb port every 1 second, the code which occupies cpu time a lot should not execute at the same cycle
    if (counter % 2 == 0)
    {

    }
            canDebugPage->installCan(crrcCan);
            debugpage->getCrrcCanObj(crrcCan);
            database->updateDatabse(crrcCan);
    //  if VCUtime differs more than 6s from HMItimes HMI will adjust VCUtime in 10s,
    if(this->database->CANopenStatus_VCU1||this->database->CANopenStatus_VCU2)
    {
         VCUtime2HMI10s();
    }
    // two cab atcive warning!!
    if(this->database->CabActClash_B1)
    {
        if(!this->TwoCabActAlarmWidget->res_pageclose)
        {
            this->TwoCabActAlarmWidget->setBackgroundStylesheet("background-color: rgb(255, 255, 0);");
            this->TwoCabActAlarmWidget->setLabelStylesheet("font: 75 32pt;");
            this->TwoCabActAlarmWidget->setLabelgroundText("警告！\n两端司机室激活！");
            this->TwoCabActAlarmWidget->raise();
            this->TwoCabActAlarmWidget->show();
        }else
        {
            this->TwoCabActAlarmWidget->hide();

        }

    }else
    {
        this->TwoCabActAlarmWidget->res_pageclose = false;
        this->TwoCabActAlarmWidget->hide();
    }

    // add hvac 15mins stoptestmode cnt
    if(this->database->HMiCT_TestCold_B1 ||this->database->HMiCT_TestWarm_B1)
    {
        if(this->database->HMI_15minscnt++ > 2700)
        {
            this->database->HMI_15minscnt = 0;
            this->database->HMI_StopHVACtest_B1 = true;
            this->database->HMiCT_TestCold_B1 = false;
            this->database->HMiCT_TestWarm_B1 = false;
            this->database->HMiCT_Stop_B1 = true;
        }
    }
    else
    {
        //this->database->HMiCT_Stop_B1 = true;
        this->database->HMiCT_TestCold_B1 = false;
        this->database->HMiCT_TestWarm_B1 = false;
        this->database->HMI_15minscnt = 0;
    }
    // refresh the fault list every 1.65 second, the code which occupies cpu time a lot should not execute at the same cycle
    static int faultdelaycnt = 0;
    // fault scan delay 16.5s
    if (counter % 5 == 0 && (faultdelaycnt++ > 50))
    {
        crrcFault->synchronize(crrcCan);
        // 开启故障滚动
        this->vehicleRunPage->startRollingFault(true);

        faultdelaycnt = 60;
        // both 2 VCU offline   fault continue 3.3s ,show a widget
//#ifndef USER_DEBUG_MODE
        static int both2VCUfaultwidgetcnt = 0;
        if(!(this->database->CANopenStatus_VCU1||this->database->CANopenStatus_VCU2))
        {
            if(both2VCUfaultwidgetcnt++ > 10)
            {
                if(!this->vehicleAlarmWidget->res_pageclose)
                {
                    this->vehicleAlarmWidget->setBackgroundStylesheet("background-color: rgb(255, 0, 0);");
                    this->vehicleAlarmWidget->setLabelStylesheet("font: 75 32pt;");
                    this->vehicleAlarmWidget->setLabelgroundText("2个VCU同时故障!\n安全制动!请求救援!");
                    this->vehicleAlarmWidget->raise();
                    this->vehicleAlarmWidget->show();
                }

                both2VCUfaultwidgetcnt = 20;
            }else
            {
                this->vehicleAlarmWidget->hide();
            }

        }else
        {
            this->vehicleAlarmWidget->res_pageclose = false;
            both2VCUfaultwidgetcnt = 0;
            this->vehicleAlarmWidget->hide();
        }
//#endif
        writeRecorder();
    }

    // lack sand alarmwidget
    {
        bool lacksand_1carleft =false;
        bool lacksand_1carright =false;
        bool lacksand_3carleft =false;
        bool lacksand_3carright =false;
        bool lacksand_4carleft =false;
        bool lacksand_4carright =false;
        bool lacksand_6carleft =false;
        bool lacksand_6carright =false;

        static bool lacksand_old_1carleft =false;
        static bool lacksand_old_1carright =false;
        static bool lacksand_old_3carleft =false;
        static bool lacksand_old_3carright =false;
        static bool lacksand_old_4carleft =false;
        static bool lacksand_old_4carright =false;
        static bool lacksand_old_6carleft =false;
        static bool lacksand_old_6carright =false;

        lacksand_1carleft = (lacksand_old_1carleft^this->database->riomDi1In23Mc1) && this->database->riomDi1In23Mc1 ; // trigger alarm widget
        lacksand_1carright = (lacksand_old_1carright^this->database->riomDi1In24Mc1) && this->database->riomDi1In24Mc1 ;
        lacksand_3carleft = (lacksand_old_3carleft^this->database->riomDi1In23M1) && this->database->riomDi1In23M1 ;
        lacksand_3carright = (lacksand_old_3carright^this->database->riomDi1In24M1) && this->database->riomDi1In24M1 ;
        lacksand_4carleft = (lacksand_old_4carleft^this->database->riomDi1In23M2) && this->database->riomDi1In23M2 ;
        lacksand_4carright = (lacksand_old_4carright^this->database->riomDi1In24M2) && this->database->riomDi1In24M2 ;
        lacksand_6carleft = (lacksand_old_6carleft^this->database->riomDi1In23Mc2) && this->database->riomDi1In23Mc2 ;
        lacksand_6carright = (lacksand_old_6carright^this->database->riomDi1In24Mc2) && this->database->riomDi1In24Mc2 ;



        if(lacksand_1carleft || lacksand_1carright ||
           lacksand_3carleft || lacksand_3carright ||
           lacksand_4carleft || lacksand_4carright ||
           lacksand_6carleft || lacksand_6carright )
        {
            QString temp_str;
            if(this->database->riomDi1In23Mc1)
            {
                temp_str += "1车左 ";
            }
            if(this->database->riomDi1In24Mc1)
            {
                temp_str += "1车右 ";
            }
            if(this->database->riomDi1In23M1)
            {
                temp_str += "3车左 ";
            }
            if(this->database->riomDi1In24M1)
            {
                temp_str += "3车右 ";
            }
            if(this->database->riomDi1In23M2)
            {
                temp_str += "4车左 ";
            }
            if(this->database->riomDi1In24M2)
            {
                temp_str += "4车右 ";
            }
            if(this->database->riomDi1In23Mc2)
            {
                temp_str += "6车左 ";
            }
            if(this->database->riomDi1In24Mc2)
            {
                temp_str += "6车右 ";
            }
            this->sandboxAlarm->setLabelStr(temp_str+"沙箱缺沙！");
            this->sandboxAlarm->raise();
            this->sandboxAlarm->show();
        }


        lacksand_old_1carleft = this->database->riomDi1In23Mc1;
        lacksand_old_1carright = this->database->riomDi1In24Mc1;
        lacksand_old_3carleft = this->database->riomDi1In23M1;
        lacksand_old_3carright = this->database->riomDi1In24M1;
        lacksand_old_4carleft = this->database->riomDi1In23M2;
        lacksand_old_4carright = this->database->riomDi1In24M2;
        lacksand_old_6carleft = this->database->riomDi1In23Mc2;
        lacksand_old_6carright = this->database->riomDi1In24Mc2;

    }


    this->crrcFault->getLocalDateTime(this->database->HMI_DateTime_foruse);

    // reset the counter, its longest counter time is 10 second
    counter >= 30 ? (counter = 1) : (counter = 0);
}

void MainWidget::showEvent(QShowEvent *event)
{
    if(database->mydefaultpara->configureValid())
    {
        if(database->HMIPosition == 1)//config  sourcePORT and IP
        {
            system("ifconfig eth0 192.168.2.3");

            crrcCan->addSourcePort(0x195,8);
            crrcCan->addSourcePort(0x295,8);
            crrcCan->addSourcePort(0x395,8);
            crrcCan->addSourcePort(0x495,8);
            crrcCan->addSourcePort(0x19b,8);
            crrcCan->addSourcePort(0x39b,8);

            crrcCan->addSinkPort(0x196,8);//他车显示屏发送的生命信号
            crrcCan->addSinkPort(0x215,8);
            crrcCan->addSinkPort(0x315,8);
            crrcCan->addSinkPort(0x415,8);
            crrcCan->addSinkPort(0x515,8);
            crrcCan->addSinkPort(0x21B,8);
            crrcCan->addSinkPort(0x41B,8);


        }else if(database->HMIPosition == 2)
        {
            system("ifconfig eth0 192.168.2.4");

            crrcCan->addSourcePort(0x196,8);
            crrcCan->addSourcePort(0x296,8);
            crrcCan->addSourcePort(0x396,8);
            crrcCan->addSourcePort(0x496,8);
            crrcCan->addSourcePort(0x29b,8);
            crrcCan->addSourcePort(0x49b,8);

            crrcCan->addSinkPort(0x195,8);
            crrcCan->addSinkPort(0x216,8);
            crrcCan->addSinkPort(0x316,8);
            crrcCan->addSinkPort(0x416,8);
            crrcCan->addSinkPort(0x516,8);
            crrcCan->addSinkPort(0x31B,8);
            crrcCan->addSinkPort(0x51B,8);

        }
        crrcCan->addSinkPort(0x203,8);
        crrcCan->addSinkPort(0x186,8);
        crrcCan->addSinkPort(0x486,8);
        crrcCan->addSinkPort(0x1FF,8);
        crrcCan->addSinkPort(0x3FF,8);
        crrcCan->addSinkPort(0x4FF,8);
        crrcCan->addSinkPort(0x406,8);
        crrcCan->addSinkPort(0x188,8);
        crrcCan->addSinkPort(0x488,8);
        crrcCan->addSinkPort(0x1F9,8);
        crrcCan->addSinkPort(0x3F9,8);
        crrcCan->addSinkPort(0x4F9,8);
        crrcCan->addSinkPort(0x408,8);
        crrcCan->addSinkPort(0x187,8);
        crrcCan->addSinkPort(0x487,8);
        crrcCan->addSinkPort(0x1FC,8);
        crrcCan->addSinkPort(0x3FC,8);
        crrcCan->addSinkPort(0x4FC,8);
        crrcCan->addSinkPort(0x407,8);
        crrcCan->addSinkPort(0x489,8);
        crrcCan->addSinkPort(0x189,8);
        crrcCan->addSinkPort(0x1F6,8);
        crrcCan->addSinkPort(0x3F6,8);
        crrcCan->addSinkPort(0x4F6,8);
        crrcCan->addSinkPort(0x409,8);
        crrcCan->addSinkPort(0x1B1,8);
        crrcCan->addSinkPort(0x1B2,8);
        crrcCan->addSinkPort(0x2B1,8);
        crrcCan->addSinkPort(0x2B2,8);
        crrcCan->addSinkPort(0x184,8);
        crrcCan->addSinkPort(0x185,8);
        crrcCan->addSinkPort(0x284,8);
        crrcCan->addSinkPort(0x285,8);
        crrcCan->addSinkPort(0x384,8);
        crrcCan->addSinkPort(0x385,8);
        crrcCan->addSinkPort(0x18F,8);
        crrcCan->addSinkPort(0x28F,8);
        crrcCan->addSinkPort(0x38F,8);
        crrcCan->addSinkPort(0x48F,8);
        crrcCan->addSinkPort(0x190,8);
        crrcCan->addSinkPort(0x290,8);
        crrcCan->addSinkPort(0x390,8);
        crrcCan->addSinkPort(0x490,8);
        crrcCan->addSinkPort(0x191,8);
        crrcCan->addSinkPort(0x291,8);
        crrcCan->addSinkPort(0x391,8);
        crrcCan->addSinkPort(0x491,8);
        crrcCan->addSinkPort(0x192,8);
        crrcCan->addSinkPort(0x292,8);
        crrcCan->addSinkPort(0x392,8);
        crrcCan->addSinkPort(0x492,8);
        crrcCan->addSinkPort(0x18B,8);
        crrcCan->addSinkPort(0x28B,8);
        crrcCan->addSinkPort(0x38B,8);
        crrcCan->addSinkPort(0x48B,8);
        crrcCan->addSinkPort(0x1EB,8);
        crrcCan->addSinkPort(0x2EB,8);
        crrcCan->addSinkPort(0x18C,8);
        crrcCan->addSinkPort(0x28C,8);
        crrcCan->addSinkPort(0x38C,8);
        crrcCan->addSinkPort(0x48C,8);
        crrcCan->addSinkPort(0x1EC,8);
        crrcCan->addSinkPort(0x2EC,8);
        crrcCan->addSinkPort(0x18D,8);
        crrcCan->addSinkPort(0x28D,8);
        crrcCan->addSinkPort(0x38D,8);
        crrcCan->addSinkPort(0x48D,8);
        crrcCan->addSinkPort(0x1ED,8);
        crrcCan->addSinkPort(0x2ED,8);
        crrcCan->addSinkPort(0x18E,8);
        crrcCan->addSinkPort(0x28E,8);
        crrcCan->addSinkPort(0x38E,8);
        crrcCan->addSinkPort(0x48E,8);
        crrcCan->addSinkPort(0x1EE,8);
        crrcCan->addSinkPort(0x2EE,8);
        crrcCan->addSinkPort(0x197,8);
        crrcCan->addSinkPort(0x297,8);
        crrcCan->addSinkPort(0x198,8);
        crrcCan->addSinkPort(0x298,8);
        crrcCan->addSinkPort(0x199,8);
        crrcCan->addSinkPort(0x299,8);
        crrcCan->addSinkPort(0x19A,8);
        crrcCan->addSinkPort(0x29A,8);
        crrcCan->addSinkPort(0x19F,8);  //edcu
        crrcCan->addSinkPort(0x1A0,8);
        crrcCan->addSinkPort(0x1A1,8);
        crrcCan->addSinkPort(0x1A2,8);
        crrcCan->addSinkPort(0x1A3,8);
        crrcCan->addSinkPort(0x1A4,8);
        crrcCan->addSinkPort(0x1A5,8);
        crrcCan->addSinkPort(0x1A6,8);
        crrcCan->addSinkPort(0x1A7,8);
        crrcCan->addSinkPort(0x1A8,8);
        crrcCan->addSinkPort(0x1A9,8);
        crrcCan->addSinkPort(0x1AA,8);
        crrcCan->addSinkPort(0x1AB,8);
        crrcCan->addSinkPort(0x1AC,8);
        crrcCan->addSinkPort(0x1AD,8);
        crrcCan->addSinkPort(0x1AE,8);
        crrcCan->addSinkPort(0x193,8);  //pis
        crrcCan->addSinkPort(0x293,8);
        crrcCan->addSinkPort(0x393,8);
        crrcCan->addSinkPort(0x194,8);
        crrcCan->addSinkPort(0x294,8);
        crrcCan->addSinkPort(0x394,8);
        crrcCan->addSinkPort(0x213,8);
        crrcCan->addSinkPort(0x313,8);
        crrcCan->addSinkPort(0x413,8);
        crrcCan->addSinkPort(0x513,8);
        crrcCan->addSinkPort(0x20B,8); //VCU->TCU
        crrcCan->addSinkPort(0x20C,8);
        crrcCan->addSinkPort(0x20D,8);
        crrcCan->addSinkPort(0x20E,8);
        crrcCan->addSinkPort(0x27E,8); //VCU-ATC
        crrcCan->addSinkPort(0x37E,8);
        crrcCan->addSinkPort(0x278,8);
        crrcCan->addSinkPort(0x378,8);
        crrcCan->addSinkPort(0x1FE,8); //ATC-VCU
        crrcCan->addSinkPort(0x2FE,8);
        crrcCan->addSinkPort(0x3FE,8);
        crrcCan->addSinkPort(0x4FE,8);
        crrcCan->addSinkPort(0x1F8,8);
        crrcCan->addSinkPort(0x2F8,8);
        crrcCan->addSinkPort(0x3F8,8);
        crrcCan->addSinkPort(0x4F8,8);
        this->vehicleRunPage->show();
        timer->start(333);
        // add logic fault ports
        crrcCan->addSinkPort(0xF00,8);
        //pis master
        crrcCan->addSinkPort(0xf01,8);
        crrcCan->addSinkPort(0xf02,8);
        crrcCan->addSinkPort(0xf03,8);


#ifndef USER_DEBUG_MODE
        crrcCan->start();
#endif

    }else
    {
        _LOG << "fail to read configure file.";
    }

    //crrcFault->printAllFaultType();

}

// the window type of middle and huge will be set shown and hidden here
void MainWidget::changePage(int page)
{
    foreach (int key, this->widgets.keys())
    {
        if (key == page)
        {
            BasePage::currentPage = page;

            if(page == uVehicleRIOMIOPage || page == uVehicleM1RIOMIOPage ||page == uVehicleM2RIOMIOPage ||page == uVehicleMC2RIOMIOPage||
               page == uVehicleFactoryTestPage ||page == uVehicleFactoryTestPage2)
            {
                this->widgets[uNavigator]->hide();
            }else
            {
                this->widgets[uNavigator]->show();

            }
            ///非运行页面隐藏帮助页面
            if(page == uVehicleRunPage)
            {
                headerPage->showHelpBtn(true);
            }else
            {
                headerPage->showHelpBtn(false);
            }

            this->widgets[page]->show();
            _LOG << "change page to" << this->widgets[page]->name;


            // add page name to the header

            // 切换页面时，将一些控制变量清0
            if(page != uVehicleParaSetPage)
            {
                this->database->HMiCT_WheelSet_B1 = false;
                this->database->HMiCT_SaveTrainNum_B1 = false;
                this->database->HMiCT_IDUDistanceSet_B1 = false;
                this->database->HMiCT_EmgyBroadcastCommd_B1 = false;
                this->database->HMiCT_EmgyBroadcastStop_B1 = false;
                this->database->HMiCT_TempStartSet_B1 = false;
                this->database->HMiCT_MonthStopSet_B1 = false;
            }

        }
        else
        {
            this->widgets[key]->hide();
        }
    }
}


void MainWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        // close the window
        this->close();
        this->debugpage->close();
    }
    else if (event->key() == Qt::Key_S)
    {
        this->debugpage->starttimer();
        this->debugpage->show();
    }
}


void MainWidget::VCUtime2HMI10s()
{
    QDateTime dateTimeSystem;
    QDateTime dateTimeCcu;
    QDate date( this->database->VCUtoALL_year+2000, this->database->VCUtoALL_month, this->database->VCUtoALL_day );
    QTime time( this->database->VCUtoALL_hour, this->database->VCUtoALL_minute, this->database->VCUtoALL_second);
    dateTimeCcu.setDate(date);
    dateTimeCcu.setTime(time);
//    qDebug()<< "CCU TIME: " <<dateTimeCcu.date().year()<<dateTimeCcu.date().month()<<dateTimeCcu.date().day() << dateTimeCcu.toTime_t()
//            << "IDU TIME: " << dateTimeSystem.currentDateTime().date().year()<<dateTimeSystem.currentDateTime().date().month()<<dateTimeSystem.currentDateTime().date().day()
//            << dateTimeSystem.currentDateTime().toTime_t();

    if((bool(dateTimeCcu.date().year() > 1999) && bool(dateTimeCcu.date().year() < 2038)))
    {
        int timeDiff = ( dateTimeCcu.toTime_t()-dateTimeSystem.currentDateTime().toTime_t());



        if(bool(bool(timeDiff<-6 )||bool(timeDiff>6))  )
        {
            if(count10stimer > 0)
            {
                if(count10stimer++ >30)
                {
                    count10stimer = 0;
                }
            }else
            {
                count10stimer = 1;
#ifndef USER_DEBUG_MODE
                systimeset(this->database->VCUtoALL_year+2000,this->database->VCUtoALL_month,this->database->VCUtoALL_day
                           ,this->database->VCUtoALL_hour,this->database->VCUtoALL_minute,this->database->VCUtoALL_second);
#endif
            }
        }else
        {
            count10stimer = 0;
        }

    }
}
bool MainWidget::systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                             unsigned short int hour,unsigned short int minute,unsigned short int second)
{
    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = month - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);

    QDate date( year, month, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);

    return true;
}
void MainWidget::writeRecorder()
{
    QDateTime timeStr=QDateTime::currentDateTime();
    // file name : Fault1,Fault2,Fault3
    int t_Linecnt1 = 0;
    int t_Linecnt2 = 0;
    int t_Linecnt3 = 0;


    QDir dir;

    QString fileNameRunData1 = dir.currentPath()+"/Fault1"+".csv";  // file1 line number
    QFile csvFileRunData1( fileNameRunData1 );
    if( (!csvFileRunData1.open(QIODevice::ReadWrite | QIODevice::Text)))
    {
        return;
    }
    QTextStream inoutRunData1(&csvFileRunData1 );
    while(!inoutRunData1.atEnd())
    {
        inoutRunData1.readLine();
        t_Linecnt1++;
    }

    QString fileNameRunData2 = dir.currentPath()+"/Fault2"+".csv";
    QFile csvFileRunData2( fileNameRunData2 );
    if( (!csvFileRunData2.open(QIODevice::ReadWrite | QIODevice::Text)))
    {
        return;
    }
    QTextStream inoutRunData2(&csvFileRunData2 );
    while(!inoutRunData2.atEnd())
    {
        inoutRunData2.readLine();
        t_Linecnt2++;
    }

    QString fileNameRunData3 = dir.currentPath()+"/Fault3"+".csv";
    QFile csvFileRunData3( fileNameRunData3 );
    if( (!csvFileRunData3.open(QIODevice::ReadWrite | QIODevice::Text)))
    {
        return;
    }
    QTextStream inoutRunData3(&csvFileRunData3 );
    while(!inoutRunData3.atEnd())
    {
        inoutRunData3.readLine();
        t_Linecnt3++;
    }

    // linecnt1>linecnt2>linecnt3
    if(t_Linecnt1 > 1000 && m_FileNo == 1)  // clean file2
    {
        m_FileNo = 2;
        csvFileRunData2.resize(0);
        getdefaultpara->set("/FaultFileNo/FileNo",m_FileNo);

    }else if(t_Linecnt2 > 1000 && m_FileNo == 2)  // clean file3
    {
        m_FileNo = 3;
        csvFileRunData3.resize(0);
        getdefaultpara->set("/FaultFileNo/FileNo",m_FileNo);

    }else if(t_Linecnt3 > 1000 && m_FileNo == 3)  //clean file1
    {
        m_FileNo = 1;
        csvFileRunData1.resize(0);
        getdefaultpara->set("/FaultFileNo/FileNo",m_FileNo);

    }
    inoutRunData1.flush();//clear
    csvFileRunData1.close();
    inoutRunData2.flush();//clear
    csvFileRunData2.close();
    inoutRunData3.flush();//clear
    csvFileRunData3.close();


    QString fileNameRunData = dir.currentPath()+"/Fault"+QString::number(m_FileNo) + ".csv";
    QFile csvFileRunData( fileNameRunData );
    if( (!csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text)))
    {
        return;
    }
    QTextStream inoutRunData(&csvFileRunData );
    inoutRunData.setCodec("GB2312");
    if("t" != inoutRunData.readLine().at(0))
    {
        QString t_title = "time,device,level,code,edge,当前站ID,级位,速度,网压,车辆编号,预留\n";
        inoutRunData<<t_title ;
    }
    QString dateTimeStr = timeStr.toString("yyyy-MM-dd HH:mm:ss");
    QString newLine = dateTimeStr;
    for(int i=0;i<crrcFault->getStepFaultCode().size();i++)
    {
        QString t_level,t_code,t_position;
        bool t_status;

        t_code = crrcFault->getStepFaultCode().at(i);
        t_level = t_code[1];
        t_status = crrcFault->getStepFaultStatus().at(i);
        t_position = crrcFault->getStepFaultPosition().at(i);
        newLine =dateTimeStr+","+t_position+","+t_level+","+t_code+","+QString::number(t_status?1:0)+","
                +QString::number(database->PIS_CurrentStation_U16)+","
                +QString::number(database->Master_controller_level)+","
                +QString::number(database->wR2Word4_Speed)+","
                +QString::number(database->wR3Word2_net_voltage)+","
                +QString::number(database->VCUtoALL_codeHigh*256+database->VCUtoALL_codeLow)+","
                "0";

        inoutRunData << newLine << "\n";
    }
    int t_Linecnt = 0;
    while(!inoutRunData.atEnd())
    {
        inoutRunData.readLine();
        t_Linecnt++;
    }

    crrcFault->ClearStepFault();
    inoutRunData.flush();//clear
    csvFileRunData.close();
}
void MainWidget::showHelpPage()
{
    if(BasePage::currentPage == uVehicleRunPage)
    {
        vehiclehelppage->raise();
        vehiclehelppage->show();
    }

}

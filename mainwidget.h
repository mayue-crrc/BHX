#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QtGui>
#include <QWidget>
#include <QMap>
#include <QFile>
#include "MainGetDefaultPara.h"
#include "vehiclehelppage.h"
#include "vehiclealarmwidget.h"

namespace Ui {
    class MainWidget;
}

class QTimer;
class BasePage;
class CrrcCan;
class Database;
class NavigatorPage;
class HeaderPage;
class VehicleRunPage;
class VehicleStatesPage;
class VehicleTCUPage;
class VehicleBCUPage;
class VehicleACUPage;
class VehicleHVACPage;
class VehicleDoorPage;
class VehicleSettingPage;
class VehicleParaSetting;
class VehicleInstructionTestPage;
class VehicleInstructionTestPage2;
class VehicleInstructionTestPage3;
class VehicleInitsetPage;
class VehicleRIOMIOPage;
class VehicleM1RIOMIOPage;
class VehicleM2RIOMIOPage;
class VehicleMC2RIOMIOPage;
class CanDebugPage;
class VehicleVisionLifesignalPage;
class VehicleDatetimeSetPage;
class CtrlDebugPage;
class VehicleParaSet;
class VehicleHistoryFaultPage;
class CrrcFault;
class VehicleDoorDetailStatesPage;
class VehicleInstructionSetPage;
class VehicleCurrentFaultPage;
class VehicleFactoryTestPage;
class VehicleFactoryTestPage2;
class CtrlAlarmBarH;
class VehicleWheelSetPage;

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void showEvent(QShowEvent *event);
    void keyPressEvent(QKeyEvent *event);
    QMap<int, BasePage *> widgets;
    bool systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                     unsigned short int hour,unsigned short int min,unsigned short int sec);

public:
    Database *database;
    CrrcCan *crrcCan;
    CrrcFault *crrcFault;
    HeaderPage *headerPage;
    NavigatorPage *navigatorPage;
    VehicleRunPage *vehicleRunPage;
    VehicleStatesPage *vehicleStatesPage;
    VehicleTCUPage *vehicleTCUPage;
    VehicleBCUPage *vehicleBCUPage;
    VehicleACUPage *vehicleACUPage;
    VehicleHVACPage *vehicleHVACPage;
    VehicleDoorPage *vehicleDoorPage;
    VehicleSettingPage *vehicleSettingPage;
    VehicleParaSetting *vehicleparasettingPage;
    VehicleInstructionTestPage *vehicleinstructionPage;
    VehicleInstructionTestPage2 *vehicleinstructionPage2;
    VehicleInstructionTestPage3 *vehicleinstructionPage3;
    VehicleInitsetPage *vehicleinitsetPage;
    VehicleRIOMIOPage *vehicleRIOMIOPage;
    VehicleM1RIOMIOPage *vehicleM1RIOMIOPage;
    VehicleM2RIOMIOPage *vehicleM2RIOMIOPage;
    VehicleMC2RIOMIOPage *vehicleMC2RIOMIOPage;
    CanDebugPage *canDebugPage;
    VehicleVisionLifesignalPage *vehicleVisionLifesignalPage;
    VehicleDatetimeSetPage *vehicleDatetimeSetPage;
    CtrlDebugPage *debugpage;
    VehicleParaSet* vehicleParaSet;
    VehicleHistoryFaultPage* vehicleHistoryFaultPage;
    VehicleDoorDetailStatesPage* vehicleDoorDetailStatesPage;
    VehicleInstructionSetPage* vehicleInstructionSetPage;
    VehicleCurrentFaultPage* vehicleCurrentFaultPage;
    VehicleFactoryTestPage* vehicleFactoryTestPage;
    VehicleFactoryTestPage2* vehicleFactoryTestPage2;
    VehicleWheelSetPage* vehicleWheelSetPage;

    void VCUtime2HMI10s();
    int count10stimer;

    VehicleHelpPage *vehiclehelppage;
    VehicleAlarmWidget *vehicleAlarmWidget;
    VehicleAlarmWidget *TwoCabActAlarmWidget;

public slots:
    void changePage(int page);
    void updatePage();
private slots:
    void showHelpPage();

private:
    Ui::MainWidget *ui;
    QTimer *timer;
    void writeRecorder();
    MainGetDefaultPara* getdefaultpara;
    int m_FileNo;
    CtrlAlarmBarH* sandboxAlarm;
};

#endif // MAINWIDGET_H

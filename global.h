#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdlib.h>
#include <QDebug>



#define USER_DEBUG_MODE

enum pagePosition
{
    uTop = 0,
    uMiddle,
    uBottom,
    uHuge
};

enum pageIndex
{
    uNavigator,
    uCandebugPage,
    uCtrlDebugPage,
    uVehicleRunPage,
    uVehicleStatePage,
    uVehicleTCUPage,
    uVehicleBCUPage,
    uVehicleACUPage,
    uVehicleHVACPage,
    uVehicleDoorPage,
    uVehicleSettingPage,
    uVehicleParaSetting,
    uVehicleInstructionPage,
    uVehicleInstructionPage2,
    uVehicleInstructionPage3,
    uVehicleInitSetPage,
    uVehicleRIOMIOPage,
    uVehicleM1RIOMIOPage,
    uVehicleM2RIOMIOPage,
    uVehicleMC2RIOMIOPage,
    uVehicleVisionLifesignalPage,
    uVehicleDatetimeSetPage,
    uVehicleParaSetPage,
    uVehicleHistoryFaultPage,
    uVehicleDoorDetailStatesPage,
    uVehicleInstructionSetPage,
    uVehicleCurrentFaultPage,
    uVehicleFactoryTestPage,
    uVehicleFactoryTestPage2,
    uVehicleWheelSetPage,

};
#define DI_LENGTH (24 + 1)
#define DO_LENGTH (16 + 1)
#define AX_LENGTH (8 + 1)

#define ON_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: green;")
#define OFF_STATE ("border-radius: 12px; border: 1px groove yellow; background-color: gray;")

#define FONTFOR8WORDS          "font: 14px;border:2px solid black;"
#define FONTFOR12WORDS         "font: 11px;border:2px solid black;"
#define LABELCOLOR_GREEN        "font: 16px;border:2px solid rgb(0, 255, 0);background-color:rgb(0,255,0)"
#define LABELCOLOR_WHITE        "font: 16px;border:2px solid rgb(255, 255, 255);background-color:rgb(255,255,255)"
#define LABELCOLOR_YELLOW       "font: 16px;border:2px solid rgb(255, 255, 0);background-color:rgb(255,255,0)"
#define LABELCOLOR_RED          "font: 16px;border:2px solid rgb(255, 0, 0);background-color:rgb(255,0,0)"
#define LABELCOLOR_GRAY          "font: 16px;border:2px solid rgb(115,115,115;background-color:rgb(115,115,115)"
#define LABELCOLOR_LIGHTGRAY    "font: 16px;border:2px solid rgb(140,140,140);background-color:rgb(140,140,140)"
#define LABELCOLOR_BACKGROUND   "font: 16px;border:2px solid rgb(216,216,216);background-color:rgb(216,216,216)"
#define LABELCOLOR_NOINFO       "font: 16px;border:2px solid rgb(216,216,216);background-color:rgb(160,32,240)"

#define LABELONLINE_GREEN       "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(0,255,0)"
#define LABELONLINE_WHITE       "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,255)"
#define LABELONLINE_RED         "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,0,0)"
#define LABELONLINE_YELLOW      "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(255,255,0)"
#define LABELONLINE_GRAY        "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(140,140,140)"
#define LABELONLINE_ORANGE      "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:orange"
#define LABELONLINE_DARKRED      "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:darkred"
#define LABELONLINE_PINK        "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(242,20,150)"
#define LABELONLINE_NOINFO      "font: 11px;border-color: rgb(0, 0, 0);border:2px solid;background-color:rgb(160,32,240)"

#define WHITE           Qt::white
#define GREEN           Qt::green
#define RED             Qt::red
#define GRAY            Qt::gray
#define YELLOW          Qt::yellow
#define DARKGREEN       QColor(0,81,0)

#define MY_BUTTON_DOWN  ("font: 75 18px ;color: rgb(255, 255, 255);background-color: rgb(0, 32, 96);border-color: rgb(216, 216, 216);")
#define MY_BUTTON_UP    ("font: 75 18px ;color: rgb(255, 255, 255);background-color: rgb(51, 153, 255);border-color: rgb(216, 216, 216);")

#define MY_HVACBUTTON_DOWN  ("font: 75 16px ;color: rgb(255, 255, 255);background-color: rgb(0, 32, 96);border:2px  rgb(216, 216, 216);border-radius:10px;padding:2px 4px;")
#define MY_HVACBUTTON_UP    ("font: 75 16px ;color: rgb(0, 0, 0);background-color: rgb(98, 176, 255);border:2px  rgb(216, 216, 216);border-radius:10px;padding:2px 4px;")


#define _LOG qDebug() << __DATE__ << __TIME__ << __FILE__ << __LINE__


#endif // GLOBAL_H

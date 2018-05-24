#-------------------------------------------------
#
# Project created by QtCreator 2016-06-15T14:11:22
#
#-------------------------------------------------

QT += core gui
QT += network

TARGET = BHX
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp\
        mainwidget.cpp \
    basepage.cpp \
    headerpage.cpp \
    navigatorpage.cpp \
    vehiclerunpage.cpp \
    vehiclestatespage.cpp \
    statesbox8x4.cpp \
    vehicletcupage.cpp \
    vehiclebcupage.cpp \
    vehicleacupage.cpp \
    vehiclehvacpage.cpp \
    vehicledoorpage.cpp \
    vehiclesettingpage.cpp \
    ctrllevelbar.cpp \
    ctrlspeedometer.cpp \
    ctrltraindiagram.cpp \
    MainGetDefaultPara.cpp \
    vehicleparasetting.cpp \
    vehicleinstructiontestpage.cpp \
    vehicleeditpwpage.cpp \
    warnningdialog.cpp \
    vehicleinitsetpage.cpp \
    vehicleriomiopage.cpp \
    dicontrol.cpp \
    docontrol.cpp \
    axcontrol.cpp \
    vehiclem1riomiopage.cpp \
    vehiclem2riomiopage.cpp \
    vehiclemc2riomiopage.cpp \
    ctrlinputmodule.cpp \
    database.cpp \
    crrccan.cpp \
    candebugpage.cpp \
    vehiclevisionlifesignalpage.cpp \
    ctrlvisionlifesignalform.cpp \
    vehicleinstructiontestpage2.cpp \
    vehicledatetimesetpage.cpp \
    ctrldebugpage.cpp \
    ctrlcountdown.cpp \
    vehicleparaset.cpp \
    statesbox8x2.cpp \
    vehiclehistoryfaultpage.cpp \
    crrcfault.cpp \
    vehicledoordetailstatespage.cpp \
    vehicleinstructionsetpage.cpp \
    vehicleinstructiontestpage3.cpp \
    ctrlfaultdetails.cpp \
    vehiclecurrentfaultpage.cpp \
    vehiclehelppage.cpp \
    vehiclealarmwidget.cpp \
    vehiclefactorytestpage.cpp \
    vehiclefactorytestpage2.cpp \
    ctrlalarmbarh.cpp \
    vehiclewheelsetpage.cpp

HEADERS  += mainwidget.h \
    basepage.h \
    global.h \
    headerpage.h \
    navigatorpage.h \
    vehiclerunpage.h \
    vehiclestatespage.h \
    statesbox8x4.h \
    vehicletcupage.h \
    vehiclebcupage.h \
    vehicleacupage.h \
    vehiclehvacpage.h \
    vehicledoorpage.h \
    vehiclesettingpage.h \
    ctrllevelbar.h \
    ctrlspeedometer.h \
    ctrltraindiagram.h \
    MainGetDefaultPara.h \
    vehicleparasetting.h \
    vehicleinstructiontestpage.h \
    vehicleeditpwpage.h \
    warnningdialog.h \
    vehicleinitsetpage.h \
    vehicleriomiopage.h \
    dicontrol.h \
    docontrol.h \
    axcontrol.h \
    vehiclem1riomiopage.h \
    vehiclem2riomiopage.h \
    vehiclemc2riomiopage.h \
    ctrlinputmodule.h \
    database.h \
    crrccan.h \
    candebugpage.h \
    vehiclevisionlifesignalpage.h \
    ctrlvisionlifesignalform.h \
    vehicleinstructiontestpage2.h \
    vehicledatetimesetpage.h \
    ctrldebugpage.h \
    ctrlcountdown.h \
    vehicleparaset.h \
    statesbox8x2.h \
    vehiclehistoryfaultpage.h \
    crrcfault.h \
    vehicledoordetailstatespage.h \
    vehicleinstructionsetpage.h \
    vehicleinstructiontestpage3.h \
    ctrlfaultdetails.h \
    vehiclecurrentfaultpage.h \
    vehiclehelppage.h \
    vehiclealarmwidget.h \
    vehiclefactorytestpage.h \
    vehiclefactorytestpage2.h \
    ctrlalarmbarh.h \
    vehiclewheelsetpage.h \
    can4linux.h

FORMS    += mainwidget.ui \
    headerpage.ui \
    navigatorpage.ui \
    vehiclerunpage.ui \
    vehiclestatespage.ui \
    statesbox8x4.ui \
    vehicletcupage.ui \
    vehiclebcupage.ui \
    vehicleacupage.ui \
    vehiclehvacpage.ui \
    vehicledoorpage.ui \
    vehiclesettingpage.ui \
    ctrllevelbar.ui \
    ctrlspeedometer.ui \
    ctrltraindiagram.ui \
    vehicleparasetting.ui \
    vehicleinstructiontestpage.ui \
    vehicleeditpwpage.ui \
    warnningdialog.ui \
    vehicleinitsetpage.ui \
    vehicleriomiopage.ui \
    dicontrol.ui \
    docontrol.ui \
    axcontrol.ui \
    vehiclem1riomiopage.ui \
    vehiclem2riomiopage.ui \
    vehiclemc2riomiopage.ui \
    ctrlinputmodule.ui \
    candebugpage.ui \
    vehiclevisionlifesignalpage.ui \
    ctrlvisionlifesignalform.ui \
    vehicleinstructiontestpage2.ui \
    vehicledatetimesetpage.ui \
    CSerialDebugDialog.ui \
    ctrldebugpage.ui \
    ctrlcountdown.ui \
    vehicleparaset.ui \
    statesbox8x2.ui \
    vehiclehistoryfaultpage.ui \
    vehicledoordetailstatespage.ui \
    vehicleinstructionsetpage.ui \
    vehicleinstructiontestpage3.ui \
    ctrlfaultdetails.ui \
    vehiclecurrentfaultpage.ui \
    vehiclehelppage.ui \
    vehiclealarmwidget.ui \
    vehiclefactorytestpage.ui \
    vehiclefactorytestpage2.ui \
    ctrlalarmbarh.ui \
    vehiclewheelsetpage.ui

RESOURCES += \
    Resource.qrc

/****************************************************************************
** Meta object code from reading C++ file 'vehicleparaset.h'
**
** Created: Fri May 11 08:58:07 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleparaset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleparaset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleParaSet[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      59,   15,   15,   15, 0x08,
     104,   15,   15,   15, 0x08,
     148,   15,   15,   15, 0x08,
     205,   15,   15,   15, 0x08,
     258,   15,   15,   15, 0x08,
     311,   15,   15,   15, 0x08,
     364,   15,   15,   15, 0x08,
     417,   15,   15,   15, 0x08,
     471,   15,   15,   15, 0x08,
     522,   15,   15,   15, 0x08,
     573,   15,   15,   15, 0x08,
     625,   15,   15,   15, 0x08,
     677,   15,   15,   15, 0x08,
     719,   15,   15,   15, 0x08,
     768,   15,   15,   15, 0x08,
     810,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleParaSet[] = {
    "VehicleParaSet\0\0"
    "on_VehicleWheelset_Button_return_pressed()\0"
    "on_VehicleWheelset_Button_NextPage_pressed()\0"
    "on_VehicleWheelset_Button_PrePage_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_MonthStopSet_B1_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_MonthStop2p_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_MonthStop1p_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_MonthStop2m_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_MonthStop1m_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_TempStartset_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_TempStopp_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_TempStopm_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_TempStartp_pressed()\0"
    "on_VehicleParaSet_Button_HMiCT_TempStartm_pressed()\0"
    "on_VehicleParaSet_Button_FBRMC1_pressed()\0"
    "on_VehicleParaSet_Button_Sandforbidden_pressed()\0"
    "on_VehicleParaSet_Button_EBStop_pressed()\0"
    "on_VehicleParaSet_Button_EB_pressed()\0"
};

const QMetaObject VehicleParaSet::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleParaSet,
      qt_meta_data_VehicleParaSet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleParaSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleParaSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleParaSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleParaSet))
        return static_cast<void*>(const_cast< VehicleParaSet*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleParaSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleWheelset_Button_return_pressed(); break;
        case 1: on_VehicleWheelset_Button_NextPage_pressed(); break;
        case 2: on_VehicleWheelset_Button_PrePage_pressed(); break;
        case 3: on_VehicleParaSet_Button_HMiCT_MonthStopSet_B1_pressed(); break;
        case 4: on_VehicleParaSet_Button_HMiCT_MonthStop2p_pressed(); break;
        case 5: on_VehicleParaSet_Button_HMiCT_MonthStop1p_pressed(); break;
        case 6: on_VehicleParaSet_Button_HMiCT_MonthStop2m_pressed(); break;
        case 7: on_VehicleParaSet_Button_HMiCT_MonthStop1m_pressed(); break;
        case 8: on_VehicleParaSet_Button_HMiCT_TempStartset_pressed(); break;
        case 9: on_VehicleParaSet_Button_HMiCT_TempStopp_pressed(); break;
        case 10: on_VehicleParaSet_Button_HMiCT_TempStopm_pressed(); break;
        case 11: on_VehicleParaSet_Button_HMiCT_TempStartp_pressed(); break;
        case 12: on_VehicleParaSet_Button_HMiCT_TempStartm_pressed(); break;
        case 13: on_VehicleParaSet_Button_FBRMC1_pressed(); break;
        case 14: on_VehicleParaSet_Button_Sandforbidden_pressed(); break;
        case 15: on_VehicleParaSet_Button_EBStop_pressed(); break;
        case 16: on_VehicleParaSet_Button_EB_pressed(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

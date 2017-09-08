/****************************************************************************
** Meta object code from reading C++ file 'vehicleparasetting.h'
**
** Created: Fri Sep 8 13:29:55 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleparasetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleparasetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleParaSetting[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      65,   19,   19,   19, 0x08,
     111,   19,   19,   19, 0x08,
     156,   19,   19,   19, 0x08,
     201,   19,   19,   19, 0x08,
     245,   19,   19,   19, 0x08,
     295,   19,   19,   19, 0x08,
     340,   19,   19,   19, 0x08,
     381,   19,   19,   19, 0x08,
     421,   19,   19,   19, 0x08,
     461,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleParaSetting[] = {
    "VehicleParaSetting\0\0"
    "on_VParaSetting_Button_factorytest_pressed()\0"
    "on_VParaSetting_Button_HistoryFault_pressed()\0"
    "on_VParaSetting_Button_parasetting_pressed()\0"
    "on_VParaSetting_Button_datetimeset_pressed()\0"
    "on_VParaSetting_Button_factroyset_pressed()\0"
    "on_VParaSetting_Button_visionlifesignal_pressed()\0"
    "on_VParaSetting_Button_candataPage_pressed()\0"
    "on_VParaSetting_Button_Initset_pressed()\0"
    "on_VParaSetting_Button_IOpage_pressed()\0"
    "on_VParaSetting_Button_EditPW_pressed()\0"
    "on_VParaSetting_Button_test_pressed()\0"
};

const QMetaObject VehicleParaSetting::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleParaSetting,
      qt_meta_data_VehicleParaSetting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleParaSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleParaSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleParaSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleParaSetting))
        return static_cast<void*>(const_cast< VehicleParaSetting*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleParaSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VParaSetting_Button_factorytest_pressed(); break;
        case 1: on_VParaSetting_Button_HistoryFault_pressed(); break;
        case 2: on_VParaSetting_Button_parasetting_pressed(); break;
        case 3: on_VParaSetting_Button_datetimeset_pressed(); break;
        case 4: on_VParaSetting_Button_factroyset_pressed(); break;
        case 5: on_VParaSetting_Button_visionlifesignal_pressed(); break;
        case 6: on_VParaSetting_Button_candataPage_pressed(); break;
        case 7: on_VParaSetting_Button_Initset_pressed(); break;
        case 8: on_VParaSetting_Button_IOpage_pressed(); break;
        case 9: on_VParaSetting_Button_EditPW_pressed(); break;
        case 10: on_VParaSetting_Button_test_pressed(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

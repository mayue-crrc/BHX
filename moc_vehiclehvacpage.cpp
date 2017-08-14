/****************************************************************************
** Meta object code from reading C++ file 'vehiclehvacpage.h'
**
** Created: Tue Jul 18 10:15:56 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclehvacpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclehvacpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleHVACPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      49,   16,   16,   16, 0x08,
      81,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     198,   16,   16,   16, 0x08,
     235,   16,   16,   16, 0x08,
     271,   16,   16,   16, 0x08,
     307,   16,   16,   16, 0x08,
     342,   16,   16,   16, 0x08,
     376,   16,   16,   16, 0x08,
     415,   16,   16,   16, 0x08,
     454,   16,   16,   16, 0x08,
     488,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleHVACPage[] = {
    "VehicleHVACPage\0\0on_VHVAC_Button_heat2_pressed()\0"
    "on_VHVAC_Button_heat1_pressed()\0"
    "on_VHVAC_Button_HVACVcoldtest_pressed()\0"
    "on_VHVAC_Button_HVACVwarmtest_pressed()\0"
    "on_VHVAC_Button_Tempminus2_pressed()\0"
    "on_VHVAC_Button_Tempminus1_pressed()\0"
    "on_VHVAC_Button_Tempplus2_pressed()\0"
    "on_VHVAC_Button_Tempplus1_pressed()\0"
    "on_VHVAC_Button_HVACStop_pressed()\0"
    "on_VHVAC_Button_HVACVen_pressed()\0"
    "on_VHVAC_Button_HVACAutoCold_pressed()\0"
    "on_VHVAC_Button_HVACAutoWarm_pressed()\0"
    "on_VHVAC_Button_PrePage_pressed()\0"
    "on_VHVAC_Button_NextPage_pressed()\0"
};

const QMetaObject VehicleHVACPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleHVACPage,
      qt_meta_data_VehicleHVACPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleHVACPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleHVACPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleHVACPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleHVACPage))
        return static_cast<void*>(const_cast< VehicleHVACPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleHVACPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VHVAC_Button_heat2_pressed(); break;
        case 1: on_VHVAC_Button_heat1_pressed(); break;
        case 2: on_VHVAC_Button_HVACVcoldtest_pressed(); break;
        case 3: on_VHVAC_Button_HVACVwarmtest_pressed(); break;
        case 4: on_VHVAC_Button_Tempminus2_pressed(); break;
        case 5: on_VHVAC_Button_Tempminus1_pressed(); break;
        case 6: on_VHVAC_Button_Tempplus2_pressed(); break;
        case 7: on_VHVAC_Button_Tempplus1_pressed(); break;
        case 8: on_VHVAC_Button_HVACStop_pressed(); break;
        case 9: on_VHVAC_Button_HVACVen_pressed(); break;
        case 10: on_VHVAC_Button_HVACAutoCold_pressed(); break;
        case 11: on_VHVAC_Button_HVACAutoWarm_pressed(); break;
        case 12: on_VHVAC_Button_PrePage_pressed(); break;
        case 13: on_VHVAC_Button_NextPage_pressed(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

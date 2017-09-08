/****************************************************************************
** Meta object code from reading C++ file 'vehicleinstructiontestpage.h'
**
** Created: Fri Sep 8 13:29:55 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleinstructiontestpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleinstructiontestpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleInstructionTestPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,
      63,   27,   27,   27, 0x08,
      95,   27,   27,   27, 0x08,
     127,   27,   27,   27, 0x08,
     159,   27,   27,   27, 0x08,
     191,   27,   27,   27, 0x08,
     223,   27,   27,   27, 0x08,
     255,   27,   27,   27, 0x08,
     287,   27,   27,   27, 0x08,
     319,   27,   27,   27, 0x08,
     351,   27,   27,   27, 0x08,
     383,   27,   27,   27, 0x08,
     415,   27,   27,   27, 0x08,
     447,   27,   27,   27, 0x08,
     483,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleInstructionTestPage[] = {
    "VehicleInstructionTestPage\0\0"
    "on_VITest_Button_TCUTest_pressed()\0"
    "on_VITest_Button_L3R4_pressed()\0"
    "on_VITest_Button_L3R3_pressed()\0"
    "on_VITest_Button_L3R2_pressed()\0"
    "on_VITest_Button_L3R1_pressed()\0"
    "on_VITest_Button_L2R4_pressed()\0"
    "on_VITest_Button_L2R3_pressed()\0"
    "on_VITest_Button_L2R2_pressed()\0"
    "on_VITest_Button_L2R1_pressed()\0"
    "on_VITest_Button_L1R4_pressed()\0"
    "on_VITest_Button_L1R3_pressed()\0"
    "on_VITest_Button_L1R2_pressed()\0"
    "on_VITest_Button_L1R1_pressed()\0"
    "on_VITest_Button_nextPage_pressed()\0"
    "on_VITest_Button_closePage_pressed()\0"
};

const QMetaObject VehicleInstructionTestPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleInstructionTestPage,
      qt_meta_data_VehicleInstructionTestPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleInstructionTestPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleInstructionTestPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleInstructionTestPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleInstructionTestPage))
        return static_cast<void*>(const_cast< VehicleInstructionTestPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleInstructionTestPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VITest_Button_TCUTest_pressed(); break;
        case 1: on_VITest_Button_L3R4_pressed(); break;
        case 2: on_VITest_Button_L3R3_pressed(); break;
        case 3: on_VITest_Button_L3R2_pressed(); break;
        case 4: on_VITest_Button_L3R1_pressed(); break;
        case 5: on_VITest_Button_L2R4_pressed(); break;
        case 6: on_VITest_Button_L2R3_pressed(); break;
        case 7: on_VITest_Button_L2R2_pressed(); break;
        case 8: on_VITest_Button_L2R1_pressed(); break;
        case 9: on_VITest_Button_L1R4_pressed(); break;
        case 10: on_VITest_Button_L1R3_pressed(); break;
        case 11: on_VITest_Button_L1R2_pressed(); break;
        case 12: on_VITest_Button_L1R1_pressed(); break;
        case 13: on_VITest_Button_nextPage_pressed(); break;
        case 14: on_VITest_Button_closePage_pressed(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

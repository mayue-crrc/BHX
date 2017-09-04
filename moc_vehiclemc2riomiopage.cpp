/****************************************************************************
** Meta object code from reading C++ file 'vehiclemc2riomiopage.h'
**
** Created: Mon Sep 4 09:10:56 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclemc2riomiopage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclemc2riomiopage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleMC2RIOMIOPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      68,   21,   21,   21, 0x08,
     118,   21,   21,   21, 0x08,
     167,   21,   21,   21, 0x08,
     212,   21,   21,   21, 0x08,
     256,   21,   21,   21, 0x08,
     300,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleMC2RIOMIOPage[] = {
    "VehicleMC2RIOMIOPage\0\0"
    "on_VehicleMC2RIOMIOPage_button_back_pressed()\0"
    "on_VehicleMC2RIOMIOPage_button_nextpage_pressed()\0"
    "on_VehicleMC2RIOMIOPage_button_prepage_pressed()\0"
    "on_VehicleMC2RIOMIOPage_button_MC2_clicked()\0"
    "on_VehicleMC2RIOMIOPage_button_M2_clicked()\0"
    "on_VehicleMC2RIOMIOPage_button_M1_clicked()\0"
    "on_VehicleMC2RIOMIOPage_button_MC1_clicked()\0"
};

const QMetaObject VehicleMC2RIOMIOPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleMC2RIOMIOPage,
      qt_meta_data_VehicleMC2RIOMIOPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleMC2RIOMIOPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleMC2RIOMIOPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleMC2RIOMIOPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleMC2RIOMIOPage))
        return static_cast<void*>(const_cast< VehicleMC2RIOMIOPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleMC2RIOMIOPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleMC2RIOMIOPage_button_back_pressed(); break;
        case 1: on_VehicleMC2RIOMIOPage_button_nextpage_pressed(); break;
        case 2: on_VehicleMC2RIOMIOPage_button_prepage_pressed(); break;
        case 3: on_VehicleMC2RIOMIOPage_button_MC2_clicked(); break;
        case 4: on_VehicleMC2RIOMIOPage_button_M2_clicked(); break;
        case 5: on_VehicleMC2RIOMIOPage_button_M1_clicked(); break;
        case 6: on_VehicleMC2RIOMIOPage_button_MC1_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

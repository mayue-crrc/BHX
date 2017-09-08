/****************************************************************************
** Meta object code from reading C++ file 'vehiclestatespage.h'
**
** Created: Fri Sep 8 13:29:50 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclestatespage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclestatespage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleStatesPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      66,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleStatesPage[] = {
    "VehicleStatesPage\0\0"
    "on_VehicleStatesPage_Button_NextPage_pressed()\0"
    "on_VehicleStatesPage_Button_PrePage_pressed()\0"
};

const QMetaObject VehicleStatesPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleStatesPage,
      qt_meta_data_VehicleStatesPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleStatesPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleStatesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleStatesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleStatesPage))
        return static_cast<void*>(const_cast< VehicleStatesPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleStatesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleStatesPage_Button_NextPage_pressed(); break;
        case 1: on_VehicleStatesPage_Button_PrePage_pressed(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'vehicletcupage.h'
**
** Created: Tue Jul 18 10:15:54 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicletcupage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicletcupage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleTCUPage[] = {

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
      16,   15,   15,   15, 0x08,
      59,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleTCUPage[] = {
    "VehicleTCUPage\0\0"
    "on_VehicleTCUPage_Button_PrePage_pressed()\0"
    "on_VehicleTCUPage_Button_NextPage_pressed()\0"
};

const QMetaObject VehicleTCUPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleTCUPage,
      qt_meta_data_VehicleTCUPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleTCUPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleTCUPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleTCUPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleTCUPage))
        return static_cast<void*>(const_cast< VehicleTCUPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleTCUPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleTCUPage_Button_PrePage_pressed(); break;
        case 1: on_VehicleTCUPage_Button_NextPage_pressed(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

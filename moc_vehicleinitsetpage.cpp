/****************************************************************************
** Meta object code from reading C++ file 'vehicleinitsetpage.h'
**
** Created: Tue Jul 18 10:16:00 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleinitsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleinitsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleInitsetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      64,   19,   19,   19, 0x08,
     110,   19,   19,   19, 0x08,
     154,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleInitsetPage[] = {
    "VehicleInitsetPage\0\0"
    "on_VehicleInitsetPage_Button_back_clicked()\0"
    "on_VehicleInitsetPage_Button_reboot_clicked()\0"
    "on_VehicleInitsetPage_Button_HMI2_pressed()\0"
    "on_VehicleInitsetPage_Button_HMI1_pressed()\0"
};

const QMetaObject VehicleInitsetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleInitsetPage,
      qt_meta_data_VehicleInitsetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleInitsetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleInitsetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleInitsetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleInitsetPage))
        return static_cast<void*>(const_cast< VehicleInitsetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleInitsetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleInitsetPage_Button_back_clicked(); break;
        case 1: on_VehicleInitsetPage_Button_reboot_clicked(); break;
        case 2: on_VehicleInitsetPage_Button_HMI2_pressed(); break;
        case 3: on_VehicleInitsetPage_Button_HMI1_pressed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

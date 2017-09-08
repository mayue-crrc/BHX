/****************************************************************************
** Meta object code from reading C++ file 'vehicleriomiopage.h'
**
** Created: Fri Sep 8 13:29:57 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleriomiopage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleriomiopage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleRIOMIOPage[] = {

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
      19,   18,   18,   18, 0x08,
      61,   18,   18,   18, 0x08,
     102,   18,   18,   18, 0x08,
     143,   18,   18,   18, 0x08,
     185,   18,   18,   18, 0x08,
     232,   18,   18,   18, 0x08,
     278,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleRIOMIOPage[] = {
    "VehicleRIOMIOPage\0\0"
    "on_VehicleRIOMIOPage_button_MC2_clicked()\0"
    "on_VehicleRIOMIOPage_button_M2_clicked()\0"
    "on_VehicleRIOMIOPage_button_M1_clicked()\0"
    "on_VehicleRIOMIOPage_button_MC1_clicked()\0"
    "on_VehicleRIOMIOPage_button_nextpage_pressed()\0"
    "on_VehicleRIOMIOPage_button_prepage_pressed()\0"
    "on_VehicleRIOMIOPage_button_back_pressed()\0"
};

const QMetaObject VehicleRIOMIOPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleRIOMIOPage,
      qt_meta_data_VehicleRIOMIOPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleRIOMIOPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleRIOMIOPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleRIOMIOPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleRIOMIOPage))
        return static_cast<void*>(const_cast< VehicleRIOMIOPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleRIOMIOPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleRIOMIOPage_button_MC2_clicked(); break;
        case 1: on_VehicleRIOMIOPage_button_M2_clicked(); break;
        case 2: on_VehicleRIOMIOPage_button_M1_clicked(); break;
        case 3: on_VehicleRIOMIOPage_button_MC1_clicked(); break;
        case 4: on_VehicleRIOMIOPage_button_nextpage_pressed(); break;
        case 5: on_VehicleRIOMIOPage_button_prepage_pressed(); break;
        case 6: on_VehicleRIOMIOPage_button_back_pressed(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

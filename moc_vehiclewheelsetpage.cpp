/****************************************************************************
** Meta object code from reading C++ file 'vehiclewheelsetpage.h'
**
** Created: Fri May 11 08:58:13 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclewheelsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclewheelsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleWheelSetPage[] = {

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
      21,   20,   20,   20, 0x08,
      68,   20,   20,   20, 0x08,
     117,   20,   20,   20, 0x08,
     162,   20,   20,   20, 0x08,
     205,   20,   20,   20, 0x08,
     250,   20,   20,   20, 0x08,
     294,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleWheelSetPage[] = {
    "VehicleWheelSetPage\0\0"
    "on_VehicleWheelset_accmileconfirmbtn_pressed()\0"
    "on_VehicleWheelset_traincodeconfirmbtn_pressed()\0"
    "on_VehicleWheelset_wheelconfirmbtn_pressed()\0"
    "on_VehicleWheelset_Button_return_pressed()\0"
    "on_VehicleWheelset_Button_NextPage_pressed()\0"
    "on_VehicleWheelset_Button_PrePage_pressed()\0"
    "InputSelectEvent()\0"
};

const QMetaObject VehicleWheelSetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleWheelSetPage,
      qt_meta_data_VehicleWheelSetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleWheelSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleWheelSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleWheelSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleWheelSetPage))
        return static_cast<void*>(const_cast< VehicleWheelSetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleWheelSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleWheelset_accmileconfirmbtn_pressed(); break;
        case 1: on_VehicleWheelset_traincodeconfirmbtn_pressed(); break;
        case 2: on_VehicleWheelset_wheelconfirmbtn_pressed(); break;
        case 3: on_VehicleWheelset_Button_return_pressed(); break;
        case 4: on_VehicleWheelset_Button_NextPage_pressed(); break;
        case 5: on_VehicleWheelset_Button_PrePage_pressed(); break;
        case 6: InputSelectEvent(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

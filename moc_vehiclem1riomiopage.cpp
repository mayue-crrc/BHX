/****************************************************************************
** Meta object code from reading C++ file 'vehiclem1riomiopage.h'
**
** Created: Tue Jul 18 10:16:02 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclem1riomiopage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclem1riomiopage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleM1RIOMIOPage[] = {

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
      66,   20,   20,   20, 0x08,
     115,   20,   20,   20, 0x08,
     163,   20,   20,   20, 0x08,
     207,   20,   20,   20, 0x08,
     250,   20,   20,   20, 0x08,
     293,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleM1RIOMIOPage[] = {
    "VehicleM1RIOMIOPage\0\0"
    "on_VehicleM1RIOMIOPage_button_back_pressed()\0"
    "on_VehicleM1RIOMIOPage_button_nextpage_pressed()\0"
    "on_VehicleM1RIOMIOPage_button_prepage_pressed()\0"
    "on_VehicleM1RIOMIOPage_button_MC2_clicked()\0"
    "on_VehicleM1RIOMIOPage_button_M2_clicked()\0"
    "on_VehicleM1RIOMIOPage_button_M1_clicked()\0"
    "on_VehicleM1RIOMIOPage_button_MC1_clicked()\0"
};

const QMetaObject VehicleM1RIOMIOPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleM1RIOMIOPage,
      qt_meta_data_VehicleM1RIOMIOPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleM1RIOMIOPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleM1RIOMIOPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleM1RIOMIOPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleM1RIOMIOPage))
        return static_cast<void*>(const_cast< VehicleM1RIOMIOPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleM1RIOMIOPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleM1RIOMIOPage_button_back_pressed(); break;
        case 1: on_VehicleM1RIOMIOPage_button_nextpage_pressed(); break;
        case 2: on_VehicleM1RIOMIOPage_button_prepage_pressed(); break;
        case 3: on_VehicleM1RIOMIOPage_button_MC2_clicked(); break;
        case 4: on_VehicleM1RIOMIOPage_button_M2_clicked(); break;
        case 5: on_VehicleM1RIOMIOPage_button_M1_clicked(); break;
        case 6: on_VehicleM1RIOMIOPage_button_MC1_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

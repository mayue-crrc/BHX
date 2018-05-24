/****************************************************************************
** Meta object code from reading C++ file 'vehiclecurrentfaultpage.h'
**
** Created: Fri May 11 08:58:11 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehiclecurrentfaultpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehiclecurrentfaultpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleCurrentFaultPage[] = {

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
      25,   24,   24,   24, 0x08,
      58,   24,   24,   24, 0x08,
      91,   24,   24,   24, 0x08,
     124,   24,   24,   24, 0x08,
     156,   24,   24,   24, 0x08,
     188,   24,   24,   24, 0x08,
     220,   24,   24,   24, 0x08,
     252,   24,   24,   24, 0x08,
     284,   24,   24,   24, 0x08,
     316,   24,   24,   24, 0x08,
     348,   24,   24,   24, 0x08,
     380,   24,   24,   24, 0x08,
     412,   24,   24,   24, 0x08,
     461,   24,   24,   24, 0x08,
     513,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleCurrentFaultPage[] = {
    "VehicleCurrentFaultPage\0\0"
    "on_VF_button_F12_intro_pressed()\0"
    "on_VF_button_F11_intro_pressed()\0"
    "on_VF_button_F10_intro_pressed()\0"
    "on_VF_button_F9_intro_pressed()\0"
    "on_VF_button_F8_intro_pressed()\0"
    "on_VF_button_F7_intro_pressed()\0"
    "on_VF_button_F6_intro_pressed()\0"
    "on_VF_button_F5_intro_pressed()\0"
    "on_VF_button_F4_intro_pressed()\0"
    "on_VF_button_F3_intro_pressed()\0"
    "on_VF_button_F2_intro_pressed()\0"
    "on_VF_button_F1_intro_pressed()\0"
    "on_VehicleCurrentFaultPage_Button_quit_pressed()\0"
    "on_VehicleCurrentFaultPage_Button_PrePage_pressed()\0"
    "on_VehicleCurrentFaultPage_Button_NextPage_pressed()\0"
};

const QMetaObject VehicleCurrentFaultPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleCurrentFaultPage,
      qt_meta_data_VehicleCurrentFaultPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleCurrentFaultPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleCurrentFaultPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleCurrentFaultPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleCurrentFaultPage))
        return static_cast<void*>(const_cast< VehicleCurrentFaultPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleCurrentFaultPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VF_button_F12_intro_pressed(); break;
        case 1: on_VF_button_F11_intro_pressed(); break;
        case 2: on_VF_button_F10_intro_pressed(); break;
        case 3: on_VF_button_F9_intro_pressed(); break;
        case 4: on_VF_button_F8_intro_pressed(); break;
        case 5: on_VF_button_F7_intro_pressed(); break;
        case 6: on_VF_button_F6_intro_pressed(); break;
        case 7: on_VF_button_F5_intro_pressed(); break;
        case 8: on_VF_button_F4_intro_pressed(); break;
        case 9: on_VF_button_F3_intro_pressed(); break;
        case 10: on_VF_button_F2_intro_pressed(); break;
        case 11: on_VF_button_F1_intro_pressed(); break;
        case 12: on_VehicleCurrentFaultPage_Button_quit_pressed(); break;
        case 13: on_VehicleCurrentFaultPage_Button_PrePage_pressed(); break;
        case 14: on_VehicleCurrentFaultPage_Button_NextPage_pressed(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'vehicleinstructionsetpage.h'
**
** Created: Mon Sep 4 09:11:01 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleinstructionsetpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleinstructionsetpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleInstructionSetPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      80,   26,   26,   26, 0x08,
     133,   26,   26,   26, 0x08,
     193,   26,   26,   26, 0x08,
     244,   26,   26,   26, 0x08,
     301,   26,   26,   26, 0x08,
     354,   26,   26,   26, 0x08,
     403,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleInstructionSetPage[] = {
    "VehicleInstructionSetPage\0\0"
    "on_VehicleInstructionSetPage_Button_FBRMC2_pressed()\0"
    "on_VehicleInstructionSetPage_Button_FBRMC1_pressed()\0"
    "on_VehicleInstructionSetPage_Button_Sandforbidden_pressed()\0"
    "on_VehicleInstructionSetPage_Button_quit_pressed()\0"
    "on_VehicleInstructionSetPage_Button_forcewind_released()\0"
    "on_VehicleInstructionSetPage_Button_EBStop_pressed()\0"
    "on_VehicleInstructionSetPage_Button_EB_pressed()\0"
    "on_VehicleInstructionSetPage_Button_forcewind_pressed()\0"
};

const QMetaObject VehicleInstructionSetPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_VehicleInstructionSetPage,
      qt_meta_data_VehicleInstructionSetPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleInstructionSetPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleInstructionSetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleInstructionSetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleInstructionSetPage))
        return static_cast<void*>(const_cast< VehicleInstructionSetPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int VehicleInstructionSetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VehicleInstructionSetPage_Button_FBRMC2_pressed(); break;
        case 1: on_VehicleInstructionSetPage_Button_FBRMC1_pressed(); break;
        case 2: on_VehicleInstructionSetPage_Button_Sandforbidden_pressed(); break;
        case 3: on_VehicleInstructionSetPage_Button_quit_pressed(); break;
        case 4: on_VehicleInstructionSetPage_Button_forcewind_released(); break;
        case 5: on_VehicleInstructionSetPage_Button_EBStop_pressed(); break;
        case 6: on_VehicleInstructionSetPage_Button_EB_pressed(); break;
        case 7: on_VehicleInstructionSetPage_Button_forcewind_pressed(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

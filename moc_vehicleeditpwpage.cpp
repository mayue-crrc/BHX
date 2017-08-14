/****************************************************************************
** Meta object code from reading C++ file 'vehicleeditpwpage.h'
**
** Created: Thu Jul 13 16:43:16 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vehicleeditpwpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vehicleeditpwpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VehicleEditPWPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      49,   18,   18,   18, 0x08,
      80,   18,   18,   18, 0x08,
     110,   18,   18,   18, 0x08,
     140,   18,   18,   18, 0x08,
     170,   18,   18,   18, 0x08,
     200,   18,   18,   18, 0x08,
     230,   18,   18,   18, 0x08,
     260,   18,   18,   18, 0x08,
     290,   18,   18,   18, 0x08,
     320,   18,   18,   18, 0x08,
     350,   18,   18,   18, 0x08,
     380,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VehicleEditPWPage[] = {
    "VehicleEditPWPage\0\0on_VEPW_Button_back_pressed()\0"
    "on_VEPW_Button_clear_pressed()\0"
    "on_VEPW_Button_Num9_pressed()\0"
    "on_VEPW_Button_Num8_pressed()\0"
    "on_VEPW_Button_Num7_pressed()\0"
    "on_VEPW_Button_Num5_pressed()\0"
    "on_VEPW_Button_Num4_pressed()\0"
    "on_VEPW_Button_Num3_pressed()\0"
    "on_VEPW_Button_Num2_pressed()\0"
    "on_VEPW_Button_Num1_pressed()\0"
    "on_VEPW_Button_Num0_pressed()\0"
    "on_VEPW_Button_Num6_pressed()\0"
    "on_VEPW_Button_confirm_pressed()\0"
};

const QMetaObject VehicleEditPWPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VehicleEditPWPage,
      qt_meta_data_VehicleEditPWPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VehicleEditPWPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VehicleEditPWPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VehicleEditPWPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleEditPWPage))
        return static_cast<void*>(const_cast< VehicleEditPWPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int VehicleEditPWPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_VEPW_Button_back_pressed(); break;
        case 1: on_VEPW_Button_clear_pressed(); break;
        case 2: on_VEPW_Button_Num9_pressed(); break;
        case 3: on_VEPW_Button_Num8_pressed(); break;
        case 4: on_VEPW_Button_Num7_pressed(); break;
        case 5: on_VEPW_Button_Num5_pressed(); break;
        case 6: on_VEPW_Button_Num4_pressed(); break;
        case 7: on_VEPW_Button_Num3_pressed(); break;
        case 8: on_VEPW_Button_Num2_pressed(); break;
        case 9: on_VEPW_Button_Num1_pressed(); break;
        case 10: on_VEPW_Button_Num0_pressed(); break;
        case 11: on_VEPW_Button_Num6_pressed(); break;
        case 12: on_VEPW_Button_confirm_pressed(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

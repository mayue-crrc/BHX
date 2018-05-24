/****************************************************************************
** Meta object code from reading C++ file 'ctrlinputmodule.h'
**
** Created: Sat Oct 14 09:27:38 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrlinputmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlinputmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlInputModule[] = {

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
      17,   16,   16,   16, 0x08,
      60,   16,   16,   16, 0x08,
     104,   16,   16,   16, 0x08,
     146,   16,   16,   16, 0x08,
     187,   16,   16,   16, 0x08,
     228,   16,   16,   16, 0x08,
     269,   16,   16,   16, 0x08,
     310,   16,   16,   16, 0x08,
     351,   16,   16,   16, 0x08,
     392,   16,   16,   16, 0x08,
     433,   16,   16,   16, 0x08,
     474,   16,   16,   16, 0x08,
     515,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CtrlInputModule[] = {
    "CtrlInputModule\0\0"
    "on_CtrlInputModule_Button_Num0_2_clicked()\0"
    "on_CtrlInputModule_Button_confirm_clicked()\0"
    "on_CtrlInputModule_Button_clear_clicked()\0"
    "on_CtrlInputModule_Button_Num9_clicked()\0"
    "on_CtrlInputModule_Button_Num8_clicked()\0"
    "on_CtrlInputModule_Button_Num7_clicked()\0"
    "on_CtrlInputModule_Button_Num6_clicked()\0"
    "on_CtrlInputModule_Button_Num5_clicked()\0"
    "on_CtrlInputModule_Button_Num4_clicked()\0"
    "on_CtrlInputModule_Button_Num3_clicked()\0"
    "on_CtrlInputModule_Button_Num2_clicked()\0"
    "on_CtrlInputModule_Button_Num1_clicked()\0"
    "on_CtrlInputModule_Button_Num0_clicked()\0"
};

const QMetaObject CtrlInputModule::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CtrlInputModule,
      qt_meta_data_CtrlInputModule, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlInputModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlInputModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlInputModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlInputModule))
        return static_cast<void*>(const_cast< CtrlInputModule*>(this));
    return QWidget::qt_metacast(_clname);
}

int CtrlInputModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_CtrlInputModule_Button_Num0_2_clicked(); break;
        case 1: on_CtrlInputModule_Button_confirm_clicked(); break;
        case 2: on_CtrlInputModule_Button_clear_clicked(); break;
        case 3: on_CtrlInputModule_Button_Num9_clicked(); break;
        case 4: on_CtrlInputModule_Button_Num8_clicked(); break;
        case 5: on_CtrlInputModule_Button_Num7_clicked(); break;
        case 6: on_CtrlInputModule_Button_Num6_clicked(); break;
        case 7: on_CtrlInputModule_Button_Num5_clicked(); break;
        case 8: on_CtrlInputModule_Button_Num4_clicked(); break;
        case 9: on_CtrlInputModule_Button_Num3_clicked(); break;
        case 10: on_CtrlInputModule_Button_Num2_clicked(); break;
        case 11: on_CtrlInputModule_Button_Num1_clicked(); break;
        case 12: on_CtrlInputModule_Button_Num0_clicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

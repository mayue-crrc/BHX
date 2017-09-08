/****************************************************************************
** Meta object code from reading C++ file 'ctrldebugpage.h'
**
** Created: Fri Sep 8 13:30:03 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrldebugpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrldebugpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CtrlDebugPage[] = {

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
      15,   14,   14,   14, 0x08,
      44,   14,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
      98,   14,   14,   14, 0x08,
     123,   14,   14,   14, 0x08,
     150,   14,   14,   14, 0x08,
     179,   14,   14,   14, 0x08,
     206,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CtrlDebugPage[] = {
    "CtrlDebugPage\0\0on_pushButtonreset_pressed()\0"
    "on_radioButton_4_pressed()\0"
    "on_radioButton_3_clicked()\0"
    "on_radioButton_clicked()\0"
    "on_radioButton_2_clicked()\0"
    "on_pushButtonclear_pressed()\0"
    "on_pushButtonset_pressed()\0updatedata()\0"
};

const QMetaObject CtrlDebugPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_CtrlDebugPage,
      qt_meta_data_CtrlDebugPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CtrlDebugPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CtrlDebugPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CtrlDebugPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlDebugPage))
        return static_cast<void*>(const_cast< CtrlDebugPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int CtrlDebugPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonreset_pressed(); break;
        case 1: on_radioButton_4_pressed(); break;
        case 2: on_radioButton_3_clicked(); break;
        case 3: on_radioButton_clicked(); break;
        case 4: on_radioButton_2_clicked(); break;
        case 5: on_pushButtonclear_pressed(); break;
        case 6: on_pushButtonset_pressed(); break;
        case 7: updatedata(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

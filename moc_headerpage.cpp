/****************************************************************************
** Meta object code from reading C++ file 'headerpage.h'
**
** Created: Fri Sep 8 13:29:48 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headerpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headerpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HeaderPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   11,   11,   11, 0x0a,
      55,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HeaderPage[] = {
    "HeaderPage\0\0HelpPageClicked()\0"
    "on_HelpitemBtn_pressed()\0"
    "on_CurrentFaultBtn_pressed()\0"
};

const QMetaObject HeaderPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_HeaderPage,
      qt_meta_data_HeaderPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HeaderPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HeaderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HeaderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HeaderPage))
        return static_cast<void*>(const_cast< HeaderPage*>(this));
    return BasePage::qt_metacast(_clname);
}

int HeaderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: HelpPageClicked(); break;
        case 1: on_HelpitemBtn_pressed(); break;
        case 2: on_CurrentFaultBtn_pressed(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HeaderPage::HelpPageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

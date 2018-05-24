/****************************************************************************
** Meta object code from reading C++ file 'statesbox8x4.h'
**
** Created: Sat Oct 14 09:27:35 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statesbox8x4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statesbox8x4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatesBox8x4[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_StatesBox8x4[] = {
    "StatesBox8x4\0"
};

const QMetaObject StatesBox8x4::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StatesBox8x4,
      qt_meta_data_StatesBox8x4, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatesBox8x4::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatesBox8x4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatesBox8x4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatesBox8x4))
        return static_cast<void*>(const_cast< StatesBox8x4*>(this));
    return QWidget::qt_metacast(_clname);
}

int StatesBox8x4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

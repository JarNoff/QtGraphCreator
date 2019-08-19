/****************************************************************************
** Meta object code from reading C++ file 'abstractmultiroleserialiser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/abstractmultiroleserialiser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractmultiroleserialiser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractMultiRoleSerialiser_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractMultiRoleSerialiser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractMultiRoleSerialiser_t qt_meta_stringdata_AbstractMultiRoleSerialiser = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AbstractMultiRoleSerialiser"
QT_MOC_LITERAL(1, 28, 13), // "addRoleToSave"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "role"
QT_MOC_LITERAL(4, 48, 16), // "removeRoleToSave"
QT_MOC_LITERAL(5, 65, 15), // "clearRoleToSave"
QT_MOC_LITERAL(6, 81, 11), // "rolesToSave"
QT_MOC_LITERAL(7, 93, 10) // "QList<int>"

    },
    "AbstractMultiRoleSerialiser\0addRoleToSave\0"
    "\0role\0removeRoleToSave\0clearRoleToSave\0"
    "rolesToSave\0QList<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractMultiRoleSerialiser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    1,   32,    2, 0x02 /* Public */,
       5,    0,   35,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009500f,

       0        // eod
};

void AbstractMultiRoleSerialiser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<AbstractMultiRoleSerialiser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRoleToSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->removeRoleToSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clearRoleToSave(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<AbstractMultiRoleSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<int>*>(_v) = _t->rolesToSave(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<AbstractMultiRoleSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoleToSave(*reinterpret_cast< QList<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        AbstractMultiRoleSerialiser *_t = reinterpret_cast<AbstractMultiRoleSerialiser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetRoleToSave(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AbstractMultiRoleSerialiser::staticMetaObject = { {
    &AbstractModelSerialiser::staticMetaObject,
    qt_meta_stringdata_AbstractMultiRoleSerialiser.data,
    qt_meta_data_AbstractMultiRoleSerialiser,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

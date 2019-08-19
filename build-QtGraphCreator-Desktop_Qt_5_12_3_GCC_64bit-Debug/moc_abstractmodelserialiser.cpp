/****************************************************************************
** Meta object code from reading C++ file 'abstractmodelserialiser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/abstractmodelserialiser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractmodelserialiser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractModelSerialiser_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractModelSerialiser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractModelSerialiser_t qt_meta_stringdata_AbstractModelSerialiser = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AbstractModelSerialiser"
QT_MOC_LITERAL(1, 24, 9), // "saveModel"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "QIODevice*"
QT_MOC_LITERAL(4, 46, 11), // "destination"
QT_MOC_LITERAL(5, 58, 11), // "QByteArray*"
QT_MOC_LITERAL(6, 70, 9), // "loadModel"
QT_MOC_LITERAL(7, 80, 6), // "source"
QT_MOC_LITERAL(8, 87, 5), // "model"
QT_MOC_LITERAL(9, 93, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(10, 113, 10), // "constModel"
QT_MOC_LITERAL(11, 124, 25) // "const QAbstractItemModel*"

    },
    "AbstractModelSerialiser\0saveModel\0\0"
    "QIODevice*\0destination\0QByteArray*\0"
    "loadModel\0source\0model\0QAbstractItemModel*\0"
    "constModel\0const QAbstractItemModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractModelSerialiser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       1,    1,   37,    2, 0x02 /* Public */,
       6,    1,   40,    2, 0x02 /* Public */,
       6,    1,   43,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 5,    4,
    QMetaType::Bool, 0x80000000 | 3,    7,
    QMetaType::Bool, QMetaType::QByteArray,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0009510b,
      10, 0x80000000 | 11, 0x0009500b,

       0        // eod
};

void AbstractModelSerialiser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<AbstractModelSerialiser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->saveModel((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->saveModel((*reinterpret_cast< QByteArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->loadModel((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->loadModel((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<AbstractModelSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< const QAbstractItemModel**>(_v) = _t->constModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<AbstractModelSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< const QAbstractItemModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AbstractModelSerialiser::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_AbstractModelSerialiser.data,
    qt_meta_data_AbstractModelSerialiser,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

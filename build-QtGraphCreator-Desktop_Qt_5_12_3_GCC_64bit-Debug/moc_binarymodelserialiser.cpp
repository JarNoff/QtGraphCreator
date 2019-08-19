/****************************************************************************
** Meta object code from reading C++ file 'binarymodelserialiser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/binarymodelserialiser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binarymodelserialiser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BinaryModelSerialiser_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinaryModelSerialiser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinaryModelSerialiser_t qt_meta_stringdata_BinaryModelSerialiser = {
    {
QT_MOC_LITERAL(0, 0, 21), // "BinaryModelSerialiser"
QT_MOC_LITERAL(1, 22, 9), // "saveModel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "QIODevice*"
QT_MOC_LITERAL(4, 44, 11), // "destination"
QT_MOC_LITERAL(5, 56, 11), // "QByteArray*"
QT_MOC_LITERAL(6, 68, 9), // "loadModel"
QT_MOC_LITERAL(7, 78, 6) // "source"

    },
    "BinaryModelSerialiser\0saveModel\0\0"
    "QIODevice*\0destination\0QByteArray*\0"
    "loadModel\0source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinaryModelSerialiser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
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

       0        // eod
};

void BinaryModelSerialiser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<BinaryModelSerialiser *>(_o);
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
}

QT_INIT_METAOBJECT const QMetaObject BinaryModelSerialiser::staticMetaObject = { {
    &AbstractMultiRoleSerialiser::staticMetaObject,
    qt_meta_stringdata_BinaryModelSerialiser.data,
    qt_meta_data_BinaryModelSerialiser,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

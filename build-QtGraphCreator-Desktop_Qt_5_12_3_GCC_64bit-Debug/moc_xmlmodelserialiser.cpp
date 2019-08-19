/****************************************************************************
** Meta object code from reading C++ file 'xmlmodelserialiser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/xmlmodelserialiser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlmodelserialiser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XmlModelSerialiser_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XmlModelSerialiser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XmlModelSerialiser_t qt_meta_stringdata_XmlModelSerialiser = {
    {
QT_MOC_LITERAL(0, 0, 18), // "XmlModelSerialiser"
QT_MOC_LITERAL(1, 19, 9), // "saveModel"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "QIODevice*"
QT_MOC_LITERAL(4, 41, 11), // "destination"
QT_MOC_LITERAL(5, 53, 11), // "QByteArray*"
QT_MOC_LITERAL(6, 65, 8), // "QString*"
QT_MOC_LITERAL(7, 74, 9), // "loadModel"
QT_MOC_LITERAL(8, 84, 6), // "source"
QT_MOC_LITERAL(9, 91, 18) // "printStartDocument"

    },
    "XmlModelSerialiser\0saveModel\0\0QIODevice*\0"
    "destination\0QByteArray*\0QString*\0"
    "loadModel\0source\0printStartDocument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XmlModelSerialiser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       1,    1,   47,    2, 0x02 /* Public */,
       1,    1,   50,    2, 0x02 /* Public */,
       7,    1,   53,    2, 0x02 /* Public */,
       7,    1,   56,    2, 0x02 /* Public */,
       7,    1,   59,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 5,    4,
    QMetaType::Bool, 0x80000000 | 6,    4,
    QMetaType::Bool, 0x80000000 | 3,    8,
    QMetaType::Bool, QMetaType::QByteArray,    8,
    QMetaType::Bool, 0x80000000 | 6,    8,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void XmlModelSerialiser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<XmlModelSerialiser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->saveModel((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->saveModel((*reinterpret_cast< QByteArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->saveModel((*reinterpret_cast< QString*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->loadModel((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->loadModel((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->loadModel((*reinterpret_cast< QString*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<XmlModelSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->printStartDocument(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<XmlModelSerialiser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPrintStartDocument(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject XmlModelSerialiser::staticMetaObject = { {
    &AbstractMultiRoleSerialiser::staticMetaObject,
    qt_meta_stringdata_XmlModelSerialiser.data,
    qt_meta_data_XmlModelSerialiser,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

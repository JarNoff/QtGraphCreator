/****************************************************************************
** Meta object code from reading C++ file 'insertproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/insertproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InsertProxyModel_t {
    QByteArrayData data[22];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertProxyModel_t qt_meta_stringdata_InsertProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InsertProxyModel"
QT_MOC_LITERAL(1, 17, 20), // "dataForCornerChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "QVector<int>"
QT_MOC_LITERAL(4, 52, 5), // "roles"
QT_MOC_LITERAL(5, 58, 16), // "extraDataChanged"
QT_MOC_LITERAL(6, 75, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 87, 7), // "topLeft"
QT_MOC_LITERAL(8, 95, 11), // "bottomRight"
QT_MOC_LITERAL(9, 107, 26), // "separateEditDisplayChanged"
QT_MOC_LITERAL(10, 134, 8), // "separate"
QT_MOC_LITERAL(11, 143, 22), // "insertDirectionChanged"
QT_MOC_LITERAL(12, 166, 16), // "InsertDirections"
QT_MOC_LITERAL(13, 183, 9), // "direction"
QT_MOC_LITERAL(14, 193, 9), // "commitRow"
QT_MOC_LITERAL(15, 203, 12), // "commitColumn"
QT_MOC_LITERAL(16, 216, 15), // "insertDirection"
QT_MOC_LITERAL(17, 232, 19), // "separateEditDisplay"
QT_MOC_LITERAL(18, 252, 15), // "InsertDirection"
QT_MOC_LITERAL(19, 268, 8), // "NoInsert"
QT_MOC_LITERAL(20, 277, 9), // "InsertRow"
QT_MOC_LITERAL(21, 287, 12) // "InsertColumn"

    },
    "InsertProxyModel\0dataForCornerChanged\0"
    "\0QVector<int>\0roles\0extraDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "separateEditDisplayChanged\0separate\0"
    "insertDirectionChanged\0InsertDirections\0"
    "direction\0commitRow\0commitColumn\0"
    "insertDirection\0separateEditDisplay\0"
    "InsertDirection\0NoInsert\0InsertRow\0"
    "InsertColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   72, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    3,   52,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x26 /* Public | MethodCloned */,
       9,    1,   64,    2, 0x06 /* Public */,
      11,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   70,    2, 0x0a /* Public */,
      15,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 3,    7,    8,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      16, 0x80000000 | 12, 0x0049510b,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       4,
       3,

 // enums: name, alias, flags, count, data
      12,   18, 0x1,    3,   85,

 // enum data: key, value
      19, uint(InsertProxyModel::NoInsert),
      20, uint(InsertProxyModel::InsertRow),
      21, uint(InsertProxyModel::InsertColumn),

       0        // eod
};

void InsertProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InsertProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataForCornerChanged((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 1: _t->extraDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 2: _t->extraDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->separateEditDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->insertDirectionChanged((*reinterpret_cast< const InsertDirections(*)>(_a[1]))); break;
        case 5: { bool _r = _t->commitRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->commitColumn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InsertProxyModel::*)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertProxyModel::dataForCornerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InsertProxyModel::*)(const QModelIndex & , const QModelIndex & , const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertProxyModel::extraDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InsertProxyModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertProxyModel::separateEditDisplayChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InsertProxyModel::*)(const InsertDirections & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InsertProxyModel::insertDirectionChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InsertProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->insertDirection()); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->separateEditDisplay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InsertProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInsertDirection(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setSeparateEditDisplay(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject InsertProxyModel::staticMetaObject = { {
    &QAbstractProxyModel::staticMetaObject,
    qt_meta_stringdata_InsertProxyModel.data,
    qt_meta_data_InsertProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InsertProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InsertProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int InsertProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void InsertProxyModel::dataForCornerChanged(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InsertProxyModel::extraDataChanged(const QModelIndex & _t1, const QModelIndex & _t2, const QVector<int> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void InsertProxyModel::separateEditDisplayChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InsertProxyModel::insertDirectionChanged(const InsertDirections & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

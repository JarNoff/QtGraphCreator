/****************************************************************************
** Meta object code from reading C++ file 'rolemaskproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QtModelUtilities/src/rolemaskproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rolemaskproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoleMaskProxyModel_t {
    QByteArrayData data[10];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoleMaskProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoleMaskProxyModel_t qt_meta_stringdata_RoleMaskProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RoleMaskProxyModel"
QT_MOC_LITERAL(1, 19, 23), // "mergeDisplayEditChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "val"
QT_MOC_LITERAL(4, 48, 25), // "transparentIfEmptyChanged"
QT_MOC_LITERAL(5, 74, 18), // "maskedRolesChanged"
QT_MOC_LITERAL(6, 93, 18), // "transparentIfEmpty"
QT_MOC_LITERAL(7, 112, 16), // "mergeDisplayEdit"
QT_MOC_LITERAL(8, 129, 11), // "maskedRoles"
QT_MOC_LITERAL(9, 141, 10) // "QList<int>"

    },
    "RoleMaskProxyModel\0mergeDisplayEditChanged\0"
    "\0val\0transparentIfEmptyChanged\0"
    "maskedRolesChanged\0transparentIfEmpty\0"
    "mergeDisplayEdit\0maskedRoles\0QList<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoleMaskProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, 0x80000000 | 9, 0x0049510f,

 // properties: notify_signal_id
       1,
       0,
       2,

       0        // eod
};

void RoleMaskProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoleMaskProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mergeDisplayEditChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->transparentIfEmptyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->maskedRolesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoleMaskProxyModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoleMaskProxyModel::mergeDisplayEditChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoleMaskProxyModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoleMaskProxyModel::transparentIfEmptyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RoleMaskProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoleMaskProxyModel::maskedRolesChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RoleMaskProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->transparentIfEmpty(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->mergeDisplayEdit(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->maskedRoles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RoleMaskProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTransparentIfEmpty(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setMergeDisplayEdit(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMaskedRoles(*reinterpret_cast< QList<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        RoleMaskProxyModel *_t = static_cast<RoleMaskProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->clearMaskedRoles(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RoleMaskProxyModel::staticMetaObject = { {
    &QIdentityProxyModel::staticMetaObject,
    qt_meta_stringdata_RoleMaskProxyModel.data,
    qt_meta_data_RoleMaskProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoleMaskProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoleMaskProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoleMaskProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QIdentityProxyModel::qt_metacast(_clname);
}

int RoleMaskProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIdentityProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RoleMaskProxyModel::mergeDisplayEditChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoleMaskProxyModel::transparentIfEmptyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RoleMaskProxyModel::maskedRolesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'barchartdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtGraphCreator/barchartdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barchartdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BarChartDialog_t {
    QByteArrayData data[15];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarChartDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarChartDialog_t qt_meta_stringdata_BarChartDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BarChartDialog"
QT_MOC_LITERAL(1, 15, 18), // "onButtonBoxPressed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 52, 6), // "button"
QT_MOC_LITERAL(5, 59, 21), // "onBrowseButtonPressed"
QT_MOC_LITERAL(6, 81, 7), // "checked"
QT_MOC_LITERAL(7, 89, 15), // "onXValueChanged"
QT_MOC_LITERAL(8, 105, 3), // "val"
QT_MOC_LITERAL(9, 109, 15), // "onYValueChanged"
QT_MOC_LITERAL(10, 125, 15), // "onXScaleChanged"
QT_MOC_LITERAL(11, 141, 15), // "onYScaleChanged"
QT_MOC_LITERAL(12, 157, 14), // "onTitleChanged"
QT_MOC_LITERAL(13, 172, 21), // "onCanvasHeightChanged"
QT_MOC_LITERAL(14, 194, 20) // "onCanvasWidthChanged"

    },
    "BarChartDialog\0onButtonBoxPressed\0\0"
    "QAbstractButton*\0button\0onBrowseButtonPressed\0"
    "checked\0onXValueChanged\0val\0onYValueChanged\0"
    "onXScaleChanged\0onYScaleChanged\0"
    "onTitleChanged\0onCanvasHeightChanged\0"
    "onCanvasWidthChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarChartDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BarChartDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BarChartDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onButtonBoxPressed((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->onBrowseButtonPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onXValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onYValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onXScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onYScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onTitleChanged(); break;
        case 7: _t->onCanvasHeightChanged(); break;
        case 8: _t->onCanvasWidthChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BarChartDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_BarChartDialog.data,
    qt_meta_data_BarChartDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BarChartDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarChartDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BarChartDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BarChartDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

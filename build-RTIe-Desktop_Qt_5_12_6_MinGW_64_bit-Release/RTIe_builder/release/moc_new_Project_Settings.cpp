/****************************************************************************
** Meta object code from reading C++ file 'new_Project_Settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RTIe/RTIe_builder/new_Project_Settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_Project_Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_new_Project_Settings_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_new_Project_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_new_Project_Settings_t qt_meta_stringdata_new_Project_Settings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "new_Project_Settings"
QT_MOC_LITERAL(1, 21, 30), // "new_Project_Settings_Open_Page"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "project_Location"
QT_MOC_LITERAL(4, 70, 12), // "project_Name"
QT_MOC_LITERAL(5, 83, 6), // "editor"
QT_MOC_LITERAL(6, 90, 10), // "close_Page"
QT_MOC_LITERAL(7, 101, 12), // "back_Trigger"
QT_MOC_LITERAL(8, 114, 14) // "create_Project"

    },
    "new_Project_Settings\0"
    "new_Project_Settings_Open_Page\0\0"
    "project_Location\0project_Name\0editor\0"
    "close_Page\0back_Trigger\0create_Project"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_new_Project_Settings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x08 /* Private */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void new_Project_Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<new_Project_Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_Project_Settings_Open_Page((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->close_Page(); break;
        case 2: _t->back_Trigger(); break;
        case 3: _t->create_Project(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject new_Project_Settings::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_new_Project_Settings.data,
    qt_meta_data_new_Project_Settings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *new_Project_Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *new_Project_Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_new_Project_Settings.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int new_Project_Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

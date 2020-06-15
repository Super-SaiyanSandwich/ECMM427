/****************************************************************************
** Meta object code from reading C++ file 'new_Project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RTIe/RTIe_builder/new_Project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_Project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_new_Project_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_new_Project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_new_Project_t qt_meta_stringdata_new_Project = {
    {
QT_MOC_LITERAL(0, 0, 11), // "new_Project"
QT_MOC_LITERAL(1, 12, 21), // "new_Project_Open_Page"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "update_Edit_Boxes"
QT_MOC_LITERAL(4, 53, 16), // "project_Location"
QT_MOC_LITERAL(5, 70, 12), // "project_Name"
QT_MOC_LITERAL(6, 83, 10), // "close_Page"
QT_MOC_LITERAL(7, 94, 20), // "open_Location_Select"
QT_MOC_LITERAL(8, 115, 9) // "next_Page"

    },
    "new_Project\0new_Project_Open_Page\0\0"
    "update_Edit_Boxes\0project_Location\0"
    "project_Name\0close_Page\0open_Location_Select\0"
    "next_Page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_new_Project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    2,   40,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void new_Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        new_Project *_t = static_cast<new_Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_Project_Open_Page(); break;
        case 1: _t->update_Edit_Boxes((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->close_Page(); break;
        case 3: _t->open_Location_Select(); break;
        case 4: _t->next_Page(); break;
        default: ;
        }
    }
}

const QMetaObject new_Project::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_new_Project.data,
      qt_meta_data_new_Project,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *new_Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *new_Project::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_new_Project.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int new_Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

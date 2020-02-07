/****************************************************************************
** Meta object code from reading C++ file 'system_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RTIe/RTIe_builder/system_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_system_Ui_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_system_Ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_system_Ui_t qt_meta_stringdata_system_Ui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "system_Ui"
QT_MOC_LITERAL(1, 10, 13), // "open_Homepage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "on_btn5_clicked"
QT_MOC_LITERAL(4, 41, 15), // "on_btn2_clicked"
QT_MOC_LITERAL(5, 57, 15), // "on_btn1_clicked"
QT_MOC_LITERAL(6, 73, 15), // "on_btn3_clicked"
QT_MOC_LITERAL(7, 89, 17), // "on_btn2_2_clicked"
QT_MOC_LITERAL(8, 107, 15), // "on_btn4_clicked"
QT_MOC_LITERAL(9, 123, 17), // "on_btn3_2_clicked"
QT_MOC_LITERAL(10, 141, 17), // "on_btn5_2_clicked"
QT_MOC_LITERAL(11, 159, 17), // "on_btn4_2_clicked"
QT_MOC_LITERAL(12, 177, 17) // "on_btn1_2_clicked"

    },
    "system_Ui\0open_Homepage\0\0on_btn5_clicked\0"
    "on_btn2_clicked\0on_btn1_clicked\0"
    "on_btn3_clicked\0on_btn2_2_clicked\0"
    "on_btn4_clicked\0on_btn3_2_clicked\0"
    "on_btn5_2_clicked\0on_btn4_2_clicked\0"
    "on_btn1_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_system_Ui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void system_Ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<system_Ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open_Homepage(); break;
        case 1: _t->on_btn5_clicked(); break;
        case 2: _t->on_btn2_clicked(); break;
        case 3: _t->on_btn1_clicked(); break;
        case 4: _t->on_btn3_clicked(); break;
        case 5: _t->on_btn2_2_clicked(); break;
        case 6: _t->on_btn4_clicked(); break;
        case 7: _t->on_btn3_2_clicked(); break;
        case 8: _t->on_btn5_2_clicked(); break;
        case 9: _t->on_btn4_2_clicked(); break;
        case 10: _t->on_btn1_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject system_Ui::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_system_Ui.data,
    qt_meta_data_system_Ui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *system_Ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *system_Ui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_system_Ui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int system_Ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

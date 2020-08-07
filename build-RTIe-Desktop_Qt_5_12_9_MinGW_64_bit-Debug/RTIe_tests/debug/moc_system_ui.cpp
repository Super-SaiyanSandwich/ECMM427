/****************************************************************************
** Meta object code from reading C++ file 'system_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RTIe/RTIe_builder/system_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_system_Ui_t {
    QByteArrayData data[12];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_system_Ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_system_Ui_t qt_meta_stringdata_system_Ui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "system_Ui"
QT_MOC_LITERAL(1, 10, 13), // "inputReceived"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "open_Selected_Project"
QT_MOC_LITERAL(4, 47, 31), // "on_marble_Detection_Btn_clicked"
QT_MOC_LITERAL(5, 79, 28), // "on_remove_Marble_Btn_clicked"
QT_MOC_LITERAL(6, 108, 21), // "on_export_Btn_clicked"
QT_MOC_LITERAL(7, 130, 31), // "on_image_Management_Btn_clicked"
QT_MOC_LITERAL(8, 162, 33), // "on_action_New_Project_2_trigg..."
QT_MOC_LITERAL(9, 196, 34), // "on_action_Open_Project_2_trig..."
QT_MOC_LITERAL(10, 231, 26), // "on_action_Exit_2_triggered"
QT_MOC_LITERAL(11, 258, 29) // "on_actionRtiEx_Wiki_triggered"

    },
    "system_Ui\0inputReceived\0\0open_Selected_Project\0"
    "on_marble_Detection_Btn_clicked\0"
    "on_remove_Marble_Btn_clicked\0"
    "on_export_Btn_clicked\0"
    "on_image_Management_Btn_clicked\0"
    "on_action_New_Project_2_triggered\0"
    "on_action_Open_Project_2_triggered\0"
    "on_action_Exit_2_triggered\0"
    "on_actionRtiEx_Wiki_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_system_Ui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void system_Ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<system_Ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputReceived(); break;
        case 1: _t->open_Selected_Project(); break;
        case 2: _t->on_marble_Detection_Btn_clicked(); break;
        case 3: _t->on_remove_Marble_Btn_clicked(); break;
        case 4: _t->on_export_Btn_clicked(); break;
        case 5: _t->on_image_Management_Btn_clicked(); break;
        case 6: _t->on_action_New_Project_2_triggered(); break;
        case 7: _t->on_action_Open_Project_2_triggered(); break;
        case 8: _t->on_action_Exit_2_triggered(); break;
        case 9: _t->on_actionRtiEx_Wiki_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (system_Ui::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&system_Ui::inputReceived)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject system_Ui::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void system_Ui::inputReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

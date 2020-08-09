/****************************************************************************
** Meta object code from reading C++ file 'deletion_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RTIe/RTIe_builder/deletion_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deletion_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_deletion_Dialog_t {
    QByteArrayData data[13];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deletion_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deletion_Dialog_t qt_meta_stringdata_deletion_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "deletion_Dialog"
QT_MOC_LITERAL(1, 16, 14), // "process_Images"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "image_Names"
QT_MOC_LITERAL(4, 44, 28), // "on_next_Image_Button_clicked"
QT_MOC_LITERAL(5, 73, 32), // "on_previous_Image_Button_clicked"
QT_MOC_LITERAL(6, 106, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(7, 128, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(8, 150, 14), // "update_Preview"
QT_MOC_LITERAL(9, 165, 24), // "on_delete_Button_clicked"
QT_MOC_LITERAL(10, 190, 25), // "on_apply_All_stateChanged"
QT_MOC_LITERAL(11, 216, 4), // "arg1"
QT_MOC_LITERAL(12, 221, 27) // "update_Remaining_Image_List"

    },
    "deletion_Dialog\0process_Images\0\0"
    "image_Names\0on_next_Image_Button_clicked\0"
    "on_previous_Image_Button_clicked\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "update_Preview\0on_delete_Button_clicked\0"
    "on_apply_All_stateChanged\0arg1\0"
    "update_Remaining_Image_List"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deletion_Dialog[] = {

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
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void deletion_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<deletion_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->process_Images((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_next_Image_Button_clicked(); break;
        case 2: _t->on_previous_Image_Button_clicked(); break;
        case 3: _t->on_buttonBox_accepted(); break;
        case 4: _t->on_buttonBox_rejected(); break;
        case 5: _t->update_Preview(); break;
        case 6: _t->on_delete_Button_clicked(); break;
        case 7: _t->on_apply_All_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->update_Remaining_Image_List(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject deletion_Dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_deletion_Dialog.data,
    qt_meta_data_deletion_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deletion_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deletion_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deletion_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int deletion_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

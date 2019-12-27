/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../RGR/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "on_actionAbout_Qt_triggered"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 30), // "on_actionAbout_Paint_triggered"
QT_MOC_LITERAL(4, 71, 4), // "open"
QT_MOC_LITERAL(5, 76, 4), // "save"
QT_MOC_LITERAL(6, 81, 8), // "penColor"
QT_MOC_LITERAL(7, 90, 8), // "penWidth"
QT_MOC_LITERAL(8, 99, 27), // "on_pushButton_brush_clicked"
QT_MOC_LITERAL(9, 127, 28), // "on_pushButton_pencil_clicked"
QT_MOC_LITERAL(10, 156, 33), // "on_actionSet_Line_Width_trigg..."
QT_MOC_LITERAL(11, 190, 28), // "on_pushButton_eraser_clicked"
QT_MOC_LITERAL(12, 219, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(13, 243, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(14, 270, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(15, 295, 27), // "on_actionTool_box_triggered"
QT_MOC_LITERAL(16, 323, 28), // "on_actionColor_Box_triggered"
QT_MOC_LITERAL(17, 352, 29), // "on_actionStatus_Bar_triggered"
QT_MOC_LITERAL(18, 382, 22) // "on_frame_black_clicked"

    },
    "MainWindow\0on_actionAbout_Qt_triggered\0"
    "\0on_actionAbout_Paint_triggered\0open\0"
    "save\0penColor\0penWidth\0"
    "on_pushButton_brush_clicked\0"
    "on_pushButton_pencil_clicked\0"
    "on_actionSet_Line_Width_triggered\0"
    "on_pushButton_eraser_clicked\0"
    "on_actionOpen_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionTool_box_triggered\0"
    "on_actionColor_Box_triggered\0"
    "on_actionStatus_Bar_triggered\0"
    "on_frame_black_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_Qt_triggered(); break;
        case 1: _t->on_actionAbout_Paint_triggered(); break;
        case 2: _t->open(); break;
        case 3: _t->save(); break;
        case 4: _t->penColor(); break;
        case 5: _t->penWidth(); break;
        case 6: _t->on_pushButton_brush_clicked(); break;
        case 7: _t->on_pushButton_pencil_clicked(); break;
        case 8: _t->on_actionSet_Line_Width_triggered(); break;
        case 9: _t->on_pushButton_eraser_clicked(); break;
        case 10: _t->on_actionOpen_triggered(); break;
        case 11: _t->on_actionSave_As_triggered(); break;
        case 12: _t->on_actionPrint_triggered(); break;
        case 13: _t->on_actionTool_box_triggered(); break;
        case 14: _t->on_actionColor_Box_triggered(); break;
        case 15: _t->on_actionStatus_Bar_triggered(); break;
        case 16: _t->on_frame_black_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ElevatorSystem/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[15];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[10];
    char stringdata8[5];
    char stringdata9[13];
    char stringdata10[5];
    char stringdata11[13];
    char stringdata12[18];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 11),  // "updateFloor"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 17),  // "elevatorRequested"
        QT_MOC_LITERAL(42, 14),  // "addDestination"
        QT_MOC_LITERAL(57, 15),  // "openDoorPressed"
        QT_MOC_LITERAL(73, 16),  // "openDoorReleased"
        QT_MOC_LITERAL(90, 9),  // "closeDoor"
        QT_MOC_LITERAL(100, 4),  // "help"
        QT_MOC_LITERAL(105, 12),  // "doorObstacle"
        QT_MOC_LITERAL(118, 4),  // "fire"
        QT_MOC_LITERAL(123, 12),  // "updateWeight"
        QT_MOC_LITERAL(136, 17),  // "updateElevatorGUI"
        QT_MOC_LITERAL(154, 21)   // "updateLitFloorButtons"
    },
    "MainWindow",
    "updateFloor",
    "",
    "elevatorRequested",
    "addDestination",
    "openDoorPressed",
    "openDoorReleased",
    "closeDoor",
    "help",
    "doorObstacle",
    "fire",
    "updateWeight",
    "updateElevatorGUI",
    "updateLitFloorButtons"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   89,    2, 0x0a,    3 /* Public */,
       4,    0,   90,    2, 0x0a,    4 /* Public */,
       5,    0,   91,    2, 0x0a,    5 /* Public */,
       6,    0,   92,    2, 0x0a,    6 /* Public */,
       7,    0,   93,    2, 0x0a,    7 /* Public */,
       8,    1,   94,    2, 0x0a,    8 /* Public */,
       9,    1,   97,    2, 0x0a,   10 /* Public */,
      10,    1,  100,    2, 0x0a,   12 /* Public */,
      11,    1,  103,    2, 0x0a,   14 /* Public */,
      12,    1,  106,    2, 0x0a,   16 /* Public */,
      13,    0,  109,    2, 0x0a,   18 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'updateFloor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'elevatorRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addDestination'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDoorPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDoorReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeDoor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'help'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'doorObstacle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fire'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateWeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateElevatorGUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateLitFloorButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateFloor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->elevatorRequested(); break;
        case 2: _t->addDestination(); break;
        case 3: _t->openDoorPressed(); break;
        case 4: _t->openDoorReleased(); break;
        case 5: _t->closeDoor(); break;
        case 6: _t->help((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->doorObstacle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->fire((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateWeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->updateElevatorGUI((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->updateLitFloorButtons(); break;
        default: ;
        }
    }
}

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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

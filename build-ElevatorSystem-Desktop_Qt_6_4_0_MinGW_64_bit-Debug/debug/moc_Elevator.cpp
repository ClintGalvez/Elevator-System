/****************************************************************************
** Meta object code from reading C++ file 'Elevator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ElevatorSystem/Elevator.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Elevator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Elevator_t {
    uint offsetsAndSizes[42];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[10];
    char stringdata6[4];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[5];
    char stringdata10[16];
    char stringdata11[14];
    char stringdata12[9];
    char stringdata13[10];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[13];
    char stringdata17[5];
    char stringdata18[5];
    char stringdata19[9];
    char stringdata20[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Elevator_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Elevator_t qt_meta_stringdata_Elevator = {
    {
        QT_MOC_LITERAL(0, 8),  // "Elevator"
        QT_MOC_LITERAL(9, 12),  // "floorArrival"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "requestHelp"
        QT_MOC_LITERAL(35, 8),  // "overload"
        QT_MOC_LITERAL(44, 9),  // "setWeight"
        QT_MOC_LITERAL(54, 3),  // "run"
        QT_MOC_LITERAL(58, 8),  // "addFloor"
        QT_MOC_LITERAL(67, 6),  // "Floor*"
        QT_MOC_LITERAL(74, 4),  // "move"
        QT_MOC_LITERAL(79, 15),  // "moveToSafeFloor"
        QT_MOC_LITERAL(95, 13),  // "arriveAtFloor"
        QT_MOC_LITERAL(109, 8),  // "openDoor"
        QT_MOC_LITERAL(118, 9),  // "closeDoor"
        QT_MOC_LITERAL(128, 7),  // "canMove"
        QT_MOC_LITERAL(136, 4),  // "help"
        QT_MOC_LITERAL(141, 12),  // "doorObstacle"
        QT_MOC_LITERAL(154, 4),  // "fire"
        QT_MOC_LITERAL(159, 4),  // "dead"
        QT_MOC_LITERAL(164, 8),  // "powerOut"
        QT_MOC_LITERAL(173, 5)   // "reset"
    },
    "Elevator",
    "floorArrival",
    "",
    "requestHelp",
    "overload",
    "setWeight",
    "run",
    "addFloor",
    "Floor*",
    "move",
    "moveToSafeFloor",
    "arriveAtFloor",
    "openDoor",
    "closeDoor",
    "canMove",
    "help",
    "doorObstacle",
    "fire",
    "dead",
    "powerOut",
    "reset"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Elevator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       3,    0,  125,    2, 0x06,    3 /* Public */,
       4,    0,  126,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,  127,    2, 0x0a,    5 /* Public */,
       6,    0,  130,    2, 0x0a,    7 /* Public */,
       7,    1,  131,    2, 0x0a,    8 /* Public */,
       9,    1,  134,    2, 0x0a,   10 /* Public */,
       9,    0,  137,    2, 0x2a,   12 /* Public | MethodCloned */,
      11,    0,  138,    2, 0x0a,   13 /* Public */,
      12,    0,  139,    2, 0x0a,   14 /* Public */,
      13,    0,  140,    2, 0x0a,   15 /* Public */,
      14,    0,  141,    2, 0x0a,   16 /* Public */,
      15,    1,  142,    2, 0x0a,   17 /* Public */,
      16,    1,  145,    2, 0x0a,   19 /* Public */,
      17,    1,  148,    2, 0x0a,   21 /* Public */,
      18,    0,  151,    2, 0x0a,   23 /* Public */,
      19,    1,  152,    2, 0x0a,   24 /* Public */,
      20,    0,  155,    2, 0x0a,   26 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Elevator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Elevator.offsetsAndSizes,
    qt_meta_data_Elevator,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Elevator_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Elevator, std::true_type>,
        // method 'floorArrival'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'requestHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'overload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setWeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addFloor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Floor *, std::false_type>,
        // method 'move'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'move'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'arriveAtFloor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDoor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeDoor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'canMove'
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
        // method 'dead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'powerOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Elevator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Elevator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->floorArrival((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->requestHelp(); break;
        case 2: _t->overload(); break;
        case 3: _t->setWeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->run(); break;
        case 5: _t->addFloor((*reinterpret_cast< std::add_pointer_t<Floor*>>(_a[1]))); break;
        case 6: _t->move((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->move(); break;
        case 8: _t->arriveAtFloor(); break;
        case 9: _t->openDoor(); break;
        case 10: _t->closeDoor(); break;
        case 11: _t->canMove(); break;
        case 12: _t->help((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->doorObstacle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->fire((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->dead(); break;
        case 16: _t->powerOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Floor* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Elevator::*)(int );
            if (_t _q_method = &Elevator::floorArrival; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Elevator::*)();
            if (_t _q_method = &Elevator::requestHelp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Elevator::*)();
            if (_t _q_method = &Elevator::overload; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Elevator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Elevator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Elevator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Elevator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Elevator::floorArrival(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Elevator::requestHelp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Elevator::overload()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

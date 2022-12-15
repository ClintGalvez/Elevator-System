/****************************************************************************
** Meta object code from reading C++ file 'ECS.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ElevatorSystem/ECS.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ECS.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ECS_t {
    uint offsetsAndSizes[20];
    char stringdata0[4];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[18];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[5];
    char stringdata8[9];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ECS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ECS_t qt_meta_stringdata_ECS = {
    {
        QT_MOC_LITERAL(0, 3),  // "ECS"
        QT_MOC_LITERAL(4, 18),  // "updateCurrentFloor"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 18),  // "updateDestinations"
        QT_MOC_LITERAL(43, 17),  // "enableChkFireElev"
        QT_MOC_LITERAL(61, 12),  // "swapStrategy"
        QT_MOC_LITERAL(74, 7),  // "call911"
        QT_MOC_LITERAL(82, 4),  // "fire"
        QT_MOC_LITERAL(87, 8),  // "overload"
        QT_MOC_LITERAL(96, 8)   // "powerOut"
    },
    "ECS",
    "updateCurrentFloor",
    "",
    "updateDestinations",
    "enableChkFireElev",
    "swapStrategy",
    "call911",
    "fire",
    "overload",
    "powerOut"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ECS[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       3,    0,   65,    2, 0x06,    3 /* Public */,
       4,    1,   66,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   69,    2, 0x0a,    6 /* Public */,
       6,    0,   72,    2, 0x10a,    8 /* Public | MethodIsConst  */,
       7,    1,   73,    2, 0x0a,    9 /* Public */,
       8,    0,   76,    2, 0x10a,   11 /* Public | MethodIsConst  */,
       9,    1,   77,    2, 0x10a,   12 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ECS::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ECS.offsetsAndSizes,
    qt_meta_data_ECS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ECS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ECS, std::true_type>,
        // method 'updateCurrentFloor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateDestinations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableChkFireElev'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'swapStrategy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'call911'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fire'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'overload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'powerOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ECS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ECS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCurrentFloor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->updateDestinations(); break;
        case 2: _t->enableChkFireElev((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->swapStrategy((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->call911(); break;
        case 5: _t->fire((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->overload(); break;
        case 7: _t->powerOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ECS::*)(QString );
            if (_t _q_method = &ECS::updateCurrentFloor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ECS::*)();
            if (_t _q_method = &ECS::updateDestinations; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ECS::*)(bool );
            if (_t _q_method = &ECS::enableChkFireElev; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ECS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ECS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ECS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ECS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ECS::updateCurrentFloor(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ECS::updateDestinations()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ECS::enableChkFireElev(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

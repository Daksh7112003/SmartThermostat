/****************************************************************************
** Meta object code from reading C++ file 'systemcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controllers/systemcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemController_t {
    QByteArrayData data[18];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemController_t qt_meta_stringdata_SystemController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SystemController"
QT_MOC_LITERAL(1, 17, 31), // "currentSystemTemperatureChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 24), // "currentSystemTemperature"
QT_MOC_LITERAL(4, 75, 17), // "targetTempChanged"
QT_MOC_LITERAL(5, 93, 10), // "targetTemp"
QT_MOC_LITERAL(6, 104, 26), // "systemStatusMessageChanged"
QT_MOC_LITERAL(7, 131, 19), // "systemStatusMessage"
QT_MOC_LITERAL(8, 151, 18), // "systemStateChanged"
QT_MOC_LITERAL(9, 170, 15), // "HeatSelectState"
QT_MOC_LITERAL(10, 186, 11), // "systemState"
QT_MOC_LITERAL(11, 198, 27), // "setCurrentSystemTemperature"
QT_MOC_LITERAL(12, 226, 13), // "setTargetTemp"
QT_MOC_LITERAL(13, 240, 22), // "setSystemStatusMessage"
QT_MOC_LITERAL(14, 263, 14), // "setSystemState"
QT_MOC_LITERAL(15, 278, 7), // "HEATING"
QT_MOC_LITERAL(16, 286, 7), // "COOLING"
QT_MOC_LITERAL(17, 294, 4) // "AUTO"

    },
    "SystemController\0currentSystemTemperatureChanged\0"
    "\0currentSystemTemperature\0targetTempChanged\0"
    "targetTemp\0systemStatusMessageChanged\0"
    "systemStatusMessage\0systemStateChanged\0"
    "HeatSelectState\0systemState\0"
    "setCurrentSystemTemperature\0setTargetTemp\0"
    "setSystemStatusMessage\0setSystemState\0"
    "HEATING\0COOLING\0AUTO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,   99,

 // enum data: key, value
      15, uint(SystemController::HEATING),
      16, uint(SystemController::COOLING),
      17, uint(SystemController::AUTO),

       0        // eod
};

void SystemController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentSystemTemperatureChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->targetTempChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->systemStatusMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->systemStateChanged((*reinterpret_cast< HeatSelectState(*)>(_a[1]))); break;
        case 4: _t->setCurrentSystemTemperature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTargetTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setSystemStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setSystemState((*reinterpret_cast< HeatSelectState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::currentSystemTemperatureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::targetTempChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::systemStatusMessageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(HeatSelectState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::systemStateChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentSystemTemperature(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->targetTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->systemStatusMessage(); break;
        case 3: *reinterpret_cast< HeatSelectState*>(_v) = _t->systemState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSystemTemperature(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTargetTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSystemStatusMessage(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSystemState(*reinterpret_cast< HeatSelectState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SystemController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SystemController.data,
    qt_meta_data_SystemController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemController::currentSystemTemperatureChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemController::targetTempChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemController::systemStatusMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemController::systemStateChanged(HeatSelectState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

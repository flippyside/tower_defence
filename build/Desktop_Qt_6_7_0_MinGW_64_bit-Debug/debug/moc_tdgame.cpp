/****************************************************************************
** Meta object code from reading C++ file 'tdgame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Render/tdgame.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTDgameENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTDgameENDCLASS = QtMocHelpers::stringData(
    "TDgame",
    "backToStageSelect_slot",
    "",
    "showStageSelect_slot",
    "showSettlement",
    "coin",
    "showUpgradePage_slot",
    "hideUpgradePage",
    "hideMenu_slot",
    "hideRender",
    "changeCOIN",
    "num",
    "upgradeAttackPower",
    "upgradeDefence",
    "upgradeHP",
    "stageStatusChange",
    "stage",
    "initializeGame",
    "initializeGame_save",
    "GameSave",
    "gamesave",
    "initializeGame_map",
    "std::shared_ptr<Scenemap>",
    "map",
    "showTowerStatus",
    "std::shared_ptr<Tower>",
    "tower",
    "closeTowerStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTDgameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x0a,    1 /* Public */,
       3,    0,  117,    2, 0x0a,    2 /* Public */,
       4,    1,  118,    2, 0x0a,    3 /* Public */,
       6,    0,  121,    2, 0x0a,    5 /* Public */,
       7,    0,  122,    2, 0x0a,    6 /* Public */,
       8,    0,  123,    2, 0x0a,    7 /* Public */,
       9,    0,  124,    2, 0x0a,    8 /* Public */,
      10,    1,  125,    2, 0x0a,    9 /* Public */,
      12,    0,  128,    2, 0x0a,   11 /* Public */,
      13,    0,  129,    2, 0x0a,   12 /* Public */,
      14,    0,  130,    2, 0x0a,   13 /* Public */,
      15,    1,  131,    2, 0x0a,   14 /* Public */,
      17,    1,  134,    2, 0x0a,   16 /* Public */,
      18,    1,  137,    2, 0x0a,   18 /* Public */,
      21,    1,  140,    2, 0x0a,   20 /* Public */,
      24,    1,  143,    2, 0x0a,   22 /* Public */,
      27,    0,  146,    2, 0x0a,   24 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TDgame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTDgameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTDgameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTDgameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TDgame, std::true_type>,
        // method 'backToStageSelect_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showStageSelect_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSettlement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showUpgradePage_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideUpgradePage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideMenu_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideRender'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeCOIN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'upgradeAttackPower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upgradeDefence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'upgradeHP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stageStatusChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'initializeGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'initializeGame_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GameSave, std::false_type>,
        // method 'initializeGame_map'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<Scenemap>, std::false_type>,
        // method 'showTowerStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<Tower>, std::false_type>,
        // method 'closeTowerStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TDgame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TDgame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backToStageSelect_slot(); break;
        case 1: _t->showStageSelect_slot(); break;
        case 2: _t->showSettlement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->showUpgradePage_slot(); break;
        case 4: _t->hideUpgradePage(); break;
        case 5: _t->hideMenu_slot(); break;
        case 6: _t->hideRender(); break;
        case 7: _t->changeCOIN((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->upgradeAttackPower(); break;
        case 9: _t->upgradeDefence(); break;
        case 10: _t->upgradeHP(); break;
        case 11: _t->stageStatusChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->initializeGame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->initializeGame_save((*reinterpret_cast< std::add_pointer_t<GameSave>>(_a[1]))); break;
        case 14: _t->initializeGame_map((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Scenemap>>>(_a[1]))); break;
        case 15: _t->showTowerStatus((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Tower>>>(_a[1]))); break;
        case 16: _t->closeTowerStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< std::shared_ptr<Scenemap> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *TDgame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDgame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTDgameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TDgame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP

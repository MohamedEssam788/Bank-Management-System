/****************************************************************************
** Meta object code from reading C++ file 'UserWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UserWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSUserWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUserWindowENDCLASS = QtMocHelpers::stringData(
    "UserWindow",
    "user_logout_signal",
    "",
    "user_get_account_number_signal",
    "user_view_account_balance_signal",
    "user_view_transfer_history_signal",
    "user_make_transaction_signal",
    "amount",
    "user_transfer_amount_signal",
    "receiver",
    "signature",
    "user_show_account_number_slot",
    "accNumber",
    "user_show_account_balance_slot",
    "accBalance",
    "user_show_transaction_status_slot",
    "transactionStatus",
    "show_user_transfer_amount_slot",
    "show_user_transaction_history_slot",
    "TranscationHistory",
    "on_user_logout_btn_clicked",
    "on_user_get_acc_number_btn_clicked",
    "on_user_view_acc_balance_btn_clicked",
    "on_user_view_trans_history_btn_clicked",
    "on_user_transaction_history_btn_clicked",
    "on_user_make_transaction_btn_clicked",
    "on_user_do_make_transaction_btn_clicked",
    "on_user_cancel_make_transaction_btn_clicked",
    "on_user_transaction_combo_box_currentIndexChanged",
    "index",
    "on_user_transfer_amount_btn_clicked",
    "on_user_transfer_do_amount_btn_clicked",
    "on_user_cancel_transfer_amount_btn_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x06,    1 /* Public */,
       3,    0,  153,    2, 0x06,    2 /* Public */,
       4,    0,  154,    2, 0x06,    3 /* Public */,
       5,    0,  155,    2, 0x06,    4 /* Public */,
       6,    1,  156,    2, 0x06,    5 /* Public */,
       8,    3,  159,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  166,    2, 0x0a,   11 /* Public */,
      13,    1,  169,    2, 0x0a,   13 /* Public */,
      15,    1,  172,    2, 0x0a,   15 /* Public */,
      17,    1,  175,    2, 0x0a,   17 /* Public */,
      18,    1,  178,    2, 0x0a,   19 /* Public */,
      20,    0,  181,    2, 0x08,   21 /* Private */,
      21,    0,  182,    2, 0x08,   22 /* Private */,
      22,    0,  183,    2, 0x08,   23 /* Private */,
      23,    0,  184,    2, 0x08,   24 /* Private */,
      24,    0,  185,    2, 0x08,   25 /* Private */,
      25,    0,  186,    2, 0x08,   26 /* Private */,
      26,    0,  187,    2, 0x08,   27 /* Private */,
      27,    0,  188,    2, 0x08,   28 /* Private */,
      28,    1,  189,    2, 0x08,   29 /* Private */,
      30,    0,  192,    2, 0x08,   31 /* Private */,
      31,    0,  193,    2, 0x08,   32 /* Private */,
      32,    0,  194,    2, 0x08,   33 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,    7,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserWindow, std::true_type>,
        // method 'user_logout_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_get_account_number_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_view_account_balance_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_view_transfer_history_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_make_transaction_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_transfer_amount_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_show_account_number_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_show_account_balance_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_show_transaction_status_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_transfer_amount_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_transaction_history_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_user_logout_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_get_acc_number_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_view_acc_balance_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_view_trans_history_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_transaction_history_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_make_transaction_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_do_make_transaction_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_cancel_make_transaction_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_transaction_combo_box_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_user_transfer_amount_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_transfer_do_amount_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_cancel_transfer_amount_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->user_logout_signal(); break;
        case 1: _t->user_get_account_number_signal(); break;
        case 2: _t->user_view_account_balance_signal(); break;
        case 3: _t->user_view_transfer_history_signal(); break;
        case 4: _t->user_make_transaction_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->user_transfer_amount_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->user_show_account_number_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->user_show_account_balance_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->user_show_transaction_status_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->show_user_transfer_amount_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->show_user_transaction_history_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_user_logout_btn_clicked(); break;
        case 12: _t->on_user_get_acc_number_btn_clicked(); break;
        case 13: _t->on_user_view_acc_balance_btn_clicked(); break;
        case 14: _t->on_user_view_trans_history_btn_clicked(); break;
        case 15: _t->on_user_transaction_history_btn_clicked(); break;
        case 16: _t->on_user_make_transaction_btn_clicked(); break;
        case 17: _t->on_user_do_make_transaction_btn_clicked(); break;
        case 18: _t->on_user_cancel_make_transaction_btn_clicked(); break;
        case 19: _t->on_user_transaction_combo_box_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_user_transfer_amount_btn_clicked(); break;
        case 21: _t->on_user_transfer_do_amount_btn_clicked(); break;
        case 22: _t->on_user_cancel_transfer_amount_btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserWindow::*)();
            if (_t _q_method = &UserWindow::user_logout_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserWindow::*)();
            if (_t _q_method = &UserWindow::user_get_account_number_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserWindow::*)();
            if (_t _q_method = &UserWindow::user_view_account_balance_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserWindow::*)();
            if (_t _q_method = &UserWindow::user_view_transfer_history_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserWindow::*)(QString );
            if (_t _q_method = &UserWindow::user_make_transaction_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UserWindow::*)(QString , QString , QString );
            if (_t _q_method = &UserWindow::user_transfer_amount_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *UserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void UserWindow::user_logout_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserWindow::user_get_account_number_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserWindow::user_view_account_balance_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserWindow::user_view_transfer_history_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UserWindow::user_make_transaction_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UserWindow::user_transfer_amount_signal(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "show_user_account_number_signal",
    "",
    "accNumber",
    "show_user_account_balance_signal",
    "accBalance",
    "show_user_transaction_success_signal",
    "transStatus",
    "show_user_transfer_amount_signal",
    "transferStatus",
    "show_user_transaction_history_signal",
    "TransactionHistory",
    "show_admin_account_number_signal",
    "show_admin_account_balance_signal",
    "show_admin_transaction_history_signal",
    "show_admin_bank_database_signal",
    "bankDB",
    "show_admin_create_user_signal",
    "userStatus",
    "show_admin_update_user_signal",
    "show_admin_delete_user_signal",
    "loginSuccess_slot",
    "authority",
    "loginFailed_slot",
    "errorMessage",
    "user_logout_slot",
    "admin_logout_slot",
    "user_get_account_number_slot",
    "user_show_account_number_slot",
    "user_view_account_balance_slot",
    "user_show_account_balance_slot",
    "user_make_transaction_slot",
    "amount",
    "user_show_transaction_success_slot",
    "transactionStatus",
    "user_transfer_amount_slot",
    "recAccNumber",
    "signature",
    "user_show_trasnfer_amount_slot",
    "user_view_transfer_history_slot",
    "user_view_transaction_histoy_slot",
    "admin_get_account_number_slot",
    "username",
    "admin_show_account_number_slot",
    "admin_view_account_balance_slot",
    "admin_show_account_balance_slot",
    "admin_view_transaction_history_slot",
    "admin_show_transaction_histoy_slot",
    "admin_view_bank_db_slot",
    "admin_show_bank_db_slot",
    "admin_create_new_user_slot",
    "newUser",
    "admin_show_create_user_slot",
    "admin_update_user_slot",
    "userUpdate",
    "admin_show_update_user_slot",
    "admin_delete_user_slot",
    "admin_show_delete_user_slot",
    "on_password_checkBox_stateChanged",
    "arg1",
    "on_login_login_btn_clicked",
    "on_login_exit_btn_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  272,    2, 0x06,    1 /* Public */,
       4,    1,  275,    2, 0x06,    3 /* Public */,
       6,    1,  278,    2, 0x06,    5 /* Public */,
       8,    1,  281,    2, 0x06,    7 /* Public */,
      10,    1,  284,    2, 0x06,    9 /* Public */,
      12,    1,  287,    2, 0x06,   11 /* Public */,
      13,    1,  290,    2, 0x06,   13 /* Public */,
      14,    1,  293,    2, 0x06,   15 /* Public */,
      15,    1,  296,    2, 0x06,   17 /* Public */,
      17,    1,  299,    2, 0x06,   19 /* Public */,
      19,    1,  302,    2, 0x06,   21 /* Public */,
      20,    1,  305,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    1,  308,    2, 0x0a,   25 /* Public */,
      23,    1,  311,    2, 0x0a,   27 /* Public */,
      25,    0,  314,    2, 0x0a,   29 /* Public */,
      26,    0,  315,    2, 0x0a,   30 /* Public */,
      27,    0,  316,    2, 0x0a,   31 /* Public */,
      28,    1,  317,    2, 0x0a,   32 /* Public */,
      29,    0,  320,    2, 0x0a,   34 /* Public */,
      30,    1,  321,    2, 0x0a,   35 /* Public */,
      31,    1,  324,    2, 0x0a,   37 /* Public */,
      33,    1,  327,    2, 0x0a,   39 /* Public */,
      35,    3,  330,    2, 0x0a,   41 /* Public */,
      38,    1,  337,    2, 0x0a,   45 /* Public */,
      39,    0,  340,    2, 0x0a,   47 /* Public */,
      40,    1,  341,    2, 0x0a,   48 /* Public */,
      41,    1,  344,    2, 0x0a,   50 /* Public */,
      43,    1,  347,    2, 0x0a,   52 /* Public */,
      44,    1,  350,    2, 0x0a,   54 /* Public */,
      45,    1,  353,    2, 0x0a,   56 /* Public */,
      46,    1,  356,    2, 0x0a,   58 /* Public */,
      47,    1,  359,    2, 0x0a,   60 /* Public */,
      48,    0,  362,    2, 0x0a,   62 /* Public */,
      49,    1,  363,    2, 0x0a,   63 /* Public */,
      50,    2,  366,    2, 0x0a,   65 /* Public */,
      52,    1,  371,    2, 0x0a,   68 /* Public */,
      53,    1,  374,    2, 0x0a,   70 /* Public */,
      55,    1,  377,    2, 0x0a,   72 /* Public */,
      56,    1,  380,    2, 0x0a,   74 /* Public */,
      57,    1,  383,    2, 0x0a,   76 /* Public */,
      58,    1,  386,    2, 0x08,   78 /* Private */,
      60,    0,  389,    2, 0x08,   80 /* Private */,
      61,    0,  390,    2, 0x08,   81 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   32,   37,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   51,   37,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'show_user_account_number_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_account_balance_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_transaction_success_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_transfer_amount_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_user_transaction_history_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_account_number_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_account_balance_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_transaction_history_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_bank_database_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_create_user_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_update_user_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'show_admin_delete_user_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loginSuccess_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loginFailed_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_logout_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'admin_logout_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_get_account_number_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_show_account_number_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_view_account_balance_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_show_account_balance_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_make_transaction_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_show_transaction_success_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_transfer_amount_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_show_trasnfer_amount_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'user_view_transfer_history_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'user_view_transaction_histoy_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_get_account_number_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_account_number_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_view_account_balance_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_account_balance_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_view_transaction_history_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_transaction_histoy_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_view_bank_db_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'admin_show_bank_db_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_create_new_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_create_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_update_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_update_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_delete_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'admin_show_delete_user_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_password_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_login_login_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_exit_btn_clicked'
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
        case 0: _t->show_user_account_number_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->show_user_account_balance_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->show_user_transaction_success_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->show_user_transfer_amount_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->show_user_transaction_history_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->show_admin_account_number_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->show_admin_account_balance_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->show_admin_transaction_history_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->show_admin_bank_database_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->show_admin_create_user_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->show_admin_update_user_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->show_admin_delete_user_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->loginSuccess_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->loginFailed_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->user_logout_slot(); break;
        case 15: _t->admin_logout_slot(); break;
        case 16: _t->user_get_account_number_slot(); break;
        case 17: _t->user_show_account_number_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->user_view_account_balance_slot(); break;
        case 19: _t->user_show_account_balance_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->user_make_transaction_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->user_show_transaction_success_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->user_transfer_amount_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 23: _t->user_show_trasnfer_amount_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->user_view_transfer_history_slot(); break;
        case 25: _t->user_view_transaction_histoy_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->admin_get_account_number_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->admin_show_account_number_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->admin_view_account_balance_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->admin_show_account_balance_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->admin_view_transaction_history_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->admin_show_transaction_histoy_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->admin_view_bank_db_slot(); break;
        case 33: _t->admin_show_bank_db_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->admin_create_new_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 35: _t->admin_show_create_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->admin_update_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 37: _t->admin_show_update_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->admin_delete_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->admin_show_delete_user_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->on_password_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->on_login_login_btn_clicked(); break;
        case 42: _t->on_login_exit_btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_user_account_number_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_user_account_balance_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_user_transaction_success_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_user_transfer_amount_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_user_transaction_history_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_account_number_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_account_balance_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_transaction_history_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_bank_database_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_create_user_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_update_user_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::show_admin_delete_user_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::show_user_account_number_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::show_user_account_balance_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::show_user_transaction_success_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::show_user_transfer_amount_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::show_user_transaction_history_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::show_admin_account_number_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::show_admin_account_balance_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::show_admin_transaction_history_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::show_admin_bank_database_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::show_admin_create_user_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::show_admin_update_user_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::show_admin_delete_user_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP

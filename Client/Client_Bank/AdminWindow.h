#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include <QMessageBox>

#include <QTableWidget>
#include <Table.h>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

    /******************************************************/
    /***************    AdminWindow slots    *************/
    /******************************************************/
public slots:
    void admin_show_account_number_slot(QString accNumber);
    void show_admin_account_balance_slot(QString accBalance);
    void show_admin_transaction_history_slot(QString TransactionHistory);
    void show_admin_bank_database_slot(QString bankDB);
    void show_admin_create_user_slot(QString userStatus);
    void show_admin_update_user_slot(QString userStatus);
    void show_admin_delete_user_slot(QString userStatus);
private slots:
    void on_admin_logout_btn_clicked();

    /***************    acc number slots    *************/
    /******************************************************/
    void on_admin_get_acc_number_btn_clicked();
    void on_admin_do_get_acc_number_btn_clicked();
    void on_admin_cancel_get_acc_number_btn_clicked();

    /***************    acc balance slots    *************/
    /******************************************************/
    void on_admin_view_acc_balance_btn_clicked();
    void on_admin_do_get_acc_balance_btn_clicked();
    void on_admin_cancel_get_acc_balance_btn_clicked();


    /***************    trans history slots    *************/
    /******************************************************/
    void on_admin_view_trans_history_btn_clicked();
    void on_admin_do_view_transaction_history_btn_clicked();
    void on_admin_cancel_transaction_history_btn_clicked();

    /***************    bankDB slots    *************/
    /******************************************************/
    void on_admin_view_bank_db_btn_clicked();
    void on_admin_ok_view_bank_db_btn_clicked();

    /***************    create user slots    *************/
    /******************************************************/
    void on_admin_create_new_user_btn_clicked();
    void on_admin_cancel_create_user_btn_clicked();
    void on_admin_do_create_user_btn_clicked();
    void on_admin_create_password_checkBox_stateChanged(int arg1);
    void on_admin_create_confirm_password_checkBox_stateChanged(int arg1);

    /***************    update user slots    *************/
    /******************************************************/
    void on_admin_update_user_btn_clicked();
    void on_admin_do_update_user_btn_clicked();
    void on_admin_cancel_update_user_btn_clicked();
    void on_admin_update_current_password_checkBox_stateChanged(int arg1);
    void on_admin_update_new_password_checkBox_stateChanged(int arg1);
    void on_admin_update_confirm_password_checkBox_stateChanged(int arg1);

    /***************    delete user slots    *************/
    /******************************************************/
    void on_admin_delete_user_btn_clicked();    
    void on_admin_do_delete_user_btn_clicked();
    void on_admin_cancel_delete_user_btn_clicked();





    /******************************************************/
    /***************   AdminWindow signals    *************/
    /******************************************************/
signals:
    void admin_logout_signal();
    void admin_get_account_number_signal(QString username);
    void admin_get_account_balance_signal(QString accNumber);
    void admin_view_transaction_history_signal(QString accNumber);
    void admin_view_bank_db_signal();
    void admin_create_new_user_signal(QString newUser,QString signature);
    void admin_update_user_signal(QString updateUser);
    void admin_delete_user_signal(QString accNumber);

    /******************************************************/
    /****************Private Section***********************/
    /******************************************************/
private:
    /******************************************************/
    /**************** AdminWindow Attributes ******************/
    /******************************************************/
    Ui::AdminWindow *ui;
    Table tableObj;


};

#endif // ADMINWINDOW_H

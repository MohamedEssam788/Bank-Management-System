#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <client.h>
#include <QMetaEnum>
#include <UserWindow.h>
#include <AdminWindow.h>
#include <QMessageBox>
#include <QList>
#include <LocalHost.h>
#include <SignatureEncryption.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void loginSuccess_slot(QString authority);
    void loginFailed_slot(QString errorMessage);
    void user_logout_slot();
    void admin_logout_slot();

    void user_get_account_number_slot();
    void user_show_account_number_slot(QString accNumber);

    void user_view_account_balance_slot();
    void user_show_account_balance_slot(QString accBalance);

    void user_make_transaction_slot(QString amount);
    void user_show_transaction_success_slot(QString transactionStatus);

    void user_transfer_amount_slot(QString recAccNumber,QString amount,QString signature);
    void user_show_trasnfer_amount_slot(QString transferStatus);

    void user_view_transfer_history_slot();
    void user_view_transaction_histoy_slot(QString TransactionHistory);

    void admin_get_account_number_slot(QString username);
    void admin_show_account_number_slot(QString accNumber);

    void admin_view_account_balance_slot(QString accNumber);
    void admin_show_account_balance_slot(QString accBalance);

    void admin_view_transaction_history_slot(QString accNumber);
    void admin_show_transaction_histoy_slot(QString TransactionHistory);

    void admin_view_bank_db_slot();
    void admin_show_bank_db_slot(QString bankDB);

    void admin_create_new_user_slot(QString newUser,QString signature);
    void admin_show_create_user_slot(QString userStatus);

    void admin_update_user_slot(QString userUpdate);
    void admin_show_update_user_slot(QString userStatus);

    void admin_delete_user_slot(QString accNumber);
    void admin_show_delete_user_slot(QString userStatus);

    /******************************************************/
    /***************    AdminWindow slots    *************/
    /******************************************************/
private slots:


    void on_password_checkBox_stateChanged(int arg1);
    void on_login_login_btn_clicked();
    void on_login_exit_btn_clicked();

    /******************************************************/
    /***************   MainWindow signals    *************/
    /******************************************************/
signals:
    void show_user_account_number_signal(QString accNumber);
    void show_user_account_balance_signal(QString accBalance);
    void show_user_transaction_success_signal(QString transStatus);
    void show_user_transfer_amount_signal(QString transferStatus);
    void show_user_transaction_history_signal(QString TransactionHistory);
    void show_admin_account_number_signal(QString accNumber);
    void show_admin_account_balance_signal(QString accBalance);
    void show_admin_transaction_history_signal(QString TransactionHistory);
    void show_admin_bank_database_signal(QString bankDB);
    void show_admin_create_user_signal(QString userStatus);
    void show_admin_update_user_signal(QString userStatus);
    void show_admin_delete_user_signal(QString userStatus);
    /******************************************************/
    /****************Private Section***********************/
    /******************************************************/
private:
    /******************************************************/
    /**************** MainWindow Attributes ****************/
    /******************************************************/
    Ui::MainWindow *ui;
    Client clientObj;
    QString user;
    QString accNumber;
    QList<UserWindow*> userWindows;
    QList<AdminWindow*> adminWindows;

    // void cleanUpUserWindows();
    // void cleanUpAdminWindows();
};
#endif // MAINWINDOW_H

#ifndef USERWINDOW_H
#define USERWINDOW_H


#include <QDialog>
#include <QMessageBox>

#include <QTableWidget>
#include <Table.h>

namespace Ui {
class UserWindow;
}

class UserWindow : public QDialog
{
    Q_OBJECT
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();


    /******************************************************/
    /***************    AdminWindow slots    *************/
    /******************************************************/
public slots:
    void user_show_account_number_slot(QString accNumber);
    void user_show_account_balance_slot(QString accBalance);
    void user_show_transaction_status_slot(QString transactionStatus);
    void show_user_transfer_amount_slot(QString transactionStatus);
    void show_user_transaction_history_slot(QString TranscationHistory);
private slots:
    void on_user_logout_btn_clicked();

    /***************    acc number slots    *************/
    /******************************************************/
    void on_user_get_acc_number_btn_clicked();

    /***************    acc balance slots    *************/
    /******************************************************/
    void on_user_view_acc_balance_btn_clicked();

    /***************    trans history slots    *************/
    /******************************************************/
    void on_user_view_trans_history_btn_clicked();
    void on_user_transaction_history_btn_clicked();

    /***************   make trans  slots    *************/
    /******************************************************/
    void on_user_make_transaction_btn_clicked();
    void on_user_do_make_transaction_btn_clicked();
    void on_user_cancel_make_transaction_btn_clicked();
    void on_user_transaction_combo_box_currentIndexChanged(int index);
    /***************    trans amount slots    *************/
    /******************************************************/
    void on_user_transfer_amount_btn_clicked();
    void on_user_transfer_do_amount_btn_clicked();
    void on_user_cancel_transfer_amount_btn_clicked();



    /******************************************************/
    /***************   UserWindow signals    *************/
    /******************************************************/
signals:
    void user_logout_signal();
    void user_get_account_number_signal();
    void user_view_account_balance_signal();
    void user_view_transfer_history_signal();
    void user_make_transaction_signal(QString amount);
    void user_transfer_amount_signal(QString receiver,QString amount,QString signature);

    /******************************************************/
    /****************Private Section***********************/
    /******************************************************/
private:
    /******************************************************/
    /**************** UserWindow Attributes ****************/
    /******************************************************/
    Ui::UserWindow *ui;
    bool isValidAmount(const QString& amount);
    Table tableObj;

};

#endif // USERWINDOW_H

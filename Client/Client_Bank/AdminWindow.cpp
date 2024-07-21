#include "AdminWindow.h"
#include "ui_adminwindow.h"
#include <mainwindow.h>

AdminWindow::AdminWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    ui->admin_stackedWidget->setCurrentIndex(0);

    AdminWindow::setWindowTitle("Admin Mode");
    QIcon icon(":/img/img/adminicon.png");
    AdminWindow::setWindowIcon(icon);
}

AdminWindow::~AdminWindow()
{
    emit admin_logout_signal();
    this->close();
    delete ui;
}

void AdminWindow::on_admin_logout_btn_clicked()
{
    qDebug() << "Logout button clicked, emitting signal";
    //emit admin_logout_signal();//emit logout signal
    this->close();//hide the current window
    parentWidget()->show();//show the main window
}


/******************************************************/
/***************    acc number slots    *************/
/******************************************************/
void AdminWindow::on_admin_get_acc_number_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(1);
}



void AdminWindow::on_admin_do_get_acc_number_btn_clicked()
{
    QString username = ui->admin_get_acc_number_edit_line->text();//get username
    /*check if admin entered an username*/
    if(username.isEmpty())
    {
        QMessageBox::critical(this,"Error","Enter username");
    }
    else
    {
        username = username +","+"admin";
        emit admin_get_account_number_signal(username);//emit signal connected to a mainwindow slot
        ui->admin_get_acc_number_edit_line->clear();//clear line edit
    }

}

void AdminWindow::on_admin_cancel_get_acc_number_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(0);
}

/* slot connected with a mainwindow signal */
void AdminWindow::admin_show_account_number_slot(QString accNumber)
{
    QMessageBox::information(this,"Account Number","Account number: "+accNumber);
    ui->admin_stackedWidget->setCurrentIndex(0);
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    acc balance slots    *************/
/******************************************************/
void AdminWindow::on_admin_view_acc_balance_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(2);
}


void AdminWindow::on_admin_do_get_acc_balance_btn_clicked()
{
    QString accNumber = ui->admin_get_acc_balance_edit_line->text();
    if(accNumber.isEmpty()) //check if the accNumber entered
    {
        QMessageBox::critical(this,"Error","Enter account number");
    }
    else
    {
        accNumber = accNumber+","+"admin";
        emit admin_get_account_balance_signal(accNumber);//emit signal connected with mainwindow slot
        ui->admin_get_acc_balance_edit_line->clear();//clear line edit
    }
}

/* slot conncted to mainwindow signal */
void AdminWindow::show_admin_account_balance_slot(QString accBalance)
{
    QMessageBox::information(this,"Account Balance","Account Balance: "+accBalance);
    ui->admin_stackedWidget->setCurrentIndex(0);
}

void AdminWindow::on_admin_cancel_get_acc_balance_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(0);
    ui->admin_get_acc_balance_edit_line->clear();//clear line edit
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    trans history slots    *************/
/******************************************************/

void AdminWindow::on_admin_view_trans_history_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(3);
    ui->admin_view_transaction_history_edit_line->clear();//clear line edit
    ui->admin_transaction_histoy_table->clear();
}


void AdminWindow::on_admin_do_view_transaction_history_btn_clicked()
{
    QString accNumber = ui->admin_view_transaction_history_edit_line->text();
    if(accNumber.isEmpty())
    {
        QMessageBox::critical(this,"Error","Enter account number");
    }
    else
    {
        // accNumber = accNumber+","+"admin";
        emit admin_view_transaction_history_signal(accNumber);
        ui->admin_view_transaction_history_edit_line->clear();//clear line edit
    }
}

void AdminWindow::show_admin_transaction_history_slot(QString TransactionHistory)
{
    if(TransactionHistory.contains("not"))
    {
        QMessageBox::critical(this,"Error",TransactionHistory);
        return;
    }
    ui->admin_transaction_histoy_table->setWindowTitle("Transaction History");
    ui->admin_transaction_histoy_table->resize(ui->admin_transaction_histoy_table->width(), ui->admin_transaction_histoy_table->height());
    tableObj.CreateTransactionHistoryTable(ui->admin_transaction_histoy_table,TransactionHistory);
}

void AdminWindow::on_admin_cancel_transaction_history_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(0);
    ui->admin_view_transaction_history_edit_line->clear();//clear line edit
}
/**************************************************************/
/**************************************************************/
/**************************************************************/

/***************    bankDB slots    *************/
/******************************************************/
void AdminWindow::on_admin_view_bank_db_btn_clicked()
{
    emit admin_view_bank_db_signal();
    ui->admin_stackedWidget->setCurrentIndex(4);
}

void AdminWindow::show_admin_bank_database_slot(QString bankDB)
{
    ui->admin_bank_db_table->setWindowTitle("Bank Database");
    ui->admin_bank_db_table->resize(ui->admin_bank_db_table->width(), ui->admin_bank_db_table->height());
    tableObj.CreateBankDbTable(ui->admin_bank_db_table,bankDB);
}

void AdminWindow::on_admin_ok_view_bank_db_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(0);
}
/**************************************************************/
/**************************************************************/
/**************************************************************/

/***************    create user slots    *************/
/******************************************************/
void AdminWindow::on_admin_create_new_user_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(5);
}

void AdminWindow::on_admin_do_create_user_btn_clicked()
{
    /* get the new user information*/
    QString username        = ui->admin_create_username_edit_line->text();//read the line edit
    QString password        = ui->admin_create_password_edit_line->text();//read the line edit
    QString confirmPassword = ui->admin_create_confirm_password_edit_line->text();//read the line edit
    QString fullName        = ui->admin_create_fullname_edit_line->text();//read the line edit
    QString age             = ui->admin_create_age_edit_line->text();//read the line edit
    QString Email           = ui->admin_create_email_edit_line->text();//read the line edit
    QString signature       = ui->admin_create_signature_edit_line->text();//read the line edit

    /*check on password validaty*/
    if(password != confirmPassword)
    {
        ui->admin_password_label->setText("Passwords are not matched");
        return ;
    }

    /*check on age validaty*/
    if(age.toInt() <18)
    {
        ui->admin_age_label->setText("age must be >18");
        ui->admin_password_label->clear();
        return;
    }


    ui->admin_password_label->clear();//clear line edit
    ui->admin_age_label->clear();
    QString newUser = username + "," + password+ "," +
                      confirmPassword+ "," +fullName+ "," +age+ "," +Email;
    emit admin_create_new_user_signal(newUser,signature);//emit signal connected with mainwindow slot

}

/* slot connceted to mainwindow signal */
void AdminWindow::show_admin_create_user_slot(QString userStatus)
{
    if(userStatus.contains("exist"))
    {
        QMessageBox::critical(this,"Error",userStatus);
    }
    else
    {
        ui->admin_create_username_edit_line->clear();//clear line edit
        ui->admin_create_password_edit_line->clear();//clear line edit
        ui->admin_create_confirm_password_edit_line->clear();//clear line edit
        ui->admin_create_fullname_edit_line->clear();//clear line edit
        ui->admin_create_age_edit_line->clear();//clear line edit
        ui->admin_create_email_edit_line->clear();//clear line edit
        ui->admin_create_signature_edit_line->clear();//clear line edit
        QMessageBox::information(this,"Create New User",userStatus);
        ui->admin_stackedWidget->setCurrentIndex(0);
    }
}


void AdminWindow::on_admin_create_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->admin_create_password_edit_line->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->admin_create_password_edit_line->setEchoMode(QLineEdit::Password);
    }
}


void AdminWindow::on_admin_create_confirm_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->admin_create_confirm_password_edit_line->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->admin_create_confirm_password_edit_line->setEchoMode(QLineEdit::Password);
    }
}

void AdminWindow::on_admin_cancel_create_user_btn_clicked()
{
    ui->admin_create_username_edit_line->clear();//clear line edit
    ui->admin_create_password_edit_line->clear();//clear line edit
    ui->admin_create_confirm_password_edit_line->clear();//clear line edit
    ui->admin_create_fullname_edit_line->clear();//clear line edit
    ui->admin_create_age_edit_line->clear();//clear line edit
    ui->admin_create_email_edit_line->clear();//clear line edit
    ui->admin_create_signature_edit_line->clear();//clear line edit

    ui->admin_stackedWidget->setCurrentIndex(0);
}
/**************************************************************/
/**************************************************************/
/**************************************************************/

/***************    update user slots    *************/
/******************************************************/
void AdminWindow::on_admin_update_user_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(6);
}

void AdminWindow::on_admin_do_update_user_btn_clicked()
{
    /* get the updated information */
    QString accNumber       = ui->admin_update_acc_number_edit_line->text();
    QString fullName        = ui->admin_update_fullname_edit_line->text();
    QString age             = ui->admin_update_age_edit_line->text();
    QString Email           = ui->admin_update_email_edit_line->text();
    QString oldpassword     = ui->admin_update_old_password_edit_line->text();
    QString newpassword     = ui->admin_update_new_password_edit_line->text();
    QString confirmPassword = ui->admin_update_confirm_password_edit_line->text();

    /* check the inputs validaty */
    if (accNumber.isEmpty())
    {
        QMessageBox::critical(this,"Error","Enter account number");
        return;
    }
    if(oldpassword.isEmpty())
    {
        QMessageBox::critical(this,"Error","Current Password is required");
        return;
    }
    if(newpassword != confirmPassword )
    {
        ui->admin_new_password_label->setText("password are not matched");
        ui->admin_new_confirm_password_label->setText("password are not matched");
        return;
    }

    if( (!age.isEmpty() ) && (age.toInt() <18) )
    {
        ui->admin_age_label->setText("age must be >18");
        return;
    }

    ui->admin_new_password_label->clear();
    ui->admin_new_confirm_password_label->clear();

    QString updateUser = accNumber +","+ fullName +","+age +","+ Email
                         +","+ oldpassword +","+ newpassword + +","+ confirmPassword;

    emit admin_update_user_signal(updateUser); //emit signal connected to a mainwindow slot
}

void AdminWindow::on_admin_update_current_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->admin_update_old_password_edit_line->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->admin_update_old_password_edit_line->setEchoMode(QLineEdit::Password);
    }
}


void AdminWindow::on_admin_update_new_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->admin_update_new_password_edit_line->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->admin_update_new_password_edit_line->setEchoMode(QLineEdit::Password);
    }
}


void AdminWindow::on_admin_update_confirm_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->admin_update_confirm_password_edit_line->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->admin_update_confirm_password_edit_line->setEchoMode(QLineEdit::Password);
    }
}

/* slot connected to mainwindow signal */
void AdminWindow::show_admin_update_user_slot(QString userStatus)
{
    if(userStatus.contains("exist"))
    {
        QMessageBox::critical(this,"Error",userStatus);
    }
    else
    {
        ui->admin_update_acc_number_edit_line->clear();//clear line edit
        ui->admin_update_fullname_edit_line->clear();//clear line edit
        ui->admin_update_age_edit_line->clear();//clear line edit
        ui->admin_update_email_edit_line->clear();//clear line edit
        ui->admin_update_old_password_edit_line->clear();//clear line edit
        ui->admin_update_new_password_edit_line->clear();//clear line edit
        ui->admin_update_confirm_password_edit_line->clear();//clear line edit

        QMessageBox::information(this,"Update User",userStatus);
        ui->admin_stackedWidget->setCurrentIndex(0);
    }
}

void AdminWindow::on_admin_cancel_update_user_btn_clicked()
{
    ui->admin_update_acc_number_edit_line->clear();//clear line edit
    ui->admin_update_fullname_edit_line->clear();//clear line edit
    ui->admin_update_age_edit_line->clear();//clear line edit
    ui->admin_update_email_edit_line->clear();//clear line edit
    ui->admin_update_old_password_edit_line->clear();//clear line edit
    ui->admin_update_new_password_edit_line->clear();//clear line edit
    ui->admin_update_confirm_password_edit_line->clear();//clear line edit

    ui->admin_stackedWidget->setCurrentIndex(0);
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/***************    delete user slots    *************/
/******************************************************/
void AdminWindow::on_admin_delete_user_btn_clicked()
{
    ui->admin_stackedWidget->setCurrentIndex(7);
}

void AdminWindow::on_admin_do_delete_user_btn_clicked()
{

    QString accNumber = ui->admin_delete_acc_number_edit_line->text();
    /* check the inputs validaty */
    if (accNumber.isEmpty())
    {
        QMessageBox::critical(this,"Error","Enter account number");
        return;
    }
    emit admin_delete_user_signal(accNumber); //emit a signal connected to mainwindow slot
}

/* slot connected to mainwindow signal */
void AdminWindow::show_admin_delete_user_slot(QString userStatus)
{
    if(userStatus.contains("not") )
    {
        ui->admin_delete_label->setText(userStatus);
    }
    else
    {
        ui->admin_delete_label->clear();
        ui->admin_delete_acc_number_edit_line->clear();//clear line edit
        QMessageBox::information(this,"Delete User",userStatus);
        ui->admin_stackedWidget->setCurrentIndex(0);
    }
}

void AdminWindow::on_admin_cancel_delete_user_btn_clicked()
{
    ui->admin_delete_label->clear();
    ui->admin_delete_acc_number_edit_line->clear();//clear line edit
    ui->admin_stackedWidget->setCurrentIndex(0);
}

/**************************************************************/
/**************************************************************/
/**************************************************************/






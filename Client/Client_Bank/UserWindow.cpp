#include "UserWindow.h"
#include "ui_userwindow.h"

UserWindow::UserWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    UserWindow::setWindowTitle("User Mode");
    QIcon icon(":/img/img/user.png");
    UserWindow::setWindowIcon(icon);

}

UserWindow::~UserWindow()
{
    emit user_logout_signal();
    this->close();
    delete ui;
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    user logout  slot      ************/
/******************************************************/
void UserWindow::on_user_logout_btn_clicked()
{
    qDebug() << "Logout button clicked, emitting signal";
    //emit user_logout_signal();
    this->close();
    parentWidget()->show();
}

/******************************************************/
/***************    acc number slots    *************/
/******************************************************/
void UserWindow::on_user_get_acc_number_btn_clicked()
{
    emit user_get_account_number_signal();
}


void UserWindow::user_show_account_number_slot(QString accNumber)
{
    QMessageBox::information(this,"Account Number","Account number: "+accNumber);

}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    acc balance slots    *************/
/******************************************************/
void UserWindow::on_user_view_acc_balance_btn_clicked()
{
    emit user_view_account_balance_signal();
}


void UserWindow::user_show_account_balance_slot(QString accBalance)
{
    qDebug()<<"Balance: "<<accBalance;
    QMessageBox::information(this,"Account Balance","Account Balance: "+accBalance+"\n An email was sent to you.");
}


/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    trans history slots    *************/
/******************************************************/
void UserWindow::on_user_view_trans_history_btn_clicked()
{
    emit user_view_transfer_history_signal();
    ui->stackedWidget->setCurrentIndex(3);

}

void UserWindow::show_user_transaction_history_slot(QString TranscationHistory)
{
    // qDebug()<<TranscationHistory;
    ui->user_transaction_history_table->setWindowTitle("Transaction History");
    ui->user_transaction_history_table->resize(ui->user_transaction_history_table->width(), ui->user_transaction_history_table->height());
    tableObj.CreateTransactionHistoryTable(ui->user_transaction_history_table,TranscationHistory);
}

void UserWindow::on_user_transaction_history_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->user_transaction_history_table->clear();
}



/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    Make transaction slots ************/
/******************************************************/
void UserWindow::on_user_make_transaction_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);


}

void UserWindow::on_user_transaction_combo_box_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
    {
        ui->user_make_transaction_edit_line->setEnabled(false);
        ui->user_do_make_transaction_btn->setEnabled(false);
        break;
    }
    case 1:
    {
        ui->user_make_transaction_edit_line->setEnabled(true);
        ui->user_do_make_transaction_btn->setEnabled(true);
        break;
    }
    case 2:
    {
        ui->user_make_transaction_edit_line->setEnabled(true);
        ui->user_do_make_transaction_btn->setEnabled(true);
        break;
    }
    }
}


void UserWindow::on_user_do_make_transaction_btn_clicked()
{
    QString amount = ui->user_make_transaction_edit_line->text();
    if( !isValidAmount(amount) )
    {
        QMessageBox::critical(this,"Transaction Failed","Enter a Vaild amount");
    }
    else
    {
        if(ui->user_transaction_combo_box->currentIndex() == 1)
        {
            emit user_make_transaction_signal(amount);
        }
        else if(ui->user_transaction_combo_box->currentIndex() == 2)
        {
            amount = "-"+amount;
            emit user_make_transaction_signal(amount);
        }
    }
}

void UserWindow::user_show_transaction_status_slot(QString transactionStatus)
{
    QMessageBox::information(this,"Transaction Status",transactionStatus);
    ui->user_make_transaction_edit_line->clear();
    ui->stackedWidget->setCurrentIndex(0);
}


void UserWindow::on_user_cancel_make_transaction_btn_clicked()
{
    ui->user_make_transaction_edit_line->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

/**************************************************************/
/**************************************************************/
/**************************************************************/

/******************************************************/
/***************    transfer amount  slots ************/
/******************************************************/
void UserWindow::on_user_transfer_amount_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void UserWindow::on_user_transfer_do_amount_btn_clicked()
{
    QString recAccNumber = ui->transfer_amount_receiver_edit_line->text();
    QString amount = ui->transfer_amount_amount_edit_line->text();
    QString signature = ui->transfer_amount_signature_edit_line->text();
    if( !isValidAmount(amount) )
    {
        QMessageBox::critical(this,"Transaction Failed","Enter a Vaild amount");
    }
    else
    {

        emit user_transfer_amount_signal(recAccNumber,amount,signature);
    }

}


void UserWindow::show_user_transfer_amount_slot(QString transactionStatus)
{
    QMessageBox::information(this,"Transaction Status",transactionStatus);
    ui->transfer_amount_receiver_edit_line->clear();
    ui->transfer_amount_amount_edit_line->clear();
    ui->transfer_amount_signature_edit_line->clear();
    ui->stackedWidget->setCurrentIndex(0);
}



void UserWindow::on_user_cancel_transfer_amount_btn_clicked()
{
    ui->transfer_amount_receiver_edit_line->clear();
    ui->transfer_amount_amount_edit_line->clear();
    ui->transfer_amount_signature_edit_line->clear();
    ui->stackedWidget->setCurrentIndex(0);

}





bool UserWindow::isValidAmount(const QString &amount)
{
    if (amount.isEmpty()) {
        return false;
    }

    // Check if the string contains only digits
    for (QChar c : amount) {
        if (!c.isDigit()) {
            return false;
        }
    }

    return true;
}













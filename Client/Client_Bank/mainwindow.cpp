#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCryptographicHash>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set the window title and icon
    MainWindow::setWindowTitle("Bank Client");//set the mainwindow title
    QIcon icon(":/img/icon.jpeg");//create an ucon obcject
    MainWindow::setWindowIcon(icon);//set the main window icon


    int casa_width = ui->casa_label->width()*3 ;//get a label width
    int casa_height= ui->casa_label->height()*2;//get a label height
    QPixmap casa(":/img/img/Casa.jpg");//set an image to the label
    ui->casa_label->setPixmap(casa.scaled(casa_width,casa_height,Qt::KeepAspectRatio));//set the image scale

    int pass_width = ui->login_pass_label->width();//get a label width
    int pass_height= ui->login_pass_label->height();//get a label height
    QPixmap pass(":/img/img/hide_pass.jpeg");//set an image to the label
    ui->login_pass_label->setPixmap(pass.scaled(pass_width,pass_height,Qt::KeepAspectRatio));//set the image scale


    QString localIp = LocalHost::getInstance().getLocalIpAddress();//get the client machine local ipV4 address
    qDebug()<<"My local host address : "<<localIp;
    clientObj.ConnectToDevice(localIp,4444);//connect to the server with local ip on port 4444

    /***************************************************/
    /* Signal-Slots permfor an Observer Design Pattern */
    /***************************************************/
    /***************************************************/

    /***************************************************/
    /* Connection of server response signals
     * to mainwindow slots for user                    */
    /***************************************************/
    /***************************************************/
    connect(&clientObj,&Client::LoginSuccess_signal,this,&MainWindow::loginSuccess_slot);//Signal-Slot=>login success
    connect(&clientObj,&Client::LoginFailed_signal,this,&MainWindow::loginFailed_slot);//Signal-Slot=>login failed
    connect(&clientObj,&Client::show_account_number_signal,this,&MainWindow::user_show_account_number_slot);//Signal-Slot=>user acc Number
    connect(&clientObj,&Client::show_account_balance_signal,this,&MainWindow::user_show_account_balance_slot);//Signal-Slot=>user acc Balance
    connect(&clientObj,&Client::show_transaction_success_signal,this,&MainWindow::user_show_transaction_success_slot);//Signal-Slot=>user make Transaction
    connect(&clientObj,&Client::show_transfer_amount_signal,this,&MainWindow::user_show_trasnfer_amount_slot);//Signal-Slot=>user transfer amount
    connect(&clientObj,&Client::show_transaction_histoy_signal,this,&MainWindow::user_view_transaction_histoy_slot);//Signal-Slot=>user Transation History

    /***************************************************/
    /* Connection of server response signals
     * to mainwindow slots for admin                    */
    /***************************************************/
    /***************************************************/
    connect(&clientObj,&Client::admin_show_account_number_signal,this,&MainWindow::admin_show_account_number_slot);//Signal-Slot=>admin acc Number
    connect(&clientObj,&Client::admin_show_account_balance_signal,this,&MainWindow::admin_show_account_balance_slot);//Signal-Slot=>admin acc Balance
    connect(&clientObj,&Client::show_transaction_histoy_signal,this,&MainWindow::admin_show_transaction_histoy_slot);//Signal-Slot=>admin Transation History
    connect(&clientObj,&Client::admin_show_bank_db_signal,this,&MainWindow::admin_show_bank_db_slot);//Signal-Slot=>admin Bank database
    connect(&clientObj,&Client::admin_show_create_user_signal,this,&MainWindow::admin_show_create_user_slot);//Signal-Slot=>admin create user
    connect(&clientObj,&Client::admin_show_update_user_signal,this,&MainWindow::admin_show_update_user_slot);//Signal-Slot=>admin update user
    connect(&clientObj,&Client::admin_show_delete_user_signal,this,&MainWindow::admin_show_delete_user_slot);//Signal-Slot=>admin delete user

}
//Destractor
MainWindow::~MainWindow()
{
    delete ui;
}


/***************************************************/
/***************************************************/
/*              loginSuccess SLot                  */
/***************************************************/
/***************************************************/
void MainWindow::loginSuccess_slot(QString Data)
{
    QStringList strList = Data.split(',');//split the incoming response with ","
    QString authority = strList[0];//first term performs the authority of logger
    this->accNumber = strList[1];
    if(authority == "admin")//Check if admin is logging in
    {
        QMessageBox::information(this,"login","Logged in Successfully \n WELCOME :)");//proceed a welcome message

        AdminWindow *adminWindow = new AdminWindow(this); //create new admin window to be added to adminWindows QList
        adminWindows.append(adminWindow);//append to adminWindows QList
        //Remove the adminwindow and delete the pointer when finishing
        connect(adminWindow, &QDialog::finished, this, [=]() {
            adminWindows.removeOne(adminWindow);
            adminWindow->deleteLater();
            this->show();//show the admin window
        });
        /***************************************************/
        /* Connection of adminWindow signals               *
         * to mainwindow slots for admin                   *
         * And vice verse                                  */
        /***************************************************/
        /***************************************************/
        connect(adminWindow, &AdminWindow::admin_logout_signal, this, &MainWindow::admin_logout_slot);//Signal-Slot=>admin logout

        connect(adminWindow, &AdminWindow::admin_get_account_number_signal, this, &MainWindow::admin_get_account_number_slot);//Signal-Slot=>admin get acc Number
        connect(this, &MainWindow::show_admin_account_number_signal, adminWindow, &AdminWindow::admin_show_account_number_slot);//Signal-Slot=>admin show acc Number

        connect(adminWindow, &AdminWindow::admin_get_account_balance_signal, this, &MainWindow::admin_view_account_balance_slot);//Signal-Slot=>admin get acc balance
        connect(this, &MainWindow::show_admin_account_balance_signal,adminWindow, &AdminWindow::show_admin_account_balance_slot);//Signal-Slot=>admin show acc balance

        connect(adminWindow, &AdminWindow::admin_view_transaction_history_signal,this,&MainWindow::admin_view_transaction_history_slot);//Signal-Slot=>admin get Transaction History
        connect(this,&MainWindow::show_admin_transaction_history_signal,adminWindow,&AdminWindow::show_admin_transaction_history_slot);//Signal-Slot=>admin show Transaction History



        connect(adminWindow, &AdminWindow::admin_view_bank_db_signal,this,&MainWindow::admin_view_bank_db_slot);//Signal-Slot=>admin get bank database
        connect(this,&MainWindow::show_admin_bank_database_signal,adminWindow,&AdminWindow::show_admin_bank_database_slot);//Signal-Slot=>admin show bank database

        connect(adminWindow, &AdminWindow::admin_create_new_user_signal,this,&MainWindow::admin_create_new_user_slot);//Signal-Slot=>admin create new user
        connect(this,&MainWindow::show_admin_create_user_signal,adminWindow,&AdminWindow::show_admin_create_user_slot);//Signal-Slot=>admin show create new user status

        connect(adminWindow, &AdminWindow::admin_update_user_signal,this,&MainWindow::admin_update_user_slot);//Signal-Slot=>admin update user
        connect(this,&MainWindow::show_admin_update_user_signal,adminWindow,&AdminWindow::show_admin_update_user_slot);//Signal-Slot=>admin show update user status

        connect(adminWindow, &AdminWindow::admin_delete_user_signal,this,&MainWindow::admin_delete_user_slot);//Signal-Slot=>admin delete user
        connect(this,&MainWindow::show_admin_delete_user_signal,adminWindow,&AdminWindow::show_admin_delete_user_slot);//Signal-Slot=>admin show delete user status
        hide(); //Hide the main window
        adminWindow->show();// show the admin window
    }
    else if(authority == "user")//Check if user is logging in
    {
        QMessageBox::information(this,"login","Logged in Successfully \n WELCOME :)");//proceed a welcome message

        UserWindow *userWindow = new UserWindow(this);//create new admin window to be added to adminWindows QList
        userWindows.append(userWindow);//append to adminWindows QList
        //Remove the adminwindow and delete the pointer when finishing
        connect(userWindow, &QDialog::finished, this, [=]() {
            userWindows.removeOne(userWindow);
            userWindow->deleteLater();
            this->show();//show the admin window
        });
        /***************************************************/
        /* Connection of adminWindow signals               *
         * to mainwindow slots for admin                   *
         * And vice verse                                  */
        /***************************************************/
        connect(userWindow, &UserWindow::user_logout_signal, this, &MainWindow::user_logout_slot);//Signal-Slot=>user logout
        connect(userWindow, &UserWindow::user_get_account_number_signal, this, &MainWindow::user_get_account_number_slot);//Signal-Slot=>user get acc Number
        connect(this, &MainWindow::show_user_account_number_signal, userWindow, &UserWindow::user_show_account_number_slot);//Signal-Slot=>user show acc Number

        connect(userWindow, &UserWindow::user_view_account_balance_signal,this,&MainWindow::user_view_account_balance_slot);//Signal-Slot=>user get acc balance
        connect(this, &MainWindow::show_user_account_balance_signal, userWindow, &UserWindow::user_show_account_balance_slot);//Signal-Slot=>user show acc balance

        connect(userWindow, &UserWindow::user_make_transaction_signal,this ,&MainWindow::user_make_transaction_slot);//Signal-Slot=>user make a transaction
        connect(this, &MainWindow::show_user_transaction_success_signal, userWindow,&UserWindow::user_show_transaction_status_slot);//Signal-Slot=>user show transaction status

        connect(userWindow, &UserWindow::user_transfer_amount_signal,this,&MainWindow::user_transfer_amount_slot);//Signal-Slot=>user transfer amount
        connect(this,&MainWindow::show_user_transfer_amount_signal,userWindow,&UserWindow::show_user_transfer_amount_slot);//Signal-Slot=>user show transfer amount status

        connect(userWindow, &UserWindow::user_view_transfer_history_signal,this,&MainWindow::user_view_transfer_history_slot);//Signal-Slot=>user get Transaction History
        connect(this,&MainWindow::show_user_transaction_history_signal,userWindow,&UserWindow::show_user_transaction_history_slot);//Signal-Slot=>user show Transaction History


        hide();//Hide the main window
        userWindow->show();// show the user window
    }
}

/***************************************************/
/***************************************************/
/*              loginFailed SLot                  */
/***************************************************/
/***************************************************/
void MainWindow::loginFailed_slot(QString errorMessage)
{
    QMessageBox::critical(nullptr,"login",errorMessage);//Proceed an error message
}


/***************************** USER SPACE ***********************************************/



/***************************************************/
/*              user logout SLot                  */
/***************************************************/
void MainWindow::user_logout_slot()
{
    qDebug()<<"logout";
    clientObj.WriteData(user,"logout");
    this->show();
}

/***************************************************/
/*              user_get_account_number_slot       */
/***************************************************/
void MainWindow::user_get_account_number_slot()
{
    qDebug()<<"get user account number";
    clientObj.WriteData(user,"getAccountNumber"); //send a request to server
}

/***************************************************/
/*              user_show_account_number_slot      */
/***************************************************/
void MainWindow::user_show_account_number_slot(QString accNumber)
{
    emit show_user_account_number_signal(accNumber);//emit signal connected to user window
}

/***************************************************/
/*              user_view_account_balance_slot      */
/***************************************************/
void MainWindow::user_view_account_balance_slot()
{
    qDebug()<<"get user account number";
    clientObj.WriteData(accNumber,"getAccountBalance");//send a request to server
}

/***************************************************/
/*              user_show_account_balance_slot      */
/***************************************************/
void MainWindow::user_show_account_balance_slot(QString accBalance)
{
    emit show_user_account_balance_signal(accBalance);//emit signal connected to user window
}

/***************************************************/
/*              user_make_transaction_slot      */
/***************************************************/
void MainWindow::user_make_transaction_slot(QString amount)
{
    qDebug()<<"make transaction for user ";
    amount = amount +","+accNumber;
    clientObj.WriteData(amount,"makeTransaction");//send a request to server
}
/***************************************************/
/*              user_show_transaction_success_slot */
/***************************************************/
void MainWindow::user_show_transaction_success_slot(QString transactionStatus)
{
    qDebug()<<"Transaction success";
    emit show_user_transaction_success_signal(transactionStatus);//emit signal connected to user window
}



/***************************************************/
/*              user_transfer_amount_slot          */
/***************************************************/
void MainWindow::user_transfer_amount_slot(QString recAccNumber, QString amount,QString signature)
{
    //Preform Encryption for the signature using SHA256 Hasing function
    /* Note : SHA256 is one way function if you want to reverse it back
              you have to use OpenSSL Library for this functionality   */
    QSharedPointer<SentRequest> encoded = QSharedPointer<SentRequest>(new SignatureEncryption(QSharedPointer<SentRequest>(new RealRequest())));
    QByteArray encrypted_Signature = encoded->getData(signature.toUtf8());
    QString encSignature = QString(encrypted_Signature);

    QString data = accNumber+","+recAccNumber+","+amount+","+encSignature;

    clientObj.WriteData(data,"tranferAmount");//send a request to server
}
/***************************************************/
/*              user_show_trasnfer_amount_slot     */
/***************************************************/
void MainWindow::user_show_trasnfer_amount_slot(QString transferStatus)
{
    emit show_user_transfer_amount_signal(transferStatus);//emit signal connected to user window
}

/***************************************************/
/*              user_view_transfer_history_slot     */
/***************************************************/
void MainWindow::user_view_transfer_history_slot()
{
    clientObj.WriteData(accNumber,"transactionHistory");//send a request to server
}
/***************************************************/
/*              show_user_transaction_history_signal     */
/***************************************************/
void MainWindow::user_view_transaction_histoy_slot(QString TransactionHistory)
{
    emit show_user_transaction_history_signal(TransactionHistory);//emit signal connected to user window
}

/***************************** END USER SPACE ***********************************************/




/***************************** ADMIN SPACE ***********************************************/


/***************************************************/
/*              admin_logout_slot                  */
/***************************************************/
void MainWindow::admin_logout_slot()
{
    qDebug()<<"logout";
    clientObj.WriteData(user,"logout");
    this->show();
}

/***************************************************/
/*              admin_get_account_number_slot      */
/***************************************************/
void MainWindow::admin_get_account_number_slot(QString username)
{
    clientObj.WriteData(username,"getAccountNumber");//send a request to server
}
/***************************************************/
/*              admin_show_account_number_slot     */
/***************************************************/
void MainWindow::admin_show_account_number_slot(QString accNumber)
{
    emit show_admin_account_number_signal(accNumber);//emit signal connected to admin window
}


/***************************************************/
/*              admin_view_account_balance_slot     */
/***************************************************/
void MainWindow::admin_view_account_balance_slot(QString accNumber)
{
    clientObj.WriteData(accNumber,"getAccountBalance");//send a request to server
}
/***************************************************/
/*              admin_show_account_balance_slot     */
/***************************************************/
void MainWindow::admin_show_account_balance_slot(QString accBalance)
{
    emit show_admin_account_balance_signal(accBalance);//emit signal connected to admin window
}

/***************************************************/
/*         admin_view_transaction_history_slot     */
/***************************************************/
void MainWindow::admin_view_transaction_history_slot(QString accNumber)
{
    clientObj.WriteData(accNumber,"transactionHistory");//send a request to server
}

/***************************************************/
/*         admin_show_transaction_histoy_slot     */
/***************************************************/
void MainWindow::admin_show_transaction_histoy_slot(QString TransactionHistory)
{
    emit show_admin_transaction_history_signal(TransactionHistory);//emit signal connected to admin window
}

/***************************************************/
/*         admin_view_bank_db_slot                 */
/***************************************************/
void MainWindow::admin_view_bank_db_slot()
{
    clientObj.WriteData("","viewBankDB");//send a request to server
}
/***************************************************/
/*         admin_show_bank_db_slot                 */
/***************************************************/
void MainWindow::admin_show_bank_db_slot(QString bankDB)
{
    emit show_admin_bank_database_signal(bankDB);//emit signal connected to admin window
}

/***************************************************/
/*         admin_create_new_user_slot                 */
/***************************************************/
void MainWindow::admin_create_new_user_slot(QString newUser,QString signature)
{
    //Preform Encryption for the signature using SHA256 Hasing function
    /* Note : SHA256 is one way function if you want to reverse it back
              you have to use OpenSSL Library for this functionality   */
    QSharedPointer<SentRequest> encoded = QSharedPointer<SentRequest>(new SignatureEncryption(QSharedPointer<SentRequest>(new RealRequest())));
    QByteArray encrypted_Signature = encoded->getData(signature.toUtf8());
    QString encSignature = QString(encrypted_Signature);

    QString data = newUser +"\n"+encSignature;
    clientObj.WriteData(data,"createUser");//send a request to server
}
/***************************************************/
/*         admin_create_new_user_slot               */
/***************************************************/
void MainWindow::admin_show_create_user_slot(QString userStatus)
{
    emit show_admin_create_user_signal(userStatus);//emit signal connected to admin window
}

/***************************************************/
/*         admin_update_user_slot                  */
/***************************************************/
void MainWindow::admin_update_user_slot(QString userUpdate)
{
    clientObj.WriteData(userUpdate,"updateUser");//send a request to server
}

/***************************************************/
/*         admin_update_user_slot                  */
/***************************************************/
void MainWindow::admin_show_update_user_slot(QString userStatus)
{
    emit show_admin_update_user_signal(userStatus);//emit signal connected to admin window
}

/***************************************************/
/*         admin_delete_user_slot                  */
/***************************************************/
void MainWindow::admin_delete_user_slot(QString accNumber)
{
    clientObj.WriteData(accNumber,"deleteUser");//send a request to server
}
/***************************************************/
/*         admin_show_delete_user_slot             */
/***************************************************/
void MainWindow::admin_show_delete_user_slot(QString userStatus)
{
    emit show_admin_delete_user_signal(userStatus);//emit signal connected to admin window
}

/***************************** END ADMIN SPACE ***********************************************/




void MainWindow::on_password_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        int pass_width = ui->login_pass_label->width();//get a label width
        int pass_height= ui->login_pass_label->height();//get a label height
        QPixmap pass(":/img/img/show_pass.jpeg");//set an image to the label
        ui->login_pass_label->setPixmap(pass.scaled(pass_width,pass_height,Qt::KeepAspectRatio));//set the image scale
        ui->login_password_editLine->setEchoMode(QLineEdit::Normal);//make the eco mode of line edit => Normal
    }
    else
    {
        int pass_width = ui->login_pass_label->width();//get a label width
        int pass_height= ui->login_pass_label->height();//get a label height
        QPixmap pass(":/img/img/hide_pass.jpeg");//set an image to the label
        ui->login_pass_label->setPixmap(pass.scaled(pass_width,pass_height,Qt::KeepAspectRatio));//set the image scale
        ui->login_password_editLine->setEchoMode(QLineEdit::Password);//make the eco mode of line edit => Password
    }
}


void MainWindow::on_login_login_btn_clicked()
{
    QString username = ui->login_username_editLine->text();
    QString password = ui->login_password_editLine->text();

    if( (username.isEmpty()) || (password.isEmpty()) ) //make sure that password and username are not empty
    {
        ui->statusbar->showMessage("Enter username and password!!!!");
    }
    else
    {
        ui->login_username_editLine ->clear();//clear line edit
        ui->login_password_editLine ->clear();//clear line edit
        ui->statusbar->clearMessage();//clear status bar
        clientObj.WriteData(username+","+password,"login");//send a request to server
        this->user = username;
    }
}


void MainWindow::on_login_exit_btn_clicked()
{
    MainWindow::close();
}





#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <RequestEncryption.h>
#include <QMap>

//Client class
class Client : public QObject
{
    Q_OBJECT

    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:

    /******************************************************/
    /*************** Client Member Functions *************/
    /******************************************************/
    explicit Client(QObject *parent = nullptr);//Client constructor
    void ConnectToDevice(QString ip, qint32 port);//ConnectToDevice API
    void Disconnect();//Disconnect API
    void WriteData(QString data,QString requestType);//WriteData API

    /******************************************************/
    /***************        Client signals    *************/
    /******************************************************/
signals:
    /***************   Login/out signals    *************/
    /******************************************************/
    void LoginSuccess_signal(QString);
    void LoginFailed_signal(QString);

    /***************   user signals          *************/
    /******************************************************/
    void show_account_number_signal(QString);
    void show_account_balance_signal(QString);
    void show_transaction_success_signal(QString);
    void show_transfer_amount_signal(QString);
    void show_transaction_histoy_signal(QString);

    /***************   admin signals          *************/
    /******************************************************/
    void admin_show_account_number_signal(QString);
    void admin_show_account_balance_signal(QString);
    void admin_show_bank_db_signal(QString);
    void admin_show_create_user_signal(QString);
    void admin_show_update_user_signal(QString);
    void admin_show_delete_user_signal(QString);

    /******************************************************/
    /***************        Client slots    *************/
    /******************************************************/
public slots:
    void onReadyRead_slot();

    /******************************************************/
    /****************Private Section***********************/
    /******************************************************/
private:
    /******************************************************/
    /**************** Client Attributes ******************/
    /******************************************************/
    QString ip;
    qint32 port;
    QTcpSocket socket;
    enum response{LoginSuccessfully=1,LoginFailed,AccountNumber
                    ,AccountBalance,TransactionStatus,TransferAmount
                    ,TransactionHistory,ViewBankDB,CreateUser
                    ,UpdateUser,DeleteUser};
    QMap<QString,response> responseMap;

};

#endif // CLIENT_H

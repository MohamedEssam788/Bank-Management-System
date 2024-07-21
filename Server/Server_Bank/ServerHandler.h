#ifndef SERVERHANDLER_H
#define SERVERHANDLER_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <Receiver.h>
#include <Invoker.h>
#include <LoginCommand.h>
#include <LogoutCommand.h>
#include <QStringList>
#include <GetAcctNumberCommand.h>
#include <ViewAccBalanceCommand.h>
#include <MakeTransactionCommand.h>
#include <TransferAmountCommand.h>
#include <ViewTransactionHistoryCommand.h>
#include <DeleteUserCommand.h>
#include <Log.h>
#include <ViewBankDataBaseCommand.h>
#include <UpdateUserCommand.h>
#include <CreateNewUserCommand.h>
#include <RequestDecryption.h>
#include <QMap>
class ServerHandler : public QThread
{
    Q_OBJECT
public:
    explicit ServerHandler(int Id,QObject *parent = nullptr);
    void sendMessageToClient(QString responseType,QString message);
    void Operations(QString operation, const QString& Data);
public slots:
    void onReadWrite_slot();
    void onDisconnect_slot();

private:
    int ID;
    QTcpSocket *socket_ptr;
    Receiver rec_ptr;
    QString my_username;
    enum requests{login=1,logout,getAccountNumber,getAccountBalance,
                    makeTransaction,tranferAmount,transactionHistory,
                    deleteUser,viewBankDB,updateUser,createUser};
    QMap<QString,requests> requestsMap;
    // QThread interface
protected:
    void run();
};

#endif // SERVERHANDLER_H

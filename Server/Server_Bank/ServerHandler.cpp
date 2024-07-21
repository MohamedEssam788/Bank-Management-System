#include "ServerHandler.h"

ServerHandler::ServerHandler(int Id,QObject *parent)
    : QThread{parent},ID{Id}
{
    requestsMap={
                   {"login",login},
                   {"logout",logout},
                   {"getAccountNumber",getAccountNumber},
                   {"getAccountBalance",getAccountBalance},
                   {"makeTransaction",makeTransaction},
                   {"tranferAmount",tranferAmount},
                   {"transactionHistory",transactionHistory},
                   {"deleteUser",deleteUser},
                   {"viewBankDB",viewBankDB},
                   {"updateUser",updateUser},
                   {"createUser",createUser},
                   };
}


void ServerHandler::run()
{
    qDebug()<<"Client "<<ID<<" :is running on thread :"<<QThread::currentThreadId();

    socket_ptr =new QTcpSocket();
    socket_ptr->setSocketDescriptor(ID);

    connect(socket_ptr,&QTcpSocket::readyRead,this,&ServerHandler::onReadWrite_slot,Qt::DirectConnection);
    connect(socket_ptr,&QTcpSocket::disconnected,this,&ServerHandler::onDisconnect_slot,Qt::DirectConnection);

    // sendMessageToClient("Hello Client Server is greeting...");
    exec();

}


void ServerHandler::sendMessageToClient(QString responseType,QString message)
{
    QJsonObject jsonObj;
    jsonObj["response_type"] =responseType;
    jsonObj["file_size"] = message.toUtf8().size();
    jsonObj["file_data"] =message;

    QByteArray byteArr = QJsonDocument(jsonObj).toJson(QJsonDocument::Compact);
    QString header = QString("JSonSize:%1/").arg(byteArr.size());

    byteArr.prepend(header.toUtf8());

    socket_ptr->write(byteArr);
}

void ServerHandler::Operations(QString operation, const QString& Data)
{
    Log::getInstance().writeLog(operation, Data);

    Command *cmd_ptr = nullptr;
    Invoker invoker_obj;

    switch (requestsMap.value(operation))
    {
    case login:
    {
        QStringList strList = Data.split(',');
        QString username = strList[0];
        QString password = strList[1];
        this->my_username = username;
        qDebug()<<"user: "<<username;
        qDebug()<<"Password:"<<password;
        cmd_ptr = new LoginCommand(&rec_ptr, username, password);
        break;
    }
    case logout:
    {
        QString username = Data;
        qDebug()<<"logout for: "<<username;
        // QString username = jsonObj["username"].toString();
        cmd_ptr = new LogoutCommand(&rec_ptr, my_username);
        break;
    }

    case getAccountNumber:
    {
        QString username = Data;
        // QString username = jsonObj["username"].toString();
        cmd_ptr = new GetAccNumberCommand(&rec_ptr,username);
        break;
    }
    case getAccountBalance:
    {
        QString accNumber = Data;
        cmd_ptr = new ViewAccBalanceCommand(&rec_ptr,accNumber);
        break;
    }
    case makeTransaction:
    {
        QStringList strList = Data.split(',');
        QString accNumber = strList[1];
        qint32 amount = strList[0].toInt();
        cmd_ptr = new MakeTransactionCommand(&rec_ptr,accNumber,amount);
        break;
    }
    case tranferAmount:
    {
        QStringList strList = Data.split(',');
        QString from_AN = strList[0];
        QString to_AN   = strList[1];
        qint32  amount  = strList[2].toInt();
        QString signature = strList[3];
        cmd_ptr = new TransferAmountCommand(&rec_ptr,from_AN,to_AN,amount,signature);
        break;
    }
    case transactionHistory:
    {
        QString accNumber = Data;
        qint32 count = 4;
        cmd_ptr = new ViewTransactionHistoryCommand(&rec_ptr,accNumber,count);
        break;
    }
    case deleteUser:
    {
        QString accNumber = Data;
        cmd_ptr = new DeleteUserCommand(&rec_ptr,accNumber);
        break;
    }
    case viewBankDB:
    {
        cmd_ptr = new ViewBankDataBaseCommand(&rec_ptr);
        break;
    }
    case updateUser:
    {
        QStringList parts = Data.split(",");
        QString accNumber = parts[0];
        QString fullName =parts[1];
        QString age = parts[2];
        QString email = parts[3];
        QString oldPassword = parts[4];
        QString newPassword =parts[5];
        QString confirmPassword =parts[6];
        cmd_ptr = new UpdateUserCommand(&rec_ptr, accNumber,fullName,age,email,oldPassword,newPassword,confirmPassword);
        break;
    }
    case createUser:
    {
        QStringList strList = Data.split("\n");
        QString newUser   = strList[0];
        QString signature = strList[1];
        qDebug()<<"newUser: " <<newUser;
        QStringList parts = newUser.split(",");
        QString username = parts[0];
        QString password = parts[1];
        QString confirmPassword = parts[2];
        QString fullName = parts[3];
        QString age = parts[4];
        QString email = parts[5];
        cmd_ptr = new CreateNewUserCommand(&rec_ptr,username,password,confirmPassword,fullName,age,email,signature);
        break;
    }
    }

    if(cmd_ptr)
    {
        cmd_ptr->setServerHandler(this);
        invoker_obj.setCommand(cmd_ptr);
        invoker_obj.executeCommand();
        delete cmd_ptr;
    }
}

// JSonSize:JsonObjsize/{"file_data":message,"fie_size":Messagesize,"file_type":"Message"}
void ServerHandler::onReadWrite_slot()
{
    QByteArray byteArr = socket_ptr->readAll();
    qDebug()<<"Encrypted Request : "<<byteArr;
    RequestDecryption decryptionObj;
    QByteArray decryptedRequest =decryptionObj.decrypt(byteArr);
    qDebug()<<"Decrypted Request : "<<decryptedRequest;
    QString str = QString(decryptedRequest);
    qint32 jsonSize = str.split("/")[0].split(":")[1].toInt();

    QString data = str.right(jsonSize);

    QJsonDocument jsonDoc = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    qint32 dataSize = jsonObj["file_size"].toInt();
    QString requestType = jsonObj["request_type"].toString();
    QString realMessage = jsonObj["file_data"].toString();

    if(dataSize == realMessage.size())
    {
        qDebug()<<"Received Data :"<<realMessage<<"From client "<<ID;
        qDebug()<<"request type : " <<requestType ;
        Operations(requestType,realMessage);

    }
}

void ServerHandler::onDisconnect_slot()
{
    if(socket_ptr->isOpen())
    {
        socket_ptr->disconnect();
        qDebug()<<"Client "<<ID<<" has been disconnected";
        // Operations("logout","");
    }
}


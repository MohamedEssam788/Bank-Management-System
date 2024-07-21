#include "Client.h"
#include <RealRequest.h>

Client::Client(QObject *parent)
    : QObject{parent}
{
    /*connect the readyRead signal to onReadyRead_slot for incoming data*/
    connect(&socket,&QTcpSocket::readyRead,this,&Client::onReadyRead_slot);

    responseMap={
        {"LoginSuccessfully",LoginSuccessfully},
        {"LoginFailed",LoginFailed},
        {"AccountNumber",AccountNumber},
        {"AccountBalance",AccountBalance},
        {"TransactionStatus",TransactionStatus},
        {"TransferAmount",TransferAmount},
        {"TransactionHistory",TransactionHistory},
        {"ViewBankDB",ViewBankDB},
        {"CreateUser",CreateUser},
        {"UpdateUser",UpdateUser},
        {"DeleteUser",DeleteUser}
    };
}


void Client::ConnectToDevice(QString ip, qint32 port)
{
    if(socket.isOpen()) // check if the socket is opened
    {
        if( (this->ip == ip) && (this->port == port) ) // check if the samed ip try to connect again while connecting
        {
            return;
        }
        else
        {
            socket.close();
            this-> ip   =  ip ; //set the ip
            this-> port = port; //set the port
            socket.connectToHost(this->ip,this->port); //establish connection with the sever
        }
    }
    else
    {
        this-> ip   =  ip ;//set the ip
        this-> port = port;//set the port
        socket.connectToHost(this->ip,this->port);//establish connection with the sever
    }
}

void Client::Disconnect()
{
    if(socket.isOpen())
    {
        socket.close();//disconnect
    }
}

void Client::WriteData(QString data,QString requestType)
{
    if(socket.isOpen())
    {
        QJsonObject jsonObj; //create json object
        jsonObj["request_type"] =requestType; // set the client request type
        jsonObj["file_size"] = data.toUtf8().size(); //set the data size
        jsonObj["file_data"] =data; //set the data to be sent

        QByteArray byteArr = QJsonDocument(jsonObj).toJson(QJsonDocument::Compact);//convert into byteArray
        QString header = QString("JSonSize:%1/").arg(byteArr.size()); // create a header

        byteArr.prepend(header.toUtf8()); // prepend the header to the byteArray
        /* Encrypt the request */
        QSharedPointer<SentRequest> encoded = QSharedPointer<SentRequest>(new RequestEncryption(QSharedPointer<SentRequest>(new RealRequest())));

        QByteArray encrypted_request = encoded->getData(byteArr);
        qDebug()<<"Encrypted client request : "<<encrypted_request;
        socket.write(encrypted_request);//send the encrypted request via TCP socket to the server
    }
}

void Client::onReadyRead_slot()
{
    QByteArray byteArr = socket.readAll();//read the received response
    QString str = QString(byteArr);//convert into QString
    /* Extract the response information */
    qint32 jsonSize = str.split("/")[0].split(":")[1].toInt();
    QString data = str.right(jsonSize);

    QJsonDocument jsonDoc = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();

    qint32 dataSize = jsonObj["file_size"].toInt(); //get the responsed data size
    QString realMessage = jsonObj["file_data"].toString(); // get the sent data by the server
    QString responseType = jsonObj["response_type"].toString(); //get the response type
    if(dataSize == realMessage.size()) //check on data consistency
    {
        qDebug()<<"Received Data from server:"<<realMessage;
        /* Emit the right signal according to the response type*/
        switch (responseMap.value(responseType)) {
        case LoginSuccessfully:{emit LoginSuccess_signal(realMessage);break;}
        case LoginFailed:{emit LoginFailed_signal(realMessage);break;}
        case AccountNumber:
        {
            if(realMessage.contains("admin"))
            {
                QStringList parts =realMessage.split(",");
                emit admin_show_account_number_signal(parts[0]);
            }
            else
            {
                emit show_account_number_signal(realMessage);
            }
            break;
        }
        case AccountBalance:
        {
            if(realMessage.contains("admin"))
            {
                QStringList parts =realMessage.split(",");
                emit admin_show_account_balance_signal(parts[0]);
            }
            else
            {
                emit show_account_balance_signal(realMessage);
            }
            break;
        }
        case TransactionStatus:{emit show_transaction_success_signal(realMessage);break;}
        case TransferAmount:{emit show_transfer_amount_signal(realMessage);break;}
        case TransactionHistory:{emit show_transaction_histoy_signal(realMessage);break;}
        case ViewBankDB:{emit admin_show_bank_db_signal(realMessage);break;}
        case CreateUser:{emit admin_show_create_user_signal(realMessage);break;}
        case UpdateUser:{emit admin_show_update_user_signal(realMessage);break;}
        case DeleteUser:{emit admin_show_delete_user_signal(realMessage);break;}

        }   
    }

}

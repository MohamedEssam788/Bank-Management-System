#include "JsonHandler.h"

JsonHandler::JsonHandler(QObject *parent)
    : QObject{parent}
{

}


void JsonHandler::updatejsObj(QJsonArray data)
{
    QFile file(filePath);

    if(file.open(QIODevice::ReadWrite | QIODevice::Truncate))
    {
        file.write(QJsonDocument(data).toJson());
        file.close();
    }
    else
    {
        qDebug()<<"Cant open data base file...\n";
    }

}

QJsonArray JsonHandler::readFile()
{
    QJsonArray retJsonArr;
    QFile file(filePath);
    if(file.open(QIODevice::ReadOnly))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsondoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonarr = jsondoc.array();
        file.close();
        retJsonArr = jsonarr;
    }
    else
    {
        qDebug()<<"Failed to open file -> "<<filePath;
    }
    return retJsonArr;
}

void JsonHandler::setFilePath(const QString &newPath)
{
    filePath = newPath;
}

void JsonHandler::deleteJsObj(QString accountNumber)
{
    init_DB();
    QJsonArray jsonArr;

    for (auto &v : db_vec)
    {
        if(v["accNumber"].toString() != accountNumber)
        {
            jsonArr.append(v);
        }
    }
    QFile file(filePath);
    if(file.open(QIODevice::ReadWrite |QIODevice::Text |QIODevice::Truncate))
    {
        file.write(QJsonDocument(jsonArr).toJson());
        file.close();
    }
}

void JsonHandler::init_DB()
{
    db_vec.clear();
    QFile file(filePath);

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArray  = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonArr    = jsonDoc.array();


        for (int i = 0; i < jsonArr.size(); ++i)
        {
            QJsonObject jsonObj = jsonArr[i].toObject();
            db_vec << jsonObj;
            file.close();
        }
    }
    else
    {
        qDebug()<<"Error can not open file\n";
    }
}

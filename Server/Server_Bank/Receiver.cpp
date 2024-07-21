#include "Receiver.h"
#include <QStringList>
#include <QDir>
#include <EmailSender.h>

Receiver::Receiver()
{
    qDebug()<<"Current path: "<<QDir::currentPath();
    jsonLoginDB_obj.setFilePath(QDir::currentPath()+"/../../../BankDB/bankDb.json");
}

bool Receiver::login(const QString &username, const QString &password,QString *authority)
{
    bool loginStatus= false;
    bool isFound = false;

    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString user = jsonObj["username"].toString();
        QString pass = jsonObj["password"].toString();
        QString accNumber = jsonObj["accNumber"].toString();
        bool available = jsonObj["Available"].toBool();
        QString authorized = jsonObj["auth"].toString();
        if(user == username && pass == password)
        {
            isFound = true;
            if(available)
            {
                jsonObj["Available"]=false;
                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
                qDebug() << "Login successful for username:" << username;
                *authority = authorized+","+accNumber;
                loginStatus = true;

            }
            else
            {
                qDebug()<<"User in use! Error";
                *authority = "User in use";
            }
        }
        else if(user == username && pass != password)
        {
            isFound = true;
            *authority = "Incorrect Password";
        }

    }

    if(!isFound)
    {
        qDebug() << "user is not found:" << username;
        *authority = "user not found";
    }
    return loginStatus;
}

void Receiver::logout(const QString &username)
{
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString user = jsonObj["username"].toString();

        if(user == username)
        {
            jsonObj["Available"]=true;
            jsonArr[i]=jsonObj;
            jsonLoginDB_obj.updatejsObj(jsonArr);
            break;
        }
    }
}

QString Receiver::getAccountNumber(const QString &username)
{
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    QString accNumber ;
    bool isFound = false;
    QString UserName ;
    if(username.contains( "admin" ) )
    {
        QStringList parts = username.split(",");
        UserName = parts[0];
    }
    else
    {
        UserName = username;
    }
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString user = jsonObj["username"].toString();
        if(user == UserName)
        {
            accNumber = jsonObj["accNumber"].toString();
            if(username.contains( "admin" ) )
            {
                accNumber = accNumber+","+"admin";
            }

            qDebug()<<"Account number for user : "<<UserName <<" is: "<<accNumber;
            isFound = true;
            break;
        }
    }
    if(!isFound)
    {
        qDebug()<<"user is not found";
        accNumber = "User Not Found!!,admin";
    }
    return accNumber;
}



qint32 Receiver::viewAccountBalance(const QString &accountNumber,QString *BalanceStatus)
{
    qint32 accBalance=0;
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    bool isFound = false;
    QString acc_number;
    if(accountNumber.contains("admin"))
    {
        QStringList part = accountNumber.split(",");
        acc_number = part[0];
    }
    else
    {
        acc_number = accountNumber;
    }
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        QString userAuthority = jsonObj["auth"].toString();
        if( (userAccNumber == acc_number) && (userAuthority == "user") )
        {
            accBalance = jsonObj["accBalance"].toInt();
            *BalanceStatus = QString::number(accBalance);
            qDebug()<<"accBalance: "<<accBalance <<" ,BalanceStatus : "<<*BalanceStatus;
            if(!accountNumber.contains("admin"))
            {
                QString email = jsonObj["Email"].toString();
                QString subject = "Account Balance Information";
                QString body = QString("Your account balance is %1. Current time: %2")
                                   .arg(accBalance)
                                   .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

                EmailSender emailObj;
                emailObj.sendEmail(email,subject,body);
            }
            else
            {
                *BalanceStatus = *BalanceStatus + "," +"admin";
            }



            isFound = true;
            break;
        }
    }
    if(!isFound)
    {
        qDebug()<<"user is not found";
        if(accountNumber.contains("admin"))
        {
            *BalanceStatus = "It's not a user, admin";
        }
        else
        {
            *BalanceStatus = "It's not a user";
        }

    }
    return accBalance;
}

bool Receiver::makeTransaction(const QString &accountNumber, const qint32 &amount)
{
    bool transaction_status = false;
    qint32 newBalance =0;
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    bool isFound = false;
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        if(userAccNumber == accountNumber)
        {
            if( ( (amount < 0) && (jsonObj["accBalance"].toInt() > -amount) ) ||(amount >0) )
            {
                newBalance = jsonObj["accBalance"].toInt()+ amount;
                jsonObj["accBalance"] = newBalance;

                addTransactionHistory(jsonObj,QString::number(amount));

                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
                isFound =true;
                transaction_status = true;
                break;
            }
        }
    }
    if(!isFound)
    {
        qDebug()<<"user is not found";
    }

    return transaction_status;
}


bool Receiver::transferAmount(const QString &from_accountNumber, const QString &to_accountNumber, const qint32 &amount, QString signature, QString *transferStatus)
{
    // bool transfer_status = false;
    qint32 newBalance = 0;
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();

    bool isFound_from = false;
    bool isFound_to = false;
    QJsonObject from_user;
    QJsonObject to_user;

    for (int i = 0; i < jsonArr.size(); i++)
    {
        QJsonObject jsonObj = jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        QString userSignature = jsonObj["Signature"].toString();

        if (userAccNumber == from_accountNumber)
        {
            isFound_from = true;
            from_user = jsonObj;

            if (amount > jsonObj["accBalance"].toInt())
            {
                *transferStatus = "Not Enough Balance";
                return false;
            }

            if (signature != userSignature)
            {
                *transferStatus = "Invalid Signature";
                return false;
            }
        }

        if (userAccNumber == to_accountNumber)
        {
            isFound_to = true;
            to_user = jsonObj;

            if ( (jsonObj["auth"].toString() == "admin") || (to_accountNumber == from_accountNumber) )
            {
                *transferStatus = "Invalid Transaction";
                return false;
            }
        }

        if (isFound_from && isFound_to)
        {
            break;
        }
    }

    if (!isFound_from)
    {
        qDebug() << "From user is not found";
        *transferStatus = "Sender is not found";
        return false;
    }

    if (!isFound_to)
    {
        qDebug() << "To user is not found";
        *transferStatus = "Receiver is not found";
        return false;
    }

    // Perform transfer
    newBalance = to_user["accBalance"].toInt() + amount;
    to_user["accBalance"] = newBalance;
    addTransactionHistory(to_user, QString("%1 from %2").arg(amount).arg(from_accountNumber));

    newBalance = from_user["accBalance"].toInt() - amount;
    from_user["accBalance"] = newBalance;
    addTransactionHistory(from_user, QString("%1 to %2").arg(amount).arg(to_accountNumber));

    // Update JSON database
    for (int i = 0; i < jsonArr.size(); i++)
    {
        QJsonObject jsonObj = jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();

        if (userAccNumber == from_accountNumber)
        {
            jsonArr[i] = from_user;
        }
        else if (userAccNumber == to_accountNumber)
        {
            jsonArr[i] = to_user;
        }
    }

    jsonLoginDB_obj.updatejsObj(jsonArr);

    *transferStatus = "Money Transferred Successfully";
    return true;
}

QString Receiver::viewTransferHistory(const QString &accountNumber, const qint32 &count)
{
    QString transHistory="";
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    bool isFound = false;
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        if(userAccNumber == accountNumber)
        {
            isFound =true;
            if (jsonObj.contains("Transaction History"))
            {
                QJsonArray transactionHistory = jsonObj["Transaction History"].toArray();

                // Convert QJsonArray to QList<QJsonObject> to sort by date
                QList<QJsonObject> transactions;
                for (const QJsonValue &val : transactionHistory)
                {
                    transactions.append(val.toObject());
                }

                // Sort transactions by date from newest to oldest
                std::sort(transactions.begin(), transactions.end(), [](const QJsonObject &a, const QJsonObject &b)
                          {
                              QDateTime dateA = QDateTime::fromString(a["date time"].toString(), "yyyy-MM-dd hh:mm:ss");
                              QDateTime dateB = QDateTime::fromString(b["date time"].toString(), "yyyy-MM-dd hh:mm:ss");
                              return dateA > dateB;
                          });
                // Get the last count transactions
                QJsonArray recentTransactions;
                for (int j = 0; ( (j < count) && (j < transactions.size() ) ); j++)
                {
                    recentTransactions.append(transactions[j]);
                }

                // Convert to JSON string
                QJsonDocument doc(recentTransactions);
                transHistory = doc.toJson(QJsonDocument::Compact);

            }
            break;
        }
    }
    if(!isFound)
    {
        qDebug()<<"user is not found";
        transHistory = "User not found";
    }
    return transHistory;
}

bool Receiver::deleteUser(const QString &accountNumber)
{
    bool deleteStatus = true;
    bool isFound = false;

    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    for(int i=0 ; i<jsonArr.size();i++)
    {

        QJsonObject jsonObj= jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        if(userAccNumber == accountNumber)
        {
            if(jsonObj["auth"].toString() == "admin")
            {
                deleteStatus = false;
                return deleteStatus;
            }
            isFound =true;
            jsonLoginDB_obj.deleteJsObj(accountNumber);
            break;
        }
    }

    if(!isFound)
    {
        deleteStatus = false;
    }
    return deleteStatus;
}


QString Receiver::viewBankDataBase()
{
    QString bankDB = "";
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    QJsonDocument doc(jsonArr);
    bankDB = doc.toJson(QJsonDocument::Compact);
    return bankDB;
}

bool Receiver::updateUser(QString accountNumber, QString fullName, QString age, QString email,QString oldPassword ,QString password, QString confirmPassword)
{
    bool updateStatus = true;
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();
    bool isFound = false;
    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        QString userAccNumber = jsonObj["accNumber"].toString();
        QString oldpassword = jsonObj["password"].toString();
        if( (userAccNumber == accountNumber) )
        {
            isFound = true;
            if((jsonObj["auth"].toString()== "admin"))
            {
                updateStatus =false;
                return updateStatus;
            }
            if(oldpassword != oldPassword )
            {
                updateStatus =false;
                return updateStatus;
            }

            if((password != "") && (password == confirmPassword) )
            {
                jsonObj["password"]=password;
                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
            }

            if(fullName != "")
            {
                jsonObj["fullName"]=fullName;
                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
            }

            if(age != "")
            {
                jsonObj["age"]=age;
                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
            }
            if(email != "")
            {
                jsonObj["Email"]=email;
                jsonArr[i]=jsonObj;
                jsonLoginDB_obj.updatejsObj(jsonArr);
            }


            break;
        }
    }

    if(!isFound)
    {
        qDebug()<<"user is not found";
    }
    return updateStatus;
}

bool Receiver::createUser(QString username, QString password, QString confirmPassword, QString fullName, QString age, QString email,QString signature)
{
    bool createUserStatus = true;
    QJsonArray jsonArr = jsonLoginDB_obj.readFile();


    if (password != confirmPassword) {
        qDebug() << "Passwords do not match!";
        return false;
    }

    for(int i=0 ; i<jsonArr.size();i++)
    {
        QJsonObject jsonObj= jsonArr[i].toObject();
        if(jsonObj["username"].toString() == username)
        {
            qDebug()<<"user is already exist";
            createUserStatus =false;
            return createUserStatus;
        }
    }

    QJsonObject newUser;
    newUser["username"] = username;
    newUser["password"] = password;
    newUser["fullName"] = fullName;
    newUser["age"] = age;
    newUser["Email"] = email;
    newUser["accNumber"] = generateAccountNumber();
    newUser["accBalance"] = 0;
    newUser["auth"] = "user";
    newUser["Available"] = true;
    newUser["Signature"] = signature;
    jsonArr.append(newUser);
    jsonLoginDB_obj.updatejsObj(jsonArr);

    qDebug() << "User created successfully!";

    return createUserStatus;
}

void Receiver::addTransactionHistory(QJsonObject &user, const QString &details)
{
    QJsonObject transaction;
    transaction["date time"] = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    transaction["details"] = details;
    if (user.contains("Transaction History"))
    {
        QJsonArray transactionHistory = user["Transaction History"].toArray();
        transactionHistory.append(transaction);
        user["Transaction History"] = transactionHistory;
    }
    else
    {
        QJsonArray transactionHistory;
        transactionHistory.append(transaction);
        user["Transaction History"] = transactionHistory;
    }
}

QString Receiver::generateAccountNumber()
{
    return QString::number(QRandomGenerator::global()->bounded(1000, 999999));
}


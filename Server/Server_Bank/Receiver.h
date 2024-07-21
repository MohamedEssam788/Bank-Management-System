#ifndef RECEIVER_H
#define RECEIVER_H
#include <QObject>
#include <JsonHandler.h>
#include <EmailSender.h>
#include <QRandomGenerator>
#include <QProcess>
class Receiver
{
public:
    Receiver();
    bool login(const QString &username, const QString &password,QString *authority);
    void logout(const QString &username);
    QString getAccountNumber(const QString &username);
    qint32 viewAccountBalance(const QString &accountNumber,QString *BalanceStatus);
    bool makeTransaction(const QString &accountNumber,const qint32 &amount);
    bool transferAmount(const QString &from_accountNumber,const QString &to_accountNumber,const qint32 &amount,QString signature,QString *transferStatus);
    QString viewTransferHistory(const QString &accountNumber,const qint32 &count);
    bool deleteUser(const QString &accountNumber);
    QString viewBankDataBase();
    bool updateUser(QString accountNumber, QString fullName, QString age, QString email,QString oldPassword,QString password, QString confirmPassword);
    bool createUser(QString username,QString password,QString confirmPassword,QString fullName,QString age,QString email,QString signature);

private:
    JsonHandler jsonLoginDB_obj;
    void addTransactionHistory(QJsonObject &user, const QString &details);
    QString generateAccountNumber();
};

#endif // RECEIVER_H

#ifndef CREATENEWUSERCOMMAND_H
#define CREATENEWUSERCOMMAND_H

#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class CreateNewUserCommand :public Command
{
private:
    QString username;
    QString password;
    QString confirmPassword;
    QString fullName;
    QString age;
    QString email;
    QString signature;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    CreateNewUserCommand(Receiver *rec_ptr,QString username, QString password,QString confirmPassword,QString fullName,QString age,QString email,QString signature);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // CREATENEWUSERCOMMAND_H

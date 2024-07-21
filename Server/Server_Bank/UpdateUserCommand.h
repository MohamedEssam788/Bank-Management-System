#ifndef UPDATEUSERCOMMAND_H
#define UPDATEUSERCOMMAND_H



#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class UpdateUserCommand : public Command
{
private:
    QString accountNumber;
    QString age;
    QString fullName;
    QString oldPassword;
    QString password;
    QString confirmPassword;
    QString email;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    UpdateUserCommand(Receiver *rec_ptr,QString accountNumber,QString fullName,QString age,QString email,QString oldPassword,QString password,QString confirmPassword);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // UPDATEUSERCOMMAND_H

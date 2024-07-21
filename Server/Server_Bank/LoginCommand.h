#ifndef LOGINCOMMAND_H
#define LOGINCOMMAND_H

#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class LoginCommand : public Command
{
private:
    QString username;
    QString password;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
signals:


public:
    LoginCommand(Receiver *rec_ptr, QString username, QString password);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // LOGINCOMMAND_H

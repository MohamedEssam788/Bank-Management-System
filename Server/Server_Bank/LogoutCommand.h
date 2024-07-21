#ifndef LOGOUTCOMMAND_H
#define LOGOUTCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class LogoutCommand : public Command
{
private:
    QString username;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    LogoutCommand(Receiver *rec_ptr,QString username);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // LOGOUTCOMMAND_H

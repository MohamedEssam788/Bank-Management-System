#ifndef GETACCTNUMBERCOMMAND_H
#define GETACCTNUMBERCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class GetAccNumberCommand :public Command
{
private:
    QString username;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    GetAccNumberCommand(Receiver *rec_ptr,QString username);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // GETACCTNUMBERCOMMAND_H

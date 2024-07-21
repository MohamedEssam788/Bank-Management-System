#ifndef DELETEUSERCOMMAND_H
#define DELETEUSERCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class DeleteUserCommand : public Command
{
private:
    QString accountNumber;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;

public:
    DeleteUserCommand(Receiver *rec_ptr,QString accountNumber);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // DELETEUSERCOMMAND_H

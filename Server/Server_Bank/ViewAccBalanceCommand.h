#ifndef VIEWACCBALANCECOMMAND_H
#define VIEWACCBALANCECOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class ViewAccBalanceCommand : public Command
{

private:
    QString accountNumber;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    ViewAccBalanceCommand(Receiver *rec_ptr,QString accountNumber);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // VIEWACCBALANCECOMMAND_H

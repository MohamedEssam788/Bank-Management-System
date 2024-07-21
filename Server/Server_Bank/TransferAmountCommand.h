#ifndef TRANSFERAMOUNTCOMMAND_H
#define TRANSFERAMOUNTCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class TransferAmountCommand : public Command
{
private:
    QString from_accountNumber;
    QString to_accountNumber;
    qint32 amount;
    QString signature;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    TransferAmountCommand(Receiver *rec_ptr,QString from_accountNumber,QString to_accountNumber,qint32 amount,QString signature);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // TRANSFERAMOUNTCOMMAND_H

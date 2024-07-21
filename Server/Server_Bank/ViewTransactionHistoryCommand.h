#ifndef VIEWTRANSACTIONHISTORYCOMMAND_H
#define VIEWTRANSACTIONHISTORYCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;

class ViewTransactionHistoryCommand : public Command
{
private:
    QString accountNumber;
    qint32 count;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;

public:
    ViewTransactionHistoryCommand(Receiver *rec_ptr,QString accountNumber,qint32 count);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // VIEWTRANSACTIONHISTORYCOMMAND_H

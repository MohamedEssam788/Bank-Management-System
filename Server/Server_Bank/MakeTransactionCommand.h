#ifndef MAKETRANSACTIONCOMMAND_H
#define MAKETRANSACTIONCOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;

class MakeTransactionCommand : public Command
{
private:
    QString accountNumber;
    qint32 amount;
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;
public:
    MakeTransactionCommand(Receiver *rec_ptr,QString accountNumber,qint32 amount);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // MAKETRANSACTIONCOMMAND_H

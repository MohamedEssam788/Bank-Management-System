#include "TransferAmountCommand.h"
#include "ServerHandler.h"

TransferAmountCommand::TransferAmountCommand(Receiver *rec_ptr,QString from_accountNumber,QString to_accountNumber,qint32 amount,QString signature)
    :from_accountNumber{from_accountNumber},to_accountNumber{to_accountNumber},amount{amount},signature{signature},rec_ptr{rec_ptr}
{}

void TransferAmountCommand::execute()
{
    QString transferStatus;
    bool transaction_status = rec_ptr ->transferAmount(from_accountNumber,to_accountNumber ,amount, signature,&transferStatus);
    if(transaction_status)
    {
        if(serverHandler_ptr)
        {
             serverHandler_ptr ->sendMessageToClient("TransferAmount",transferStatus);
        }
    }
    else
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr ->sendMessageToClient("TransferAmount",transferStatus);
        }
    }
}

void TransferAmountCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

#include "MakeTransactionCommand.h"
#include "ServerHandler.h"

MakeTransactionCommand::MakeTransactionCommand(Receiver *rec_ptr,QString accountNumber,qint32 amount)
    :accountNumber{accountNumber},amount{amount},rec_ptr{rec_ptr}
{}

void MakeTransactionCommand::execute()
{
    bool transaction_status = rec_ptr ->makeTransaction(accountNumber , amount);
    if(transaction_status)
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr ->sendMessageToClient("TransactionStatus","Transaction done successfully");
        }
    }
    else
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr ->sendMessageToClient("TransactionStatus","Transaction Failed\n Larger amount provided");
        }
    }
}

void MakeTransactionCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

#include "ViewTransactionHistoryCommand.h"
#include "ServerHandler.h"

ViewTransactionHistoryCommand::ViewTransactionHistoryCommand(Receiver *rec_ptr,QString accountNumber,qint32 count)
    :  accountNumber{accountNumber},count{count},rec_ptr{rec_ptr}
{}

void ViewTransactionHistoryCommand::execute()
{
    QString transactionHistory = rec_ptr -> viewTransferHistory(accountNumber,count);

    if(serverHandler_ptr)
    {
         serverHandler_ptr -> sendMessageToClient("TransactionHistory",transactionHistory);
    }
}

void ViewTransactionHistoryCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

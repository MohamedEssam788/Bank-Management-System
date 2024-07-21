#include "ViewAccBalanceCommand.h"
#include "ServerHandler.h"

ViewAccBalanceCommand::ViewAccBalanceCommand(Receiver *rec_ptr,QString accountNumber)
    :accountNumber{accountNumber},rec_ptr{rec_ptr}
{}

void ViewAccBalanceCommand::execute()
{
    QString BalanceStatus;
    rec_ptr->viewAccountBalance(accountNumber,&BalanceStatus);
    qDebug()<<BalanceStatus;
    if(serverHandler_ptr)
    {
        serverHandler_ptr ->sendMessageToClient("AccountBalance" ,BalanceStatus);
    }
}

void ViewAccBalanceCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

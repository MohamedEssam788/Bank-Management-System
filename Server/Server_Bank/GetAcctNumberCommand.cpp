#include "GetAcctNumberCommand.h"
#include "ServerHandler.h"


GetAccNumberCommand::GetAccNumberCommand(Receiver *rec_ptr,QString username)
    :username{username},rec_ptr{rec_ptr}
{}

void GetAccNumberCommand::execute()
{
    QString accNumber = rec_ptr -> getAccountNumber(username);
    if(serverHandler_ptr)
    {
         serverHandler_ptr ->sendMessageToClient("AccountNumber",accNumber);
    }
}

void GetAccNumberCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

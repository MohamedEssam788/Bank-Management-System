#include "DeleteUserCommand.h"
#include "ServerHandler.h"

DeleteUserCommand::DeleteUserCommand(Receiver *rec_ptr,QString accountNumber)
    :accountNumber{accountNumber},rec_ptr{rec_ptr}
{}

void DeleteUserCommand::execute()
{
    bool deleteStatus = rec_ptr ->deleteUser(accountNumber);
    if(deleteStatus)
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("DeleteUser","User was deleted successfully");
        }
    }
    else
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("DeleteUser","User is not found");
        }
    }
}

void DeleteUserCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

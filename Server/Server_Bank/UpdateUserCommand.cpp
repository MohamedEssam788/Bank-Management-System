#include "UpdateUserCommand.h"
#include "ServerHandler.h"


UpdateUserCommand::UpdateUserCommand(Receiver *rec_ptr, QString accountNumber, QString fullName, QString age, QString email,QString oldPassword, QString password, QString confirmPassword)
    :accountNumber{accountNumber},age{age},fullName{fullName},oldPassword{oldPassword},password{password},confirmPassword{confirmPassword},email{email},rec_ptr{rec_ptr}
{
}

void UpdateUserCommand::execute()
{
    bool updateStatus = rec_ptr -> updateUser(accountNumber,fullName,age,email,oldPassword,password,confirmPassword);

    if(updateStatus)
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("UpdateUser","User data updated Successfully");
        }
    }
    else
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("UpdateUser","User is not exist!!");
        }
    }
}

void UpdateUserCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

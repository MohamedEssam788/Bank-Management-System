#include "CreateNewUserCommand.h"
#include "ServerHandler.h"

CreateNewUserCommand::CreateNewUserCommand(Receiver *rec_ptr,QString username, QString password,QString confirmPassword,QString fullName,QString age,QString email,QString signature)
    :username{username},password{password},confirmPassword{confirmPassword},fullName{fullName},age{age},email{email},signature{signature},rec_ptr{rec_ptr}
{}

void CreateNewUserCommand::execute()
{
    bool createUserStatus = rec_ptr ->createUser(username,password,confirmPassword,fullName,age,email,signature);

    if(createUserStatus)
    {
        if(serverHandler_ptr)
        {
             serverHandler_ptr ->sendMessageToClient("CreateUser","User Created Successfully");
        }
    }
    else
    {
        if(serverHandler_ptr)
        {
            serverHandler_ptr ->sendMessageToClient("CreateUser","User already exist!!!");
        }
    }
}

void CreateNewUserCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

#include "LogoutCommand.h"
#include "ServerHandler.h"

LogoutCommand::LogoutCommand(Receiver *rec_ptr,QString username)
    :username{username},rec_ptr{rec_ptr}
{}

void LogoutCommand::execute()
{
    rec_ptr->logout(username);
}

void LogoutCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

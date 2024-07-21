#include "LoginCommand.h"
#include "ServerHandler.h"


LoginCommand::LoginCommand(Receiver *rec_ptr, QString username, QString password)
    :username{username},password{password},rec_ptr{rec_ptr}
{

}

void LoginCommand::setServerHandler(ServerHandler* handler)
{
    serverHandler_ptr = handler;
}

void LoginCommand::execute()
{
    QString authority  ;
    bool loginStatus = rec_ptr ->login(username,password,&authority);
    if(loginStatus)
    {
        qDebug()<<"LoginCommand: Login successful";
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("LoginSuccessfully" ,authority) ;
        }
    }
    else
    {
       qDebug()<<"LoginCommand: Login failed";
        if(serverHandler_ptr)
        {
            serverHandler_ptr -> sendMessageToClient("LoginFailed" ,authority) ;
        }
    }

}

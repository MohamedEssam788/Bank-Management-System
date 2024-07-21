#include "ViewBankDataBaseCommand.h"
#include "ServerHandler.h"

ViewBankDataBaseCommand::ViewBankDataBaseCommand(Receiver *rec_ptr)
    :rec_ptr{rec_ptr}
{}

void ViewBankDataBaseCommand::execute()
{
    QString bankDB = rec_ptr ->viewBankDataBase();

    if(serverHandler_ptr)
    {
        serverHandler_ptr -> sendMessageToClient("ViewBankDB",bankDB);
    }
}

void ViewBankDataBaseCommand::setServerHandler(ServerHandler *handler)
{
    serverHandler_ptr = handler;
}

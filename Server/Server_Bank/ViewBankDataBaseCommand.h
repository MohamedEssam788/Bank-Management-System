#ifndef VIEWBANKDATABASECOMMAND_H
#define VIEWBANKDATABASECOMMAND_H


#include <Command.h>
#include <Receiver.h>
#include <QDebug>

class ServerHandler;
class ViewBankDataBaseCommand :  public Command
{
private:
    Receiver *rec_ptr;
    ServerHandler* serverHandler_ptr;

public:
    ViewBankDataBaseCommand(Receiver *rec_ptr);
    void execute() override;
    void setServerHandler(ServerHandler *handler) override;
};

#endif // VIEWBANKDATABASECOMMAND_H

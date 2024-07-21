#ifndef COMMAND_H
#define COMMAND_H

class ServerHandler;

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void setServerHandler(ServerHandler *handler) = 0 ;
};

#endif // COMMAND_H

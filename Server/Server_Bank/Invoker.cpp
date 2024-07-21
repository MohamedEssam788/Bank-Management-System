#include "Invoker.h"



void Invoker::setCommand(Command *cmd_ptr)
{
    this->cmd_ptr = cmd_ptr;
}

void Invoker::executeCommand()
{
    if(cmd_ptr)
    {
        cmd_ptr ->execute();
    }
}

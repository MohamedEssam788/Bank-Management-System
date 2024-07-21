#ifndef INVOKER_H
#define INVOKER_H

#include <Command.h>

class Invoker
{
private:
    Command *cmd_ptr = nullptr;
public:
    void setCommand(Command *cmd_ptr);
    void executeCommand();

};

#endif // INVOKER_H

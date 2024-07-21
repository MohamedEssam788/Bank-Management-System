#include "Log.h"



Log::Log()
    : logFile("server_log.log")
{}

Log::~Log()
{
    if (logFile.isOpen())
    {
        logFile.close();

    }
}


Log &Log::getInstance()
{
    static Log instance;
    return instance;
}

void Log::writeLog(const QString &operation, const QString &data)
{
    mutex.lock();

    if (logFile.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream logStream(&logFile);
        logStream << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")
                  << " - Operation: " << operation
                  << ", Data: " << data << "\n";
        logFile.close();
    }

    mutex.unlock();
}

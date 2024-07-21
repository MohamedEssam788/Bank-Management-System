#ifndef LOG_H
#define LOG_H

#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMutex>
#include <QDebug>

class Log
{
public:
    static Log& getInstance();
    void writeLog(const QString& operation, const QString& data);

    Log(const Log&) = delete;
    Log& operator=(const Log&) = delete;
private:
    Log();
    ~Log();



    QFile logFile;
    QMutex mutex;
};

#endif // LOG_H

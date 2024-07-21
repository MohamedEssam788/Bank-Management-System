#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTextStream>
#include <ServerHandler.h>
#include <QThread>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(const Server &obj) = delete;         //restrecting copy constructor
    Server &operator=(Server &obj) = delete;    //restrecting move constructor
    static Server &getInstance();
    void startServer();

private:
    explicit Server(QObject *parent = nullptr);
    QTextStream qin,qout;
    qint32 port;

    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle);
};

#endif // SERVER_H

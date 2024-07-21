#include "Server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent},qin{stdin},qout{stdout}
{}

Server &Server::getInstance()
{
    static Server instance;
    return instance;
}
void Server::startServer()
{

    port = 4444;

    if( this->listen(QHostAddress::Any,port) )
    {
        qDebug()<<"Server is lestining to the port : "<<port<<"\n";
    }
    else
    {
        qDebug()<<"Server can not listen to port: "<<port<<"\n";
    }

}

void Server::incomingConnection(qintptr handle)
{
    qDebug()<<"Client "<<handle <<"is Conntected to the server\n";

    ServerHandler *server_handler_ptr = new ServerHandler(handle,this);

    connect(server_handler_ptr,&QThread::finished,server_handler_ptr,&QThread::deleteLater);//Clean the resources when done

    server_handler_ptr->start();
}

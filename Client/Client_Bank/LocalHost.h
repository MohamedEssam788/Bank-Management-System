#ifndef LOCALHOST_H
#define LOCALHOST_H

#include <QHostAddress>
#include <QNetworkInterface>


class LocalHost
{
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:

    /******************************************************/
    /*************** LocalHost Member Functions ***********/
    /******************************************************/
    static LocalHost& getInstance();

    QString getLocalIpAddress();
    LocalHost(const LocalHost&) = delete;
    LocalHost& operator=(const LocalHost&) = delete;
    /******************************************************/
    /****************Private Section***********************/
    /******************************************************/
private:
    /******************************************************/
    /**************** LocalHost Attributes ******************/
    /******************************************************/
    LocalHost();
    ~LocalHost();
};

#endif // LOCALHOST_H

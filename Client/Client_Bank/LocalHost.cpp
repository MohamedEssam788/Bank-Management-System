#include "LocalHost.h"

LocalHost &LocalHost::getInstance()
{
    static LocalHost instance;//create a static instance of the class
    return instance;
}



QString LocalHost::getLocalIpAddress()
{
        QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
        // Use the first non-loopback IPv4 address =>
        //Non loop back is used for network testing
        for (int i = 0; i < ipAddressesList.size(); ++i) {
            if (ipAddressesList[i] != QHostAddress::LocalHost &&
                ipAddressesList[i].toIPv4Address()) {
                return ipAddressesList.at(i).toString();
            }
        }
        // If no non-loopback address found, return localhost
        return QHostAddress(QHostAddress::LocalHost).toString();
}


LocalHost::LocalHost()
{

}

LocalHost::~LocalHost()
{

}




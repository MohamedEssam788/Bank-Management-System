#ifndef REALREQUEST_H
#define REALREQUEST_H

#include <SentRequest.h>

//Concrete component
class RealRequest :public SentRequest
{
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:

    /******************************************************/
    /*************** RealRequest Member Functions *********/
    /******************************************************/
    QByteArray getData(const QByteArray& data)override;
};

#endif // REALREQUEST_H

#ifndef SENTREQUEST_H
#define SENTREQUEST_H

//Component
#include <QByteArray>

class SentRequest
{
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    /******************************************************/
    /********* SentRequest Member Functions *********/
    /******************************************************/
    virtual ~SentRequest()= default;
    virtual QByteArray getData(const QByteArray& data)=0;
};

#endif // SENTREQUEST_H

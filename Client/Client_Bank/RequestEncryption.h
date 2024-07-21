#ifndef REQUESTENCRYPTION_H
#define REQUESTENCRYPTION_H

#include <SentRequest.h>
#include <RealRequest.h>
#include <QSharedPointer>

//Decorator
class RequestEncryption :public SentRequest
{
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    /******************************************************/
    /********* RequestEncryption Member Functions *********/
    /******************************************************/
    RequestEncryption(QSharedPointer<SentRequest> sentRequest_Sptr);
    QByteArray getData(const QByteArray& data)override;


    /******************************************************/
    /****************protected Section***********************/
    /******************************************************/
protected:

    QSharedPointer<SentRequest> sentRequest_Sptr;

    QByteArray encrypt(const QByteArray &data);
    /******************************************************/
    /**************** RequestEncryption Attributes ********/
    /******************************************************/
    QByteArray key;
};

#endif // REQUESTENCRYPTION_H

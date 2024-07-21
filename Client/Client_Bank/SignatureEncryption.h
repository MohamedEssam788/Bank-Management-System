#ifndef SIGNATUREENCRYPTION_H
#define SIGNATUREENCRYPTION_H

#include <SentRequest.h>
#include <RealRequest.h>
#include <QSharedPointer>
#include <QCryptographicHash>

class SignatureEncryption:public SentRequest
{
    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:
    /******************************************************/
    /********* SignatureEncryption Member Functions *********/
    /******************************************************/
    SignatureEncryption(QSharedPointer<SentRequest> sentRequest_Sptr);
    QByteArray getData(const QByteArray& data)override;


    /******************************************************/
    /****************protected Section***********************/
    /******************************************************/
protected:

    QSharedPointer<SentRequest> sentRequest_Sptr;

    QByteArray hashSignature(const QByteArray &data);

};

#endif

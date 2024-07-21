#include "SignatureEncryption.h"

SignatureEncryption::SignatureEncryption(QSharedPointer<SentRequest> sentRequest_Sptr)
:sentRequest_Sptr{sentRequest_Sptr}
{}

QByteArray SignatureEncryption::getData(const QByteArray &data)
{
    QByteArray encryptedData = hashSignature(data);//Perform the encryption algorithm
    return sentRequest_Sptr->getData(encryptedData);
}

QByteArray SignatureEncryption::hashSignature(const QByteArray &data)
{
    //Preform Encryption for the signature using SHA256 Hasing function
    /* Note : SHA256 is one way function if you want to reverse it back
              you have to use OpenSSL Library for this functionality   */
    QByteArray byteArray = data;
    byteArray = QCryptographicHash::hash(byteArray, QCryptographicHash::Sha256).toBase64();

    return byteArray;
}

#include "RequestEncryption.h"

//Constructor
RequestEncryption::RequestEncryption(QSharedPointer<SentRequest> sentRequest_Sptr)
    :sentRequest_Sptr{sentRequest_Sptr},key{"!#aman#!"}
{

}

QByteArray RequestEncryption::getData(const QByteArray &data)
{
    QByteArray encryptedData = encrypt(data);//Perform the encryption algorithm
    return sentRequest_Sptr->getData(encryptedData);
}

QByteArray RequestEncryption::encrypt(const QByteArray &data)
{

    QByteArray encrypted_data = data;

    for (int i = 0; i < encrypted_data.size(); ++i)
    {
        encrypted_data[i] = encrypted_data[i] ^ key[i % key.size()];//DO XORing Encryption
    }

    return encrypted_data;
}

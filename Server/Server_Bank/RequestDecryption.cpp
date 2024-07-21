#include "RequestDecryption.h"



RequestDecryption::RequestDecryption()
    :key {"!#aman#!"}
{
}

QByteArray RequestDecryption::decrypt(const QByteArray &data)
{
    QByteArray encrypted_data = data;

    for (int i = 0; i < encrypted_data.size(); ++i)
    {
        encrypted_data[i] = encrypted_data[i] ^ key[i % key.size()];
    }

    return encrypted_data;
}

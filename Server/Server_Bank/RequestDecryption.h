#ifndef REQUESTDECRYPTION_H
#define REQUESTDECRYPTION_H

#include<QByteArray>

class RequestDecryption
{
public:
    RequestDecryption();
   QByteArray decrypt(const QByteArray &data);
private:
   QByteArray key;
};

#endif // REQUESTDECRYPTION_H

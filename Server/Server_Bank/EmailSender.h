#ifndef EMAILSENDER_H
#define EMAILSENDER_H

#include <QObject>

class EmailSender : public QObject
{
    Q_OBJECT
public:
    explicit EmailSender(QObject *parent = nullptr);
    void sendEmail(const QString &emailAddress, const QString &subject, const QString &body);


};

#endif // EMAILSENDER_H

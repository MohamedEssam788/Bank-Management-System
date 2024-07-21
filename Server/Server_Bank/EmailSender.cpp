#include "EmailSender.h"
#include <QProcess>
#include <QDir>

EmailSender::EmailSender(QObject *parent)
    : QObject{parent}
{
}

void EmailSender::sendEmail(const QString &emailAddress, const QString &subject, const QString &body)
{
    QProcess process;
    QStringList arguments;
    arguments << emailAddress << subject << body;
    process.start("python", QStringList() << QDir::currentPath()+"/../../../send_email.py" << arguments);
    process.waitForFinished(-1);

    if (process.exitCode() == 0)
    {
        qDebug() << "Email sent successfully!";
    } else
    {
        qDebug() << "Failed to send email:" << process.readAllStandardError();
    }
}


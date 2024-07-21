#ifndef JSONHANDLER_H
#define JSONHANDLER_H

#include <QObject>
#include <QDebug>
#include <QVector>
#include <QFile>

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class JsonHandler : public QObject
{
    Q_OBJECT
public:
    explicit JsonHandler(QObject *parent = nullptr);
    void updatejsObj(QJsonArray data);
    QJsonArray readFile();
    void setFilePath(const QString &newPath);
    void deleteJsObj(QString accountNumber);
signals:


private:
    QVector<QJsonObject> db_vec;
    QString filePath;
    void init_DB();
};

#endif // JSONHANDLER_H

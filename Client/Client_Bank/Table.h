#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include <QString>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMessageBox>

class Table {

    /******************************************************/
    /**************** public Section **********************/
    /******************************************************/
public:

    /******************************************************/
    /********* Table Member Functions ******************/
    /******************************************************/
    // Methods to create tables for transaction history and bank database
    void CreateTransactionHistoryTable(QTableWidget *table, const QString &jsonResponse);
    void CreateBankDbTable(QTableWidget *table, const QString &jsonResponse);
};

#endif // TABLE_H

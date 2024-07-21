#include "Table.h"



void Table::CreateTransactionHistoryTable(QTableWidget *table, const QString &jsonResponse)
{
    if(jsonResponse.contains("not"))//check if the response is user not found
    {
        QMessageBox::critical(nullptr, "Error", jsonResponse);
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonResponse.toUtf8());//read the response as jsonDoc
    QJsonArray jsonArray = jsonDoc.array();//convert into jsonArray

    // Set table headers
    table->setColumnCount(5);//Set columns number
    QStringList headers = {"Amount", "Transaction", "From", "To", "Date Time"};//cloumn headers
    table->setHorizontalHeaderLabels(headers);//set columns headers

    /* Populate the table*/
    table->setRowCount(jsonArray.size());

    for (int i = 0; i < jsonArray.size(); ++i)
    {
        QJsonObject transaction = jsonArray[i].toObject();
        QString dateTime = transaction["date time"].toString();
        QString details = transaction["details"].toString();

        QString amount, transactionType, from = "-", to = "-";

        // Determine transaction type and parse details
        if (details.contains(" to "))
        {
            // Transfer transaction
            QStringList parts = details.split(" to ");
            amount = parts[0];
            to = parts[1];
            transactionType = "Transfer";
        }
        else if (details.contains(" from "))
        {
            // Transfer transaction (received)
            QStringList parts = details.split(" from ");
            amount = parts[0];
            from = parts[1];
            transactionType = "Transfer";
        }
        else if (details.toInt() < 0) {
            // Withdraw transaction
            amount = QString::number(details.toInt() * -1);
            transactionType = "Withdraw";
        }
        else {
            // Deposit transaction
            amount = details;
            transactionType = "Deposit";
        }

        // Add data to the table
        table->setItem(i, 0, new QTableWidgetItem(amount));
        table->setItem(i, 1, new QTableWidgetItem(transactionType));
        table->setItem(i, 2, new QTableWidgetItem(from));
        table->setItem(i, 3, new QTableWidgetItem(to));
        table->setItem(i, 4, new QTableWidgetItem(dateTime));
    }
}

void Table::CreateBankDbTable(QTableWidget *table, const QString &jsonResponse)
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonResponse.toUtf8());
    QJsonArray jsonArray = jsonDoc.array();


    table->setColumnCount(9);
    QStringList headers = {"Available", "Email", "accBalance", "accNumber", "age", "auth", "fullName", "password", "username"};
    table->setHorizontalHeaderLabels(headers);// Set table headers


    table->setRowCount(jsonArray.size());// Set table row count

    // Populate the table
    for (int i = 0; i < jsonArray.size(); ++i) {
        QJsonObject userObject = jsonArray[i].toObject();

        /* Check for the proceeded date to fill the place in table
           if it has no data preform it as "-" in the table         */
        QString available = userObject.contains("Available") ? (userObject["Available"].toBool() ? "true" : "false") : "-";
        QString email = userObject.contains("Email") ? userObject["Email"].toString() : "-";
        QString accBalance = userObject.contains("accBalance") ? QString::number(userObject["accBalance"].toInt()) : "-";
        QString accNumber = userObject.contains("accNumber") ? userObject["accNumber"].toString() : "-";
        QString age = userObject.contains("age") ? userObject["age"].toString() : "-";
        QString auth = userObject.contains("auth") ? userObject["auth"].toString() : "-";
        QString fullName = userObject.contains("fullName") ? userObject["fullName"].toString() : "-";
        QString password = userObject.contains("password") ? userObject["password"].toString() : "-";
        QString username = userObject.contains("username") ? userObject["username"].toString() : "-";

        // Add data to the table
        table->setItem(i, 0, new QTableWidgetItem(available));
        table->setItem(i, 1, new QTableWidgetItem(email));
        table->setItem(i, 2, new QTableWidgetItem(accBalance));
        table->setItem(i, 3, new QTableWidgetItem(accNumber));
        table->setItem(i, 4, new QTableWidgetItem(age));
        table->setItem(i, 5, new QTableWidgetItem(auth));
        table->setItem(i, 6, new QTableWidgetItem(fullName));
        table->setItem(i, 7, new QTableWidgetItem(password));
        table->setItem(i, 8, new QTableWidgetItem(username));
    }
}

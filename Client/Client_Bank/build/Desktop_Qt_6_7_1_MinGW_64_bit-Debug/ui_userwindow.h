/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *SelectionMode;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QPushButton *user_logout_btn;
    QGroupBox *groupBox_2;
    QPushButton *user_get_acc_number_btn;
    QPushButton *user_view_acc_balance_btn;
    QGroupBox *groupBox_4;
    QPushButton *user_view_trans_history_btn;
    QPushButton *user_make_transaction_btn;
    QGroupBox *groupBox_5;
    QPushButton *user_transfer_amount_btn;
    QWidget *TransactionPage;
    QGroupBox *groupBox_3;
    QPushButton *user_do_make_transaction_btn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *user_transaction_combo_box;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *user_make_transaction_edit_line;
    QPushButton *user_cancel_make_transaction_btn;
    QWidget *TransferAmount;
    QGroupBox *groupBox_6;
    QPushButton *user_transfer_do_amount_btn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *transfer_amount_receiver_edit_line;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *transfer_amount_amount_edit_line;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *transfer_amount_signature_edit_line;
    QPushButton *user_cancel_transfer_amount_btn;
    QWidget *TransactionHistory;
    QTableWidget *user_transaction_history_table;
    QPushButton *user_transaction_history_btn;

    void setupUi(QDialog *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName("UserWindow");
        UserWindow->resize(610, 490);
        stackedWidget = new QStackedWidget(UserWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 591, 481));
        SelectionMode = new QWidget();
        SelectionMode->setObjectName("SelectionMode");
        gridLayout = new QGridLayout(SelectionMode);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(SelectionMode);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(1, 26, 255);"));
        user_logout_btn = new QPushButton(groupBox);
        user_logout_btn->setObjectName("user_logout_btn");
        user_logout_btn->setGeometry(QRect(422, 388, 111, 41));
        user_logout_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 127);"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 40, 251, 231));
        user_get_acc_number_btn = new QPushButton(groupBox_2);
        user_get_acc_number_btn->setObjectName("user_get_acc_number_btn");
        user_get_acc_number_btn->setGeometry(QRect(40, 40, 171, 71));
        user_get_acc_number_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        user_view_acc_balance_btn = new QPushButton(groupBox_2);
        user_view_acc_balance_btn->setObjectName("user_view_acc_balance_btn");
        user_view_acc_balance_btn->setGeometry(QRect(40, 130, 171, 71));
        user_view_acc_balance_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(280, 40, 231, 231));
        user_view_trans_history_btn = new QPushButton(groupBox_4);
        user_view_trans_history_btn->setObjectName("user_view_trans_history_btn");
        user_view_trans_history_btn->setGeometry(QRect(20, 40, 191, 71));
        user_view_trans_history_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        user_make_transaction_btn = new QPushButton(groupBox_4);
        user_make_transaction_btn->setObjectName("user_make_transaction_btn");
        user_make_transaction_btn->setGeometry(QRect(20, 130, 191, 71));
        user_make_transaction_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(120, 270, 281, 111));
        user_transfer_amount_btn = new QPushButton(groupBox_5);
        user_transfer_amount_btn->setObjectName("user_transfer_amount_btn");
        user_transfer_amount_btn->setGeometry(QRect(30, 40, 211, 61));
        user_transfer_amount_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(SelectionMode);
        TransactionPage = new QWidget();
        TransactionPage->setObjectName("TransactionPage");
        groupBox_3 = new QGroupBox(TransactionPage);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(70, 50, 451, 351));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(0, 47, 255);"));
        user_do_make_transaction_btn = new QPushButton(groupBox_3);
        user_do_make_transaction_btn->setObjectName("user_do_make_transaction_btn");
        user_do_make_transaction_btn->setGeometry(QRect(170, 230, 161, 61));
        user_do_make_transaction_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 160, 162);"));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 80, 371, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        user_transaction_combo_box = new QComboBox(layoutWidget);
        user_transaction_combo_box->addItem(QString());
        user_transaction_combo_box->addItem(QString());
        user_transaction_combo_box->addItem(QString());
        user_transaction_combo_box->setObjectName("user_transaction_combo_box");
        user_transaction_combo_box->setStyleSheet(QString::fromUtf8("color: rgb(233, 207, 255);\n"
"background-color: rgb(85, 0, 255);"));

        horizontalLayout->addWidget(user_transaction_combo_box);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 150, 381, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        user_make_transaction_edit_line = new QLineEdit(layoutWidget1);
        user_make_transaction_edit_line->setObjectName("user_make_transaction_edit_line");
        user_make_transaction_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);"));

        horizontalLayout_2->addWidget(user_make_transaction_edit_line);

        user_cancel_make_transaction_btn = new QPushButton(TransactionPage);
        user_cancel_make_transaction_btn->setObjectName("user_cancel_make_transaction_btn");
        user_cancel_make_transaction_btn->setGeometry(QRect(470, 410, 101, 61));
        user_cancel_make_transaction_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        stackedWidget->addWidget(TransactionPage);
        TransferAmount = new QWidget();
        TransferAmount->setObjectName("TransferAmount");
        groupBox_6 = new QGroupBox(TransferAmount);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(60, 90, 451, 301));
        groupBox_6->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 73, 100);"));
        user_transfer_do_amount_btn = new QPushButton(groupBox_6);
        user_transfer_do_amount_btn->setObjectName("user_transfer_do_amount_btn");
        user_transfer_do_amount_btn->setGeometry(QRect(180, 230, 101, 61));
        user_transfer_do_amount_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);"));
        layoutWidget2 = new QWidget(groupBox_6);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 80, 401, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_3->addWidget(label_3);

        transfer_amount_receiver_edit_line = new QLineEdit(layoutWidget2);
        transfer_amount_receiver_edit_line->setObjectName("transfer_amount_receiver_edit_line");
        transfer_amount_receiver_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_3->addWidget(transfer_amount_receiver_edit_line);

        layoutWidget3 = new QWidget(groupBox_6);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 140, 401, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 208, 255);\n"
"color: rgb(17, 17, 17);"));

        horizontalLayout_4->addWidget(label_4);

        transfer_amount_amount_edit_line = new QLineEdit(layoutWidget3);
        transfer_amount_amount_edit_line->setObjectName("transfer_amount_amount_edit_line");
        transfer_amount_amount_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_4->addWidget(transfer_amount_amount_edit_line);

        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 190, 401, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 208, 255);\n"
"color: rgb(17, 17, 17);"));

        horizontalLayout_5->addWidget(label_5);

        transfer_amount_signature_edit_line = new QLineEdit(layoutWidget_2);
        transfer_amount_signature_edit_line->setObjectName("transfer_amount_signature_edit_line");
        transfer_amount_signature_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_5->addWidget(transfer_amount_signature_edit_line);

        user_cancel_transfer_amount_btn = new QPushButton(TransferAmount);
        user_cancel_transfer_amount_btn->setObjectName("user_cancel_transfer_amount_btn");
        user_cancel_transfer_amount_btn->setGeometry(QRect(460, 410, 101, 61));
        user_cancel_transfer_amount_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        stackedWidget->addWidget(TransferAmount);
        TransactionHistory = new QWidget();
        TransactionHistory->setObjectName("TransactionHistory");
        user_transaction_history_table = new QTableWidget(TransactionHistory);
        user_transaction_history_table->setObjectName("user_transaction_history_table");
        user_transaction_history_table->setGeometry(QRect(0, 90, 591, 251));
        user_transaction_history_table->setTabKeyNavigation(true);
        user_transaction_history_table->setDragEnabled(false);
        user_transaction_history_btn = new QPushButton(TransactionHistory);
        user_transaction_history_btn->setObjectName("user_transaction_history_btn");
        user_transaction_history_btn->setGeometry(QRect(240, 360, 83, 51));
        user_transaction_history_btn->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"background-color: rgb(124, 255, 139);\n"
"color: rgb(20, 20, 20);"));
        stackedWidget->addWidget(TransactionHistory);

        retranslateUi(UserWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QDialog *UserWindow)
    {
        UserWindow->setWindowTitle(QCoreApplication::translate("UserWindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UserWindow", "Selection Mode ", nullptr));
        user_logout_btn->setText(QCoreApplication::translate("UserWindow", "Logout", nullptr));
        groupBox_2->setTitle(QString());
        user_get_acc_number_btn->setText(QCoreApplication::translate("UserWindow", "Get Account Number", nullptr));
        user_view_acc_balance_btn->setText(QCoreApplication::translate("UserWindow", "View Account Balance", nullptr));
        groupBox_4->setTitle(QString());
        user_view_trans_history_btn->setText(QCoreApplication::translate("UserWindow", "View Transaction History", nullptr));
        user_make_transaction_btn->setText(QCoreApplication::translate("UserWindow", "Make Transaction", nullptr));
        groupBox_5->setTitle(QString());
        user_transfer_amount_btn->setText(QCoreApplication::translate("UserWindow", "Transfer Amount", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("UserWindow", "Make A Transaction", nullptr));
        user_do_make_transaction_btn->setText(QCoreApplication::translate("UserWindow", "OK", nullptr));
        label->setText(QCoreApplication::translate("UserWindow", "Transaction Type", nullptr));
        user_transaction_combo_box->setItemText(0, QString());
        user_transaction_combo_box->setItemText(1, QCoreApplication::translate("UserWindow", "Deposite", nullptr));
        user_transaction_combo_box->setItemText(2, QCoreApplication::translate("UserWindow", "Withdraw", nullptr));

        label_2->setText(QCoreApplication::translate("UserWindow", "Enter the Amount", nullptr));
        user_cancel_make_transaction_btn->setText(QCoreApplication::translate("UserWindow", "Cancel", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("UserWindow", "Transfer Amount", nullptr));
        user_transfer_do_amount_btn->setText(QCoreApplication::translate("UserWindow", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("UserWindow", "Receiver Acc number", nullptr));
        label_4->setText(QCoreApplication::translate("UserWindow", "Amount", nullptr));
        label_5->setText(QCoreApplication::translate("UserWindow", "Signature", nullptr));
        user_cancel_transfer_amount_btn->setText(QCoreApplication::translate("UserWindow", "Cancel", nullptr));
        user_transaction_history_btn->setText(QCoreApplication::translate("UserWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H

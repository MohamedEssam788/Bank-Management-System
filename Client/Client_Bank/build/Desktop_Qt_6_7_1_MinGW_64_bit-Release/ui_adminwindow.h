/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *admin_stackedWidget;
    QWidget *SelectionMode;
    QPushButton *admin_logout_btn;
    QGroupBox *groupBox;
    QPushButton *admin_get_acc_number_btn;
    QPushButton *admin_view_acc_balance_btn;
    QPushButton *admin_view_trans_history_btn;
    QGroupBox *groupBox_2;
    QPushButton *admin_create_new_user_btn;
    QPushButton *admin_update_user_btn;
    QPushButton *admin_delete_user_btn;
    QPushButton *admin_view_bank_db_btn;
    QWidget *AccountNumber;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *admin_get_acc_number_edit_line;
    QPushButton *admin_do_get_acc_number_btn;
    QPushButton *admin_cancel_get_acc_number_btn;
    QWidget *AccountBalance;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *admin_get_acc_balance_edit_line;
    QPushButton *admin_do_get_acc_balance_btn;
    QPushButton *admin_cancel_get_acc_balance_btn;
    QWidget *TransactionHistory;
    QTableWidget *admin_transaction_histoy_table;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *admin_view_transaction_history_edit_line;
    QPushButton *admin_do_view_transaction_history_btn;
    QPushButton *admin_cancel_transaction_history_btn;
    QWidget *BankDatabase;
    QPushButton *admin_ok_view_bank_db_btn;
    QTableWidget *admin_bank_db_table;
    QWidget *CreateUser;
    QGroupBox *groupBox_5;
    QLabel *admin_password_label;
    QPushButton *admin_do_create_user_btn;
    QLabel *admin_age_label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_20;
    QVBoxLayout *verticalLayout;
    QLineEdit *admin_create_username_edit_line;
    QLineEdit *admin_create_password_edit_line;
    QLineEdit *admin_create_confirm_password_edit_line;
    QLineEdit *admin_create_fullname_edit_line;
    QLineEdit *admin_create_age_edit_line;
    QLineEdit *admin_create_email_edit_line;
    QLineEdit *admin_create_signature_edit_line;
    QCheckBox *admin_create_password_checkBox;
    QCheckBox *admin_create_confirm_password_checkBox;
    QPushButton *admin_cancel_create_user_btn;
    QWidget *UpdateUser;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *admin_update_acc_number_edit_line;
    QPushButton *admin_do_update_user_btn;
    QLabel *admin_new_password_label;
    QLabel *admin_new_confirm_password_label;
    QLabel *admin_update_age_label;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_14;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *admin_update_fullname_edit_line;
    QLineEdit *admin_update_age_edit_line;
    QLineEdit *admin_update_email_edit_line;
    QLineEdit *admin_update_old_password_edit_line;
    QLineEdit *admin_update_new_password_edit_line;
    QLineEdit *admin_update_confirm_password_edit_line;
    QCheckBox *admin_update_new_password_checkBox;
    QCheckBox *admin_update_current_password_checkBox;
    QCheckBox *admin_update_confirm_password_checkBox;
    QPushButton *admin_cancel_update_user_btn;
    QWidget *DeleteUser;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *admin_delete_acc_number_edit_line;
    QPushButton *admin_do_delete_user_btn;
    QLabel *admin_delete_label;
    QPushButton *admin_cancel_delete_user_btn;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(693, 502);
        gridLayout = new QGridLayout(AdminWindow);
        gridLayout->setObjectName("gridLayout");
        admin_stackedWidget = new QStackedWidget(AdminWindow);
        admin_stackedWidget->setObjectName("admin_stackedWidget");
        SelectionMode = new QWidget();
        SelectionMode->setObjectName("SelectionMode");
        admin_logout_btn = new QPushButton(SelectionMode);
        admin_logout_btn->setObjectName("admin_logout_btn");
        admin_logout_btn->setGeometry(QRect(522, 408, 111, 51));
        admin_logout_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 127);"));
        groupBox = new QGroupBox(SelectionMode);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 251, 301));
        admin_get_acc_number_btn = new QPushButton(groupBox);
        admin_get_acc_number_btn->setObjectName("admin_get_acc_number_btn");
        admin_get_acc_number_btn->setGeometry(QRect(30, 40, 191, 71));
        admin_get_acc_number_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_view_acc_balance_btn = new QPushButton(groupBox);
        admin_view_acc_balance_btn->setObjectName("admin_view_acc_balance_btn");
        admin_view_acc_balance_btn->setGeometry(QRect(30, 130, 191, 71));
        admin_view_acc_balance_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_view_trans_history_btn = new QPushButton(groupBox);
        admin_view_trans_history_btn->setObjectName("admin_view_trans_history_btn");
        admin_view_trans_history_btn->setGeometry(QRect(30, 220, 191, 71));
        admin_view_trans_history_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        groupBox_2 = new QGroupBox(SelectionMode);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(350, 10, 251, 301));
        admin_create_new_user_btn = new QPushButton(groupBox_2);
        admin_create_new_user_btn->setObjectName("admin_create_new_user_btn");
        admin_create_new_user_btn->setGeometry(QRect(30, 40, 191, 71));
        admin_create_new_user_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_update_user_btn = new QPushButton(groupBox_2);
        admin_update_user_btn->setObjectName("admin_update_user_btn");
        admin_update_user_btn->setGeometry(QRect(30, 130, 191, 71));
        admin_update_user_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_delete_user_btn = new QPushButton(groupBox_2);
        admin_delete_user_btn->setObjectName("admin_delete_user_btn");
        admin_delete_user_btn->setGeometry(QRect(30, 220, 191, 71));
        admin_delete_user_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_view_bank_db_btn = new QPushButton(SelectionMode);
        admin_view_bank_db_btn->setObjectName("admin_view_bank_db_btn");
        admin_view_bank_db_btn->setGeometry(QRect(210, 340, 191, 71));
        admin_view_bank_db_btn->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(0, 0, 127);"));
        admin_stackedWidget->addWidget(SelectionMode);
        AccountNumber = new QWidget();
        AccountNumber->setObjectName("AccountNumber");
        groupBox_3 = new QGroupBox(AccountNumber);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(80, 40, 481, 321));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(255, 5, 230);"));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 120, 401, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_3->addWidget(label_3);

        admin_get_acc_number_edit_line = new QLineEdit(layoutWidget);
        admin_get_acc_number_edit_line->setObjectName("admin_get_acc_number_edit_line");
        admin_get_acc_number_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_3->addWidget(admin_get_acc_number_edit_line);

        admin_do_get_acc_number_btn = new QPushButton(groupBox_3);
        admin_do_get_acc_number_btn->setObjectName("admin_do_get_acc_number_btn");
        admin_do_get_acc_number_btn->setGeometry(QRect(170, 210, 101, 61));
        admin_do_get_acc_number_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);"));
        admin_cancel_get_acc_number_btn = new QPushButton(AccountNumber);
        admin_cancel_get_acc_number_btn->setObjectName("admin_cancel_get_acc_number_btn");
        admin_cancel_get_acc_number_btn->setGeometry(QRect(500, 390, 101, 61));
        admin_cancel_get_acc_number_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(AccountNumber);
        AccountBalance = new QWidget();
        AccountBalance->setObjectName("AccountBalance");
        groupBox_4 = new QGroupBox(AccountBalance);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(70, 50, 481, 321));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color: rgb(255, 5, 230);"));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 120, 401, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_4->addWidget(label_4);

        admin_get_acc_balance_edit_line = new QLineEdit(layoutWidget_2);
        admin_get_acc_balance_edit_line->setObjectName("admin_get_acc_balance_edit_line");
        admin_get_acc_balance_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_4->addWidget(admin_get_acc_balance_edit_line);

        admin_do_get_acc_balance_btn = new QPushButton(groupBox_4);
        admin_do_get_acc_balance_btn->setObjectName("admin_do_get_acc_balance_btn");
        admin_do_get_acc_balance_btn->setGeometry(QRect(170, 210, 101, 61));
        admin_do_get_acc_balance_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);"));
        admin_cancel_get_acc_balance_btn = new QPushButton(AccountBalance);
        admin_cancel_get_acc_balance_btn->setObjectName("admin_cancel_get_acc_balance_btn");
        admin_cancel_get_acc_balance_btn->setGeometry(QRect(540, 400, 101, 61));
        admin_cancel_get_acc_balance_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(AccountBalance);
        TransactionHistory = new QWidget();
        TransactionHistory->setObjectName("TransactionHistory");
        admin_transaction_histoy_table = new QTableWidget(TransactionHistory);
        admin_transaction_histoy_table->setObjectName("admin_transaction_histoy_table");
        admin_transaction_histoy_table->setGeometry(QRect(50, 40, 531, 181));
        layoutWidget_3 = new QWidget(TransactionHistory);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(110, 250, 401, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_5->addWidget(label_5);

        admin_view_transaction_history_edit_line = new QLineEdit(layoutWidget_3);
        admin_view_transaction_history_edit_line->setObjectName("admin_view_transaction_history_edit_line");
        admin_view_transaction_history_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_5->addWidget(admin_view_transaction_history_edit_line);

        admin_do_view_transaction_history_btn = new QPushButton(TransactionHistory);
        admin_do_view_transaction_history_btn->setObjectName("admin_do_view_transaction_history_btn");
        admin_do_view_transaction_history_btn->setGeometry(QRect(250, 300, 121, 51));
        admin_do_view_transaction_history_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);\n"
"color: rgb(12, 12, 12);"));
        admin_cancel_transaction_history_btn = new QPushButton(TransactionHistory);
        admin_cancel_transaction_history_btn->setObjectName("admin_cancel_transaction_history_btn");
        admin_cancel_transaction_history_btn->setGeometry(QRect(540, 400, 101, 61));
        admin_cancel_transaction_history_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(TransactionHistory);
        BankDatabase = new QWidget();
        BankDatabase->setObjectName("BankDatabase");
        admin_ok_view_bank_db_btn = new QPushButton(BankDatabase);
        admin_ok_view_bank_db_btn->setObjectName("admin_ok_view_bank_db_btn");
        admin_ok_view_bank_db_btn->setGeometry(QRect(290, 340, 101, 61));
        admin_ok_view_bank_db_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(3, 3, 3);"));
        admin_bank_db_table = new QTableWidget(BankDatabase);
        admin_bank_db_table->setObjectName("admin_bank_db_table");
        admin_bank_db_table->setGeometry(QRect(40, 40, 591, 281));
        admin_stackedWidget->addWidget(BankDatabase);
        CreateUser = new QWidget();
        CreateUser->setObjectName("CreateUser");
        groupBox_5 = new QGroupBox(CreateUser);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(20, 20, 631, 391));
        groupBox_5->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(136, 0, 255);"));
        admin_password_label = new QLabel(groupBox_5);
        admin_password_label->setObjectName("admin_password_label");
        admin_password_label->setGeometry(QRect(480, 80, 141, 61));
        admin_do_create_user_btn = new QPushButton(groupBox_5);
        admin_do_create_user_btn->setObjectName("admin_do_create_user_btn");
        admin_do_create_user_btn->setGeometry(QRect(250, 320, 101, 61));
        admin_do_create_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);"));
        admin_age_label = new QLabel(groupBox_5);
        admin_age_label->setObjectName("admin_age_label");
        admin_age_label->setGeometry(QRect(440, 200, 151, 31));
        layoutWidget1 = new QWidget(groupBox_5);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 50, 401, 256));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_11);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_2->addWidget(label_20);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        admin_create_username_edit_line = new QLineEdit(layoutWidget1);
        admin_create_username_edit_line->setObjectName("admin_create_username_edit_line");
        admin_create_username_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(admin_create_username_edit_line);

        admin_create_password_edit_line = new QLineEdit(layoutWidget1);
        admin_create_password_edit_line->setObjectName("admin_create_password_edit_line");
        admin_create_password_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        admin_create_password_edit_line->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(admin_create_password_edit_line);

        admin_create_confirm_password_edit_line = new QLineEdit(layoutWidget1);
        admin_create_confirm_password_edit_line->setObjectName("admin_create_confirm_password_edit_line");
        admin_create_confirm_password_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        admin_create_confirm_password_edit_line->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(admin_create_confirm_password_edit_line);

        admin_create_fullname_edit_line = new QLineEdit(layoutWidget1);
        admin_create_fullname_edit_line->setObjectName("admin_create_fullname_edit_line");
        admin_create_fullname_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(admin_create_fullname_edit_line);

        admin_create_age_edit_line = new QLineEdit(layoutWidget1);
        admin_create_age_edit_line->setObjectName("admin_create_age_edit_line");
        admin_create_age_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(admin_create_age_edit_line);

        admin_create_email_edit_line = new QLineEdit(layoutWidget1);
        admin_create_email_edit_line->setObjectName("admin_create_email_edit_line");
        admin_create_email_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(admin_create_email_edit_line);

        admin_create_signature_edit_line = new QLineEdit(layoutWidget1);
        admin_create_signature_edit_line->setObjectName("admin_create_signature_edit_line");
        admin_create_signature_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(admin_create_signature_edit_line);


        horizontalLayout->addLayout(verticalLayout);

        admin_create_password_checkBox = new QCheckBox(groupBox_5);
        admin_create_password_checkBox->setObjectName("admin_create_password_checkBox");
        admin_create_password_checkBox->setGeometry(QRect(440, 90, 31, 26));
        admin_create_confirm_password_checkBox = new QCheckBox(groupBox_5);
        admin_create_confirm_password_checkBox->setObjectName("admin_create_confirm_password_checkBox");
        admin_create_confirm_password_checkBox->setGeometry(QRect(440, 130, 31, 26));
        admin_cancel_create_user_btn = new QPushButton(CreateUser);
        admin_cancel_create_user_btn->setObjectName("admin_cancel_create_user_btn");
        admin_cancel_create_user_btn->setGeometry(QRect(550, 420, 101, 51));
        admin_cancel_create_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(CreateUser);
        UpdateUser = new QWidget();
        UpdateUser->setObjectName("UpdateUser");
        groupBox_6 = new QGroupBox(UpdateUser);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(20, 20, 641, 401));
        groupBox_6->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(1, 26, 255);"));
        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(60, 40, 481, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_6->addWidget(label_12);

        admin_update_acc_number_edit_line = new QLineEdit(layoutWidget_4);
        admin_update_acc_number_edit_line->setObjectName("admin_update_acc_number_edit_line");
        admin_update_acc_number_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_6->addWidget(admin_update_acc_number_edit_line);

        admin_do_update_user_btn = new QPushButton(groupBox_6);
        admin_do_update_user_btn->setObjectName("admin_do_update_user_btn");
        admin_do_update_user_btn->setGeometry(QRect(280, 320, 101, 61));
        admin_do_update_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 124, 255);"));
        admin_new_password_label = new QLabel(groupBox_6);
        admin_new_password_label->setObjectName("admin_new_password_label");
        admin_new_password_label->setGeometry(QRect(490, 250, 141, 20));
        admin_new_confirm_password_label = new QLabel(groupBox_6);
        admin_new_confirm_password_label->setObjectName("admin_new_confirm_password_label");
        admin_new_confirm_password_label->setGeometry(QRect(490, 290, 141, 20));
        admin_update_age_label = new QLabel(groupBox_6);
        admin_update_age_label->setObjectName("admin_update_age_label");
        admin_update_age_label->setGeometry(QRect(450, 139, 181, 21));
        layoutWidget2 = new QWidget(groupBox_6);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 90, 421, 219));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_16);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_17);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_18);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_19);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_14);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        verticalLayout_3->addWidget(label_15);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        admin_update_fullname_edit_line = new QLineEdit(layoutWidget2);
        admin_update_fullname_edit_line->setObjectName("admin_update_fullname_edit_line");
        admin_update_fullname_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout_4->addWidget(admin_update_fullname_edit_line);

        admin_update_age_edit_line = new QLineEdit(layoutWidget2);
        admin_update_age_edit_line->setObjectName("admin_update_age_edit_line");
        admin_update_age_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout_4->addWidget(admin_update_age_edit_line);

        admin_update_email_edit_line = new QLineEdit(layoutWidget2);
        admin_update_email_edit_line->setObjectName("admin_update_email_edit_line");
        admin_update_email_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        verticalLayout_4->addWidget(admin_update_email_edit_line);

        admin_update_old_password_edit_line = new QLineEdit(layoutWidget2);
        admin_update_old_password_edit_line->setObjectName("admin_update_old_password_edit_line");
        admin_update_old_password_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        admin_update_old_password_edit_line->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(admin_update_old_password_edit_line);

        admin_update_new_password_edit_line = new QLineEdit(layoutWidget2);
        admin_update_new_password_edit_line->setObjectName("admin_update_new_password_edit_line");
        admin_update_new_password_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        admin_update_new_password_edit_line->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(admin_update_new_password_edit_line);

        admin_update_confirm_password_edit_line = new QLineEdit(layoutWidget2);
        admin_update_confirm_password_edit_line->setObjectName("admin_update_confirm_password_edit_line");
        admin_update_confirm_password_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        admin_update_confirm_password_edit_line->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(admin_update_confirm_password_edit_line);


        horizontalLayout_2->addLayout(verticalLayout_4);

        admin_update_new_password_checkBox = new QCheckBox(groupBox_6);
        admin_update_new_password_checkBox->setObjectName("admin_update_new_password_checkBox");
        admin_update_new_password_checkBox->setGeometry(QRect(450, 240, 31, 26));
        admin_update_current_password_checkBox = new QCheckBox(groupBox_6);
        admin_update_current_password_checkBox->setObjectName("admin_update_current_password_checkBox");
        admin_update_current_password_checkBox->setGeometry(QRect(450, 210, 31, 26));
        admin_update_confirm_password_checkBox = new QCheckBox(groupBox_6);
        admin_update_confirm_password_checkBox->setObjectName("admin_update_confirm_password_checkBox");
        admin_update_confirm_password_checkBox->setGeometry(QRect(450, 280, 31, 26));
        admin_cancel_update_user_btn = new QPushButton(UpdateUser);
        admin_cancel_update_user_btn->setObjectName("admin_cancel_update_user_btn");
        admin_cancel_update_user_btn->setGeometry(QRect(550, 430, 101, 41));
        admin_cancel_update_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(UpdateUser);
        DeleteUser = new QWidget();
        DeleteUser->setObjectName("DeleteUser");
        groupBox_7 = new QGroupBox(DeleteUser);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(90, 60, 471, 301));
        groupBox_7->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);"));
        layoutWidget_5 = new QWidget(groupBox_7);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 130, 411, 32));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_5);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 206, 239);"));

        horizontalLayout_7->addWidget(label_13);

        admin_delete_acc_number_edit_line = new QLineEdit(layoutWidget_5);
        admin_delete_acc_number_edit_line->setObjectName("admin_delete_acc_number_edit_line");
        admin_delete_acc_number_edit_line->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));

        horizontalLayout_7->addWidget(admin_delete_acc_number_edit_line);

        admin_do_delete_user_btn = new QPushButton(groupBox_7);
        admin_do_delete_user_btn->setObjectName("admin_do_delete_user_btn");
        admin_do_delete_user_btn->setGeometry(QRect(170, 180, 101, 61));
        admin_do_delete_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 4);\n"
"color: rgb(7, 7, 7);"));
        admin_delete_label = new QLabel(groupBox_7);
        admin_delete_label->setObjectName("admin_delete_label");
        admin_delete_label->setGeometry(QRect(70, 69, 341, 31));
        admin_cancel_delete_user_btn = new QPushButton(DeleteUser);
        admin_cancel_delete_user_btn->setObjectName("admin_cancel_delete_user_btn");
        admin_cancel_delete_user_btn->setGeometry(QRect(520, 410, 101, 41));
        admin_cancel_delete_user_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(12, 12, 12);"));
        admin_stackedWidget->addWidget(DeleteUser);

        gridLayout->addWidget(admin_stackedWidget, 0, 0, 1, 1);


        retranslateUi(AdminWindow);

        admin_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Dialog", nullptr));
        admin_logout_btn->setText(QCoreApplication::translate("AdminWindow", "Logout", nullptr));
        groupBox->setTitle(QString());
        admin_get_acc_number_btn->setText(QCoreApplication::translate("AdminWindow", "Get Account Number", nullptr));
        admin_view_acc_balance_btn->setText(QCoreApplication::translate("AdminWindow", "View Account Balance", nullptr));
        admin_view_trans_history_btn->setText(QCoreApplication::translate("AdminWindow", "View Transaction History", nullptr));
        groupBox_2->setTitle(QString());
        admin_create_new_user_btn->setText(QCoreApplication::translate("AdminWindow", "Create New User", nullptr));
        admin_update_user_btn->setText(QCoreApplication::translate("AdminWindow", "Update User", nullptr));
        admin_delete_user_btn->setText(QCoreApplication::translate("AdminWindow", "Delete User", nullptr));
        admin_view_bank_db_btn->setText(QCoreApplication::translate("AdminWindow", "View Bank Database", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AdminWindow", "Get Account Number", nullptr));
        label_3->setText(QCoreApplication::translate("AdminWindow", "Enter username", nullptr));
        admin_do_get_acc_number_btn->setText(QCoreApplication::translate("AdminWindow", "OK", nullptr));
        admin_cancel_get_acc_number_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AdminWindow", "Get Account Balance", nullptr));
        label_4->setText(QCoreApplication::translate("AdminWindow", "Enter Account Number", nullptr));
        admin_do_get_acc_balance_btn->setText(QCoreApplication::translate("AdminWindow", "OK", nullptr));
        admin_cancel_get_acc_balance_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
        label_5->setText(QCoreApplication::translate("AdminWindow", "Enter Account Number", nullptr));
        admin_do_view_transaction_history_btn->setText(QCoreApplication::translate("AdminWindow", "View", nullptr));
        admin_cancel_transaction_history_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
        admin_ok_view_bank_db_btn->setText(QCoreApplication::translate("AdminWindow", "OK", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AdminWindow", "Create New User", nullptr));
        admin_password_label->setText(QString());
        admin_do_create_user_btn->setText(QCoreApplication::translate("AdminWindow", "Create", nullptr));
        admin_age_label->setText(QString());
        label_6->setText(QCoreApplication::translate("AdminWindow", "Enter username", nullptr));
        label_7->setText(QCoreApplication::translate("AdminWindow", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("AdminWindow", "Confirm Password", nullptr));
        label_9->setText(QCoreApplication::translate("AdminWindow", "Full Name", nullptr));
        label_10->setText(QCoreApplication::translate("AdminWindow", "Age", nullptr));
        label_11->setText(QCoreApplication::translate("AdminWindow", "Email", nullptr));
        label_20->setText(QCoreApplication::translate("AdminWindow", "Signature", nullptr));
        admin_create_password_checkBox->setText(QString());
        admin_create_confirm_password_checkBox->setText(QString());
        admin_cancel_create_user_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("AdminWindow", "Update User", nullptr));
        label_12->setText(QCoreApplication::translate("AdminWindow", "Enter Account Number", nullptr));
        admin_do_update_user_btn->setText(QCoreApplication::translate("AdminWindow", "Update", nullptr));
        admin_new_password_label->setText(QString());
        admin_new_confirm_password_label->setText(QString());
        admin_update_age_label->setText(QString());
        label_16->setText(QCoreApplication::translate("AdminWindow", "Full Name(optional)", nullptr));
        label_17->setText(QCoreApplication::translate("AdminWindow", "Age(optional)", nullptr));
        label_18->setText(QCoreApplication::translate("AdminWindow", "Email(optional)", nullptr));
        label_19->setText(QCoreApplication::translate("AdminWindow", "Current Password*", nullptr));
        label_14->setText(QCoreApplication::translate("AdminWindow", "New Password(optional)", nullptr));
        label_15->setText(QCoreApplication::translate("AdminWindow", "Confirm Password", nullptr));
        admin_update_new_password_checkBox->setText(QString());
        admin_update_current_password_checkBox->setText(QString());
        admin_update_confirm_password_checkBox->setText(QString());
        admin_cancel_update_user_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("AdminWindow", "Delete User", nullptr));
        label_13->setText(QCoreApplication::translate("AdminWindow", "Enter Account Number", nullptr));
        admin_do_delete_user_btn->setText(QCoreApplication::translate("AdminWindow", "Delete", nullptr));
        admin_delete_label->setText(QString());
        admin_cancel_delete_user_btn->setText(QCoreApplication::translate("AdminWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *casa_label;
    QPushButton *login_login_btn;
    QPushButton *login_exit_btn;
    QCheckBox *password_checkBox;
    QLabel *login_pass_label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *login_username_editLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *login_password_editLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        casa_label = new QLabel(groupBox);
        casa_label->setObjectName("casa_label");
        casa_label->setGeometry(QRect(10, 30, 761, 281));
        login_login_btn = new QPushButton(groupBox);
        login_login_btn->setObjectName("login_login_btn");
        login_login_btn->setGeometry(QRect(320, 440, 91, 41));
        login_exit_btn = new QPushButton(groupBox);
        login_exit_btn->setObjectName("login_exit_btn");
        login_exit_btn->setGeometry(QRect(670, 480, 91, 41));
        password_checkBox = new QCheckBox(groupBox);
        password_checkBox->setObjectName("password_checkBox");
        password_checkBox->setGeometry(QRect(640, 390, 131, 26));
        login_pass_label = new QLabel(groupBox);
        login_pass_label->setObjectName("login_pass_label");
        login_pass_label->setGeometry(QRect(10, 350, 131, 121));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 350, 451, 69));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        login_username_editLine = new QLineEdit(layoutWidget);
        login_username_editLine->setObjectName("login_username_editLine");

        horizontalLayout->addWidget(login_username_editLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        login_password_editLine = new QLineEdit(layoutWidget);
        login_password_editLine->setObjectName("login_password_editLine");
        login_password_editLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(login_password_editLine);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        casa_label->setText(QString());
        login_login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        login_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        password_checkBox->setText(QCoreApplication::translate("MainWindow", "Show Password", nullptr));
        login_pass_label->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "User name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

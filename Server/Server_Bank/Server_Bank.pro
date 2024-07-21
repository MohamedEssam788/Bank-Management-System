QT = core
QT += network
CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Command.cpp \
        CreateNewUserCommand.cpp \
        DeleteUserCommand.cpp \
        EmailSender.cpp \
        GetAcctNumberCommand.cpp \
        Invoker.cpp \
        JsonHandler.cpp \
        Log.cpp \
        LoginCommand.cpp \
        LogoutCommand.cpp \
        MakeTransactionCommand.cpp \
        Receiver.cpp \
        RequestDecryption.cpp \
        Server.cpp \
        ServerHandler.cpp \
        TransferAmountCommand.cpp \
        UpdateUserCommand.cpp \
        ViewAccBalanceCommand.cpp \
        ViewBankDataBaseCommand.cpp \
        ViewTransactionHistoryCommand.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Command.h \
    CreateNewUserCommand.h \
    DeleteUserCommand.h \
    EmailSender.h \
    GetAcctNumberCommand.h \
    Invoker.h \
    JsonHandler.h \
    Log.h \
    LoginCommand.h \
    LogoutCommand.h \
    MakeTransactionCommand.h \
    Receiver.h \
    RequestDecryption.h \
    Server.h \
    ServerHandler.h \
    TransferAmountCommand.h \
    UpdateUserCommand.h \
    ViewAccBalanceCommand.h \
    ViewBankDataBaseCommand.h \
    ViewTransactionHistoryCommand.h

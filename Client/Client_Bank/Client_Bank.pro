QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminWindow.cpp \
    Client.cpp \
    LocalHost.cpp \
    RealRequest.cpp \
    RequestEncryption.cpp \
    SentRequest.cpp \
    SignatureEncryption.cpp \
    Table.cpp \
    UserWindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminWindow.h \
    Client.h \
    LocalHost.h \
    RealRequest.h \
    RequestEncryption.h \
    SentRequest.h \
    SignatureEncryption.h \
    Table.h \
    UserWindow.h \
    mainwindow.h

FORMS += \
    adminwindow.ui \
    mainwindow.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recources.qrc
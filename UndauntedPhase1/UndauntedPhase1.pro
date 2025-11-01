QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    board.cpp \
    boardscreen.cpp \
    cell.cpp \
    loginscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    splashscreen.cpp

HEADERS += \
    board.h \
    boardscreen.h \
    cell.h \
    loginscreen.h \
    mainwindow.h \
    splashscreen.h

FORMS += \
    boardscreen.ui \
    loginscreen.ui \
    mainwindow.ui \
    splashscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

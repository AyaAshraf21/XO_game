QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    XOmanage.cpp \
    computerplayer.cpp \
    main.cpp \
    play_2player.cpp \
    play_vscomputer.cpp \
    twoplayer.cpp \
    win_or_lose.cpp \
    xoproject.cpp

HEADERS += \
    XOmanage.h \
    computerplayer.h \
    play_2player.h \
    play_vscomputer.h \
    twoplayer.h \
    win_or_lose.h \
    xoproject.h

FORMS += \
    XOmanage.ui \
    computerplayer.ui \
    play_2player.ui \
    play_vscomputer.ui \
    twoplayer.ui \
    win_or_lose.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

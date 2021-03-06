#-------------------------------------------------
#
# Project created by QtCreator 2017-12-13T19:54:01
#
#-------------------------------------------------

QT       += core gui network
QT += multimedia
QT += multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EasyLinkerIot_qt5
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    playmusicwindow.cpp \
    easylinkerclient.cpp

HEADERS += \
        mainwindow.h \
    playmusicwindow.h \
    easylinkerclient.h

FORMS += \
        mainwindow.ui \
    playmusicwindow.ui

RESOURCES += \
    picture.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libs/mqtt/lib/ -lqmqtt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libs/mqtt/lib/ -lqmqttd

INCLUDEPATH += $$PWD/libs/mqtt/include
DEPENDPATH += $$PWD/libs/mqtt/include
INCLUDEPATH += $$PWD/libs/mqtt
DEPENDPATH += $$PWD/libs/mqtt

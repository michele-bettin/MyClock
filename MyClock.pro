QT       += core gui multimedia



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Models/MyParallelJob.cpp \
    Models/callbacktimer.cpp \
    Models/cronometro.cpp \
    Models/data.cpp \
    Models/orario.cpp \
    Models/orologio.cpp \
    Models/sveglia.cpp \
    Models/timer.cpp \
    clockviewer.cpp \
    main.cpp

HEADERS += \
    Models/MyParallelJob.h \
    Models/callbacktimer.h \
    Models/cronometro.h \
    Models/data.h \
    Models/orario.h \
    Models/orologio.h \
    Models/sveglia.h \
    Models/timer.h \
    clockviewer.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    res.qrc

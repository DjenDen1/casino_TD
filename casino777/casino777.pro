QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mainwindowautomat.cpp \
    mainwindowblackjack.cpp \
    mainwindowgame1.cpp \
    mainwindowinfoversions.cpp \
    mainwindowracing.cpp \
    mainwindowroullete.cpp \
    mainwindowthreecardpoker.cpp \
    settings.cpp

HEADERS += \
    mainwindow.h \
    mainwindowautomat.h \
    mainwindowblackjack.h \
    mainwindowgame1.h \
    mainwindowinfoversions.h \
    mainwindowracing.h \
    mainwindowroullete.h \
    mainwindowthreecardpoker.h \
    settings.h

FORMS += \
    mainwindow.ui \
    mainwindowautomat.ui \
    mainwindowblackjack.ui \
    mainwindowgame1.ui \
    mainwindowinfoversions.ui \
    mainwindowracing.ui \
    mainwindowroullete.ui \
    mainwindowthreecardpoker.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resource/1693109236_grizly-club-p-kartinki-znachok-nastroek-bez-fona-40.png \
    resource/1_h3FiS2hIK8iggWV00geHDQ.jpg \
    resource/3212da26973781.5635e97d9ff95.jpg \
    resource/408-20220208_234837-768x769.png \
    resource/89bef428-2f1e-5f4b-8bd1-4e4da2ded46d.jpg \
    resource/automat.jpg \
    resource/blackjack.jpg \
    resource/images.jpg \
    resource/practice.png \
    resource/racinghorse.jpg \
    resource/vnedrenie.png.pagespeed.ce.rntvjoGJ6p.png \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/casino-slots-3_fk_6ygn_.mp3 \
    sounds/jg-032316-sfx-shuffling-poker-chips-nervously.mp3

RESOURCES += \
    source.qrc

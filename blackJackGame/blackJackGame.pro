TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Deck.cpp \
        Game.cpp \
        card.cpp \
        hand.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    Deck.h \
    Game.h \
    card.h \
    hand.h \
    player.h

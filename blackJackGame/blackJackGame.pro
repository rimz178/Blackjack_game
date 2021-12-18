TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Dealer.cpp \
        Deck.cpp \
        card.cpp \
        hand.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    Dealer.h \
    Deck.h \
    card.h \
    hand.h \
    player.h

#ifndef DECK_H
#define DECK_H

#include <card.h>


// set max hand cards and max deck cards
const unsigned int MAX_HANDS_CARDS = 10;
const unsigned int MAX_DECKS_CARDS = 52;

class CardDeck {
public:
    CardDeck(unsigned int dPos = 0);
    ~CardDeck();
    void ClearedDeck();
    void PopulateDeck();
    void ShuffleCard();
    bool CardDeckIsEmpty();
    void AddCard(Card pCard);
    unsigned int CurrentPos();
    Card GiveCard();



private:
    unsigned int deckCurrentt;
    Card deckCards[MAX_DECKS_CARDS];

};

#endif // DECK_H

#ifndef DECK_H
#define DECK_H

#include <card.h>
#include <vector>

// set max hand cards and max deck cards
const unsigned int MAX_HANDS_CARDS = 10;
const unsigned int MAX_DECKS_CARDS = 52;

class CardDeck {
public:
    CardDeck(unsigned int dPos = 0);
    ~CardDeck();
    void ClearedDeck();
    void PopulateDeck();
    void Shuffle();
    bool CardDeckIsEmpty();
    void AddCardToDeck(Card pCard);
    unsigned int CurrentPosition();
    Card GiveCardToPlayer();



private:
    unsigned int deckCurrentPos;
     Card deckCards[MAX_DECKS_CARDS];

};

#endif // DECK_H

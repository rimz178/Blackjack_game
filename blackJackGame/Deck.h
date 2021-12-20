#ifndef DECK_H
#define DECK_H

#include <card.h>
#include <vector>
const unsigned int MAX_HAND_CARDS = 10;
const unsigned int MAX_DECK_CARDS = 52;

class CardDeck {
public:
    CardDeck(unsigned int dPos = 0);
    ~CardDeck();
    void ClearDeck();
    void PopulateDeck();
    void Shuffle();
    bool CardDeckIsEmpty();
    void AddCardToDeck(Card pCard);
    unsigned int CurrentPosition();
    Card GiveCardToPlayer();


   // void Print();
private:
    unsigned int deckCurrentPos;
     Card deckCards[MAX_DECK_CARDS];

};

#endif // DECK_H

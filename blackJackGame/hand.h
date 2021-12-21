#ifndef HAND_H
#define HAND_H
#include <card.h>
#include <Deck.h>

class Hand

{
public:
    Hand(unsigned int hPos= 0, unsigned int pPos=0);
    ~Hand();
    void ClearHand();
    unsigned int GetHandTotal() const;
    unsigned int GetHandLastPosition()const;
    void FlipFirstCardI();
    bool HandIsEmpty();
    bool HandIsFull();
    Card RetrieveCards();
    void AddCardToHand(Card handCard);


private:
    unsigned int handCurrentPos;
    unsigned int playerCardPos;
    Card handCards[MAX_HANDS_CARDS];
};

#endif // HAND_H

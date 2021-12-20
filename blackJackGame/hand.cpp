#include "hand.h"
#include <card.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;


Hand::Hand(unsigned int hPos, unsigned int pPos) :handCurrentPos(hPos),playerCardPos(pPos)
{

}
Hand::~ Hand(){

}

void Hand::ClearHand() {

    playerCardPos = handCurrentPos = 0;
}

void Hand::FlipFirstCardI() {

    handCards[0].FlipCard();
}

bool Hand:: HandIsEmpty() {

    return (handCurrentPos <= 0);
}

bool Hand:: HandIsFull() {

    return (handCurrentPos >= MAX_HAND_CARDS);

}

Card Hand::RetrieveCard() {

    return handCards[playerCardPos++];

}

void Hand:: AddCardToHand(Card handCard) {

    if(!HandIsFull()) {

        handCards[handCurrentPos++]=handCard;
    }
}

unsigned int Hand::GetHandTotal() const {
    if (handCards[0].GetCardValue() == 0)
            return 0;

        int total = 0;


        for (int i = GetHandLastPosition(); i >= 0; i--)
        {
            total += handCards[i].GetCardValue();
        }


        bool cardHasAce = false;
        for (int i = GetHandLastPosition(); i >= 0; i--)
        {
            if (handCards[i].GetCardValue() == Card::Ace)
                cardHasAce = true;
        }


        if (cardHasAce && total <= 11)
            total += 10;

        return total;
    }

    // Get the hand's last position
    unsigned int Hand::GetHandLastPosition() const
    {
        return handCurrentPos - 1;
    }










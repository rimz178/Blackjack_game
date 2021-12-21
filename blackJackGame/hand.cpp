#include "hand.h"
#include <card.h>
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;


Hand::Hand(unsigned int hPos, unsigned int pPos):handCurrentPos(hPos),playerCardPos(pPos)
{

}
//empty Hand class destructor
Hand::~ Hand(){

}
//This function reset hand
void Hand::ClearHand() {

    playerCardPos = handCurrentPos = 0;
}
// This function flip dealer first card
void Hand::FlipFirstCardI() {

    handCards[0].FlipCard();
}
//This function check if hand is empty
bool Hand:: HandIsEmpty() {

    return (handCurrentPos <= 0);
}
//This function check if hand is full
bool Hand:: HandIsFull() {

    return (handCurrentPos >= MAX_HANDS_CARDS);

}

// This function add a card from deck
void Hand:: AddCardToHand(Card handCard) {

    if(!HandIsFull()) {

        handCards[handCurrentPos++]=handCard;
    }
}
// This function retrieve card from hand
Card Hand::RetrieveCards() {

    return handCards[playerCardPos++];

}
// This function get hand total value
unsigned int Hand::GetHandTotal() const {
    if (handCards[0].GetCardValue() == 0)
            return 0;

        int total = 0;

        // this start from top most card
        for (int i = GetHandLastPosition(); i >= 0; i--) {

            total += handCards[i].GetCardValue();
        }


        bool cardHasAce = false;
        for (int i = GetHandLastPosition(); i >= 0; i--) {

            if (handCards[i].GetCardValue() == Card::Ace)
                cardHasAce = true;
        }

        /* This check if we have Ace and ou total is <=11
         *  Then we make the ace egual to 11
                */
        if (cardHasAce && total <= 11)
            total += 10;

        return total;
    }
    //this function get the hand's last position
    unsigned int Hand::GetHandLastPosition() const {

        return handCurrentPos - 1;
    }










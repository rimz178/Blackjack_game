#include "card.h"
#include <string>
#include <iostream>

Card::Card(Ranks r, Suits s, bool cardFaceUp):  cardRank(r), cardSuit(s), cardIsFaceUp(cardFaceUp) {

}
//empty function
Card::~ Card(){

}
// if cards value is bigger than 10 returns value of 10
unsigned int Card:: GetCardValue() const {
    int cardValue = 0;

    if(cardIsFaceUp) {
        cardValue = cardRank;

        if(cardValue > 10 )
            cardValue = 10;
    }
    return cardValue;
}
// hiding first card for dealer.
void Card::FlipCard() {

    cardIsFaceUp = !cardIsFaceUp;
}
// checking if the card facing up.
bool Card::GetFace() {
    return cardIsFaceUp;
}




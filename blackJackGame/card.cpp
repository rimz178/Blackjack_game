#include "card.h"
#include <string>
#include <iostream>

Card::Card(Ranks r, Suits s, bool cardFaceUp):  cardRank(r), cardSuit(s), cardIsFaceUp(cardFaceUp) {

}

Card::~ Card(){

}

unsigned int Card:: GetCardValue() const {
    int cardValue = 0;

    if(cardIsFaceUp) {
        cardValue = cardRank;

        if(cardValue > 10 )
            cardValue=10;
    }
    return cardValue;
}

void Card::FlipCard() {

    cardIsFaceUp = !cardIsFaceUp;
}

bool Card::GetFace() {
    return cardIsFaceUp;
}


/* old code!! don't delete
Card::Card(Ranks RANK, Suits SUIT)

    : Suit(SUIT),
      Rank(RANK)
{

}

Card::~Card() {

    //--empty----
}

Card::Ranks Card::GetRank() {
    return Rank;
}

Card::Suits Card::GetSuit() {
    return Suit;
}

int Card::GetFaceValue() {

    if(Rank <= Ten)
        return static_cast<int>(Rank);

    if (Rank <= King)
        return 10;

   return 11;
}
void Card::Print() {

    if (Rank <= Ten)
        std::cout<<Rank;

    else if (Rank == Jack)
        std::cout<< "Jack";
    else if (Rank == Queen)
        std::cout<< "Queen";
    else if (Rank == King)
        std::cout<< "King";
    else
        std::cout<< "Ace";

    if (Suit == Heart)
        std::cout << " Heart";
    else if (Suit ==Diamonds )
        std::cout << " Diamnond";
    else if (Suit ==Clubs )
        std::cout << " Club";
    else if (Suit ==Spades )
        std::cout << " Spade";
}
*/

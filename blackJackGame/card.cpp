#include "card.h"
#include <string>
#include <iostream>

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

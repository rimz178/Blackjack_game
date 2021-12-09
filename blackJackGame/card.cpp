#include "card.h"
#include <string>
#include <iostream>

Card::Card(Ranks RANK, Suits SUIT)

    : Suit(SUIT),
      Rank(RANK)
{
}
Card::~Card()
{
}

Card::Ranks Card::GetRank()
{
    return Rank;
}
Card::Suits Card::GetSuit()
{
    return Suit;
}

int Card::GetFaceValue()
{
    if(Rank <= Ten)
        return static_cast<int>(Rank);

    if (Rank <= King)
        return 10;

   return 11;
}
void Card::Print()
{   if (Rank <= Ten)
        std::cout<<Rank;
    else if (Rank == Jack)
        std::cout<< "J ";
    else if (Rank == Queen)
        std::cout<< "Q ";
    else if (Rank == King)
        std::cout<< "K ";
    else
        std::cout<< " A ";

    if (Suit == Heart)
        std::cout << " H ";
    else if (Suit ==Diamonds )
        std::cout << " D ";
    else if (Suit ==Clubs )
        std::cout << " C ";
    else if (Suit ==Spades )
        std::cout << " S ";
}

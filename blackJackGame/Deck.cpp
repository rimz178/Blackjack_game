#include "Deck.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;


CardDeck::CardDeck(unsigned int dPos) : deckCurrentPos(dPos) {

    ClearDeck();
    PopulateDeck();
    Shuffle();
}
CardDeck::~CardDeck(){

}

unsigned int CardDeck::CurrentPosition() {

    return deckCurrentPos;
}

void CardDeck::ClearDeck() {

    deckCurrentPos = 0;
}
void CardDeck::PopulateDeck() {

    for (int s  = Card::Heart; s <= Card::Spades; s++) {

        for (int r = Card::Ace; r <= Card::King; r++) {

            AddCardToDeck(Card(static_cast<Card::Ranks>(r),
                               static_cast<Card::Suits>(s)));
      }
   }
}
void CardDeck::Shuffle(){
    srand(static_cast<unsigned int>(time(0)));
        for (unsigned int i = 0; i < (MAX_DECK_CARDS - 1); i++)
        {
            int r = i + (rand() % (MAX_DECK_CARDS - i));
            Card tempCard = deckCards[i];
            deckCards[i] = deckCards[r];
            deckCards[r] = tempCard;
        }
    }



bool CardDeck::CardDeckIsEmpty() {

    return (deckCurrentPos <=0);
}

void CardDeck::AddCardToDeck(Card pCard) {

    deckCards[deckCurrentPos++]= pCard;
}

Card CardDeck::GiveCardToPlayer() {

    if(!CardDeckIsEmpty())

        return deckCards[--deckCurrentPos];
     else {
            deckCurrentPos =MAX_DECK_CARDS;
            Shuffle();
            return deckCards[--deckCurrentPos];
        }

}








/*old code don't delete yet!!
CardDeck::CardDeck()
    : deck() {

    deck.reserve(52);

    for (Card::Ranks r = Card::Two; r <= Card::Ace; r=static_cast<Card::Ranks>(static_cast<int>(r)+1)) {
         for (Card::Suits s = Card::Heart; s <= Card::Spades; s =static_cast<Card::Suits>(static_cast<int>(s)+1)){
            deck.push_back(  new Card(r, s));
           //  card -> Print();
            // std::cout<<std::endl;
        }
    }
}

CardDeck::~CardDeck() {

    for (Card * card : deck){
        delete  card;
    }
    deck.clear();
}
void CardDeck::Print() {

    for (Card* card : deck) {
        card -> Print();
        std::cout<< " ";
    }
}
void CardDeck::Shuffle() {

    std::random_shuffle(deck.begin(), deck.end());
}
*/

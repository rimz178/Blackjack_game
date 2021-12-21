#include "Deck.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;


CardDeck::CardDeck(unsigned int dPos) : deckCurrentt(dPos) {

    ClearedDeck();
    PopulateDeck();
    ShuffleCard();
}
//empty destructor
CardDeck::~CardDeck(){

}
// This set current position in the array
unsigned int CardDeck::CurrentPos() {

    return deckCurrentt;
}
//This reset position in the array
void CardDeck::ClearedDeck() {

    deckCurrentt = 0;
}
// This function create an array of card objects
void CardDeck::PopulateDeck() {

    for (int s  = Card::Heart; s <= Card::Spades; s++) {

        for (int r = Card::Ace; r <= Card::King; r++) {

            AddCard(Card(static_cast<Card::Ranks>(r),
                               static_cast<Card::Suits>(s)));
      }
   }
}
// This function shuffle the array of cards
void CardDeck::ShuffleCard(){
    srand(static_cast<unsigned int>(time(0)));
        for (unsigned int i = 0; i < (MAX_DECKS_CARDS - 1); i++) {
            int r = i + (rand()  % (MAX_DECKS_CARDS - i));
            Card tempCard = deckCards[i];
            deckCards[i] = deckCards[r];
            deckCards[r] = tempCard;
        }
    }


// This  function check if we have empty deck
bool CardDeck::CardDeckIsEmpty() {

    return (deckCurrentt <= 0);
}
// This function helper function to PopulateDeck()
void CardDeck::AddCard(Card pCard) {

    deckCards[deckCurrentt++]= pCard;
}
// This function start dealing card from the last index
Card CardDeck::GiveCard() {

    if(!CardDeckIsEmpty())

        return deckCards[--deckCurrentt];
     else {
        // then when the cards rans out re-shuffle the deck
        deckCurrentt =MAX_DECKS_CARDS;
        ShuffleCard();
        return deckCards[--deckCurrentt];
     }

}


#include "Deck.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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

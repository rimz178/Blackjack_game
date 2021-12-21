#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
#include <vector>

using namespace std;
class Card {

public:
    //Create ranks.
    enum Ranks {
      Ace =1,
      Two  ,
      Three ,
      Four ,
      Five ,
      Six ,
      Seven ,
      Eight ,
      Nine ,
      Ten ,
      Jack ,
      Queen ,
      King ,
     };

    // Create suits.
      enum Suits {
          Heart = 3,
          Diamonds,
          Clubs,
          Spades,
       };

    friend ostream& operator<< (ostream& os, const Card Cardss);
    Card(Ranks r = Ace, Suits s = Spades, bool cardfaceup=true);
     ~Card();
    unsigned int GetCardValue() const;
    void FlipCard();

    bool GetFace();




private:
    Ranks cardRank;
    Suits cardSuit;
    bool cardIsFaceUp;
};

#endif // CARD_H

#ifndef CARD_H
#define CARD_H
//#include<iostream>
//#include<string>



class Card
{
public:
    // Create suits.
      enum Suits
      {
          Heart = 3,
          Diamonds,
          Clubs,
          Spades,
       };
      //Create ranks.
      enum Ranks
      {
        Two = 2,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King,
        Ace,
       };


    Card(Ranks RANK,Suits SUIT);
    virtual ~Card();

    Suits GetSuit();
    Ranks GetRank();

    virtual int GetFaceValue();

    void Print();



private:

   Suits Suit;
   Ranks Rank;
};

#endif // CARD_H

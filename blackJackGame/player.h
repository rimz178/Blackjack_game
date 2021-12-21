#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include <vector>
#include <card.h>
#include <hand.h>
#include<string>
using namespace std;

class Player {

public:
    friend ostream& operator << (ostream& os, const Player aPlayer);

    Player(const string UserName);
    Player();
   ~Player();

    void clear();
    string  getPlayerName() const;
    void setPlayerName(string name);
    bool isEmpty();
    bool isHitting() const;
    void FlipDealerFirstCard();
    void ReceiveCard(Card PlayerCard);
    bool isBusted() const;
    unsigned int getCardTotal() const;
    unsigned int getPosition() const;



private:
   string UserName;
   Card playerCard;
   Hand playerHand;


};

#endif // PLAYER_H

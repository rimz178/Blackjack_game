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

    Player();

   ~Player();

 // void clear();

    void setPlayerName(string nam);

    string  getPlayerName();
    //vector<Card> getHand(void);

private:
   string UserName;
 //Card playerCard;

   //vector<Card> hand;

};

#endif // PLAYER_H

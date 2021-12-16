#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include <vector>
#include <card.h>

#include<string>
using namespace std;
class Player
{
public:

    Player();
    ~Player();
    void setPlayerName(string nam);

    string  getPlayerName();
    vector<Card> getHand(void);



private:
   string UserName;
   vector<Card> hand;

};

#endif // PLAYER_H

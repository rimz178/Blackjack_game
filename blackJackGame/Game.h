#ifndef GAME_H
#define GAME_H
#include<iostream>
#include<string>
#include <Deck.h>
#include <player.h>


using namespace std;

class Game {

public:
    Game(string set );
    ~Game();
    void IfDeckEmpty();
    void playGames();
    void ShowTables();
    void WhoWinners();

    void clearCam();

private:
    string name;
    CardDeck *GameDecks;
    Player dealer;
    Player player1;
};

#endif // GAME_H

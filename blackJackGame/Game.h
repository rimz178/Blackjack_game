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
    void playGame();
    void ShowTables();
    void AnnounceWinner();
    void IfDeckIsEmpty();
    void clearGame();

private:
    string name;
    CardDeck *gameDeck;
    Player dealer;
    Player player1;
};

#endif // GAME_H

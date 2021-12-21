#include "Game.h"
#include<iostream>
#include<string>
#include <Deck.h>
#include <player.h>
using namespace std;

Game::Game(string set ): name(set) {

    gameDeck = new CardDeck(0);
    player1.setPlayerName(name);

}
// This function game destructor
Game:: ~ Game() {

    delete gameDeck;
}
// This function make Blackjack rules/logic
void Game:: playGame() {

    //this check always if we have empty deck
    if (gameDeck -> CardDeckIsEmpty()) {

        IfDeckIsEmpty();
    }
    else {
       // This deal 2 cards at first
      for(int i = 0; i < 2; i++) {

          player1.ReceiveCard(gameDeck ->GiveCardToPlayer());
          dealer.ReceiveCard(gameDeck -> GiveCardToPlayer());
      }

      // This hide dealer's first card
      dealer.FlipDealerFirstCard();

      // This show everyone cards
      ShowTables();
    }
    // This give more cards from deck
    while (!player1.isBusted() && player1.isHitting()){

        if (gameDeck -> CardDeckIsEmpty()) {

            IfDeckIsEmpty();
        }
        else {
            player1.ReceiveCard(gameDeck -> GiveCardToPlayer());
            ShowTables();
        }
    }
    // This show dealer's first card
    dealer.FlipDealerFirstCard();

    //  dealer's turn pick  a card
    while (!dealer.isBusted() && dealer.isHitting()) {

        if(gameDeck ->CardDeckIsEmpty()) {

            IfDeckIsEmpty();

        }


        dealer.ReceiveCard(gameDeck->GiveCardToPlayer());
    }
     // This shown the cards and show who wins the game
   if (!gameDeck -> CardDeckIsEmpty()) {

       ShowTables();
       AnnounceWinner();
       clearGame();
   }
 }
// This show players and cards
void::Game::ShowTables() {

    cout << string(50, '\n');
    cout << " ------------------------------------------------- " << endl;
    cout << " ------------------------------------------------- " << endl;
    cout << " ---------Welcome to play Blacjack Game -----------" << endl;
    cout << " -------------------------------------------------  " << endl;
    cout << " -------------------------------------------------  " << endl;
    cout << " ------------I hope you win!!--------------------- " << endl;
     cout << " --------------------------------------------------  " << endl <<endl;

    cout << left <<  dealer.getPlayerName() << dealer << endl;
     cout << left <<  player1.getPlayerName() << player1 << endl;
}
// this show who won the game
void Game::AnnounceWinner() {
    cout << endl;
    if (player1.getCardTotal() > 21)
        cout << player1.getPlayerName() << " lose! Bad luck! Dealer Wins." << endl;
    else if (dealer.getCardTotal() > 21)
        cout << dealer.getPlayerName() << " lose, " << player1.getPlayerName() << " Wins! Nice!" << endl;
    else if (player1.getCardTotal() == 21)
        cout << player1.getPlayerName() << " hit a BlackJack, Wow! " << player1.getPlayerName() << " Wins!" << endl;
    else if (dealer.getCardTotal() == 21)
        cout << dealer.getPlayerName() << " hit a BlackJack! " << player1.getPlayerName() << " lose. Bad luck!" << endl;
    else if (player1.getCardTotal() > dealer.getCardTotal())
        cout << player1.getPlayerName() << " Wins! Nice!" << endl;
    else if (dealer.getCardTotal() > player1.getCardTotal())
        cout << dealer.getPlayerName() << " Wins. Bad luck!" << endl;
    else
        cout << "It's a tie!" << endl;
}

// This  check if deck is empty and creates a new deck
void Game::IfDeckIsEmpty() {
    delete gameDeck;
    gameDeck = new CardDeck(0);
}

// This reset game
void Game::clearGame() {
    dealer.clear();
    player1.clear();
}



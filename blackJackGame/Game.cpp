#include "Game.h"
#include<iostream>
#include<string>
#include <Deck.h>
#include <player.h>


using namespace std;
Game::Game(string s ): name(s) {

    gameDeck = new CardDeck(0);
    player1.setPlayerName(name);

}

Game:: ~ Game() {

    delete gameDeck;
}

void Game:: play() {

    if (gameDeck -> CardDeckIsEmpty()) {

        IfDeckIsEmpty();
    }
    else {

      for(int i = 0; i < 2; i++) {

          player1.ReceiveCard(gameDeck ->GiveCardToPlayer());
          dealer.ReceiveCard(gameDeck -> GiveCardToPlayer());
      }

      dealer.FlipDealerFirstCard();

      ShowTable();
    }
    while (!player1.isBusted() && player1.isHitting()){

        if (gameDeck -> CardDeckIsEmpty()) {

            IfDeckIsEmpty();
        }
        else {
            player1.ReceiveCard(gameDeck -> GiveCardToPlayer());
            ShowTable();
        }
    }

    dealer.FlipDealerFirstCard();

    while (!dealer.isBusted() && dealer.isHitting()) {

        if(gameDeck ->CardDeckIsEmpty()) {

            IfDeckIsEmpty();
        }

        dealer.ReceiveCard(gameDeck->GiveCardToPlayer());
    }

   if (!gameDeck -> CardDeckIsEmpty()) {

       ShowTable();
       AnnounceWinner();
       clearGame();
   }
 }

void::Game::ShowTable() {

    cout << string(50, '\n');
    cout << "\t Welcome to play Blacjack Game " << endl <<endl;

    cout << left <<  dealer.getPlayerName() << dealer << endl;
     cout << left <<  player1.getPlayerName() << player1 << endl;
}

void Game::AnnounceWinner() {
    cout << endl;
    if (player1.getCardTotal() > 21)
        cout << player1.getPlayerName() << " lose ,Dealer Wins." << endl;
    else if (dealer.getCardTotal() > 21)
        cout << dealer.getPlayerName() << " lose, " << player1.getPlayerName() << " Wins!" << endl;
    else if (player1.getCardTotal() == 21)
        cout << player1.getPlayerName() << " hit a BlackJack, " << player1.getPlayerName() << " Wins!" << endl;
    else if (dealer.getCardTotal() == 21)
        cout << dealer.getPlayerName() << " hit a BlackJack, " << player1.getPlayerName() << " lose." << endl;
    else if (player1.getCardTotal() > dealer.getCardTotal())
        cout << player1.getPlayerName() << " Wins!" << endl;
    else if (dealer.getCardTotal() > player1.getCardTotal())
        cout << dealer.getPlayerName() << " Wins." << endl;
    else
        cout << "It's a tie!" << endl;
}


void Game::IfDeckIsEmpty()
{
    delete gameDeck;
    gameDeck = new CardDeck(0);
}

// Reset the game
void Game::clearGame()
{
    dealer.clear();
    player1.clear();
}



#include <iostream>
#include "Deck.h"
#include "player.h"
#include "ctime"
#include "Game.h"
using namespace std;


int main() {

    string name;
    char ans = 'y';
    cout << "What are you name? ";
    cin >> name;

    Game *Gamess = new Game(name);

    while (ans == 'y' || ans == 'Y') {
        Gamess->playGame();
        cout << "\n Do you have play again? (y/n): ";
        cin >> ans;
    }

    delete Gamess;

    return 0;
}


 //This overloaded << operator  for use wit the player object
ostream& operator<< (ostream& os, Player aPlayer) {

    if (! aPlayer.isEmpty()){
        for (int i = aPlayer.playerHand.GetHandLastPosition(); i >= 0; i--)
            os << aPlayer.playerHand.RetrieveCard();

        if (aPlayer.getCardTotal() != 0)
            cout << "[" << aPlayer.getCardTotal() << "]";
    }
    else {
        os << "Error: Empty Hand";
    }

    return os;
}

// This overloaded << operator  for use wit the card object
ostream& operator<< (ostream& os, const Card Cardss) {

    const string RANKS1[] = {"0", " A ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ",
                            " J ", " Q " , " K "};

    if (Cardss.cardIsFaceUp) {
        os << RANKS1[Cardss.cardRank] <<  (char) Cardss.cardSuit << "\t";
    }
    else {
        os << " XX " << "\t";
    }

    return os;
}

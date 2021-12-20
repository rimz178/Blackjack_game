#include <iostream>
#include "Deck.h"
#include "player.h"
#include "ctime"
#include "Game.h"
using namespace std;


int main() {
    string name;
    char ans = 'y';
    cout << "Enter your name: ";
    cin >> name;

    Game *aGame = new Game(name);

    while (ans == 'y' || ans == 'Y')
    {
        aGame->play();
        cout << "\nPlay Again? (y/n): ";
        cin >> ans;
    }

    delete aGame;

    return 0;
}


ostream& operator<< (ostream& os, const Card aCard)
{
    const string Ranks[] = {" 0 ", "A", "2", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ",
                            " J ", " Q " , " K "};

    if (aCard.cardIsFaceUp) {
        os << Ranks[aCard.cardRank] <<  (char) aCard.cardSuit << "\t";
    }
    else {

        os << "XX" << "\t";
    }

    return os;
}

ostream& operator<< (ostream& os, Player aPlayer)
{
    if (! aPlayer.isEmpty())
    {
        for (int i = aPlayer.playerHand.GetHandLastPosition(); i >= 0; i--)
            os << aPlayer.playerHand.RetrieveCard();

        if (aPlayer.getCardTotal() != 0)
            cout << "[" << aPlayer.getCardTotal() << "]";
    }
    else
    {
        os << "Error: Empty Hand";
    }

    return os;
}

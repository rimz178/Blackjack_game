#include <iostream>
#include "Deck.h"
#include "player.h"
#include "player.h"
#include "ctime"
using namespace std;

int main() {

    srand(time(nullptr));
    Player mc;
    CardDeck deck;

    cout << "What your name?"<<endl;

    string name;
    cin >> name;

    mc.setPlayerName(name);

    cout << "Hello "<< mc.getPlayerName()<<endl;

    deck.Shuffle();

    //deck.Print();
    system("pause");
    return 0;
}

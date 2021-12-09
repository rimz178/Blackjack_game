#include <iostream>
#include "Deck.h"
using namespace std;

int main()
{
    cout << "Welcome to play BlackJack game" << endl;
    CardDeck deck;
    deck.Shuffle();
    deck.Print();
    system("pause");
    return 0;
}

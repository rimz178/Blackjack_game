#ifndef DECK_H
#define DECK_H

#include <card.h>
#include <vector>

class CardDeck {
public:
    CardDeck();
    ~CardDeck();

    void Print();
    void Shuffle();

private:
 std::vector<Card*> deck;
};

#endif // DECK_H

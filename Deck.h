#ifndef DECK_H
#define DECK_H
#include "main.h"
#include "player.h"
#include <vector>

using namespace std;

class Deck
{
    private:
    vector<Card> cards;
    
    public:
    Deck();

    void initialize();

    void shuffleDeck();

    void add(Card c);

    Card peek();

    void pop();
    
    void toString();

    void distributeCards(vector<Player> &players);

    vector<Card> getDeck();
    
};

#endif
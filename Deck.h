#ifndef DECK_H
#define DECK_H
#include "main.h"

using namespace std;

class Deck
{
    private:
    vector<Card> cards;
    
    public:
    Deck();

    void initialize();

    void shuffleDeck();

    void addToDeck(Card c);

    Card peek();

    void pop();
    
    void toString();

    void distributeCards(vector<Player> &players);

    vector<Card> getDeck();
    
};

#endif
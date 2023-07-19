#ifndef PLAYER_H
#define PLAYER_H
#include "main.h"
#include "card.h"
#include "deck.h"

using namespace std; 

class Player
{
    private:
    vector<Card> hand;
    string name;
    int turn;

    public:
    
    Player(string n, int t);

    void addToHand(Card c);

    Card peek();

    bool won();

    Card getCardAtPos(int p);
    
    list<Card> getHand();

    void handToString();
};

#endif
#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"
#include "deck.h"
#include <list>
#include <vector>

using namespace std; 

class Player
{
    private:
    vector<Card> hand;
    string name;
    int turn;

    public:
    
    Player(string n, int t)
    {
        name = n;
        turn = t;
    }

    void addToHand(Card c)
    {
        hand.push_back(c);
    }

    Card peek()
    {
        return hand[hand.size() - 1];
    }

    bool won()
    {
        if (hand.size() == 0)
        {
            return true;
        }
        return false;
    }

    Card getCardAtPos(int p)
    {
        return hand[p];
    }
    
    list<Card> getHand()
    {
        return getHand();
    }

    void handToString()
    {
        string s;
        for (int i = 0; i < hand.size(); i++)
        {
            cout << hand[i].toString();
        }
        cout << "||";
    }
};

#endif
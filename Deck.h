#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <list>
#include <vector>
#include <string>

using namespace std;

class Deck
{
    private:
    vector<Card> cards;

    public:
    void Deck::initialize()
    {
        vector<string> colors = {"R", "B", "G", "Y"};
        for (int i=0; i < 13; i++) {
                for (int j=0; j < 4; j++) {
                Card newCard(colors[j], i);
                cards.push_back(newCard);
                cards.push_back(newCard);
            }
        }
        for (int i= 13; i < 15; i++)
        {
            Card newCard("D", i);
            for (int j=0; j < 4; j++) {
                cards.push_back(newCard);
            }
        }

    };

    void shuffle()
    {
        
    };

    void Deck::toString()
    {
        for (int i = 0; i < 128; i++)
        {
            cout << cards[i].toString();
        }
    }
    
};

#endif
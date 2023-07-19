#ifndef DECK_H
#define DECK_H
#include "card.h"
#include "player.h"
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

class Deck
{
    private:
    vector<Card> cards;
    
    public:
    Deck(){

    }

    void initialize()
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
            Card newCardSP("D", i);
            for (int j=0; j < 4; j++) {
                cards.push_back(newCardSP);
            }
        }

    };

    void shuffleDeck() {
        random_device rd;
        mt19937 g(rd());
        shuffle(cards.begin(), cards.end(), g);
    }

    /*void addToDeck(Card c)
    {
        cards.push_back(c);
    }

    Card peek()
    {
        return cards[cards.size() - 1];
    }

    void pop()
    {
        cards.push_back();
    }*/
    
    void toString()
    {
        for (int i = 0; i < 112; i++)
        {
            cout << cards[i].toString();
        }
    }

    void distributeCards(vector<Player> &players)
    {
        for(int i = 0; i < players.size(); i++ )
        {
            for (int j = 0; j < 7; j++)
            {
                players[i].addToHand(cards[cards.size() - 1]);
                cards.pop_back();
            }
        }
    }

    vector<Card> getDeck()
    {
        return cards;
    }
    
};

#endif
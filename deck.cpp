#include "main.h"
#include "deck.h"
#include "card.h"
#include "player.h"

Deck::Deck(vector<Card> diffCards)
{
    cards = diffCards;
}

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
            Card newCardSP("D", i);
            for (int j=0; j < 4; j++) {
                cards.push_back(newCardSP);
            }
        }

}

void Deck::shuffleDeck() {
    random_device rd;
    mt19937 g(rd());
    shuffle(cards.begin(), cards.end(), g);
}

void Deck::add(Card c)
{
    cards.push_back(c);
}

Card Deck::peek()
{
    return cards[cards.size() - 1];
}

void Deck::pop()
{
    cards.pop_back();
}

void Deck::toString()
{
    for (int i = 0; i < cards.size(); i++)
    {
        cout << cards[i].toString();
    }
}

void Deck::distributeCards(vector<Player> &players)
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

vector<Card> Deck::getDeck()
{
    return cards;
}
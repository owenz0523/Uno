#include "main.h"
#include "player.h"
#include "card.h"
#include "deck.h"


Player::Player(string n, int t)
{
    name = n;
    turn = t;
}

void Player::addToHand(Card c)
{
    hand.push_back(c);
}

Card Player::peek()
{
    return hand[hand.size() - 1];
}

bool Player::won()
{
    if (hand.size() == 0)
    {
        return true;
    }
    return false;
}

Card Player::getCardAtPos(int p)
{
    return hand[p];
}
    
list<Card> Player::getHand()
{
    return getHand();
}

void Player::handToString()
{
    string s;
    for (int i = 0; i < hand.size(); i++)
    {
        cout << hand[i].toString();
    }
    cout << "||";
}
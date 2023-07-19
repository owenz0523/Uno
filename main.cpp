#include "main.h"
#include "card.h"
#include "deck.h"
#include "player.h"

using namespace std;



int main() {
    Deck gameDeck = Deck();
    Deck pile = Deck();
    gameDeck.initialize();
    gameDeck.shuffleDeck();
    vector<Player> players;
    vector<Player> reversePlayers;
    for (int i = 0; i < 4; i++)
    {
        Player p = Player("Player" + to_string(i + 1), i + 1);
        players.push_back(p);
    }
    gameDeck.toString();
    gameDeck.distributeCards(players);
    gameDeck.toString();
    for (int i = 0; i < 4; i++)
    {
        players[i].handToString();
    }
    /*pile.addToDeck(gameDeck.peek());
    gameDeck.pop();*/
    /*bool end = false; 
    int turn = 0;
    pile.toString();*/
    /*while (!end)
    {
        int pos;
        players[turn].handToString();
        cout << "Player" + to_string(turn + 1) + " please enter the position of the card you want to play";
        cin >> pos;
        bool played = players[turn].getCardAtPos(pos - 1).isValid(pile.peek());
        
        
        turn++;
        if (turn == 4)
        {
            turn = 0;
        }


    }*/
    return 0;
}
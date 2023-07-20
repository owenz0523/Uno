#include "main.h"
#include "card.h"
#include "deck.h"
#include "player.h"

using namespace std;



int main() {
    vector<Card> diffCards = {};
    Deck gameDeck = Deck(diffCards);
    Deck pile = Deck(diffCards);
    gameDeck.initialize();
    gameDeck.shuffleDeck();
    vector<Player> players;
    vector<Player> reversePlayers;
    for (int i = 0; i < 4; i++)
    {
        Player p = Player("Player" + to_string(i + 1), i + 1);
        players.push_back(p);
    }
    gameDeck.distributeCards(players);
    
    pile.add(gameDeck.peek());
    gameDeck.pop();
    
    pile.toString();

    return 0;
}
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
    gameDeck.toString();
    vector<Player> players;
    vector<Player> reversePlayers;
    for (int i = 0; i < 4; i++)
    {
        Player p = Player("Player" + to_string(i + 1), i + 1);
        players.push_back(p);
    }
    gameDeck.distributeCards(players);
    
    Card c = Card("G", 7);

    pile.getDeck().push_back(c);
    
    pile.toString();

    return 0;
}
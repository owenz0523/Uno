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
}
#include "main.h"
#include "card.h"
#include "deck.h"
#include "player.h"

using namespace std;



int main() {
    Deck gameDeck = Deck();
    Deck pile = Deck();
    gameDeck.Deck::initialize();
    gameDeck.Deck::shuffleDeck();
    gameDeck.Deck::toString();
}
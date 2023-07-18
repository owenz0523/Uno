#include "player.h"
#include "card.h"
#include "deck.h"
#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;



int main() {
    Deck gameDeck = Deck();
    gameDeck.initialize();
    gameDeck.toString();
    gameDeck.shuffle();
    gameDeck.toString();
    return 0;
}
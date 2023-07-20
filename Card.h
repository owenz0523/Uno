#ifndef CARD_H
#define CARD_H

#include "main.h"
#include <string>

using namespace std;
/*
10 = reverse
11 = skip
12 = +2
13 = color wheel
14 = +4
*/

class Card
{
    private:
    string color; 
    int num;
    Card* next;
    
    public: 
    Card(string col, int number);

    bool isValid(Card other);

    void activate();

    int getNum();

    string getColor();
    
    string toString();
    

};

#endif
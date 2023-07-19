#ifndef CARD_H
#define CARD_H


#include <iostream>
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
    Card(string col, int number)
    {
        color = col;
        num = number;
    }

    bool isValid(Card other)
    {
        if (color == other.getColor() || color == "D" || num == other.getNum())
        {
            return true; 
        }
        return false;
    }

    void activate()
    {
        
    }

    int getNum()
    {
        return num;
    }

    string getColor()
    {
        return color;
    }
    
    string toString()
    {
        return color + to_string(num) + " ";
    }
    

};

#endif
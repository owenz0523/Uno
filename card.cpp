#include "main.h"
#include "card.h"

Card::Card(string col, int number)
{
        color = col;
        num = number;  
}

bool Card::isValid(Card other)
{
    if (color == other.getColor() || color == "D" || num == other.getNum())
        {
            return true; 
        }
        return false;
}

int Card::getNum()
{
        return num;
}

string Card::getColor()
{
    return color;
}

string Card::toString()
{
        return color + to_string(num) + " ";
}
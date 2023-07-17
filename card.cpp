#include <iostream>;
#include <string>;

using namespace std;
/*
10 = reverse
11 = skip
12 = +2
13 = color wheel
14 = +4
*/
enum class Color
{
    Green, Red, Blue, Yellow, Black
};

enum class Number
{
    _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14
};
class Card
{
    private:
    Color color; 
    Number num;
    
    public: 
    Card(Color col, Number number)
    {
        color = col;
        num = number;
    }

    Number getNum()
    {
        return num;
    }

    Color getColor()
    {
        return color;
    }
    

};
#include "IntRange.hpp"
#include <iostream>

using namespace std;

void IntRange::Read()
{
    int x, y;
    cout << "Set the range" << endl;
    do
    {
        cout << "Left limit "; cin >> x;
        cout << "Right limit "; cin >> y;
    }
    while(!Init(x, y));
}

void IntRange::Display()
{
    cout << "The range is [" << get_first() << ";" << get_second() << ")" << endl;
}

bool IntRange::Init(int x, int y)
{
    if(x < y)
    {
        set_first(x);
        set_second(y);
        return true;
    }
    else
    {
        cout << "Wrong arguments to Init!" << endl;
        return false;
    }
}

int IntRange::rangeСheck(int number)
{
    if(first <= number && number < second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void IntRange::checkResult(int number)
{
    if(rangeСheck(number))
    {
        cout << "The number is in the range" << endl;
    }
    else{
        cout << "The number isn't in the range" << endl;
    }
}

#pragma once
#include <string>

using namespace std;

class IntRange
{
private:
    int first, second;

public:
    void Read();
    void Display();
    bool Init(int, int);
    int rangeСheck(int);
    void checkResult(int);
    int get_first() {return first;};
    int get_second() {return second;};
    void set_first(int value) {first = value; };
    void set_second(int value) {second = value; };
};


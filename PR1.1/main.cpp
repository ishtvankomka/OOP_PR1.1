#include <iostream>
#include "IntRange.hpp"
using namespace std;

IntRange makeIntRange(int x, int y)
{
    IntRange n;
    if (!n.Init(x, y))
    {
        cout << "Wrong arguments to Init!" << endl;
    }
    return n;
}

int main() {
    IntRange n1;
    int number1;
    n1.Read();
    
    n1.Display();
    cout << "Check the number "; cin >> number1;
    n1.checkResult(number1);
    
    IntRange n;
    int x, y, number2;
    cout << "Set the range" << endl;
    cout << "Left limit "; cin >> x;
    cout << "Right limit "; cin >> y;
    n = makeIntRange(x, y);

    n.Display();
    cout << "Check the number "; cin >> number2;
    n.checkResult(number2);
    
    return 0;
}

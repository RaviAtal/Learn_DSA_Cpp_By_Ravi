// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 == x2 && y1 == y2 && x3 == x2 && y3 == y2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
#include <iostream>
using namespace std;

int length, width;

void input()
{
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Width : ";
    cin >> width;
}

int rectangleArea(int a , int b)
{
    return a * b;
}
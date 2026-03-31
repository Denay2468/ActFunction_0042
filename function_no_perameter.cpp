#include <iostream>
using namespace std;

int length, width;

void input(){
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Width : ";
    cin >> width;

}

int rectanglearea(){
    return length * width;
}

void output(){
    cout<<"Result :"<<rectanglearea;
}

int main(){
    input();
    output();

}